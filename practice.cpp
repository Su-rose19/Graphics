#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm, xmin, xmax, ymin, ymax, x, y;
    initgraph(&gd,&gm," ");

    cin>>xmin>>ymin>>xmax>>ymax;
    rectangle(xmin,ymin,xmax,ymax);
    while(cin>>x>>y)
    {
        if(x>=xmin && x<=xmax && y>=ymin && y<=ymax)
        {
            cout<<"IN"<<endl;
        }
        else
        {
            cout<<"OUT"<<endl;
        }
        putpixel(x,y,WHITE);

    }
    getch();
    closegraph();
}
