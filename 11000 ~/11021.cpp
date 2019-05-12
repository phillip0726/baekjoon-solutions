#include <iostream>

using namespace std;

int main() {
	int a, b;
	int t, i;
	cin >> t;
	for (i = 1; i <= t; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << endl;
	}
	return 0;
}