#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
#include&lt;dos.h&gt;
#include&lt;graphics.h&gt;
void main()
{
 int gd = DETECT, gm, x, y, w, z, i;
 initgraph(&amp;gd, &amp;gm,&quot;C:\\TURBOC3\\BGI&quot;);
 for (i=100;i&lt;=500;i++)
 {
  delay(20);
  cleardevice();
  line(300+i,100,130+i,100);
  line(300+i,100,350+i,150);
  line(350+i,150,100+i,150);
  line(100+i,150,80+i,80);
  line(80+i,80,130+i,100);
  circle(110+i,110,10);
  circle(150+i,150,10);
  floodfill(110+i,110,WHITE);
  rectangle(150+i,110,180+i,130);
  rectangle(200+i,110,230+i,130);
  rectangle(250+i,110,280+i,130);
  setfillstyle(1,YELLOW);
  circle(250+i,150,10);
  floodfill(250+i,150,WHITE);
 }
getch();
closegraph();
}