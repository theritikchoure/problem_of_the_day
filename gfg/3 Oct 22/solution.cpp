
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int primeFactors(int n) {
        
        int x = 0;
        
        if(n == 0 || n == 1 || n == 2) {
            return n;
        }
        
        set<int> s;
        
        for(int i = 2; i<=n; i++) {
            while(n%i == 0) {
                s.insert(i);
                n = n/i;
            }
        }
        
        vector<int> v(s.begin(), s.end());
        
        for(int i = 0; i < v.size(); i++) {
            x += v[i];
        }
        
        return x;
    }
    
    int sumOfAll(int l, int r){
        int ans = 0;
        for(int i=l; i<=r; i++) {
            ans += primeFactors(i);
        }
        
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin>>l>>r;
        Solution ob;
        cout<<ob.sumOfAll(l,r)<<endl;
    }
    return 0;
}
