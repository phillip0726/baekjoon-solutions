#include <stdio.h>
int result;
int main() {
	int n, i, j;
	bool prime;
	int num;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num == 1) {
			continue;
		}
		prime = true;
		for (j = 2; j < num; j++) {
			if (num % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime) {
			result++;
		}
	}
	printf("%d\n", result);
	return 0;
}