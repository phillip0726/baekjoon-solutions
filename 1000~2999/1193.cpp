#include <stdio.h>

unsigned int X;
int main() {
	int num = 0;
	int tmp;
	int first, second;
	int flag = 1;
	scanf("%d", &X);
	
	while (1) {
		if (X <= num * (num + 1) / 2) {
			break;
		}
		num += 1;
	}

	if (num % 2 == 0) flag = -1;
	tmp = X - (num - 1) * num / 2;
	if (flag == 1) {
		first = num - tmp + 1; second = tmp;
	}
	else {
		first = tmp; second = num - tmp + 1;
	}
	printf("%d/%d\n", first, second);
	return 0;
}