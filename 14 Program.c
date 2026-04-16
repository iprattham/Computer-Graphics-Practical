#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd=DETECT,gm;
	int x1, y1, x2, y2, a;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("Pratham - 00113702022");
	printf("\nEnter the line coordinates: ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	line(x1,y1,x2,y2);
	line(330,0,330,500);
	line(0,250,640,250);
	printf("\nEnter 1 for reflection of line wrt x-axis");
	printf("\nEnter 2 for reflection of line wrt x-axis");
	printf("\nEnter Choice: ");
	scanf("%d",&a);
	if(a==1)
	{
		line(x1+280,y1,x2+280,y2);
	}
	else if(a==2)
	{
		line(x1,y1+280,x2,y2+280);
	}
	else
	{
		printf("\nWrong Input!");
	}
	getch();
	closegraph();
}