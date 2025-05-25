#include <stdio.h>
int parent[20] = {0}, min, mincost = 0, ne = 1, n, cost[20][20], a, b, i, j, u, v;
void kruskal(){
    while(ne<n){
        for(i=1,min=999;i<=n;i++)
        for(j=1;j<=n;j++)
        if(cost[i][j]<min){
        min=cost[i][j];
        a=u=i;
        b=v=j;
        }
        while(parent[u])
        parent[u]=u;
        while(parent[v])
        parent[v]=v;
        if(u!=v){
            printf("%d\tedge\t(%d,%d) = %d\n", ne, a, b, min);
            ne++;
            mincost += min;
            parent[v] = u;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("The minimum cost = %d\n",mincost);
}
int main() {
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    printf("Enter the cost matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
        scanf("%d",&cost[i][j]);
        if(cost[i][j] == 0)
            cost[i][j] = 999;
        }
    }
    kruskal();
}
