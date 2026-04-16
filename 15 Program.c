#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
 int gd=DETECT,gm;
 int x, y, x1, y1, x2, y2, a;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 printf("Pratham - 00113702022");
 printf("\nEnter the line coordinates: ");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 line(x1,y1,x2,y2);
 printf("\nEnter the shearing value for x-axis: ");
 scanf("%d",&x);
 line(x1,y1,x2*x,y2);
 printf("\nEnter the shearing value for y-axis: ");
 scanf("%d",&y);
 line(x1,y1,x2,y2*y);
 getch();
 closegraph();
}