#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 int gd=DETECT,gm,i=0,j=0,rnd_x=0,rnd_y,stop_me=0;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 srand(time());
 while(stop_me<=1000)
 {
  if(i>=180 && j>=100) //controlling the kite
  {
   rnd_x = rand()%4-3;
   rnd_y = rand()%5-4;
  }
  else
  {
   rnd_x = rand()%3;
   rnd_y = rand()%3;
  }

 line(200+i,200-j,250+i,250-j);
 line(200+i,200-j,150+i,250-j);
 line(150+i,250-j,200+i,350-j);
 line(200+i,350-j,250+i,250-j);
 line(200+i,200-j,200+i,350-j);
 arc(200+i,275-j,25,155,50);
 line(0,500,200+i,225-j);
 i=i+rnd_x;
 j=j+rnd_y;
 stop_me = 5+stop_me;
 delay(100);
 clearviewport(); //clearing the img which would make illusion of flying kite
 }
getch();
closegraph();
}