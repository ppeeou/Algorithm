#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int main() {

	int repeat = 0;

	cin >> repeat;
	while (repeat--) {
		int input;
		scanf("%d", &input);
		vector<int> vt(110);

		int sum = 0;
		for (int i = 0; i < input; i++) {
			scanf("%d", &vt[i]);
		}

		for (int i = 0; i < input - 1; i++) {
			for (int j = i + 1; j < input; j++) {
				sum += gcd(vt[i], vt[j]);
			}
		}

		printf("%d\n", sum);
	}
	return 0;

}
