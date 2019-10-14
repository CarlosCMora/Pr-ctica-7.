#include <stdio.h>
#include<stdlib.h>

int main(){

	short _; //Variable entera con espacio de almacenaje pequeño.
	signed short s;
	unsigned short us;
	signed int __;//Variable entera con signo.
	int v_1;//Variable entera con signo.
	unsigned int v_2;//Variable entera sin signo.
	long v_3;//Variable entera con mucho espacio de almacenamiento.
	unsigned long ul;
	signed long sl;
	printf("Ingresa un dato de tipo short\n");
	scanf("%hd",&_);
	printf("Ingresa un dato de tipo signed int\n");
	scanf("%d",&__);
	printf("Ingresa un dato de tipo int\n");
	scanf("%d",&v_1);

	printf("Ingresa un dato de tipo unsigned int\n");
	scanf("%d",&v_2);
	printf("Ingresa un dato de tipo long\n");
	scanf("%ld",&v_3);
	printf("Ingresa un dato de tipo unsigned short\n");
	scanf("%hd",&us);
	printf("Ingresa un dato de tipo signed short\n");
	scanf("%hd",&s);
	printf("Ingresa un dato de tipo unsigned long\n");
	scanf("%ld",&ul);
	printf("Ingresa un dato de tipo signed long\n");
	scanf("%ld",&sl);
	printf("Valores leídos\n");
	printf("%hd\t%d\t%d\t%d\t%ld\t%hd\t%hd\t%ld\t%ld\n",_,__,v_1,v_2,v_3,us,s,ul,sl);
	return 0;

}
