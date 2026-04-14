#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
  int gd=DETECT,gm;
  int x1,x2,y1,y2,dx,dy,x,y,p;
  clrscr();

  printf("\n Enter x1 and y1 coordinates: ");
  scanf("%d%d",&x1,&y1);
  printf("\n Enter x2 and y2 coordinates: ");
  scanf("%d%d",&x2,&y2);

  dx=x2-x1;
  dy=y2-y1;
  p=2*(dy)-(dx);
  x=x1;
  y=y1;

  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  putpixel(x,y,2);
  while(x<=x2)
  {
    if(p<0){
    x=x+1;
    y=y;
    p=p+2*(dy);
    }
    else{
    x=x+1;
    y=y+1;
    p=p+2*(dy-dx);
    }
  putpixel(x,y,2);
  }

  outtextxy(20,10,"WAP to scan convert a line using Bresenham's algorithm.");
  outtextxy(20,30,"Pratham Aggarwal - 00113702022");

getch();
closegraph();
}