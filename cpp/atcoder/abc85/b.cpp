#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i = 0; i < n; i++){
        cin >> l.at(i);
    }
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(),l.end()), l.end());
    cout << l.size() << endl;
    return 0;
}