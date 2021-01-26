#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<math.h>
#include<graphics.h>
#define round(a)((int)(a+0.5))
void dda_line(int x1, int y1, int x2, int y2){
int dx = (x2 - x1); int dy = (y2 - y1);
int length;
if(abs(dy) > abs(dx))
	length = abs(dy);
else
	length = abs(dx);
float xinc, yinc, x = x1, y = y1;
xinc = dx/(float)length;
yinc = dy/(float)length;
putpixel(round(x), round(y), 15);
for(int k=1; k<=length; k++){
	x += xinc;
	y += yinc;
	putpixel(round(x), round(y), 15);
	delay(100);
}
}
void main(){
clrscr();
int x1, y1, x2, y2;
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");
cout<<"Enter x1 and y1: ";
cin>>x1>>y1;
cout<<"Enter x2 and y2: ";
cin>>x2>>y2;
dda_line(x1, y1, x2, y2);
getch();
closegraph();
}
