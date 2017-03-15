#include <stdio.h>
#include <stdlib.h>

int hw2a() {
	double x, y, result;
	printf("Enter two numbers: ");
	scanf("%lf %lf", &x, &y);
	result = x + y;
	printf("%.0lf", result);

	return 0;
}
