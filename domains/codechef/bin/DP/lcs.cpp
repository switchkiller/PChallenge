//dp solution to the LCS problem
//BU approach
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
#define REP(a,b,i) for (int i = (a); i <= (b); i++)
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])

int lcs_len(char str1[], char str2[], int a, int b){
  int lcs[a+1][b+1];
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
  REP(0,a,i){
    //cout << i << " ";
    REP(0,b,j)
      cout << lcs[i][j] << " ";
    cout << endl;
  }
  return lcs[a][b];
}

int main(){
  int n, a, b, len;
  char *str1, *str2;
  scanf("%d\n", &n);
  while (n--){
  scanf("%d %d\n", &a, &b);
  str1 = new char[a];
  str2 = new char[b];
    cin >> str1 >> str2;
    len = lcs_len(str1, str2, a, b);
    printf("%d\n", len);
  }
  return 0;
}
