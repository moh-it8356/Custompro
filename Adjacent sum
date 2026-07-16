#include <stdio.h>
int n, m;
int main() {
    scanf("%d %d", &n, &m);
    int mat[n][m], dp[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", mat[i]+j);
            
        }
    }
    int r[]={-1,-1,-1,0,0,1,1,1},c[]={-1,0,1,-1,1,-1,0,1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum=0;
            for(int k=0;k<8;k++){
                int ar=i+r[k],ac=j+c[k];
                if(ar>=0&&ar<n&&ac>=0&&ac<m)  sum+=mat[ar][ac];
            }
            printf("%d ",sum);
            
        }
        printf("\n");
    }
   
    return 0;
}
