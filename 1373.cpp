#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int main() {

	string s;

	cin >> s;

	int n = s.size();

	if (n % 3 == 1) {
		cout << (s[0] - '0') * 1;
	} else if (n % 3 == 2) {
		cout << (s[0] - '0') * 2 + (s[1] - '0');
	}

	for (int i = n % 3; i < n; i += 3) {
		cout << (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0');
	}

	cout << '\n';
	return 0;

}
