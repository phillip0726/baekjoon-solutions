#include <stdio.h>

int main() {
	int n;
	unsigned long result = 0;
	unsigned long first = 0;
	unsigned long second = 1;
	
	int i;
	
	scanf("%d", &n);
	if (n <= 1) {
		printf("%d\n", n);
	}
	else {
		for (i = 1; i < n; i++) {
			result = first + second;
			first = second;
			second = result;
		}
		printf("%ld\n", result);
	}
	return 0;
}