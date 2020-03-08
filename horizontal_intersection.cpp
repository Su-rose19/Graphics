#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"Horizontal Intersection");

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

    if(y1==y2 && (y1>=ymin && y1<=ymax) && (y2>=ymin && y2<=ymax))
    {
        printf("YES,Horizontally intersected\n");
        setcolor(RED);
        outtextxy(300,100,"YES,Horizontally intersected");
    }
    else
    {
        printf("NO,Horizontally not intersected\n");
        setcolor(YELLOW);
        outtextxy(300,100,"NO,Horizontally not intersected");

    }

    getch();
    closegraph();

    return 0;
}
