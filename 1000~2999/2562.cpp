#include<stdio.h>

int arr[9];
int main() {
	int i;
	int idx, max;
	scanf("%d", &arr[0]);
	max = arr[0]; idx = 0;

	for (i = 1; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
			idx = i;
		}
	}
	printf("%d\n%d\n", max, idx + 1);

	return 0;
}