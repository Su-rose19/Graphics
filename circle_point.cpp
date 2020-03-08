#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"CIRCLE & POINT");

    int x,y,r;
    int px,py;
    printf("Center of circle: ");
    cin>>x>>y;
    printf("Radius of circle: ");
    cin>>r;
    setcolor(MAGENTA);
    circle(x,y,r);
    int T;
    printf("TestCase :");
    cin>>T;
    for(int t=0; t<T; t++)
    {
        printf("\nCo-ordinates of the Point(x,y) :");
        cin>>px>>py;
        printf("Case %d : ",t+1);
        int a = (px - x);
        int b = (py - y);
        int m = a * a + b * b;
        if(m <= (r*r) )
        {
            cout<<"Point is inside"<<endl;
            setcolor(RED);
            outtextxy(100,30,"Point is inside");
        }
        else
        {
            cout<<"Point is outside"<<endl;
            setcolor(YELLOW);
            outtextxy(30,30,"Point is outside");
        }
    }



    getch();
    closegraph();

    return 0;
}
