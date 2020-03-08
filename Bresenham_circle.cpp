#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void BRESENHAM(int xc,int yc,int r)
{
    int d,x,y;
    x = 0;
    y = r;

    d = 3 - (2*r);
    putpixel(xc+x, yc+y, GREEN);

    while(x<=y)
    {
        x++;
        if(d<0)
        {
            y = y;
            d = d + (4*x) + 6;
        }
        else{
            y--;
            d = d + (4 * (x-y)) + 10;
        }
        putpixel(xc+x, yc+y, GREEN);
        putpixel(xc-x, yc+y, GREEN);
        putpixel(xc+x, yc-y, MAGENTA);
        putpixel(xc-x, yc-y, MAGENTA);
        putpixel(xc+y, yc+x, RED);
        putpixel(xc-y, yc+x, RED);
        putpixel(xc+y, yc-x, YELLOW);
        putpixel(xc-y, yc-x, YELLOW);
        delay(10);
    }

}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"BRESENHAM's CIRCLE ALGORITHM");

    int Xc,Yc,r;
    cout<<"Enter (Xc,Yc) : ";       //coordinates of center
    cin>>Xc>>Yc;
    cout<<"Enter r : ";     //radius of the circle
    cin>>r;
    BRESENHAM(Xc,Yc,r);

    getch();
    closegraph();
    return 0;
}

