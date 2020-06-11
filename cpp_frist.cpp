#include<stdio.h>

int main(int argc,char *argv[]){
int c=0;
for(int i=0;i<10;i++)
{
	for(int j=0;j<10;j++)
	{
		c += i + j;
		printf("c=i+j= %d + %d = %d\n",i,j,c);
	}
}
printf("c=%d\n",c);
getchar();
return 0;
}
