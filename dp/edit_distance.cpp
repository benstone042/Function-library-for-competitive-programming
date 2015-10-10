#include <iostream>
#include <algorithm>
#include<string>
int dp[2002][2002];
 int i,j;

using namespace std;
 string a;
  string b;
int main()
{
int t;
cin>>t;
    while(t--){

cin>>a;
cin>>b;
    int n= a.size();
    int m= b.size();


for(i=0;i<=n;i++)  dp[i][0]=i;
for(i=1;i<=m;i++)   dp[0][i]=i;

for(i=1;i<=n;i++){

              for(j=1;j<=m;j++){

dp[i][j]   = min( dp[i - 1][j - 1] + (a[i - 1] == b[j - 1] ? 0 : 1),1+min(dp[i][j-1],dp[i-1][j]));

}
              }

cout<<dp[n][m]<<'\n';
    }
    return 0;
}

