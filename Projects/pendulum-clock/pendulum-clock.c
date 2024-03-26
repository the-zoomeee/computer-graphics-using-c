#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include "circle.h"
#include "line.h"
void rect(int x1,int y1, int x2, int y2)
{
BL(x1,y1,x2,y1);
BL(x2,y1,x2,y2);
BL(x1,y2,x2,y2);
BL(x1,y1,x1,y2);
}
void boder(int x1, int y1, int x2, int y2)
{
// Clock Outer Outline
rect(x1, y1, x2, y2);
// Clock Inner Outline
rect(x1+20, y1+20, x2-20, y2-20);
// main border color
setfillstyle(SOLID_FILL, BROWN);
floodfill(x1+10, y1+10, 15);
}
void clock(int x, int y)
{
// Clock Outline
BC(x, y, 130);
MC(x, y, 3);
}
void numbers(int x, int y)
{
// Inserting Digits
settextstyle(1, 0, 1);
outtextxy(x+65, y-98, "01");
outtextxy(x+100, y-50, "02");
outtextxy(x+115, y, "03");
outtextxy(x+100, y+50, "04");
outtextxy(x+65, y+98, "05");
outtextxy(x, y+115, "06");
outtextxy(x-65, y+98, "07");
outtextxy(x-100, y+50, "08");
outtextxy(x-115, y, "09");
outtextxy(x-100, y-50, "10");
outtextxy(x-65, y-98, "11");
outtextxy(x, y-115, "12");
}
void pendulum(int x, int y)
{
// Left Line Of Pendulum
DDA(x-5, y, x-5, y+120);
// Right Line Of Pendulum
BL(x+5, y, x+5, y+120);
// Pendulum Bob
BC(x, y+120+(20), 20);
// string color
setfillstyle(SOLID_FILL, BLACK);
floodfill(x, y+70, 15);
// bob color
setfillstyle(SOLID_FILL, BROWN);
floodfill(x, y+120+(20), 15);
}
void hands(int x, int y)
{
// Hour Hand
setcolor(BLUE);
line(x, y, x-50, y-30);
// Minute Hand
setcolor(YELLOW);
line(x, y, x, y-90);
// Seconds Hand
setcolor(RED);
line(x, y, x+50, y+110);
}
void main()
{
int gd = DETECT, gm;
int x,y;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
// screen center
x = getmaxx()/2;
y = getmaxy()/2;
// main border
boder(x-170,y-240,x+170,y+240);
// clock
clock(x,y-80);
// full clock body color
setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(x+50, y+80, 15);
// cloack numbers
numbers(x-10,y-92);
// pendulum
pendulum(x,y+50);
// clock hands
hands(x,y-80);
getch();
closegraph();
}

