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
	int cursor = st.size();
	vector<char> left;
	vector<char> right;

	for (int i = 0; i < cursor; i++) {
		left.push_back(st[i]);
	}
	int n;
	cin >> n;

	while (n--) {
		char input;

		scanf(" %c", &input);

		if (input == 'P') {
			scanf(" %c", &input);
			left.push_back(input);
		} else if (input == 'L') {
			//왼쪽 이동
			if (!left.empty()) {
				input = left.back();
				right.push_back(input);
				left.pop_back();
			}
		} else if (input == 'D') {
			//오른쪽 이동
			if (!right.empty()) {
				input = right.back();
				left.push_back(input);
				right.pop_back();
			}
		} else if (input == 'B') {
			//왼쪽 문자를 삭제함
			if (!left.empty()) {
				left.pop_back();
			}
		}
	}
	for (int i = 0; i < left.size(); i++) {
		printf("%c", left[i]);
	}
	for (int i = right.size() - 1; i >=0; i--) {
		printf("%c", right[i]);
	}
	return 0;

}
