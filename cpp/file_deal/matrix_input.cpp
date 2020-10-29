#include "Eigen/Dense"
#include <bits/stdc++.h>
using namespace std;
using namespace Eigen;

int nrow, ncol;
cin >> nrow >> ncol;
MatrixXd m(nrow,ncol);

for(int i = 0; i < nrow; i++){
    for(int j = 0; j < ncol; j++){
        cin >> m(i,j);
    }
}

for(int i=0; i < nrow; i++){
    for(int j=0; j < ncol; j++){
        cout << m(i,j) << endl;
    }
}