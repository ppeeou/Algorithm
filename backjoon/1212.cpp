#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

string eight[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
int main() {

	string s;

	cin >> s;

	int n = s.size();

	for (int i = 0; i < n; i++) {
		int num = (int) (s[i] - '0');
		if (i == 0) {
			if (num > 4)
				cout << eight[num];
			else {
				if (num == 3)
					cout << "11";
				else if (num == 2)
					cout << "10";
				else if (num == 1)
					cout << "1";
			}
		} else {
			cout << eight[num];
		}
	}

	return 0;

}
