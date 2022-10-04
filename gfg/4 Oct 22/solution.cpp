#include <bits/stdc++.h>
using namespace std;

long long mod = 1000000007;
int dp[101][101];
class Solution {
  public:
  
    long long int solve(int m, int n) {
        if(dp[m][n] != -1) {
            return dp[m][n];
        }
        
        if(m == 1 || n == 1) {
            return 1;
        }
        
        dp[m][n] = (solve(m, n-1) + solve(m-1, n))%mod;
        
        return dp[m][n];
    }
    long long int numberOfPaths(int m, int n){
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                dp[i][j] = -1;
            }
        }
        
        return solve(m, n);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}
