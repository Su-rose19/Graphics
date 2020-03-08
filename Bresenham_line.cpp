#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void BRESENHAM(int x1,int y1,int xn,int yn)
{
    int dx,dy,di,dt,ds,d,x,y;
    dx = xn - x1;
    dy = yn - y1;
    x = x1;
    y = y1;

    di = 2*dy - dx;
    dt = 2*dy;
    ds = 2*dy - 2*dx;
    while(x<xn)
    {
        if(di<0)
        {
            putpixel(x,y,MAGENTA);
            d+=dt;
        }
        else{
            putpixel(x,y,MAGENTA);
            y++;
            d+=ds;
        }
        x++;
    }

}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"BRESENHAM's LINE ALGORITHM");

    int x1,y1,xn,yn;
    cout<<"Enter (X1,Y1) : ";
    cin>>x1>>y1;
    cout<<"Enter (Xn,Yn) : ";
    cin>>xn>>yn;
    BRESENHAM(x1,y1,xn,yn);

    getch();
    closegraph();
    return 0;
}

