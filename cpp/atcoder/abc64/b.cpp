#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int vmin,vmax;
    cin >> N;
    vector<int> l(N);
    //入力
    for(int i = 0; i < N; i++){
        cin >> l.at(i);
    }
    sort(l.begin(), l.end());
    /*
    vmin = l.at(0);
    vmax = l.at(0);
    for(int i = 0; i < N; i++){
        if(vmin > l.at(i)){
            vmin = l.at(i);
        }
        else if(vmax < l.at(i)){
            vmax = l.at(i);
        }
    }
    */
    cout << l.at(N-1) - l.at(0) << endl;
    return 0;
}