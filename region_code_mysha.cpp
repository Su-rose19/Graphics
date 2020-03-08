#include<bits/stdc++.h>
#include<iostream>
#include<graphics.h>
using namespace std;
int b[100],b1[100];
int point(int xmin,int ymax,int xmax,int ymin,int x,int y)
{
    b[0]=y-ymax;
    b[1]=ymin-y;
    b[2]=x-xmax;
    b[3]=xmin-x;
    for(int i=0;i<=3;i++)
    {
        if(b[i]<0)
        {
            b1[i]=0;
        }
        else
        {
            b1[i]=1;
        }
    }
    for(int i=0;i<=3;i++)
    {
        cout<<b1[i];
    }
    /*for(int i=0;i<=3;i++)
    {
        b[i]=0;
        b1[i]=0;
    }*/
    memset(b,0,sizeof(b));
    memset(b1,0,sizeof(b1));

}
int main()
{
    int xmin,xmax,ymin,ymax,px1,py1,px2,py2;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    cout<<"Enter the value for top left coordinate(xmin,ymax) : ";
    cin>>xmin>>ymax;
    cout<<"Enter the value for bottom right coordinate(xmax,ymin) : ";
    cin>>xmax>>ymin;
    cout<<endl<<"Enter the  value for starting point of a line : ";
    cin>>px1>>py1;
    cout<<endl<<"Enter the  value for ending point of a line : ";
    cin>>px2>>py2;
    setcolor(WHITE);
    rectangle(xmin,ymin,xmax,ymax);
    line(px1,py1,px2,py2);
    cout<<"Region Code for the starting point : ";
    point(xmin,ymax,xmax,ymin,px1,py1);
     cout<<endl<<"Region Code for the ending point : ";
    point(xmin,ymax,xmax,ymin,px2,py2);
     getch();
    closegraph();
    return 0;
}


