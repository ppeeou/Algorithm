#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

long long factorial(int n){
	if(n==0){
		return 1;
	}
	return n*factorial(n-1);
}

int main() {

	int n;

	cin>>n;

	cout<<factorial(n)<<endl;

	return 0;

}
