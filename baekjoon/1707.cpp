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


int color[20010];
vector<int> vt[20010];
void dfs(int now,int c){
	if(color[now]!=0) return;

	color[now]=c;

	for(int i=0;i<vt[now].size();i++){
		int next = vt[now][i];
		if(color[next]==0){
			dfs(next,3-c);
		}
	}
}

int main() {

	 int t;
	 scanf("%d\n",&t);
	 while (t--) {

		int m,n;
		cin>>m>>n;

		for(int i=0;i<=m;i++){
			vt[i].clear();
			color[i]=0;
		}

		for(int i=0;i<n;i++){
			int a,b;
			scanf("%d %d",&a,&b);

			vt[a].push_back(b);
			vt[b].push_back(a);

		}

		for(int i=1;i<=m;i++){

			if(color[i]==0){
				dfs(i,1);
			}

		}

		bool result=false;

		for(int i=1;i<=m;i++){
			for(int j=0;j<vt[i].size();j++){
				int compare = vt[i][j];
				if(color[i] == color[compare]){
					result=true;
				}
			}
		}

		if(!result){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
