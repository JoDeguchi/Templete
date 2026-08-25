#include <iostream>

template<typename T> struct IsPointer		//	typenameはclassと書いてもよい同じ
{
	static constexpr bool value = false;
};

template<typename U> struct IsPointer<U*>	//	もしポイントがついていたらこっちになる
{
	static constexpr bool value = true;
};

struct NotPointer :IsPointer<int>	//	上のほうを継承
{

};

int main()
{
	std::cout << IsPointer<int>::value << std::endl;
	std::cout << IsPointer<int*>::value << std::endl;
	std::cout << IsPointer<float>::value << std::endl;
	std::cout << IsPointer<float*>::value << std::endl;
	std::cout << NotPointer::value << std::endl;

}
