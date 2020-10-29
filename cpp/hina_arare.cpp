#include<bits/stdc++.h>
using namespace std;

int N;
char c;
int main(){
    scanf("%d", &N);//cin >> N;でもいいけど，scanf()の方が速いらしい
    bool flag = false;
    for(int i=0; i<N; i++){
        scanf("%c", &c);
        if(c=='Y'){flag=true;}
    }
    if(flag)cout << "Four" << endl;
    else cout << "Three" << endl;
}