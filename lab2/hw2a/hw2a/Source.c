#include <stdio.h>
#include <stdlib.h>

int main(){
	char operate;
	double a, b, c;


	fflush(stdin);
	printf("輸入運算子: ");
	scanf("%c", &operate);
	printf("輸入兩個運算元: ");
	scanf("%lf %lf", &a, &b);
	if (operate == '+') {
		printf("%.lf", a + b);
	}
	else if (operate == '-') {
		printf("%.lf", a - b);
	}
	else if (operate == '*') {
		printf("%.lf", a * b);
	}
	else if (operate == '/') {
		printf("%.lf", a / b - 0.5);
	}
	else if (operate == '%') {
		a = a - (b * (a / b - 0.5));
		printf("%.lf", a + 0.5);
	}
	printf("\n");

	return main();
}