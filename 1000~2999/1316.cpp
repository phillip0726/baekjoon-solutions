#include <iostream>
#include <string>

using namespace std;

int N;
int count2;
int num[26];
int main() {
	int i, j;
	char before;
	string arr;
	cin >> N;
	count2 = N;
	for (i = 0; i < N; i++) {
		cin >> arr;
		for (j = 0; j < 26; j++) {
			num[j] = 0;
		}
		before = arr[0];
		num[before - 'a'] = 1;
		for (j = 1; j < arr.length(); j++) {
			if (before != arr[j]){
				if (!num[arr[j] - 'a']) {
					before = arr[j];
					num[arr[j] - 'a'] = 1;
				}
				else {
					count2--;
					break;
				}
			}
		}
	}
	cout << count2 << endl;
	return 0;
}