#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int scope[1000010];
bool result[1000010];
int main() {

	int a, b;
	int cnt = 0;
	scanf("%d %d", &a, &b);

	result[0] = result[1] = true;

	for (int i = 2; i*i <= b; i++) {
		if (!result[i]) {
			scope[cnt++] = i; //소수가 들어간다.
			for (int j = i * 2; j <= b; j += i) {
				result[j] = true;
			}
		}
	}
	for (int i =a; i <= b; i++) {
		if(result[i])continue;
		printf("%d\n",i);
	}
	return 0;

}
