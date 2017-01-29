#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

void convert(int input, int n) {

	int div = input % n;
	if (input / n == 0) {
		if (div >= 10) {
			cout << ((char) (div - 10 + 'A'));
		} else {
			cout << (char) (div + '0');
		}
		return;
	}

	convert(input / n, n);
	if (div >= 10) {
		cout << ((char) (div - 10 + 'A'));
	} else {
		cout << (char) (div + '0');
	}
}

int main() {

	long long input, n;

	cin >> input >> n;
	convert(input, n);
	return 0;

}
