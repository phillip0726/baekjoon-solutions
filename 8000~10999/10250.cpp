#include <stdio.h>

int T;
int H, W, N;
int main() {
	int i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		printf("%d%02d\n", (N - 1) % H + 1, (N - 1) / H + 1);
	}
	return 0;
}