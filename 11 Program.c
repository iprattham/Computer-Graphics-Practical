#include<conio.h>
#include<graphics.h>
#include<stdio.h>

void main()
{
    int gd=DETECT, gm;
    int x,y,x1,y1,x2,y2,tx,ty;
    clrscr();
    initgraph(&gd, &gm, "");
    printf("Pratham Aggarwal - 00113702022\n");
    printf("\nEnter first coordinate of the triangle: ");
    scanf("%d%d", &x,&y);
    printf("Enter second coordinate of the traingle: ");
    scanf("%d%d", &x1,&y1);
    printf("Enter third coordinate of the traingle: ");
    scanf("%d%d", &x2,&y2);
    printf("\nTRIANGLE Before & After Translation:-\n");
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);
    printf("\nEnter the translation vector: ");
    scanf("%d%d", &tx, &ty);
    setcolor(RED);
    line(x+tx, y+ty, x1+tx,y1+ty);
    line(x1+tx, y1+ty, x2+tx,y2+ty);
    line(x2+tx, y2+ty, x+tx,y+ty);
    getch();
    closegraph();
}
