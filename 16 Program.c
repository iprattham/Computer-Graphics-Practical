#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
 int gd=DETECT,gm;
 int x1, y1, x2, y2, a;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 printf("Pratham - 00113702022");
 printf("\nGiven triangle is: ");
 line(340,0,340,520);
 line(0,240,640,240);
 line(150,100,100,200);
 line(100,200,200,200);
 line(200,200,150,100);
 printf("\nEnter 1 for reflection of triangle to x-axis: ");
 printf("\nEnter 2 for reflection of triangle to y-axis: ");
 printf("\nEnter choice: ");
 scanf("%d",&a); if(a==1)
 {
  line(150+350,100,100+350,200);
  line(100+350,200,550,200);
  line(550+350,100,100+350,200);
 }
 else if(a==2)
 {
  line(100,50+250,50,400);
  line(50,400,150,400);
  line(150,400,100,50+250);
 }
 else
 printf("\nWrong Input!");
 getch();
 closegraph();
}