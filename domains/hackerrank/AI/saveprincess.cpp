#include<bits/stdc++.h>
#define MAX 21
#define REP(i,a,b) for (int i = a; i < b; i++)
#define pb push_back
using namespace std;
typedef vector<string> vs;
//XXX Find the difference in co-ordinates of mario and princess.
void displayPathToPrincess(vs grid){
  const int N = grid.size();
  REP(i,0,N)
    cout << grid[i]<<endl;
}
vs gridMove(int size, vs grid){
  int botx, boty, px, py;
  REP(i,0, size){
    REP(j,0, size){
      if (grid[i][j] == 'm'){
        botx = i;
        boty = j;
      }
      if (grid[i][j] == 'p'){
        px = i;
        py = j;
      }
    }
  }
  vs result;
  while (botx > px){
    result.pb("UP");
    --botx;
  }
  while (botx < px){
    result.pb("DOWN");
    ++botx;
  }
  while (boty > py){
    result.pb("LEFT");
    --boty;
  }
  while (boty < py){
    result.pb("RIGHT");
    ++boty;
  }
  return result;
}

int main(){
  //ios_base::sync_with_studio(0);
  vs grid;
  int m;
  cin >> m;
  REP(i,0,m){
    string s; cin >> s;
    grid.pb(s);
  }
  displayPathToPrincess(gridMove(m, grid));
  return 0;
}
