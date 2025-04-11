#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int n1=n, m1=m;
    int hang=1,cot=1; // hang=n=i   cot=m=j
    int a[n+1][m+1];
    int k=1;
    while (k<=m1*n1){
        for (int i=hang; i<=n; i++){ a[i][cot]=k;k++;}
        for (int i=cot+1; i<=m; i++){ a[n][i]=k;k++;}
        for (int i=m-1; i>=cot; i--){ a[i][m]=k; k++;}
        for (int i=n-1; i>=hang+1;i--) {a[hang][i]=k; k++;}
        cot++;hang++;n--;m--;
    }
    for (int i=1;i<=n1;i++){
        for (int j=1;j<=m1; j++){
            cout<< a[i][j]<< ' ';
        
        }
        cout<< '\n';
    }


}
