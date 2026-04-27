#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

// Draw triangle
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int color, char *label, int lx, int ly) {
    setcolor(color);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(lx, ly, label);
}

// Draw legend
void drawLegend() {
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    setcolor(YELLOW);
    outtextxy(40, 140, "Original");

    setcolor(CYAN);
    outtextxy(40, 180, "Translated");

    setcolor(GREEN);
    outtextxy(40, 220, "Rotated");

    setcolor(RED);
    outtextxy(40, 260, "Scaled");

    setcolor(MAGENTA);
    outtextxy(40, 300, "Sheared");

    setcolor(WHITE);
    outtextxy(40, 340, "Reflected");
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Title
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
    setcolor(WHITE);
    outtextxy(180, 20, "2D Composite Transformations");

    // Name
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(30, 70, "Pratham - 00113702022");

    // Legend
    drawLegend();

    // ================= ORIGINAL =================
    drawTriangle(
        200, 260,
        260, 160,
        320, 260,
        YELLOW,
        "Original",
        230, 280
    );

    // ================= TRANSLATED =================
    drawTriangle(
        380, 180,
        440, 90,
        500, 180,
        CYAN,
        "Translated",
        380, 210
    );

    // ================= ROTATED =================
    drawTriangle(
        550, 160,
        610, 80,
        660, 170,
        GREEN,
        "Rotated",
        600, 130
    );

    // ================= SCALED =================
    drawTriangle(
        600, 300,
        700, 200,
        750, 340,
        RED,
        "Scaled",
        650, 350
    );

    // ================= REFLECTED =================
    drawTriangle(
        300, 360,
        340, 260,
        400, 360,
        WHITE,
        "Reflected",
        300, 390
    );

    // ================= SHEARED =================
    drawTriangle(
        480, 350,
        560, 280,
        600, 400,
        MAGENTA,
        "Sheared",
        500, 410
    );

    // Footer
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(10, 450, "Press any key for stop");

    getch();
    closegraph();
    return 0;
}