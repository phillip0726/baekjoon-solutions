#include <stdio.h>
#include <string.h>

int N;
char arr[81];
int main() {
	int i, j;
	int sum;
	int O_num;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s", arr);
		sum = 0;
		O_num = 1;
		for (j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum += O_num;
				O_num++;
			}
			else {
				O_num = 1;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}