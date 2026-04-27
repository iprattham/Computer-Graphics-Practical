#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
 int gd=DETECT,gm,x,y,r;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 printf("\n\nPratham - 00113702022");
 outtextxy(290,30,"PIE CHART");
 x=getmaxx()/2;
 y=getmaxy()/2;
 setfillstyle(8,10);
 pieslice(x,y,0,60,120);
 outtextxy(440,180,"20% SAVING");

 setfillstyle(7,12);
 pieslice(x,y,60,100,120);
 outtextxy(100,200,"10% CLOTHES");

 setfillstyle(6,14);
 pieslice(x,y,100,150,120);
 outtextxy(310,95,"10% FOOD");

 setfillstyle(5,8);
 pieslice(x,y,150,190,120);
 outtextxy(145,120,"10% EDUCATION");

 setfillstyle(4,6);
 pieslice(x,y,190,220,120);
 outtextxy(400,350,"45% OTHERS");

 setfillstyle(3,4);
 pieslice(x,y,220,360,120);
 outtextxy(90,300,"5% HOUSE RENT");

 getch();
 closegraph();
}