#include <stack>
#include <cstdio>
using namespace std;

int main() {
    int N, i, height, pos;
    long long area = 0, temp;
    typedef pair<int,int> pii;
    stack < pii > S;
    
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    scanf("%d", &N);
    S.push(make_pair(0,0));    
    for (i = 1; i <= N; ++i) {
        scanf("%d", &height);
        pos = i;
        while (S.top().first > height) {
        	pii rect = S.top(); S.pop();
        	temp = rect.first * (i - rect.second);
        	if (temp > area) area = temp;
        	pos = rect.second;
		}
		S.push(make_pair(height, pos));
    }
    while (!S.empty()) {
    	pii rect = S.top(); S.pop();
    	temp = rect.first * (N - rect.second + 1);
    	if (temp > area) area = temp;
	}
    
    printf("%lld\n", area);    
    return 0;
}
