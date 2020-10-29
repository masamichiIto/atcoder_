#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int cnt;
    cin >> s;
    if(s[0] == '1') cnt++;
    if(s[1] == '1') cnt++;
    if(s[2] == '1') cnt++;
    cout << cnt << endl;
    return 0;
}