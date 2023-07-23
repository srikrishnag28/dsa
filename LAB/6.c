#include<stdio.h>
#include<stdlib.h>
int a[10][10];
int visited[10];
int n;
void read(){
    int i,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void dfs(int v){
    int w;
    visited[v]=1;
    for(w=1;w<=n;w++){
        if(visited[w]==0 && a[v][w]==1){
            printf("%d",w);
            dfs(w);
        }
    }
}
void main(){
    int start;
    read();
    scanf("%d",&start);
    dfs(start);
}