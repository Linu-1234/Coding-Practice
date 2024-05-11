Question:-Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help. Given a data type, help Geek in finding the size of it in byte.
Ans:-
#include<bits/stdc++.h>
using namespace std;  
class Solution {
  public:
    int dataTypeSize(string str) {
        if(str=="Character") return sizeof(char);
        if(str=="Integer") return sizeof(int);
        if(str=="Long") return sizeof(long);
        if(str=="Float") return sizeof(float);
        if(str=="Double") return sizeof(double);
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}
