#include<iostream>

class Parent
{
public:
	Parent()
	{
		std::cout << "inside Parent parameterless" << std::endl;
	}
	Parent(int a, int b)
	{
		std::cout << "inside Parent parameterised" << std::endl;
	}
};
class Child :Parent
{
public:
	const int x;
	const int y;
	//int y;


	Child(int a, int b, int c, int d) :Parent(a, b), x(c), y(d)
	{
		//this->y=a;
		std::cout << "inside Child parameterised" << std::endl;
	}
	Child() :x(10), y(20)
	{
		std::cout << "inside Child parameterless" << std::endl;
	}
};
int main()
{

	Child c(10, 20, 30, 40);
	//Child d;


	return 0;
}