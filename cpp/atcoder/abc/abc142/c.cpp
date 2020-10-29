# include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    vector<int> students(N);
    vector<int> revs(N);
    for(int i = 0; i < students.size(); i++){
        cin >> students[i];
    }
    for(int i = 0; i < students.size(); i++){
        revs[students[i] - 1] = i+1;
    }
    for(int i = 0; i < revs.size(); i++){
        cout << revs[i] << endl;
    }
    return 0;
}