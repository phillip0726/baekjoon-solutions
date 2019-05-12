#include <stdio.h>

int N;
char arr[3072][6144];

void star(int n, int x, int y) {
	if (n == 3) {
		arr[x][y] = '*';
		arr[x + 1][y - 1] = '*';
		arr[x + 1][y + 1] = '*';
		arr[x + 2][y - 2] = '*';
		arr[x + 2][y - 1] = '*';
		arr[x + 2][y] = '*';
		arr[x + 2][y + 1] = '*';
		arr[x + 2][y + 2] = '*';
		return;
	}
	star(n / 2, x, y);
	star(n / 2, x + n / 2, y - n / 2);
	star(n / 2, x + n / 2, y + n / 2);
}

int main() {
	int i, j;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j < 2 * N; j++) {
			arr[i][j] = ' ';
		}
		arr[i][j - 1] = '\n';
	}

	star(N, 0, N-1);
	for (i = 0; i < N; i++) {
		for (j = 0; j < 2 * N; j++) {
			printf("%c", arr[i][j]);
		}
	}
	return 0;
}