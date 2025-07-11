#include <stdio.h>
void dfs(int n,int a[10][10],int source,int s[]){
    int i;
    printf("%d\t",source);
    s[source]=1;
    for(i=1;i<=n;i++)
    if(s[i]==0 && a[source][i]==1)
    dfs(n,a,i,s);
    
}
int main() {
    int n, a[10][10], source, s[10], i, j;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n", n);
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            scanf("%d",&a[i][j]);
    printf("Enter the source node:\n");
    scanf("%d", &source);
    for(i = 1; i <= n; i++)
        s[i] = 0;
    printf("The DFS order of the graph is:\n");
    dfs(n, a, source, s);
}
