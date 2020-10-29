#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s;
    if(s[0] == 'o') n++;
    if(s[1] == 'o') n++;
    if(s[2] == 'o') n++;
    cout << 700 + 100*n << endl;
    return 0;
}