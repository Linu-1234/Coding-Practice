Question:-
Geek is learning about functions and calling a function with arguments. He learns that passing can take one of two forms: pass by value or pass by reference.
Geek wishes to add 1 and 2, respectively, to the parameter passed by value and reference. Help Geek in fulfilling his goal.
Example 1:
Input:
a = 1
b = 2
Output:
2 4
Explanation: 1 was passed by value whereas 2 passed by reference.

Ans:-

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
       vector<int> ans;    
       ans.push_back(++a);
       b+=2;
       ans.push_back(b);
       return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        Solution obj;
        vector<int> ans = obj.passedBy(a, b);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

  
