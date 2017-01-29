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
	int alpa[27];
	memset(alpa, -1, sizeof(alpa));
	cin >> st;

	for (int i = 0; i < st.size(); i++) {
		if (alpa[(int) (st[i] - 'a')] == -1) {
			alpa[(int) (st[i] - 'a')] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alpa[i] == -2) {
			cout<<-1<<" ";
		}else{
			cout<<alpa[i]<<" ";
		}
	}

	return 0;

}
