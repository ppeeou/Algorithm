#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int main() {

	string st;

	cin >> st;

	vector<int> vt;
	int sum = 0;
	for (int i = 0; i < st.size(); i++) {

		if (st[i] == '(') {
			vt.push_back(i);
		} else {

			if (st[i - 1] == '(') {
				vt.pop_back();
				sum += vt.size();
			} else {
				vt.pop_back();
				sum++;
			}
		}
	}
	cout << sum << endl;

	return 0;

}
