#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int gd=DETECT, gm;
    int i;
    initgraph(&gd, &gm, "C:\\TurboC4\\TC\\bgi");
    printf("\nPratham - 00113702022");

    setfillstyle(1, YELLOW);
    circle(350, 30, 25);

    floodfill(330, 30, WHITE);
    line(40, 320, 100, 320);
    line(10, 370, 140, 370);
    line(40, 320, 30, 340);
    line(100, 320, 110, 340);
    line(10, 340, 140, 340);
    line(10, 340, 10, 370);
    line(140, 340, 140, 370);
    circle(35, 370, 10);
    circle(35, 370, 15);
    line(10, 385, 800, 385);
    circle(110, 370, 10);
    circle(110, 370, 15);
    line(10, 350, 800, 350);
    line(10, 450, 800, 450);
    line(600, 350, 600, 100);
    line(460, 350, 460, 100);
    line(600, 100, 460, 100);
    rectangle(550, 150, 580, 120);
    rectangle(480, 150, 510, 120);
    rectangle(550, 250, 580, 220);
    rectangle(480, 250, 510, 220);
    rectangle(550, 250, 580, 320);
    rectangle(480, 350, 510, 320);
    line(300, 350, 300, 200);
    line(300, 200, 460, 200);
    rectangle(300, 350, 150, 10);
    rectangle(190, 150, 250, 30);
    rectangle(190, 350, 250, 220);
    rectangle(350, 350, 420, 250);
    rectangle(480, 150, 510, 120);
    rectangle(550, 250, 580, 220);
    rectangle(480, 250, 510, 220);
    rectangle(550, 350, 580, 320);
    rectangle(480, 350, 510, 320);
   getch();
   closegraph();
}

