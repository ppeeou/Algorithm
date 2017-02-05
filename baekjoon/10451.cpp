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

vector<int> vt[1010];
bool check[1010];
int cnt=0;

void dfs(int now){

	if(check[now])return;
	check[now]=true;
	for(int i=0;i<vt[now].size();i++){

		int next = vt[now][i];
		if(!check[next]){
			dfs(next);
		}
	}

}
int main() {

	int input;
	cin>>input;

	while(input--){

		int n,m;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			check[i]=false;
			vt[i].clear();
		}
		cnt=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&m);
			vt[i].push_back(m);
		}

		for(int i=1;i<=n;i++){
			if(!check[i]){
				cnt++;
				dfs(i);
			}
		}
		printf("%d\n",cnt);
	}

	return 0;
}
