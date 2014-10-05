/*
 * Hw05 calc radius of circle inscribed in trangle
 *      using code from class/downloadlink
 */
 
#include <stdio.h>
#include "geom.h"
 
double area(struct triangle t);
double perimeter(struct triangle t);
 
int main(void)
{
	// intialize trianlge 
    struct point2d a = {2., 2.};
    struct point2d b = {-2., 1.};
    struct point2d c = {0.,-3.};
    struct triangle t = {a, b, c};
	printf("\ntriangle: %.1f,%.1f   %.1f,%.1f   %.1f,%.1f \n\n", t.a.x ,t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);
    
    double p, aa, r;
	
	// calculate perimeter
	p = perimeter(t);
	printf("perimeter = %.2f\n\n", p);

	// calculate area
    aa = area(t);
    printf("area = %.2f\n\n", aa);

	// calculate area of inscribed circle
	r = 2 * aa / p;
	printf("radius = %.2f\n", r);
	 
    return 0;
}
