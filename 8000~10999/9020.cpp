#include <stdio.h>
#include <math.h>
bool arr[10001] = { 0, 1 };
int main() {
	int n;
	int i, j;
	int num;
	int min;
	int first, second;
	scanf("%d", &n);

	for (i = 2; i <= 10000; i++) {
		for (j = 2; i*j <= 10000; j++) {
			arr[i*j] = 1;
		}
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		min = 10000;
		for (j = 2; j < num - 1; j++) {
			if (!arr[j] && !arr[num - j]) {
				if (min > abs(num - j - j)) {
					first = j;
					second = num - j;
					min = num - j - j;
				}

			}
		}
		printf("%d %d\n", first, second);
	}
	return 0;
}