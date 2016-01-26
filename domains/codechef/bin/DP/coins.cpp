// TD app.
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
map<int, long long> lookup;
long long maxCoin(long long n){
  if (n == 0) return 0;
  if (lookup[n] != 0) return lookup[n];
  else{
    long long sum = maxCoin(n/2) + maxCoin(n/3) + maxCoin(n/4);
    if (sum < n)
      lookup[n] = n;
    else
      lookup[n] = sum;
    return lookup[n];
  }
}
int main(){
  long long n;
  while(scanf("%lld",&n)==1)
  {
  	printf("%lld\n",maxCoin(n));
  }
  return 0;
}
