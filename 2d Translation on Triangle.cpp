#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{          clrscr();
	int x1,y1,x2,y2,x3,y3,tx,ty;   int gd=DETECT,gm;
	initgraph(&gd,&gm," "); 
            cout<<"enter coordinates of first point :"<<endl;
	cin>>x1>>y1;
	cout<<"enter coordinates of second point :"<<endl;
	cin>>x2>>y2;
	cout<<"enter coordinates of third point :"<<endl;
	cin>>x3>>y3;
            int p[]={x1,y1,x2,y2,x3,y3,x1,y1};
	drawpoly(4,p);
	outtextxy(x1+50,y1+50,"original image");
            cout<<"enter the translation value tx and ty :"<<endl;
	cin>>tx>>ty;
            int q[]={x1+tx,y1+ty,x2+tx,y2+ty,x3+tx,y3+ty,x1+tx,y1+ty};
	setcolor(4);   drawpoly(4,q);
	outtextxy(x1+tx+50,y1+ty+50,"translated image");
            getch();
            closegraph();
}
