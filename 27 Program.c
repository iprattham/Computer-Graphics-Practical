#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<stdlib.h> 
#include<dos.h> 
#include<math.h> 
void drawtable() 
{ 
 setfillstyle(SOLID_FILL,BROWN); 
 rectangle(100,300,500,450); 
 floodfill(300,375,WHITE); 
}

void drawcoin(int cx,int cy,int radius,float angle) 
{ 
 int x=cx+radius*cos(angle); 
 int y=cy+radius*sin(angle); 
 setfillstyle(SOLID_FILL,YELLOW); 
 circle(x,y,radius); 
 floodfill(x,y,WHITE); 
} 

void main() 
{ 
 int gd=DETECT, gm; 
 int cx=300,cy=375; 
 int coinradius=20; 
 float angle=0.0; 
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI"); 
 while(!kbhit()) 
 { 
  cleardevice(); 
  drawtable(); 
  drawcoin(cx,cy,coinradius,angle); 
    delay(50); 
    angle+=0.1; 
    if(angle>2*M_PI);
    {
     angle-=2*M_PI; 
    } 
 } 
getch(); 
closegraph();
}