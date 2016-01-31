//dp solution to the LCS problem
//BU approach
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define REP(a,b,i) for (int i = (a); i <= (b); i++)
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])
int n, a, b;
int lcs[MAX][MAX];
char *str1, *str2;
string getLCS(){
  string ret;
  stack<char> s;
  int ii = a, jj = b;
  while (ii != 0 && jj != 0){
    if (str1[ii-1] == str2[jj-1]){
      s.push(str1[ii-1]);
      ii--; jj--;
    }
    else if (lcs[ii-1][jj] > lcs[ii][jj-1]) ii--;
    else jj--;
  }
  while (!s.empty()){
    ret += s.top();
    s.pop();
  }
  return ret;
}


int lcs_len(char str1[], char str2[], int a, int b){
  REP(0,a,i)
    lcs[i][0] = 0;
  REP(0,b,i)
    lcs[0][i] = 0;
  REP(1,a,i){
    REP(1,b,j){
      if (str1[i-1] == str2[j-1])
        lcs[i][j] = lcs[i-1][j-1] + 1;
      else
        lcs[i][j] = lcs[i][j-1] > lcs[i-1][j]?lcs[i][j-1]:lcs[i-1][j];
    }
  }
  return lcs[a][b];
}

int main(){
  scanf("%d\n", &n);
  while (n--){
    memset(lcs, 0, sizeof lcs);
    cin >> a >> b;
    str1 = new char[a];
    str2 = new char[b];
    cin >> str1 >> str2;
    lcs_len(str1, str2, a, b);
    cout << getLCS();
  }
  return 0;
}
