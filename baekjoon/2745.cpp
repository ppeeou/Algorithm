#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int mul(int input, int n) {
	if (n == 0) {
		return 1;
	}
	return input * mul(input, n - 1);
}

int main() {

	char s[100];
	int input, size = 0;
	long long sum = 0;
	scanf("%s %d", s, &input);

	//자리수
	while (s[size] != '\0') {
		size++;
	} 
	int a = 0,b=size-1;
	while (a != size) {
		if (s[a] >= 'A' && s[a] <= 'Z') {
			sum+=(s[a]-'A'+10)*mul(input,b);
		} else {
			sum+=(s[a]-'0')*mul(input,b);
		}
		a++,b--;
	}
	cout<<sum<<endl;
	return 0;

}
