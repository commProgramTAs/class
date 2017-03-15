#include <stdio.h>
#include <stdlib.h>

int example() {

	// sizeof
	printf("sizeof(char):	%d\n", sizeof(char));
	printf("sizeof(unsigned char):	%d\n", sizeof(unsigned char));
	printf("sizeof(signed char):	%d\n\n", sizeof(signed char));

	printf("sizeof(int):	%d\n", sizeof(int));
	printf("sizeof(unsigned int):	%d\n", sizeof(unsigned int));
	printf("sizeof(signed int):	%d\n\n", sizeof(signed int));

	printf("sizeof(short int):	%d\n", sizeof(short int));
	printf("sizeof(unsigned short):	%d\n", sizeof(unsigned short));
	printf("sizeof(signed short):	%d\n\n", sizeof(signed short));

	printf("sizeof(long int):	%d\n", sizeof(long int));

	printf("sizeof(float):	%d\n", sizeof(float));
	printf("sizeof(double):	%d\n\n", sizeof(double));

	printf("sizeof(unsigned long long):	%d\n", sizeof(unsigned long long));
	printf("unsigned long long Maximum :	%llu\n\n", ULLONG_MAX);

	// +, -, *, /

	// ++, --, +=, -=
	int a = 1, b = a;
	a++;
	b += 1;
	printf("a:	%d\n", a);
	printf("b:	%d\n\n", b);

	// x++, ++x
	int x = 1, y = 1;

	printf("x++:	%d\n", x++);
	printf("x:	%d\n", x);
	printf("++y:	%d\n\n", ++y);


	// unsigned char ����
	unsigned char usch = 255;

	printf("usch:	%u\n", usch);
	printf("++usch:	%u\n\n", ++usch);

	// signed char ����
	signed char sch = 127;

	printf("sch:	%d\n", sch);
	printf("++sch:	%d\n\n", ++sch);

	// enum
	enum { e1, e2, e3 };
	printf("e1: %d\n", e1);
	printf("e2: %d\n", e2);
	printf("e3: %d\n\n", e3);

	return   0;
}
