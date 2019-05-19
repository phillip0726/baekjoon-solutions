#include <stdio.h>

int arr[1000000];
int tmp[1000000];
int n;
void conq(int left, int middle, int right) {
	int i = left;		//tmp ²¨
	int j = middle + 1;
	int k = left;		//arr²¨
	while (1) {
		if (k > middle || j > right) {
			break;
		}
		if (arr[k] < arr[j]) {
			tmp[i] = arr[k];
			i++;
			k++;
		}
		else {
			tmp[i] = arr[j];
			i++;
			j++;
		}
	}
	if (k <= middle) {
		for (; k <= middle; k++) {
			tmp[i] = arr[k];
			i++;
		}
	}
	if(j <= right) {
		for (; j <= right; j++) {
			tmp[i] = arr[j];
			i++;
		}
	}
	for (i = left; i <= right; i++) {
		arr[i] = tmp[i];
	}
	return;
}
void divide(int left, int right) {
	int mid;
	if (left >= right)
		return;
	mid = (left + right) / 2;
	divide(left, mid);
	divide(mid + 1, right);
	conq(left, mid, right);
}
void merge() {
	divide(0, n - 1);
}
int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	merge();
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}