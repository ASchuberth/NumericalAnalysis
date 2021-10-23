
export module NumAnalysis;
import <iostream>;

// INTERFACE

// Public
export double bisection(double (*func)(double), double a, double b, double TOL,
	int MaxIter);

// Private



// IMPLEMENTATION
// 
// Public
double bisection(double (*func)(double), double a, double b, double TOL, 
	                    int MaxIter) {

	double result = 0.0;

	// Step 1
	double FA = func(a);
	
	// Step 2
	for (int i = 0; i <= MaxIter; i++) {

		// Step 3
		double p = a + (b - a) / 2;

		double FP = func(p);

		// Step 4
		if (FP == 0 || ((b - a) / 2 < TOL)) {
			return p;
		}

		// Step 5
		if (FA * FP > 0.0) {
			a = p;
			FA = FP;

		}
		else {
			b = p;
		}

	}

	// Step 6
	std::cout << "ERROR: Root could not be found!" << std::endl;

	return -1.0;

}

