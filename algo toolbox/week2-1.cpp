#include <bits/stdc++.h>

using namespace std;

int main(){

    int m,n;
    cin>>m>>n;
    int coin[n+1],arr[n+1][m+1];

    for (int i = 0; i <n; i++){
        cin>>coin[i];
    }

    for(int i=0;i<=n;i++){
        for (int j = 0; j <= m; j++){
            if(i==0||j==0){
                arr[i][j]=0;
            }
            else if(coin[i-1]>j){
                arr[i][j]=arr[i-1][j];
            }else{
                arr[i][j] = max(coin[i - 1] + arr[i - 1][j - coin[i - 1]], arr[i - 1][j]);
            }
        }
    }
    // for (int i = 0; i <=n; i++)
    // {
    //     for (int j = 0; j <=m; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }cout<<"\n";
        
    // }
    
    cout<<arr[n][m];
}