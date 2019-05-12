#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr;

	while (1) {
		getline(cin, arr);
		if (arr == "")
			break;
		cout << arr << endl;
	}
	return 0;
}