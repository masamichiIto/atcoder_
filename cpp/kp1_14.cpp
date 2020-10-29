#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10, b = 5;
    int answer = min(a,b); //min関数
    cout << answer << endl;

    int ans = min(10,12);
    cout << ans << endl;
    
    double ans2 = max(1.3,2.4);
    cout << ans2 << endl;

    int c = 90, d = 12;
    swap(c,d);
    cout << c << endl;
    cout << d << endl;

    vector<int> vec = {1, 5, 3};
    reverse(vec.begin(),vec.end());

    for(int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }

    vector<int> vec2 = {2,5,2,1};
    sort(vec2.begin(),vec2.end());
    for(int i = 0; i < vec2.size(); i++){
        cout << vec2.at(i) << endl;
    }
    reverse(vec2.begin(),vec2.end());
    for(int i = 0; i < vec2.size(); i++){
        cout << vec2.at(i) << endl;
    }
}