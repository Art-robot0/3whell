#include<stdio.h>

void f()
{
	#define a 3
	const int b = 4;
}

void g()
{
	printf("a=%d \n",a);
	printf("b=%d \n",b);

}

int main(int argc,char *argv[])
{
	f();
	g();
	
	printf("press enter to continue");
	getchar();
	return 0;
}
