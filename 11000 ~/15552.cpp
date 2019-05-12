#include <iostream>

using namespace std;

int N;
int sum = 0;
int main() {
	int i;
	int a, b;
	scanf("%d", &N);
	
	for (i = N; i > 0; i--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}