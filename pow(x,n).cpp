#include <bits/stdc++.h>
using namespace std;
int mod;
  long long  solve(int x, int n,map<int,long long>&m1 ){
       if(n==0)
       return x;
       if(n==1)
       return x;
        if(m1.count(n))
        return m1[n];
        long long a=solve(x,n/2,m1);
        a=(a%mod * a%mod)%mod;
        if(n%2)
        a=(a%mod*x%mod)%mod;
        return m1[n]=(a)%mod;

   }
int modularExponentiation(int x, int n, int m) {
map<int,long long>m1;
mod=m;
        if(n==0 || x==1)
        return 1;
        if(x==0)
        return 0;
        long long ans= solve(x,n,m1);
		// cout<<ans;
        return (ans)%mod;
}