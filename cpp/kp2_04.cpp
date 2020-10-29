#include<bits/stdc++.h>
using namespace std;

/*
参照
参照先の型& 参照の名前 = 参照先;
無駄なコピーを避けたり，複数の結果を返したいときに便利
*/
int f(int x){
    x = x * 2;
    return x;
}

int g(int& x){
    x = x * 2;
    return x;
}

void min_and_max(int a, int b, int c, int &minimum, int &maximum){
    minimum = min(a,min(b,c));
    maximum = max(a,max(b,c));
}

int sum100(vector<int> &a){
    int res = 0;
    for(int i = 0; i < 100; i++){
        res += a.at(i);
    }
    return res;
}

int main(){
    int a = 3;
    int b = f(a);
    int a2 = 3;
    int b2 = g(a2);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "a2: " << a2 << endl;
    cout << "b2: " << b2 << endl;

    int minimum, maximum;
    min_and_max(3,1,5,minimum,maximum);
    cout << "min: " << minimum << endl;
    cout << "max: " << maximum << endl;

    vector<int> vec(100000, 1);
    for(int i = 0; i < 50; i++){
        cout << sum100(vec) << endl;
    }
}