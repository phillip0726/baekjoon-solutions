#include <stdio.h>
#include <string.h>

int T;
int R;
char arr[21];
int main() {
	int i, j, k;
	int len;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %s", &R, arr);
		len = strlen(arr);
		for (j = 0; j < len; j++) {
			for (k = 0; k < R; k++) {
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}
	return 0;
}