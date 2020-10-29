#include "Eigen/Core"
#include "Eigen/LU"
#include <iostream>

using namespace Eigen;

// simply solves linear system with full p
void solve_linear_system(){
    std::cout << "[[[[solve_linear/system]]" << std::endl;
    MatrixXd A = MatrixXd::Random(5,5);
    FullPivLU< MatrixXd > lu(A);

    VectorXd b = VectorXd::Random(5);
    VectorXd x;

    std::cout << "Matrix A" << std::endl << A << std::endl;
    std::cout << "Vector b" << std::endl << b << std::endl << std::endl;

    x = lu.solve(b);
    std::cout << "Solve Ax=b:" << std::endl << x << std::endl << std::endl;
    std::cout << "Ceck solution by Ax-b: " << A*x-b << std::endl << std::endl;
}

int main(){
    solve_linear_system();
}