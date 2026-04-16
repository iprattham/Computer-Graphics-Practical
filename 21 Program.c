#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void drawCircle(int x, int y, int radius)
{
circle(x,y,radius);
delay(100);
}
int main()
{
int gd=DETECT,gm;
int x,y,radius;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
radius=50;
while(!kbhit())
{
cleardevice();
drawCircle(x,y,radius);
radius+=5;
if(x+radius>getmaxx()||y+radius>getmaxy())
{
radius=50;
}
}
closegraph();
}