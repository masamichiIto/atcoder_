#include "Eigen/Dense"
#include <bits/stdc++.h>
using namespace std;
using namespace Eigen;

int main(){
	int nrow, ncol;

	cin >> nrow >> ncol;
	MatrixXd m(nrow,ncol);
	VectorXd v(nrow);

	for(int i = 0; i < nrow; i++){
    	for(int j = 0; j < ncol; j++){
        	cin >> m(i,j);
    	}
	}
	v = m.col(2);//0-indexed
	cout << "v" << v << endl;
	cout << "input matrix is:\n" << m << endl;
	cout << "m * 2:\n" << m*2 << endl;
	cout << "transpose of m: \n" << m.transpose() << endl;
	cout << "dot(m,m.T):\n" << m * m.transpose() << endl;
}

