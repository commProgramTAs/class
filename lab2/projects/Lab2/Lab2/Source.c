#include <stdio.h>
#include <stdlib.h>

int main() {

	while (1) {
		char cname[10];
		printf("Lab2範例程式(example、exercise、hw2a): ");
		scanf("%s", cname);
		char a;
		scanf("%c", &a); //過濾多的\n
		if (!strcmp(cname, "example")) {
			example();
		}
		else if (!strcmp(cname, "exercise")) {
			exercise();
		}
		else if (!strcmp(cname, "hw2a")) {
			hw2a();
		}
		else if(!strcmp(cname, "exit")){
			break;
		}
		else {}

		printf("\n");
	}
	system("pause");

	return   0;
}