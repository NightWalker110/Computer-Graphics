#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{          clrscr();
int gd = DETECT,gm;
initgraph(&gd, &gm, “C:/TURBOC3/BGI”);		//Graphic mode
setcolor(4);							//change colour to RED
outtextxy(130,118, “Line”);					//Print Line
line(118, 115, 201, 223);					//Draw line (x1,y1) to (x2,y2)
setcolor(WHITE);						//set colour to WHITE
outtextxy(230, 170, “Triangle”);				//Print Triangle
line(220, 180, 300, 180);					//Need three line for triangle
line(300, 180, 260, 115);
line(260, 115, 220, 180);					//Draw triangle using 3 lines
outtextxy(35, 55, “Circle”);					//Print Circle
circle(60, 60, 40);						//Draw circle using centre and radius 
getch();
closegraph();							//Close the graph
}
