#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,sum = 0;
    cin >> N;
    vector<int> vec(N);

    for(int i=0; i < N; i++){
        cin >> vec.at(i);
        sum += vec.at(i);
    }
    int ave = sum/N;
    for(int i=0; i < N; i++){
        int deviation = 0;
        deviation = vec.at(i) - ave;
        if(deviation < 0) deviation *= -1;
        cout << deviation << endl;
    }
}