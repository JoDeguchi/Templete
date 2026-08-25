#include <iostream>

////	課題１　　
//template<typename T>
//struct IsArray
//{
//	static constexpr bool value = false;
//};
//
//
//template<typename U,int N>
//struct IsArray<U[N]>
//{
//	static constexpr bool value = true;
//};
//
//int main()
//{
//	std::cout << IsArray<int>::value << std::endl;
//	std::cout << IsArray<int[10]>::value << std::endl;
//	std::cout<< IsArray<float[5]>::value << std::endl;
//
//}

//	課題２
template<typename T>
struct IsConst
{
	
	static constexpr bool value = false;
};

template<typename U>
struct IsConst<const U>
{
	static constexpr bool value = true;
};

int main()
{
	std::cout << IsConst<int>::value << std::endl;
	std::cout << IsConst<const int>::value << std::endl;
	std::cout<< IsConst<float>::value << std::endl;
	std::cout << IsConst<const float>::value << std::endl;
}