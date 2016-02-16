#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int (i) = (a); (i) < (b); i++)
#define MAX 20+1

long long power(long long x, long long y){
    if (y == 0) return 1;
    if (y & 1)
        return x * power(x*x, y/2);
    else
        return power(x*x, y/2);
}

int main(){
    ios_base::sync_with_stdio(0);
    int C, N;
    long long coeff[MAX];
    cin >> C;
    while (C--){
        long long d, k;
        cin >> N;
        N++;
        REP(i,0,N)
            cin >> coeff[i];
        cin >> d >> k;
        //arr[i] = arr[i-1] + coeff[i] * pow(i,i);    // XXX Wrong logic
        int tk = 0, tb = 0;
        for (int i = 1; ; i++){
            long long an = 0;
            REP(j,0,N)
                an += coeff[j] * power(i,j);
            tb += d;
            tk += tb;
            if (tk >= k){
                cout << an << endl;
                break;
            }
            //long long temp = i * d;
        //     if (skip >= k){
        //             cout << an << endl;
        //             break;
        //         }
        //     skip += temp;
             }
         }
    return 0;
}
