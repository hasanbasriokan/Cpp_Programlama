
 * Burası çok önemli 
 * Function re-declaration != function overloadingtir. Function re-decleration ile function overloading birbirinden tamamen 
 * farklı kavramlardır.
 * Funciton re-declaration, fonksiyonu yeniden tanımlamayı ifade etmektedir. 
 * Özellikle dışarıdan gelen kütüphanelerde çok sık kullanılır. 

#include <iostream>

#include "hasan.h"
olsun. Buna bağlı olarakta 

void foo(int, int, int);

diye bir tanımlama olsun. Biz bu tanımlamaya müüdahale edip değiştiremeyiz.
O halde default argument vermek istersek nasıl yapabiliriz?

Altta bir daha tanımlama yapabiliriz. Yani;



void foo(int, int, int);
void foo(int, int, int = 10);

gibi bir tanımlama hata olmaz. 

Hatta biraz daha farklı bir sorunumuz olsun. 

void(int x, int y, int z); olsun. 
Biz x = 10 olarak default argument yapmak istersek nasıl yapabiliriz?
Yani 1. parametre için varsayılan argüman kullanmak istiyoruz. 

Onu da function repper yazarak halledebiliriz. 

void call_foo(int y, int z, int x = 10)
{
	foo(x,y,z);
}
