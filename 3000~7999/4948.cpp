#include <stdio.h>

bool arr[300000] = { 0, 1 };
int main() {
	int n;
	int count;
	int i, j;
	for (i = 2; i <= 300000; i++) {
		for (j = 2; i*j <= 300000; j++) {
			arr[i*j] = 1;
		}
	}
	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		count = 0;
		for (i = n + 1; i <= 2 * n; i++) {
			if (!arr[i]) count++;
		}

		printf("%d\n", count);
	}
	return 0;
}