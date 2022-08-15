#include <iostream>
#include <string>

using namespace std;

bool divideconquer(string a, string b, int t){
    if(a==b) return true;

    if(t%2==1) return false;

    string a1,a2, b1, b2;

    a1 = a.substr(0, t/2);
    a2 = a.substr((t/2), t);
    b1 = b.substr(0, t/2);
    b2 = b.substr((t/2), t);

    if(divideconquer(a1,b2,t/2))
    {
        return divideconquer(a2,b1,t/2);
    }
    else if(divideconquer(a1,b1,t/2))
    {
        return divideconquer(a2,b2,t/2);
    }

    return false;
}

int main(){
    int t;
    string a,b;
    
    cin >> a;
    cin >> b;

    t = a.size();
    bool equals = true;
    equals =  divideconquer(a, b, t);
    equals? cout << "YES\n" : cout << "NO\n";
    return 0;
}