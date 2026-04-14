#include<graphics.h>
#include<conio.h>
void main()
{

  int gd = DETECT,gm;
  initgraph(&gd, &gm, "c:\\turboc3\\bgi");

  outtextxy(200,100,"Pie Chart");
  setfillstyle(SOLID_FILL,1);
  pieslice(100,100,0,70,75);

  setfillstyle(XHATCH_FILL,2);
  pieslice(100,100,70,150,75);

  setfillstyle(HATCH_FILL,12);
  pieslice(100,100,150,250,75);

  setfillstyle(WIDE_DOT_FILL,9);
  pieslice(100,100,250,300,75);

  setfillstyle(INTERLEAVE_FILL,6);
  pieslice(100,100,290,360,75);

  outtextxy(20,10,"Pratham - 00113702022");

getch();
closegraph();
}