#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{          clrscr();     int x1,y1,x2,y2,x3,y3,sx,sy;    int gd=DETECT,gm;    initgraph(&gd,&gm," ");
	cout<<"enter coordinates of first point :"<<endl;          cin>>x1>>y1;
	cout<<"enter coordinates of second point :"<<endl;     cin>>x2>>y2;
	cout<<"enter coordinates of third point :"<<endl;         cin>>x3>>y3;
		int p[]={x1,y1,x2,y2,x3,y3,x1,y1};   drawpoly(4,p);
		cout<<"enter the translation value sx and sy :"<<endl;   cin>>sx>>sy;
		int q[]={x1*sx,y1*sy,x2*sx,y2*sy,x3*sx,y3*sy,x1*sx,y1*sy};
		setcolor(4);   drawpoly(4,q); 
            getch(); 
            closegraph();
}
