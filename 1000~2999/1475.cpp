#include <stdio.h>

int arr[10];
int main() {
	int n;
	int k;
	scanf("%d", &n);
	while (1) {

		k = n % 10;
		if (k == 9) {
			arr[6] += 1;
		}
		else {
			arr[k] += 1;
		}
		n = n / 10;
		if (n == 0) {
			break;
		}
	}
	arr[6] = (arr[6] + 1) / 2;
	for (k = 0; k < 10; k++) {
		if (n < arr[k])
			n = arr[k];
	}
	printf("%d\n", n);
	return 0;
}