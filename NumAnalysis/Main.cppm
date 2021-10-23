import <iostream>;
import <math.h>;
import NumAnalysis;



double f(double x) {

	return std::pow(x,2.0) - 5.0 * x - 10.5;

}

int main() {



	std::cout << bisection(&f, -10, 0, 0.0001, 5000) << std::endl;


	//std::cout << f(-1.59268) << std::endl;

	return 0;
}