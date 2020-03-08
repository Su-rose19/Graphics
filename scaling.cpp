#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd = DETECT,gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"SCALING");
    int l = 100,t = 100,r = 150,b =150;
	float x = 3.0,y = 3.0;
	setcolor(YELLOW);

	rectangle(l,t,r,b);
	setcolor(MAGENTA);
	rectangle(l * x, t * y, r * x, b * y);

	getch();
	closegraph();

	return 0;
}
