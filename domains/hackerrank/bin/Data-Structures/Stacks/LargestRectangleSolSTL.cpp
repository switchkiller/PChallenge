#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
#define ll long long
#define pr pair<int,int>
#define pb push_back
#define pb push_back
#define mp make_pair
using namespace std;

ll pushPop(stack<pr> *S,int x,int i,ll ans)
{
   while(x<S->top().first){
      //cout<<S->top().first<<" "<<S->top().second<<endl;
      ll temp=S->top().first;
      S->pop();
      temp=temp*((i-1)-S->top().second); 
      ans=max(ans,temp);
   }   
   return ans;
}

int main() {
   stack<pr> S;
   S.push(mp(0,0));
   int n,x,i,ig;
   ll ans=0;
   cin>>n;
   for(i=1;i<=n;++i){
      ig=scanf("%d",&x);
      ans=pushPop(&S,x,i,ans);
      S.push(mp(x,i));         
   }
   cout<<pushPop(&S,0,n+1,ans)<<endl;
   return 0;
}

