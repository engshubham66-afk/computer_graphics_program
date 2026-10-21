#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int xc, yc, x, y, r, pk;
	
	// input circle parameters
	
	printf("Enter coordinate of the centre of the circle (xc yc): " );
	scanf("%d%d", &xc, &yc);
	
	printf("Enter radius of the circle: r = ");
	scanf("%d", &r);
	
	// Initialize graphics window
	
	int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\lib"); 
	
	// initialize starting point (x, y) and decision parameter (pk)
	
	x = 0, y = r, pk = 1 - r;
			
    while(x <= y)
	{
		putpixel(xc + x, yc + y, RED);
		putpixel(xc - x, yc + y, RED);
		putpixel(xc + x, yc - y, RED);
		putpixel(xc - x, yc - y, RED);
				
		putpixel(xc + y, yc + x, RED);
		putpixel(xc - y, yc + x, RED);
		putpixel(xc + y, yc - x, RED);
		putpixel(xc - y, yc - x, RED);
			    
		if(pk < 0)
		{
		   pk = pk + 2*x + 3;
		}
		
		else
		{
		    pk = pk + 2*x - 2*y + 3;
		    y--;
		}
		
		x++;
	}
	
	printf("Program end.");
	getch();
	closegraph();
	return 0;
}
