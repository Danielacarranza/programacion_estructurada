#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[3][3];
	int num2,j,i;
printf("Ingrese el numero por el que se va a multiplicar ");
scanf("%d",&num2);
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("Ingrese un numero");
		scanf("%d",&num[i][j]);
		num[i][j]=num[i][j]*num2;
	}
}
printf("\nLa matriz resultante es: \n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d \t",num[i][j]);
	}
printf("\n");
}
	return 0;
}
