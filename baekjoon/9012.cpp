#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int main() {

	int n;
	cin >> n;

	while (n--) {
		vector<int> vt;
		string st;

		cin >> st;

		bool ck = false;
		for (int i = 0; i < st.size(); i++) {
			if (st[i] == '(') {
				vt.push_back(1);
			} else {
				if (vt.size() > 0) {
					vt.pop_back();
				} else {
					ck = true;
				}
			}
		}
		if (ck || vt.size() > 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;

}
