#include <stdio.h>
#include "geom.h"

double area (struct triangle t);
double perimeter (struct triangle t);

int main(void)
{
	struct point2d a= {2.,2.};
	struct point2d b= {-2.,1.};
	struct point2d c= {0.,-3.};
	struct triangle t= {a, b, c};
	
	double p, aa, r;
	p = perimeter(t);
	aa = area(t);
	r = 2 * aa / p;
	printf("radius = %.2f\n", r);
	return 0;
}
