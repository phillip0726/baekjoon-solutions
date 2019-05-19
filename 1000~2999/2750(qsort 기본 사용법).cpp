#include <stdio.h>
#include <algorithm>

using namespace std;
int arr[1001];
int n;

int compare(const void *a, const void *b) {
	int num1 = *(int *)a;
	int num2 = *(int *)b;
	if (num1 < num2) {
		return -1;
	}
	else
		return 1;
}
int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	qsort(arr, n, sizeof(int), compare);
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}