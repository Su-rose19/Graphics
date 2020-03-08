#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int region_code(int x,int y,int xmin,int ymin,int xmax,int ymax)
{
    int code[4] = {0000};
    if(y>ymax){code[0] = 1;}
    if(y<ymin){code[1] = 1;}
    if(x>xmax){code[2] = 1;}
    if(x<xmin){code[3] = 1;}


    printf("Region-code of P( %d, %d) : ",x,y);
    for(int i=0;i<4;i++){
        cout<<code[i];
    }
    cout<<endl;
}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"REGION CODE");

    int xmin,xmax,ymin,ymax;
    int code[4];
    int x1,x2,y1,y2;
    printf("Co-ordinates of the rectangle :");
    cin>>xmin>>ymin>>xmax>>ymax;
    setcolor(MAGENTA);
    rectangle(xmin,ymin,xmax,ymax);
    int T;
    printf("TestCase :");
    cin>>T;
    for(int t=0; t<T; t++)
    {
    printf("Co-ordinates of the line :");
    cin>>x1>>y1>>x2>>y2;
    setcolor(GREEN);
    line(x1,y1,x2,y2);
    printf("Case %d : \n",t+1);

    region_code(x1,y1,xmin,ymin,xmax,ymax);
    region_code(x2,y2,xmin,ymin,xmax,ymax);
    }
    getch();
    closegraph();

    return 0;
}
