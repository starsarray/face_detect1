#include <iostream>
#include "math.h"
#include "matrix.hpp"

using namespace std;

// test

int main()
{
	std::cout << "hello,world..." << std::endl;

	math m(1, 2);
	std::cout << m.add() << std::endl;
	std::cout << m.max() << std::endl;

	matrix mat(2);
	std::cout << mat.get_d() << std::endl;

	std::cout << "end..." << std::endl;
	std::cout << "xiao"<< std::endl;
	std::cout << "hang"<< std::endl;
	std::cout << "xu"<< std::endl;
	std::cout << "hang"<< std::endl;
    std::cout << "家都没了" << std::endl;
	std::cout << "太6了" << std::endl;
	return 0;
}
