#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;


int check[4000000];


int ten(int num,int cnt){
	if(cnt==0) return 1;

	return num*ten(num,cnt-1);
}

int next(int A,int P){

	int num=0;
	while(A!=0){
		num+=ten(A%10,P);
		A/=10;
	}
	return num;
}
int len(int a,int p,int c){
	if(check[a]!=0) {
		return check[a]-1;
	}

	check[a]=c;
	int num = next(a,p);

	return len(num,p,c+1);

}
int main() {


	int A,P;
	cin>>A>>P;
	cout<<len(A,P,1)<<endl;
	return 0;
}
