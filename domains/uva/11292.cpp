#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i=(a); i < (b); i++)
int main(){
    int n,m,d=0,k=0,gold=0;
    int dragon[20], knight[20];
    cin >> n >> m;
    REP(i,0,n)
        cin >> dragon[i];
    REP(i,0,m)
        cin >> knight[i];
    sort(dragon,dragon + n);
    sort(knight,knight + m);
    while(d < n && k < m){
        while(dragon[d] > knight[k] && k < m) k++;
        if (k == m) break;
        gold += knight[k];
        d++; k++;
    }
    if (d == n) cout << gold << endl;
    else cout << "Loowater is doomed!" << endl;
}
