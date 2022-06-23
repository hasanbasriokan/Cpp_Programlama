/* NOT: Varsayılan argüman fonksiyonun bildiriminde ya da tanımında olabilir. Ancak hem bildiriminde hem de
 * tanımında olamaz. Bu durumda sentaks hatası oluşur.
 * 
 * Varsayılan argüman sadece ve sadece derleme zamanıyla (Compaile time) ilişkilidir. Çalışma
 * zamanı (Runtime) ile alakalı değildir. */

//1. Durum: Fonksiyonun bildiriminde olursa
#include <iostream>

void func(int = 10, int = 20, int = 30);



int main(int argc, char **argv)
{
	func(3,4,5);
	func(2,3);
	func(2);
	func();
	
	return 0;
}

void func(int x, int y, int z)
{
	std::cout << "x= " << x << "  y= " << y << "  z= "<< z  << "\n";
}


/*2. Durum: Fonksiyonun tanımında olursa;
 
  
#include <iostream>

void func(int x = 10, int y = 20, int z = 30)
{
	std::cout << "x= " << x << "  y= " << y << "  z= "<< z  << "\n";
}


int main(int argc, char **argv)
{
	func(3,4,5);
	func(2,3);
	func(2);
	func();
	
	return 0;
}

*/
