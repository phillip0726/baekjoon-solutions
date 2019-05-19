#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int compare(const void * a, const void *b) {
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 >= num2) {
		return 1;
	}
	else {
		return -1;
	}
}
int n;
int arr[500000];
int num[8001];
int main() {
	int i;
	float sum = 0;
	int max = -1;
	int index;
	int flag;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		num[arr[i] + 4000]++;
	}
	qsort(arr, n, sizeof(int), compare);

	printf("%d\n", (int)round(sum / n));
	printf("%d\n", arr[n / 2]);

	for (i = 0; i <= 8000; i++) {
		if (num[i] != 0) {
			if (max < num[i]) {
				max = num[i];
				index = i - 4000;
				flag = true;
			}
			else if (max == num[i] && flag == true) {
				index = i - 4000;
				flag = false;
			}
		}
	}
	printf("%d\n", index);
	printf("%d\n", arr[n - 1] - arr[0]);
	return 0;
}