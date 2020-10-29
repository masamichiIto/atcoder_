#include <iostream>
#include <random>
#include "Eigen/Dense" //Eigenファイルのincludeは,ファイルを同ディレクトリに入れて,""を使う
using Eigen::MatrixXd;

int main()
{
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;

  MatrixXd G(3,3);
  /*乱数生成して，行列の値とする*/
  std::random_device rand; //乱数生成器の作成
  std::mt19937 mt(rand()); //乱数生成の方法
  std::uniform_int_distribution<> rand10(0,9); // U(0,9)(整数のみ)
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      G(i,j) = rand10(mt);
    }
  }
  std::cout << G << std::endl;

  MatrixXd G2(3,3);
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      G2(i,j) = rand10(mt);
    }
  }
  std::cout << G2 << std::endl;

  Eigen::VectorXd v = G.row(1);
  Eigen::VectorXd v2 = G2.row(0);

  std::cout << G - G2 << std::endl;
  std::cout << (v-v2).cwiseProduct(v-v2) << std::endl;
  
  return 0;
}