#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void MIDPOINT(int xc,int yc,int r)
{
    int d,x,y;
    x = 0;
    y = r;

    d = 1 - r;
    putpixel(xc+x, yc-y, GREEN);

    while(x<=y)
    {
        x++;
        if(d<0)
        {
            d = d + (2*x) + 3;
        }
        else{
            y--;
            d = d + (2 * (x-y)) + 5;
        }
        putpixel(xc+x, yc-y, GREEN);
        putpixel(xc-x, yc-y, GREEN);
        putpixel(xc+x, yc+y, MAGENTA);
        putpixel(xc-x, yc+y, MAGENTA);
        putpixel(xc+y, yc-x, RED);
        putpixel(xc-y, yc-x, RED);
        putpixel(xc+y, yc+x, YELLOW);
        putpixel(xc-y, yc+x, YELLOW);
    }

}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"MIDPOINT CIRCLE ALGORITHM");

    int Xc,Yc,r;
    cout<<"Enter (Xc,Yc) : ";       //coordinates of center
    cin>>Xc>>Yc;
    cout<<"Enter r : ";     //radius of the circle
    cin>>r;
    MIDPOINT(Xc,Yc,r);

    getch();
    closegraph();
    return 0;
}


