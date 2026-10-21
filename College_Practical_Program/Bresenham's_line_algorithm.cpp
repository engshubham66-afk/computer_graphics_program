
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x, y, x1, y1, x2, y2;
    int pk, dx, dy, i;

    // Input two points
    printf("Enter two points (x1 y1 x2 y2): ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    
    printf("First point: (%d, %d)\n", x1, y1);
    printf("Second point: (%d, %d)\n", x2, y2);
    
    // initialize graphics mode

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\lib"); 

    // Calculate dx and dy
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    // Check supported line direction and slope
    if (x2 < x1 || y2 < y1 || dy > dx)
    {
        printf("This program supports only lines with slope from 0 to 1.\n");
        getch();
        closegraph();
        return 0;
    }

    // Initialize starting point
    x = x1;
    y = y1;

    // Initial decision parameter
    pk = 2 * dy - dx;

    // Plot starting point
    putpixel(x, y, BLUE);

    // Bresenham's line drawing algorithm
    for (i = 0; i < dx; i++)
    {
        if (pk < 0)
        {
            x = x + 1;
            pk = pk + 2 * dy;
        }
        else
        {
            x = x + 1;
            y = y + 1;
            pk = pk + 2 * dy - 2 * dx;
        }

        putpixel(x, y, BLUE);
    }

    printf("Program end. Press any key to exit.");
    getch();
    closegraph();

    return 0;
}
