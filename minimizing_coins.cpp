#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    vector<long long int> dp(k+1, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i <= k; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i - a[j] >= 0)
            dp[i] = min(dp[i] , 1 + dp[i - a[j]]);
        }
    }
    if(dp[k] == INT_MAX)
    cout<<-1;
    else cout<<dp[k];
}
