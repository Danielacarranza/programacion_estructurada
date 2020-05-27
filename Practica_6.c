#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i=0,suma=0,prom,num,c=-1;	

do{
	printf("Dame un numero");
	scanf("%d",&num);
	if(num<0)
	i=-1;
	else 
	suma=suma+num;
	c++; }while(i>=0);
	
	prom= suma/c;
	printf("suma=%d",suma);
	printf("promedio= %d",prom);

	
	
	
		
	return 0;
}
