// Byteland Gold Coin - codechef
// BT app.
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define REP(a,b,i) for (int i = (a); i <= (b); i++)
map<int, long long> lookup;
int max(int a, int b) { return a > b ? a : b;}
long long maxCoin(long long n){
  lookup[1] = 1;
  REP(2,n,i){
    long long sum = max(i,lookup[i/2] + lookup[i/3] + lookup[i/4]);
    lookup[i] = sum;
  }
  return lookup[n];
}
int main(){
  long long n;
  while(scanf("%lld",&n)==1)
  {
  	printf("%lld\n",maxCoin(n));
  }
  return 0;
}
