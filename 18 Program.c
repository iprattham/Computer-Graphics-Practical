#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,x,y,w,z,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=100;i<=210;i++)
{
delay(10);
cleardevice();
setfillstyle(SOLID_FILL,BLUE);
circle(150,250-i,40);
line(150,290-i,150,500-i);
floodfill(150,250-i,WHITE);

setfillstyle(SOLID_FILL,RED);
circle(250,250-i,40);
line(250,290-i,250,500-i);
floodfill(250,250-i,WHITE);

setfillstyle(SOLID_FILL,GREEN);
circle(350,250-i,40);
line(350,290-i,350,500-i);
floodfill(350,250-i,WHITE);
}
printf("Pratham - 00113702022");
getch();
closegraph();
}