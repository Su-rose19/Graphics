#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void rotation(int l,int t,int r,int b,float ang)
{
    float rad_ang, x1, y1, x2, y2, x3, y3, x4, y4;
    rad_ang = ang * ( 3.14/180);
    setcolor(YELLOW);
    line(l,b,r,b);
    line(l,b,l,t);
    line(r,b,r,t);
    line(l,t,r,t);

    x1 = l*cos(rad_ang) - b*sin(rad_ang);
    y1 = l*sin(rad_ang) + b*cos(rad_ang);
    x2 = r*cos(rad_ang) - b*sin(rad_ang);
    y2 = r*sin(rad_ang) + b*cos(rad_ang);
    x3 = l*cos(rad_ang) - t*sin(rad_ang);
    y3 = l*sin(rad_ang) + t*cos(rad_ang);
    x4 = r*cos(rad_ang) - t*sin(rad_ang);
    y4 = r*sin(rad_ang) + t*cos(rad_ang);
    delay(90);
    setcolor(MAGENTA);
    line(fabs(x1),fabs(y1),fabs(x2),fabs(y2));
    line(fabs(x1),fabs(y1),fabs(x3),fabs(y3));
    line(fabs(x3),fabs(y3),fabs(x4),fabs(y4));
    line(fabs(x2),fabs(y2),fabs(x4),fabs(y4));

}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"ROTATION");


    int l,t,r,b;
    float ang;
    printf("Co-ordinates of the rectangle :");
    cin>>l>>t>>r>>b;
    printf("\nAngle to rotate :");
    cin>>ang;
    rotation(l,t,r,b,ang);
    getch();
    closegraph();

    return 0;
}
// 50 50 200 200
// 80
