#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define scf1(a) scanf("%d", &a)
#define scf2(a,b) scanf("%d %d", &a, &b)
#define scf3(a,b,w) scanf("%d %d %d", &a, &b, &w)
#define pb push_back
#define all(X) X.begin(), X.end()
vi pset(1000);
void initSet(int N) { REP(i,0,N) pset[i] = i;}
int findSet(int i) {return (pset[i] == i) ? i : findSet(pset[i]);}
void unionSet(int i, int j) {pset[findSet(i)] = findSet(j);}
int isSameSet(int i, int j) {return findSet(i) == findSet(j);}
vector<pair<int, ii> > EdgeList;
int V, E;
int Kruskal(int s){
  sort(all(EdgeList));
  int mst = 0;
  initSet(V);
  REP(i,0,EdgeList.size()){
    pair<int, ii> front = EdgeList[i];
    if (!isSameSet(front.second.first,front.second.second)){
      unionSet(front.second.first,front.second.second);
      mst += front.first;
    }
  }
  return mst;
}
int main(){
  scf2(V,E);
  int a,b,w,s;
  REP(i,0,E){
    scf3(a,b,w);
    EdgeList.pb(make_pair(w,ii(a,b)));
  }
  scf1(s);
  printf("%d\n",Kruskal(s));
  return 0;
}
