#include<bits/stdc++.h>
using namespace std;
/*
c++ の / はデフォルトで切り捨て
*/

int main(){
    int a, b, x;
    cin >> a >> b;
    x = ((a+b) + (2-1))/2 ;//(i + (j-1)) / j ってかくと，切り上げ
    cout << x << endl;
}