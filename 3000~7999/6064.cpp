#include <stdio.h>

int k;
int m, n, x, y;
int gcd(int a, int b) {
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int main() {
	int i;
	int max;
	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		scanf("%d %d %d %d", &m, &n, &x, &y);
		max = lcm(m, n);
		while (1) {
			if (x > max || (x - 1) % n + 1 == y) {
				break;
			}
			x += m;
		}
		if (x > max)
			printf("-1\n");
		else
			printf("%d\n", x);
	}
	return 0;
}