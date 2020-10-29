#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;

    if(x < 10){
        cout << "xは10より小さい" << endl;
    }
    else if(x > 20){
        cout << "xは10より小さくなくて，20より大きい" << endl;
    }
    else if(x == 15){
        cout << "xは10より小さくなくて，20より大きくなくて，15である" << endl;
    }
    else{
        cout << "xは10より小さくなくて，20より大きくなくて，15でもない" << endl;
    }

    if(x >= 20){
        cout << "xは20以上" << endl;
    }

    if(x == 5){
        cout << "xは5" << endl;
    }

    if(x != 100){
        cout << "xは100ではない" << endl;
    }

    if(!(x == y)){
        cout << "xとyは等しくない" << endl;
    }

    if (x == 10 && y == 10){
        cout << "xとyは10" << endl;
    }

    if(x==10 || y==10){
        cout << "xかyは10" << endl;
    }
    cout << "終了" << endl;
}