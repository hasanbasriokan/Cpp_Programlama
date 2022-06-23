/* Çıktının 10 11 12 13 olmasını bekleriz. Çünkü varsayılan argüman
 * olan ifade her çağrıldığında ayrı ayrı ele alınacaktır.*/


#include <iostream>

int x = 10;

void func(int = x++);



int main(int argc, char **argv)
{
	func();
	func();
	func();
	func();
	
	return 0;
}

void func(int a)
{
	std::cout << "a= " << a  << "\n";
}



/*
 * Yukarıdaki kod ile aşağıdaki kod aynı işi yapmaktadır.
 * 
 * 
#include <iostream>

int x = 10;

void func(int);



int main(int argc, char **argv)
{
	func(x++);
	func(x++);
	func(x++);
	func(x++);
	
	return 0;
}

void func(int a)
{
	std::cout << "a= " << a  << "\n";
}
*/
