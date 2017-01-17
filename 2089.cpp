#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

void minusTwo(int n) {

	if (n == 0) {
		return;
	}
	int next = n % 2;
	if (next == 0) {
		minusTwo((-n) / 2);
		printf("0");
	} else {
		if (next > 0) {
			minusTwo((-n) / 2);
		} else {
			minusTwo((-n + 1) / 2);
		}
		printf("1");
	}
}

int main() {

	int n;
	scanf("%d", &n);

	if (n == 0)
		cout << 0;
	else
		minusTwo(n);

	return 0;

}
