#include <iostream>

using namespace std;

int N;
int sum = 0;
int main() {
	int i;
	int a;
	cin >> N;
	for (i = 0; i < N; i++) {
		scanf("%1d", &a);
		sum += a;
	}
	printf("%d\n", sum);
	return 0;
}