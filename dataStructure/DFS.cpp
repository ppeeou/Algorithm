//인접 행렬
void dfs(int x)
{
    check[x] = true;
    printf("%d ", x);
    for (int i = 1; i <= n; i++)
    {
        if(a[x][i]==1 && !check[i]){
            dfs(i);
        }
    }
}

//인접 리스트
void dfs(int x){
    check[x]=true;
    printf("%d ",x);

    for(int i=1;i<=a.size();i++){
        int y = a[x][i];
        if(!check[y]){
            dfs(y);
        }
    }
}