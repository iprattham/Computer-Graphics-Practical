#include<stdio.h> 
#include<conio.h> 
#include<dos.h> 
#include<graphics.h> 
void main()
{ 
    int gd=DETECT,gm,x,y,w,z; 
    initgraph(&gd,&gm,"C:\\TURBOC3\\BIN"); 

    line(10,180,getmaxx()/2-100,180); 
    line(getmaxx()/2+100,180,getmaxx(),180); 

    line(10,330,getmaxx()/2-100,330); 
    line(getmaxx()/2+100,330,getmaxx(),330); 
    line(getmaxx()/2-100,180,getmaxx()/2-100,10); 
    line(getmaxx()/2+100,180,getmaxx()/2-100,10); 
    line(getmaxx()/2-100,330,getmaxx()/2-100,580); 
    line(getmaxx()/2+100,330,getmaxx()/2-100,580); 

    line(10,330,getmaxx()/2-100,330); 
    line(getmaxx()/2+100,330,getmaxx(),330); 
    line(getmaxx()/2-100,180,getmaxx()/2-100,10); 
    line(getmaxx()/2+100,180,getmaxx()/2+100,10); 
    line(getmaxx()/2-100,330,getmaxx()/2-100,580); 
    line(getmaxx()/2+100,330,getmaxx()/2+100,580); 

    rectangle(10,240,100,270); 
    rectangle(140,240,240,270); 
    rectangle(380,240,480,270); 
    rectangle(520,240,620,270); 
    rectangle(280,10,320,100); 
    rectangle(280,120,320,210); 
    rectangle(280,290,320,390); 
    rectangle(280,410,320,490); 

    line(360,60,360,220); 
    line(360,60,400,60); 
    line(400,60,400,220); 
    line(360,100,400,100); 
    line(360,140,400,140); 
    line(360,180,400,180); 

    setfillstyle(1,RED); 
    circle(380,80,10); 
    floodfill(380,80,WHITE); 

    setfillstyle(1,YELLOW);
    circle(380,120,10); 
    floodfill(380,120,WHITE); 

    setfillstyle(1,GREEN); 
    circle(380,160,10); 
    floodfill(380,160,WHITE); 

    line(getmaxx()/2-20,getmaxy()/2-20,getmaxx()/2+50,getmaxy()/2-20); 
    line(getmaxx()/2+50,getmaxy()/2-20,getmaxx()/2+50,getmaxy()/2+20); 
    line(getmaxx()/2+50,getmaxy()/2+20,getmaxx()/2-40,getmaxy()/2+20); 
    line(getmaxx()/2-20,getmaxy()/2-20,getmaxx()/2-40,getmaxy()/2); 
    line(getmaxx()/2-40,getmaxy()/2,getmaxx()/2-40,getmaxy()/2+20); 
    line(getmaxx()/2-20,getmaxy()/2-20,getmaxx()/2-20,getmaxy()/2+20); 
    line(getmaxx()/220,getmaxy()/2,getmaxx()/2+50,getmaxy()/2); 

    circle(getmaxx()/2-20,getmaxy()/2+20,10); 
    circle(getmaxx()/2+30,getmaxy()/2+20,10); 
    
getch(); 
closegraph(); 
}