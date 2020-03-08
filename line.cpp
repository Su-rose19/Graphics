#include<graphics.h>
#include<stdio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    circle(200,200,100);
    bar(10,35,100,100);
    outtext("my first program");
    outtextxy(400,400,"Start Graphics");
    line(100,400,600,200);
    getch();
    closegraph();

    return 0;
}
