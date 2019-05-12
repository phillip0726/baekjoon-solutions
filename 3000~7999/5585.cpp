#include<iostream>

using namespace std;

int main() {
	int N;
	int count = 0;
	cin >> N;
	N = 1000 - N;

	count += N / 500;
	N = N % 500;
	count += N / 100;
	N = N % 100;
	count += N / 50;
	N = N % 50;
	count += N / 10;
	N = N % 10;
	count += N / 5;
	N = N % 5;
	count += N;
	cout << count;
	return 0;
}