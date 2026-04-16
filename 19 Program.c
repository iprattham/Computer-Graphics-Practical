#include<graphics.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm,x,y,w,z,i;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

  for(i=0;i<=400;i++)
  {
   delay(10);
   cleardevice();

   rectangle(400-i,200,600-i,250);
   rectangle(485-i,210,495-i,215);
   line(420-i,200,460-i,160);
   line(460-i,160,540-i,160);
   line(540-i,160,580-i,200);
   line(500-i,200,500-i,160);
   line(600-i,165,580-i,200);
   circle(450-i,250,20);
   circle(550-i,250,20);
   circle(450-i,250,10);
   circle(550-i,250,10);
   }
  printf("\n\nPratham - 00113702022");
  getch();
  closegraph();
}