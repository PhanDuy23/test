#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
 
ll MOD = 1e9 + 7;
ll dp[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int n, k;
       cin>>n>>k;
       if(n <= k){
       		for(int i = 2; i <= k; i++){
	   			dp[i] = (dp[i-1] * 2)%MOD;
	   			//cout<<dp[i]<<" ";
			}
       	cout<<dp[n]<<endl;
	   }else{
	   		dp[0] = 1;
	   		dp[1] = 1;
	   		for(int i = 2; i <= k; i++){
	   			dp[i] = (dp[i-1] * 2)%MOD;
	   			//cout<<dp[i]<<" ";
			}
			for(int i = k+1; i <= n; i++){
	   			dp[i] = ((((dp[i-1])%MOD * 2 )%MOD - dp[i-k-1]) % MOD + MOD)%MOD;
	   			//cout<<dp[i]<<" ";
			}
			cout<<dp[n]<<"\n";
	   }
       
    }
}
