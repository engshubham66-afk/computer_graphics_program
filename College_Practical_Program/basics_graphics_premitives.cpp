#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\lib"); 

    // Point
    putpixel(100, 100, WHITE);

    // Line
    setcolor(GREEN);
    line(150, 100, 300, 100);

    // Polygon (Triangle)
    setcolor(RED);
	int points[] = {
        200, 200,
        300, 350,
        100, 350,
        200, 200
    };

    drawpoly(4, points);

    getch();
    closegraph();

    return 0;
}
