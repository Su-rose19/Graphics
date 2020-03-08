#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void DDA(int x1,int y1,int xn,int yn)
{
    int m,dx,dy;
    m = (yn - y1)/(xn - x1);
    for(int i=x1;i<xn;i++)
    {
        if(m<1)
        {
            dx = 1;
            dy = m * dx;
        }
        else{
            dy = 1;
            dx = dy / m;
        }
        x1 += dx;
        y1 += dy;
        putpixel(x1,y1,YELLOW);
        delay(5);
    }

}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"DDA LINE ALGORITHM");

    int x1,y1,xn,yn;
    cout<<"Enter (X1,Y1) : ";
    cin>>x1>>y1;
    cout<<"Enter (Xn,Yn) : ";
    cin>>xn>>yn;
    DDA(x1,y1,xn,yn);

    getch();
    closegraph();
    return 0;
}
