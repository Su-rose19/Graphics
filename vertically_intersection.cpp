#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"Vertical Intersection");

    int xmin,xmax,ymin,ymax;
    int x1,x2,y1,y2;
    printf("Co-ordinates of the rectangle :");
    cin>>xmin>>ymin>>xmax>>ymax;
    setcolor(MAGENTA);
    rectangle(xmin,ymin,xmax,ymax);
    printf("Co-ordinates of the line :");
    cin>>x1>>y1>>x2>>y2;
    setcolor(GREEN);
    line(x1,y1,x2,y2);

    if(x1==x2 && (x1>=xmin && x1<=xmax) && (x2>=xmin && x2<=xmax))
    {
        printf("YES,Vertically intersected\n");
    }
    else
    {
        printf("NO,Vertically not intersected\n");
    }

    getch();
    closegraph();

    return 0;
}
