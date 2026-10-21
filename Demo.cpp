#include <graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");

    rectangle(100,100,500,300);

    getch();
    closegraph();

    return 0;
}
