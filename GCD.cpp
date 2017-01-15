//반복문
int gcd1(int a, int b) {

	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

//재귀
int gcd2(int x, int y) {
	if (y == 0) {
		return x;
	}
	return gcd(y, x % y);
}
