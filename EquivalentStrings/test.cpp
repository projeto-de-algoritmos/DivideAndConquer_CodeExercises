#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    cin >> a;
    int t = a.size();
    cout << a.substr(t/2, t) << endl;
    return 0;
}