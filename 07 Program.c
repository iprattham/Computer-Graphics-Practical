#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
  //Date : 9-9-24
  int gd = DETECT, gm;
  int x1,x2,y1,y2,length,dx,dy,x,y,i;
  clrscr();

  printf("\nEnter x1 and y1 coordinates: ");
  scanf("%d%d",&x1,&y1);
  printf("\nEnter x2 and y2 coordinates: ");
  scanf("%d%d",&x2,&y2);

  initgraph(&gd, &gm, "c:\\turbo3\\bgi");
  outtextxy(30,30,"Pratham - 00113702022");
  outtextxy(30,45,"Program to scan convert a line using DDA algorithm");

  if(abs(x2-x1)>=abs(y2-y1))
  {
   length = abs(x2-x1);
  }
  else
  {
   length = abs(y2-y1);
  }

  dx = (x2-x1)/length;
  dy = (y2-y1)/length;

  x = x1+0.5;
  y = y1+0.5;
  i = 1;

  while(i<=length)
  {
   putpixel(x,y,2);
   x = x+dx;
   y = y+dy;
   i = i+1;
  }

getch();
closegraph();
}