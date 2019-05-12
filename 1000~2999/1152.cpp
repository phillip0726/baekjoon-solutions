#include <stdio.h>
#include <string.h>

char arr[1000001];
int main() {
	int i;
	int count = 0;
	fgets(arr, 1000001, stdin);
	arr[strlen(arr) - 1] = '\0';

	for (i = 1; i <= strlen(arr); i++) {
		if (((arr[i-1] >= 'a' && arr[i-1] <= 'z') || arr[i-1] >= 'A' && arr[i-1] <= 'Z') && (arr[i] == ' ' || arr[i] == '\0')) {
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}	