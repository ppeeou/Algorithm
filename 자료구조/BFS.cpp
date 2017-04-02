//인접행렬
queue<int> q;

check[1] =true; q.push(1);
while(!q.empty()){
    int x = q.front(); q.pop();
    printf("%d ",x); 
    for(int i=1;i<=n;i++){
        
        if(a[x][i]==1 &&!check[i]){
            check[i]= true;
            q.push(i);
        }
    }
}

//인접 리스트

queue<int> q;

check[1] =true; q.push(1);
while(!q.empty()){
    int x = q.front(); q.pop();
    printf("%d ",x);

    for(int i=0;i<a[i].size();i++){
        int y = a[x][i];
        if(!check[y]){ 
            check[y]=true;
            q.push(y);
        }
    }
}