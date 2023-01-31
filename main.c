
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.141592

int main()
{
	 float x, y, r, theta;
	 clrscr();
	 printf("Enter cartesian coordinate x: ");
	 scanf("%f", &x);
	 printf("Enter cartesian coordinate y: ");
	 scanf("%f", &y);
	
	
	 /* Calculating r */
	 r = sqrt(x*x + y*y);
	
	 /* Calculating theta in radian */
	 theta = atan(y/x);
	
	 /* Converting theta from degree to radian */
	 theta = 180.0 * theta/ PI;
	
	 printf("Polar coordinate is: r = %0.2f and theta = %0.2f in degree", r, theta);
	 getch(); /* Holds Screen */
	 
	 return(0);
}
