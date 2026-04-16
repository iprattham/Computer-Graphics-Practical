#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm;
 int x1,y1,x2,y2,a,x;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 printf("Pratham - 00113702022");
 printf("\nEnter rectangle coordinates: ");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 rectangle(x1,y1,x2,y2);
 delay(2500);
 printf("\n Enter Shearing for x-axis: ");
 scanf("%d",&a);
 rectangle(x1,y1,x2*a,y2);
 printf(" Enter Shearing for y-axis: ");
 scanf("%d",&x);
 rectangle(x1,y1,x2,y2*x);
 getch();
 closegraph();
}