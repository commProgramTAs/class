#include <stdio.h>
#include <stdlib.h>

int main() {

	while (1) {
        char cname[10];
		printf("Lab2 examples: ");
		scanf("%s", cname);
		char eat;
		scanf("%c", &eat);

		if (!strcmp(cname, "print")) {
			print();
		}
		else if (!strcmp(cname, "data_type")) {
			data_type();
		}
		else if (!strcmp(cname, "data_size")) {
			data_size();
		}
		else if (!strcmp(cname, "operator")) {
			operator();
		}
		else if (!strcmp(cname, "overflow")) {
			overflow();
		}
		else if (!strcmp(cname, "judgement")) {
			judge();
		}
		else if (!strcmp(cname, "example")) {
			example();
		}
		else if (!strcmp(cname, "word_tran")) {
			word_tran();
		}
		else if (!strcmp(cname, "hw2a")) {
			hw2a();
		}
		else if (!strcmp(cname, "exit")) {
			break;
		}
		else {}

		printf("\n");
	}

	system("pause");

	return   0;
}
