#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

void ROT13(string st) {

	int len = st.size();
	for (int i = 0; i < len; i++) {

		if (st[i] >= 'A' && st[i] <= 'Z') {
			//대문자
			cout<<(char)(((int)(st[i]-'A')+13)%26+'A');
		} else if (st[i] >= 'a' && st[i] <= 'z') {
			//소문자One is 1
			cout<<(char)(((int)(st[i]-'a')+13)%26+'a');
		}else{
			cout<<st[i];
		}

	}
}

int main() {

	char ch[110];

	gets(ch);

	ROT13(ch);
	return 0;

}
