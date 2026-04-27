#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm,xy,w,z,i;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 for(i=100;i<200;i++)
 {
  delay(10);
  cleardevice();
  line(10,300,getmaxx(),300);
  rectangle(10,80,50,180);
  line(30,180,30,297);

  setfillstyle(2,RED);
  circle(30,100,10);
  floodfill(30,100,WHITE);

  setfillstyle(2,YELLOW);
  circle(30,100,10);
  floodfill(30,130,WHITE);

  setfillstyle(2,GREEN);
  circle(30,160,10);
  floodfill(30,160,WHITE);

 //first car
  rectangle(400,200,600,250);
  rectangle(480,250,510,230);
 //window of car
  line(420,200,460,160);
  line(460,160,540,160);
  line(540,160,580,200);
  circle(450,250,20);
  circle(450,250,10);
  circle(550,250,20);

 //second car
  rectangle(400-i,200,600-i,250);
  rectangle(480-i,210,510-i,230);
 //window of car
  line(460-i,200,460-i,160);
  line(460-i,160,540-i,160);
  line(540-i,160,580-i,200);
  circle(450-i,250,20);//wheel of car
  circle(450-i,250,10);
  circle(550-i,250,10);
  circle(550-i,250,20);

 //accident scene
  circle(400,170,50);
  outtextxy(370,90,"ACCIDENT");
 }
 printf("\n\nPratham - 00113702022");
 getch();
 closegraph();
}