#include <stdio.h>

unsigned long N;

int num[10001];
int main() {
	long i;
	int j;
	scanf("%ld", &N);
	
	for (i = 1; i <= N; i++) {
		scanf("%d", &j);
		num[j]++;
	}
	for (i = 1; i < 10001; i++) {
		for (j = 0; j < num[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}