#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void FLOOD_FILL(int x,int y,int fc,int oc)
{
    int var = getpixel(x,y);

    if(var==oc)
    {
        putpixel(x,y,fc);

        FLOOD_FILL(x+1, y, fc, oc);
        FLOOD_FILL(x, y+1, fc, oc);
        FLOOD_FILL(x-1, y, fc, oc);
        FLOOD_FILL(x, y-1, fc, oc);

    }

}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"FLOOD FILL ALGORITHM");

    int X,Y,fc,oc;      //fc = fill_color,oc = original_color
    /*cout<<"Enter (X,Y) : ";
    cin>>X>>Y;
    cout<<"Enter Fill_color : ";
    cin>>fc;
    cout<<"Enter Original_color : ";
    cin>>oc;*/
    rectangle(50, 50, 200, 200);
    //FLOOD_FILL(X,Y,fc,oc);  //for dynamic programming
    FLOOD_FILL(55,55,11,0);

    getch();
    closegraph();
    return 0;
}



