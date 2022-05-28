// Copyright 2021 TU Munich, Introduction To ROS, Markus Ryll
#ifndef CALCULATOR
#define CALCULATOR

#include <math.h>
#include <iostream>

class MyMath {
 private:
  const double kPi = 3.14156;
 public:
  double Sum_(double a, double b);
  double Square_(double a);
  double Sub_(double a, double b);
  double Div_(double a, double b);
  double Sum_(double v[3]);
  double CircSurf_(double r);
  double CircCirc_(double r);
  double VectorProduct_(double a[3], double b[3]);
  double** MatrixMultiplication_(double a[2][3], double b[3][4]);
  double sinus_(double alpha);
};

#endif  // CALCULATOR
