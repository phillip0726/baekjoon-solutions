#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <cstring>

using namespace std;

int n;
string arr[10001];
string fibo(int k) {
	int carry = 0;
	int i;
	int len1, len2;
	int c1, c2;
	string tmp;
	string s1 = arr[k - 2];
	string s2 = arr[k - 1];

	len1 = s1.length();
	len2 = s2.length();
	if (len1 < len2) {
		for (i = 0; i < len2 - len1; i++) {
			s1.insert(s1.begin(), '0');
		}
		len1 = len2;
	}
	else if (len2 < len1) {
		for (i = 0; i < len1 - len2; i++) {
			s2.insert(s2.begin(), '0');
		}
		len2 = len1;
	}
	
	for (i = len1 - 1; i >= 0; i--) {
		c1 = s1[i] - '0';
		c2 = s2[i] - '0';
		if (c1 + c2 + carry < 10) {
			tmp += (c1 + c2 + carry) + '0';
			carry = 0;
		}
		else {
			tmp += (c1 + c2 + carry - 10) + '0';
			carry = 1;
			if (i == 0 && carry == 1) {
				tmp += '1';
			}
		}
	}
	reverse(tmp.begin(), tmp.end());
	return tmp;
}
int main() {
	int i;
	scanf("%d", &n);
	arr[0] = '0';
	arr[1] = '1';

	for (i = 2; i <= n; i++) {
		arr[i] = fibo(i);
	}
	cout << arr[n];
	return 0;
}