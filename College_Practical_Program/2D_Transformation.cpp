#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int x1, y1, x, y, type_trans;

void trans_fn()
	{
	    int tx, ty; 
		printf("Enter the transition distance: ");
		scanf("%d%d", &tx, &ty);
		
	   x = 	tx + x1;
	   y = ty + y1;
	   
	   putpixel(x, y, RED);
	   printf("new point is: (%d %d)", x, y);
	   
	}

int main()
{
	
	
	printf("Enter the coordinates of the vertices of 2D imahe: ")                                                                                                                                                                             ;
	scanf("d%d", &x1, y1);
	//0scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &x4, &x5, &x6, &x7, &x8);
	
	printf("\n----------- MENU ------------\n");
	printf("\n1. Translation");
	printf("\n2. Scaling");
	printf("\n3. Rotation"); 
	
	printf("\nSelect type of transformation to be performed: ");
	scanf("%d", &type_trans);
	
	// translation
	
	
	initwindow(640, 400);
	trans_fn();
	
	printf("Program end.");
	getch();
	closegraph();
	return 0;
}
