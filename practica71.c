#include <stdio.h>
#include<stdlib.h>

int main(){

	float v_f;
	double v_d;
	long double v_ld;
	printf("Ingresa un dato de tipo float\n");
	scanf("%f",&v_f);
	printf("Ingresa un dato de tipo double \n");
	scanf("%lf",&v_d);
	printf("Ingresa un dato de tipo long double\n");
	scanf("%Lf",&v_ld);

		printf("Valores leídos\n");
	printf("%f\t%e\t%g\n",v_f,v_f,v_f);	
	printf("%lf\t%le\t%lg\n",v_d,v_d,v_d);
	printf("%Lf\t%Le\t%Lg\n",v_ld,v_ld,v_ld);
	return 0;

}
