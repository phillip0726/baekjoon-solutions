#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Time {
public:
	int start;
	int end;
	Time(int a, int b) :start(a), end(b) {}
};
bool compare(Time a, Time b) {
	if (a.end == b.end) {
		return a.start < b.start;
	}
	else {
		return a.end < b.end;
	}
}
int main() {
	int N;
	int result = 0;
	int start;
	int end = -1;
	int i;
	int a, b;
	vector<Time> t;

	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> a >> b;
		t.push_back(Time(a, b));
	}
	sort(t.begin(),t.end(), compare);

	for (i = 0; i < N; i++) {
		if (t[i].start >= end) {
			start = t[i].start;
			end = t[i].end;
			result++;
		}
	}
	cout << result;
	return 0;
}