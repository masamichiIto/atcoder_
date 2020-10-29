#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << (5 < 10) << endl;
    cout << (5 > 10) << endl;
    
    int x;
    cin >> x;

    bool a = true;
    bool b = x < 10;
    bool c = false;
    
    if(a && b){
        cout << "hello" << endl;
    }
    if (c){
        cout << "world" << endl;
    }
}