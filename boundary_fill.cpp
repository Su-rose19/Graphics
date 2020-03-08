#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void BOUNDARY_FILL(int x,int y,int fc,int bc)
{
    int var = getpixel(x,y);

    if(var!=bc && var!=fc)
    {
        putpixel(x,y,fc);

        BOUNDARY_FILL(x+1, y, fc, bc);
        BOUNDARY_FILL(x, y+1, fc, bc);
        BOUNDARY_FILL(x-1, y, fc, bc);
        BOUNDARY_FILL(x, y-1, fc, bc);

    }

}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"BOUNDARY FILL ALGORITHM");

    int X=150,Y=150,fc,bc;      //fc = fill_color,bc = boundary_color
    /*cout<<"Enter (X,Y) : ";
    cin>>X>>Y;
    cout<<"Enter Fill_color : ";
    cin>>fc;
    cout<<"Enter Boundary_color : ";
    cin>>bc;*/
    circle(X, Y, 100);
    //BOUNDARY_FILL(X,Y,fc,bc);   //for dynamic programming
    BOUNDARY_FILL(X,Y,10,15);

    getch();
    closegraph();
    return 0;
}


