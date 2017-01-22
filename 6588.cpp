#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#define min(a,b)  a > b? b:a
#define max(a,b)  a > b? a:b
using namespace std;

int main() {



	const int input = 1000010;
	int     arr[1000010];
	bool result[1000010];
	int cnt = 0;
	result[0] = true;
	result[1] = true;

	for (int i = 2; i <= input; i++) {
		if (!result[i]) {
			arr[cnt++] = i;
			for (int j = i*2; j <= input; j += i) {
				result[j] = true;
			}

		}
	}
	int n;
	while (scanf("%d", &n)) {
		if (n == 0)
			break;
		bool check =false;
		for(int i=0;i<cnt;i++){
			if(!result[n-arr[i]]){
				check=true;
				printf("%d = %d + %d\n",n,arr[i],n-arr[i]);
				break;
			}
		}
		if(!check)printf("Goldbach's conjecture is wrong.\n");
	}

	return 0;

}
