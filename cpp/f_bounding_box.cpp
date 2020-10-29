/*
http://drken1215.hatenablog.com/entry/2019/06/22/022600
*/
#include<iostream>
#include<vector>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
template<class T> inline bool chmax(T& a, T b) {if(a < b){a = b; return 1;} return 0; }
template<class T> inline bool chmin(T& a, T b) {if(a > b){a = b; return 1;} return 0; }

const long long INF = 1LL << 60;
int N;
vector<double> x, y;
vector<char> d;

double area(double t){
    double xmi = INF, xma = -INF, ymi = INF, yma = - INF;
    for(int i = 0; i < N; ++i){
        double cx, cy;
        if(d[i] == 'L') cx = x[i] - t, cy = y[i];
        else if(d[i] == 'R') cx = x[i] + t, cy = y[i];
        else if(d[i] == 'U') cx = x[i], cy = y[i] + t;
        else cx = x[i], cy = y[i] - t; 
        chmin(xmi, cx);
        chmax(xma, cx);
        chmin(ymi, cy);
        chmax(yma, cy);
    }
    return (xma - xmi) * (yma - ymi);
}

double solve(){
    vector<double> alt;
    alt.push_back(0);

    //left
    {
        double mi1 = INF; //L
        double mi2 = INF; //R
        double mi3 = INF; //UD
        for(int i = 0; i < N; ++i){
            if(d[i] == 'L')chmin(mi1,x[i]);
            else if(d[i] == 'R')chmin(mi2, x[i]);
            else chmin(mi3, x[i]);
        }
        if(mi1 < INF && mi2 < INF) alt.push_back(abs(mi1 - mi2)/2);
        if(mi1 < INF && mi3 < INF) alt.push_back(abs(mi1 - mi3));
        if(mi2 < INF && mi3 < INF) alt.push_back(abs(mi2 - mi3));
    }

    //Right
    {
        double ma1 = -INF; //L
        double ma2 = -INF; //R
        double ma3 = -INF; //UD
        for(int i = 0; i < N; ++i){
            if(d[i] == 'L')chmax(ma1, x[i]);
            else if(d[i] == 'R')chmax(ma2, x[i]);
            else chmax(ma3, x[i]);
        }
        if (ma1 > -INF && ma2 > -INF) alt.push_back(abs(ma1 - ma2)/2);
        if (ma1 > -INF && ma3 > -INF) alt.push_back(abs(ma1 - ma3));
        if (ma2 > -INF && ma3 > -INF) alt.push_back(abs(ma2 - ma3));
    }

    //bellow
    {
        double mi1 = INF; // D
        double mi2 = INF; // U
        double mi3 = INF; // LR
        for(int i = 0; i < N; ++i){
            if(d[i] == 'D')chmin(mi1,y[i]);
            else if(d[i] == 'U')chmin(mi2, y[i]);
            else chmin(mi3, y[i]);
        }
        if (mi1 < INF && mi2 < INF) alt.push_back(abs(mi1 - mi2)/2);
        if (mi1 < INF && mi3 < INF) alt.push_back(abs(mi1 - mi3));
        if (mi2 < INF && mi3 < INF) alt.push_back(abs(mi2 - mi3));
    }

    //above
    {
        double ma1 = -INF; //D
        double ma2 = -INF; //U
        double ma3 = -INF; //LR
        for(int i = 0; i < N; ++i){
            if(d[i] == 'D')chmax(ma1, y[i]);
            else if (d[i] == 'U')chmax(ma2, y[i]);
            else chmax(ma3, y[i]);
        }
        if (ma1 > -INF && ma2 > -INF)alt.push_back(abs(ma1 - ma2)/2);
        if (ma1 > -INF && ma3 > -INF)alt.push_back(abs(ma1 - ma3));
        if (ma2 > -INF && ma3 > -INF)alt.push_back(abs(ma2 - ma3));
    }
    
    sort(alt.begin(), alt.end());
    alt.erase(unique(alt.begin(), alt.end()), alt.end());
    double res = INF;
    for (int i = 0; i < alt.size(); ++i){
        double tmp = area(alt[i]);
        chmin(res, tmp);
    }

    return res;
}

int main(){
    cin >> N;
    x.resize(N), y.resize(N), d.resize(N);
    for(int i = 0; i < N; ++i) cin >> x[i] >> y[i] >> d[i];
    double res = solve();
    cout << fixed << setprecision(10) << res << endl;
}