#include <stdio.h>

int main() {
	int m, n;
	bool prime;
	int sum = 0;
	int min;
	int i, j;
	scanf("%d %d", &m, &n);
	if (m == 1) {
		m = 2;
	}
	for (i = m; i <= n; i++) {
		prime = true;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime) {
			sum += i;
			min = i;
			i++;
			break;
		}
	}
	for (; i <= n; i++) {
		prime = true;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime) {
			sum += i;
		}
	}
	if (sum == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n%d\n", sum, min);
	}
	return 0;
}