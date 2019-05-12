#include <stdio.h>

int N;
int K;
int main() {
	int tmp;
	int cycle = 0;
	scanf("%d", &N);
	K = N;
	while (1) {
		tmp = 10 * (N % 10) + (N / 10 + N % 10)%10;
		cycle++;
		if (tmp == K) {
			printf("%d\n", cycle);
			break;
		}
		N = tmp;
	}
	return 0;
}