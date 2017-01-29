
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int gcm(int a, int b) {

	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}
int main() {

	int a, b;

	scanf("%d %d", &a, &b);

	int g = gcm(max(a, b), min(a, b));
	int l = g * (a / g) * (b / g);

	cout << g << endl;
	cout << l << endl;
	return 0;
}
