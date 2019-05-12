#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if ((a % 10) > (b % 10)) {
		printf("%d%d%d\n", a % 10, (a / 10) % 10, a / 100);
	}
	else if ((a % 10) < (b % 10)) {
		printf("%d%d%d\n", b % 10, (b / 10) % 10, b / 100);
	}
	else {
		printf("%d", a % 10);
		a = a / 10; b = b / 10;
		if ((a % 10) > (b % 10)) {
			printf("%d%d\n", a % 10, a / 10);
		}
		else if ((a % 10) < (b % 10)) {
			printf("%d%d\n", b % 10, b / 10);
		}
		else {
			printf("%d", a % 10);
			a = a / 10; b = b / 10;
			if (a > b) {
				printf("%d\n", a);
			}
			else
				printf("%d\n", b);
		}
	}
	return 0;
}