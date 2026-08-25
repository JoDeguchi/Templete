
#include <iostream>


template<class T>

T max(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	float a = 10.1;
	float b = 10.2;

	std::cout << "max: "<< max(a, b)<<std::endl;
	std::cout << "max: "<< max(a, b)<<std::endl;
	std::cout << "max: "<< max(a, b)<<std::endl;
}

