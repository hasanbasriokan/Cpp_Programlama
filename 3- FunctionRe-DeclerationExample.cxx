#include <iostream>
 
 
void foo(float, float, float);
void call_foo(float y, float z, float x = 10.0);


int main (){
	
	call_foo(2,3);
	
	return 0;
}


void foo(float x, float y, float z)
{
	printf("%.2f", (y+z) * x);}


void call_foo(float y, float z, float x)
{
	foo(x,y,z);
}
