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

int cnt=0;
bool check[1001];
vector<int> vt[1010];

void dfs(int now){
	if(check[now]) return;
	check[now]=true;

	for(int i=0;i<vt[now].size();i++){

		int next = vt[now][i];
		if(!check[next]){
			dfs(next);
		}
	}
}

int main() {


	int n,m;

	scanf("%d %d",&n,&m);

	for(int i=0;i<m;i++){

		int a,b;
		scanf("%d %d",&a,&b);
		vt[a].push_back(b);
		vt[b].push_back(a);

	}

	for(int i=1;i<=n;i++){

		if(!check[i]){
			dfs(i);
			cnt++;
		}
	}

	cout<<cnt<<endl;
	return 0;
}
