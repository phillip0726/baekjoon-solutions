#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int n;
bool comp(const string &a, const string &b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}
int main() {
	vector <string> v;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		v.push_back(str);
	}
	vector<string>::iterator iter;
	vector<string>::iterator end_iter;

	sort(v.begin(), v.end(), comp);
	end_iter = unique(v.begin(), v.end());
	for (iter = v.begin(); iter != end_iter; iter++) {
		cout << *iter << endl;
	}
	return 0;
}