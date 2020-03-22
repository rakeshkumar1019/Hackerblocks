#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int friendpair(long long int n){
  long long int* dp=new long long int[n+1];
  for(long long int i=0;i<=n;i++){
    dp[i]=-1;
  }

  if(n==1){
    return  dp[n]=1;
  }
  if(n==2){
    return dp[n]=2;
  }
  if(dp[n]!=-1){
    return dp[n];
  }
  
  long long int ans=friendpair(n-1)+(n-1)*friendpair(n-2);
  dp[n]=ans;
  return ans;


}
int main(){
	long long int t;
	cin>>t;
	while(t--){
      long long int n;
      cin>>n;
      cout<<friendpair(n)<<endl;
	}
	return 0;
}
