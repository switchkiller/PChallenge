#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int N, E, u, v, s, t,x;
    cin >> t;
    while (t--){
        cin >> N >> E;
        vector<int> G[N+1];
        for (int i = 0; i < E; i++){
            cin >> u >> v;
            G[u].push_back(v);
            G[v].push_back(u); }
        cin >> s; vector<int> V(N+1, -1);
        x = s;
        V[s] = 1;
        queue<int> Q; Q.push(s);
        while (!Q.empty()){
            s = Q.front(); Q.pop();
            for (vector<int>::iterator it = G[s].begin(); it != G[s].end(); it++){
                if (V[*it] == -1){
                    V[*it] = 1;
                    Q.push(*it);
        }}}
        for (int i = 1; i <= N; i++)
            if (i != x) cout << V[i] << " ";
        cout << endl; }
    return 0;
}
