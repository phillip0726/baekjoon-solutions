#include <stdio.h>
#include <string.h>

char arr[101];
int brr[26];
int main() {
	int i, j;
	char c = 'a';
	scanf("%s", arr);
	for (i = 0; i < 26; i++) {
		brr[i] = -1;
	}
	for (i = 0; i < 26; i++) {
		for (j = 0; j < strlen(arr); j++) {
			if (arr[j] == c) {
				brr[i] = j;
				break;
			}
		}
		c += 1;
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", brr[i]);
	}
	return 0;
}