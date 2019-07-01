#include<stdio.h>

int arr[1000000];
int main() {
	int i;
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min = arr[0], max = arr[0];
	for (i = 1; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("%d %d\n", min, max);
	return 0;
}