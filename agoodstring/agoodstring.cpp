#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int divideconquer(string s, char c){
    
    string subs1,subs2;
    
    if(s.size() == 1){
        return (s[0] != c);
    }

    int m = s.size();
    
    subs1 = s.substr(0, m/2);
    subs2 = s.substr(m/2, m);

    int cleft = divideconquer(subs1, c+1);
    cleft += subs1.size() - count(subs2.begin(), subs2.end(), c);
    
    int cright = divideconquer(subs2, c+1);
    cright+= subs2.size() - count(subs1.begin(), subs1.end(), c);
    
    return min(cleft, cright);
}

int main(){
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        int moves = divideconquer(s, 'a');
        cout << moves << endl;
    }
    return 0;
}