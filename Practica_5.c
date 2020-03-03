#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0,suma=0,prom,num,c=-1;	

while(i>=0){
	printf("Dame un numero");
	scanf("%d",&num);
	if(num<0)
	i=-1;
	else 
	suma=suma+num;
	c++; }
	prom= suma/c;
	printf("suma=%d",suma);
	printf("prom= %d",prom);

	
	
	
		
	return 0;
}
