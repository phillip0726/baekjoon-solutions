#include <stdio.h>
/*
1 (0) -> 0
2 ~ 7 (6) -> 1
8 ~ 19 (12) -> 2
20 ~ 37 (18) -> 3
38 ~ 61 (24) -> 4
...
*/
long N;
int main() {
	unsigned long count = 1;
	unsigned long sub = 6;
	scanf("%ld", &N);
	N = N - 1;
	while (1) {
		if (N <= 0) {
			printf("%ld\n", count);
			break;
		}
		N -= sub;
		sub += 6;
		count += 1;
	}
	return 0;
}