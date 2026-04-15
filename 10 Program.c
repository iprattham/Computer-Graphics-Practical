#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define TOP    8
#define BOTTOM 4
#define RIGHT  2
#define LEFT   1

// Define the clipping window
#define X_MIN  100
#define Y_MIN  100
#define X_MAX  300
#define Y_MAX  300

// Function to compute the region code for a point
int computeCode(int x, int y) {
    int code = 0;
    if (y > Y_MAX)      code |= TOP;
    else if (y < Y_MIN) code |= BOTTOM;
    if (x > X_MAX)      code |= RIGHT;
    else if (x < X_MIN) code |= LEFT;
    return code;
}

// Function to clip the line segment using Cohen-Sutherland algorithm
int cohenSutherlandLineClip(int x1, int y1, int x2, int y2, int *x1_clipped, int *y1_clipped, int *x2_clipped, int *y2_clipped) {
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);
    int accept = 0;

    while (1) {
        if ((code1 | code2) == 0) {
            // Both points are inside
            accept = 1;
            break;
        } else if ((code1 & code2) != 0) {
            // Both points are outside in the same region
            break;
        } else {
            // Line needs to be clipped
            int x, y;
            int code_out = code1 ? code1 : code2;

            if (code_out & TOP) {
                x = x1 + (x2 - x1) * (Y_MAX - y1) / (y2 - y1);
                y = Y_MAX;
            } else if (code_out & BOTTOM) {
                x = x1 + (x2 - x1) * (Y_MIN - y1) / (y2 - y1);
                y = Y_MIN;
            } else if (code_out & RIGHT) {
                y = y1 + (y2 - y1) * (X_MAX - x1) / (x2 - x1);
                x = X_MAX;
            } else if (code_out & LEFT) {
                y = y1 + (y2 - y1) * (X_MIN - x1) / (x2 - x1);
                x = X_MIN;
            }

            if (code_out == code1) {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            } else {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }

    if (accept) {
        *x1_clipped = x1;
        *y1_clipped = y1;
        *x2_clipped = x2;
        *y2_clipped = y2;
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x1, y1, x2, y2;
    int x1_clipped, y1_clipped, x2_clipped, y2_clipped;
    int gdriver = DETECT, gmode, errorcode;

    // Initialize graphics mode
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
    errorcode = graphresult();
    if (errorcode != grOk) {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        exit(1);
    }

    // Define the clipping window
    setcolor(WHITE);
    rectangle(X_MIN, Y_MIN, X_MAX, Y_MAX);

    // Get input from the user
    printf("Enter the x-coordinate of the first point of the line: ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate of the first point of the line: ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate of the second point of the line: ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate of the second point of the line: ");
    scanf("%d", &y2);

    printf("\nPratham Aggarwal	     00113702022");


    // Draw the original line segment
    setcolor(RED);
    line(x1, y1, x2, y2);

    // Perform the clipping
    if (cohenSutherlandLineClip(x1, y1, x2, y2, &x1_clipped, &y1_clipped, &x2_clipped, &y2_clipped)) {
        // Draw the clipped line segment
        setcolor(GREEN);
        line(x1_clipped, y1_clipped, x2_clipped, y2_clipped);
    } else {
        // Line segment is completely outside
        setcolor(RED);
	outtextxy(350, 150, "Line segment is completely outside");
	outtextxy(350, 165, "the clipping window.");
    }

    // Wait for user input to close the graphics window
    getch();
    closegraph();

    return 0;
}