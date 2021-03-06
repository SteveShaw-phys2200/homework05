/*
 * Hw05 calculates perimeter of trangle
 *      using code from class/downloadlink
 */
 
#include <stdio.h>
#include "geom.h"
double distance(struct point2d u, struct point2d v);
double perimeter(struct triangle t)
{   
	double distanceAB, distanceBC, distanceAC;
     
	// calculate each side leangth
    distanceAB = distance(t.a, t.b);
    printf("distanceAB = %.2f\n", distanceAB);
	 
	distanceBC = distance(t.b, t.c);
    printf("distanceBC = %.2f\n", distanceBC);
     
	distanceAC = distance(t.a, t.c);
    printf("distanceAC = %.2f\n", distanceAC);

	return distanceAB + distanceBC + distanceAC;  
	
}
