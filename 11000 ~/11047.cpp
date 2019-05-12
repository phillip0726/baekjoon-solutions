#include<iostream>

using namespace std;

int main() {
	int N, K;
	int *arr;
	int result = 0;
	cin >> N >> K;
	arr = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		cin >> arr[N - i - 1];
	}
	for (int i = 0; i < N; i++) {
		result += K / arr[i];
		K = K % arr[i];
	}
	cout << result << endl;
	return 0;
}