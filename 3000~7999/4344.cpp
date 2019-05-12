#include <stdio.h>
#include <iostream>

using namespace std;

int C, N;
int arr[1000];
int sum;
int main() {
	int i, j;
	float avg;
	int count;
	cin >> C;
	for (i = 0; i < C; i++) {
		cin >> N;
		sum = 0;
		count = 0;
		for (j = 0; j < N; j++) {
			cin >> arr[j];
			sum += arr[j];
		}
		avg = (float)sum / N;
		for (j = 0; j < N; j++) {
			if (arr[j] > avg)
				count++;
		}
		printf("%.3f%%\n", (float)count / N * 100);

	}
}