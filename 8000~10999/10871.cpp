#include <stdio.h>

int N, X;
int main() {
	int i;
	int a;
	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a < X) {
			printf("%d ", a);
		}
	}
	return 0;
}