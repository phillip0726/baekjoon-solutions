#include<iostream>
#include<algorithm>

using namespace std;
int main() {
	int N;
	cin >> N;
	int *arr;
	int result = 0;

	arr = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	
	for (int i = 0; i < N; i++) {
		result += arr[i] * (N - i);
	}
	cout << result;
	return 0;
}