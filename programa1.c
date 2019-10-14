#include <stdio.h>

int main(){
	int a,b,c,d,f;
	short g,h,i,j;

	a = 5;
	b=8;
	c=10;
	d=12;
	f=45;

	printf("a > b= %d\n", a>b);
	printf("a < b= %d\n", a<b);
	printf("a >= b= %d\n", a>=b);
	printf("a <= b= %d\n", a<=b);
	printf("a == b= %d\n", a==b);
	printf("a != b= %d\n", a!=b);


	printf("a && b= %d\n", a&&b);
	printf("a || b= %d\n", a||b);
	printf("!a = %d\n", !a);
	g=16;
	h=8;
	i=4;
	j=2;
	printf("g>>h= %d\n",g>>h);
	printf("g>>j= %d\n",g>>j);
	printf("i<<j= %d\n",i<<j);
	printf("i<<h= %d\n",i<<h);
	return 0;

}

