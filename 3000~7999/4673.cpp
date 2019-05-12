#include <stdio.h>

bool arr[10001] = { 0, };

void d(int a) {
	int tmp;
	int n = a;
	int i;
	while(1){
		tmp = n;
		while (1) {
			tmp += n % 10;
			if (n == 0)
				break;
			n = n / 10;
		}
		if (tmp > 10000) {
			break;
		}
		n = tmp;
		arr[tmp] = 1;
	}
}
int main() {
	int i;
	for (i = 1; i <= 10000; i++) {
		if (!arr[i]) {
			d(i);
		}
	}
	
	for (i = 1; i <= 10000; i++) {
		if (!arr[i]) {
			printf("%d\n", i);
		}
	}
	

	return 0;
}