#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,digit,sum,num;
    scanf("%d", &N);
    sum = 0;
    num = N;
    for(int i = 0; i < N; i++){
        digit = num % 10;
        sum += digit;
        num /= 10;//小数点以下切り上げ 11/10->1,3/10->0
        if(num == 0){
            break;
        }
    }
    if(N % sum == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}