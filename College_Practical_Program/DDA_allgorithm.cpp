#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int x1, y1, x2, y2, step;
    float x_inc, y_inc, dx, dy;
    float x, y;
    int i;

  

    // Input two points
    printf("Enter two points (x1 y1 x2 y2): ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    printf("First point: (%d, %d)\n", x1, y1);
    printf("Second point: (%d, %d)\n", x2, y2);
    
      /* Initialize graphics window
    initwindow(680, 400); */
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\lib"); 

    // Calculate dx and dy
    dx = x2 - x1;
    dy = y2 - y1;

    // Calculate steps
    step = (fabs(dx) > fabs(dy)) ? (int)fabs(dx) : (int)fabs(dy);

    if (step == 0)
    {
        putpixel(x1, y1, BLUE);
    }
    else
    {
        // Calculate increments
        x_inc = dx / step;
        y_inc = dy / step;

        // Initialize x and y
        x = x1;
        y = y1;

        // Draw the line
        for (i = 0; i <= step; i++)
        {
            putpixel((int)round(x), (int)round(y), BLUE);

            x = x + x_inc;
            y = y + y_inc;
        }
    }

    printf("\nProgram end. Press any key to exit.");
    getch();

    closegraph();
    return 0;
}

