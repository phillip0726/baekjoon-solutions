#include <stdio.h>

bool arr[1000001] = { 0, 1 };
int main() {
	int m, n;
	int i, j;

	scanf("%d %d", &m, &n);
	for (i = 2; i < n; i++) {
		for (j = 2; i*j <= n; j++) {
			arr[i*j] = 1;
		}
	}
	for (i = m; i <= n; i++) {
		if (!arr[i]) {
			printf("%d\n", i);
		}
	}
	return 0;
}