#include <stdio.h>

int main() {
	int sum = 0;
	int score;
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &score);
		if (score < 40) {
			sum += 40;
		}
		else
			sum += score;
	}
	printf("%d\n", sum / 5);
	return 0;
}