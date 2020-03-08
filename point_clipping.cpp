#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"POINT CLIPPING");

    int xmin,xmax,ymin,ymax;
    int px,py;
    printf("Co-ordinates of the rectangle :");
    cin>>xmin>>ymin>>xmax>>ymax;
    setcolor(MAGENTA);
    rectangle(xmin,ymin,xmax,ymax);
    int T;
    printf("TestCase :");
    cin>>T;
    for(int t=0; t<T; t++)
    {
        printf("\nCo-ordinates of the Point(x,y) :");
        cin>>px>>py;
        printf("Case %d : ",t+1);
        if((px>=xmin && px<=xmax) && (py>=ymin &&py<=ymax))
        {
            cout<<"Point is inside"<<endl;
        }
        else
        {
            cout<<"Point is outside"<<endl;
        }
    }



    getch();
    closegraph();

    return 0;
}
