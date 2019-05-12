#include <stdio.h>

int N;
int main() {
	int i;
	int sum;
	scanf("%d", &N);

	if (N < 100) {
		printf("%d\n",N);
	}
	else {
		sum = 99;
		for (i = 100; i <= N; i++) {
			if ((i % 10 + i / 100) == 2 * ((i / 10) % 10)) {
				sum++;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}