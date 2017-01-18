#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int convert(int n, int m) {
	if (m == 0) {
		return 1;
	}
	return n * convert(n, m - 1);
}

int main() {

	int a, b;
	int numLength;

	cin >> a >> b >> numLength;

	long sum = 0;

	for (int i = numLength - 1; i >= 0; i--) {
		int input;
		scanf("%d", &input);
		sum += convert(a, i) * input;
	}

	vector<int> vt;

	while (sum != 0) {
		vt.push_back(sum % b);
		sum /= b;
	}
	for (int i = vt.size() - 1; i >= 0; i--) {
		printf("%d ", vt[i]);
	}
	return 0;

}
