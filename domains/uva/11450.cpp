#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstdio>
using namespace std;
#define INF -1000000000
int M, C, K, price[25][25];
int memo[210][25];

int shop(int money_left, int garment_id){
 if (money_left < 0)
  return INF;
 if (garment_id == C)
	 return M - money_left;
 if (memo[money_left][garment_id] != -1)
	 return memo[money_left][garment_id];
 int max_value = INF;
 for (int model = 1; model <= price[garment_id][0]; model++)
  max_value = max(max_value, shop(money_left - price[garment_id][model], garment_id + 1));
 return memo[money_left][garment_id] = max_value;
}

int main(){
 int TC,k,score;
 scanf("%d",&TC);
 while(TC--){
 scanf("%d %d", &M, &C);
 for (int i = 0; i < C; i++){
  scanf("%d",&k);
  price[i][0] = k;
  for (int j = 1; j <= k; j++)
	  scanf("%d", &price[i][j]);
 }
 memset(memo, -1, sizeof(memo));
 score = shop(M,0);
 if (score < 0)
   printf("No solution");
 else
   printf("%d\n", score);
 }
return 0;
}

