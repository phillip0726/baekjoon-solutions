#include <iostream>

using namespace std;

int N;
int sum = 0;
int main() {
	int i;

	scanf("%d", &N);
	if (N >= 90 && N <= 100) {
		printf("%c\n", 'A');
	}
	else if (N >= 80 && N <= 89) {
		printf("%c\n", 'B');
	}
	else if (N >= 70 && N <= 79) {
		printf("%c\n", 'C');
	}
	else if (N >= 60 && N <= 69) {
		printf("%c\n", 'D');
	}
	else {
		printf("%c\n", 'F');
	}
	return 0;
}