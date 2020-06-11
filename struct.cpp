#include<stdio.h>

struct Student
{
	const char* name;
	int age;
};

int main(int argc,char *argv[])
{
	Student s1 = {"zhang",30};
	Student s2 = {"wang",27};
	
	printf("press enter to continue");
	getchar();
	return 0;
}
