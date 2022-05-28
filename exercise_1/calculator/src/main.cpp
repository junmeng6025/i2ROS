#include "calculator.h"
#include<iostream>

int main() {
  MyMath math_;

  double v1[3] = {1, 2, 3};
  double v2[3] = {4, 5, 6};

  double A[2][3] = {{1, 2, 3},
                    {4, 5, 6}};

  double B[3][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12}};


  // std::cout << v1 << std::endl;
  // std::cout << A << std::endl;
  // Implement Input

  std::cout << "Sum is =  " << math_.Sum_(1.0, 1.0) << std::endl;
  std::cout << "Subtration is =  " << math_.Sub_(3.0, 1.0) << std::endl;
  std::cout << "Division is =  " << math_.Div_(18.0, 3.0) << std::endl;
  std::cout << "Sum of vector is =  " << math_.Sum_(v1) << std::endl;
  std::cout << "Surface of a circle is =  " << math_.CircSurf_(2.0) << std::endl;
  std::cout << "circumference of a circle is =  " << math_.CircCirc_(2.0) << std::endl;
  std::cout << "Vector product is =  " << math_.VectorProduct_(v1, v2) << std::endl;
  std::cout << "sin(Pi/6) is =  " << math_.sinus_(3.14156/6) << std::endl;
  std::cout << "Matrix multiplication is stored in =  " << math_.MatrixMultiplication_(A, B) << std::endl;

  return 0;
}
