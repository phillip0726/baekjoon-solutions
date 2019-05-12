#include <stdio.h>
#include <string.h>

int A, B, C;
int N;

int num[10];
int main() {
	int i;
	int index;
	scanf("%d %d %d", &A, &B, &C);
	N = A * B * C;
	
	while (1) {
		if (N == 0)
			break;
		num[N % 10]++;
		N /= 10;
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}