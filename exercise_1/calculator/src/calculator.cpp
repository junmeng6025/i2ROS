// Copyright 2021 TU Munich, Introduction To ROS, Markus Ryll

#include "calculator.h"

  double MyMath::Sum_(double a, double b) {
        return a + b;
    }

  double MyMath::Square_(double a) {
        return a * a;
    }

  /* Add here the following functions:
  	* subtration
  	* division
  	* overloaded function to sum_ that sums a vector
    * surface of circle
    * circumference of circle
    * Vector product (3 * 3)
    * Matrix multiplication (2 x 2)
    * sin(a)
  */
  double MyMath::Sub_(double a, double b) {
    return a - b;
  }

  double MyMath::Div_(double a, double b) {
    return a / b;
  }

  double MyMath::Sum_(double v[3]) {
    double sum = 0;
    for (int i = 0; i < 3; i++) {
      sum += v[i];
    }
    return sum;
  }

  double MyMath::CircSurf_(double r) {
    return kPi * Square_(r);
  }

  double MyMath::CircCirc_(double r) {
    return 2*kPi*r;
  }

  double MyMath::VectorProduct_(double a[3], double b[3]) {
    double tmp = 0;
    for (int i = 0; i < 3; i++) {
      tmp += (a[i]*b[i]);
    }
    return tmp;
  }

  double** MyMath::MatrixMultiplication_(double a[2][3], double b[3][4]) {
    double** mat_multi = 0;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 4; j++) {
        mat_multi[i][j] = 0;
        for (int k = 0; k < 3; k++) {
          mat_multi[i][j] += (a[i][k]) * (b[k][j]);
        }
      }
    }
    return mat_multi;
  }

  double MyMath::sinus_(double alpha) {
    return sin(alpha);
  }

// separate main() into another .cc file
