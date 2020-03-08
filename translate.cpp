#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void translate_rec(int P[][2],int T[])
{
    setcolor(GREEN);
    rectangle(P[0][0], P[0][1], P[1][0], P[1][1]);
    P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];
    setcolor(RED);
    rectangle(P[0][0], P[0][1], P[1][0], P[1][1]);
    delay(9000);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    outtextxy(200,0,"TRANSLATE");
    int p[2][2] = {50,50,300,200};
    int t[] = {30,15};
    translate_rec(p,t);

    getch();
	closegraph();
    return 0;
}
