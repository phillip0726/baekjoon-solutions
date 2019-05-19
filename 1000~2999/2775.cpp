#include <stdio.h>

int T;
int k, n;
int arr[15][15];
int main() {
	int i, j;
	for (i = 1; i <= 14; i++) {
		arr[0][i] = i;
		arr[i][0] = 0;
	}
	for (i = 1; i <= 14; i++) {
		for (j = 1; j <= 14; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
	return 0;
}