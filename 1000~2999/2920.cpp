#include <stdio.h>
#include <string.h>

char num[9];
char ascending[9] = "12345678";
char descending[9] = "87654321";
int main() {
	int i;
	int d;
	for (i = 0; i < 8; i++) {
		scanf("%d", &d);
		num[i] = (char)d + 48;
	}
	if (strcmp(ascending, num) == 0) {
		printf("ascending\n");
	}
	else if (strcmp(descending, num) == 0) {
		printf("descending\n");
	}
	else {
		printf("mixed\n");
	}
	return 0;
}