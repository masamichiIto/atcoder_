# include<bits/stdc++.h>
using namespace std;

/*
int main(){
    int N, K, cnt = 0;
    cin >> N >> K;
    vector<int> heights(N);
    for(int i = 0; i < heights.size(); i++){
        cin >> heights[i];
    }
    for(int i = 0; i < heights.size(); i++){
        if(heights[i] >= K){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
*/
int main(){
    int N, K, cnt = 0;
    cin >> N >> K;
    vector<int> vec(N);
    for(int i = 0; i < vec.size(); i++){
        cin >> vec[i];
        if(vec[i] >= K){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}