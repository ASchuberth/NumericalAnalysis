#include "pch.h"
import NumAnalysis;

double f1(double x) {
	return std::pow(x, 2.0) - 5.0 * x - 10.5;
}

TEST(bisection, f1_root_1) {
  
	double tolerance = 0.001;

	double result = 0.0;//bisection(&f1, 0, 10, tolerance, 500);

	EXPECT_LE(f1(result), tolerance);

}