# include<bits/stdc++.h>
using namespace std;

int main(){
    int j = 0;
    while(j < 3){
        cout << "Hello While: " << j << endl;
        j++;
    }

    for(int i = 0; i < 3; i++){
        cout << "Hello for: " << i << endl;
    }

    for(int i = 0; i < 5; i++){
        if(i == 3){
            cout << "抜ける" << endl;
            break; // i = 3の時点でループから抜ける
        }

        cout << i << endl;
    }
    cout << "終了" << endl;

    for(int k = 0; k < 10; k++){
        if(k == 7){
            cout << "飛ばす" << endl;
            continue;
        }
        cout << k << endl;
    }
    cout << "終了" << endl;
}