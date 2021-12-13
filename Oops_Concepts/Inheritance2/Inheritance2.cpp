#include<iostream>
class animal
{
public:
	void eat()
	{
		std::cout << "Eating" << std::endl;
	}
};
class dog :public animal
{
public:
	void bark()
	{
		std::cout << "Barking" << std::endl;
	}
};
int main()
{
	dog d1;
	d1.eat();
	d1.bark();
	return 0;
}