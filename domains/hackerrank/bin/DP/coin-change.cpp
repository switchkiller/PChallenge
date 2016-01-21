#include<bits/stdc++.h>
using namespace std;
#define REP(a,b) for (int i = (a); i < (b); i++)
#define REPE(a,b) for (int j = (a); j <= (b); j++)
#define NMAX 50
int coinChange(int n, int coin[], int m){
  int lookup[n+1];
  memset(lookup, 0, sizeof lookup);
  lookup[0] = 1;
  REP(0,m){
    //cout << coin[i] << " ";
    REPE(coin[i], n){
      lookup[j] += lookup[j-coin[i]];
      //cout << lookup[j] << " ";
    }
    //cout << endl;
  }
  return lookup[n];
}
int main() {
    int N, M, coin[NMAX];
    cin >> N >> M;
    REP(0, M)
      cin >> coin[i];
    cout << coinChange(N,coin,M);
    return 0;
}

//base///////////////////////
//  0 1 2 3 4 5 6 7 8 9 10 /
//1 1 1 1 1 1 1 1 1 1 1 1  /
//5 1 1 1 1 1 2 2 2 2 2 3  /
//8 1 1 1 1 1 2 2 2 3 3 4  /
////////////////////////////
