#include <stdio.h>
#include <stdlib.h>

int fibbonacci(int n); 
int main() {

int num=0;
printf("\n Ingrese un numero: ");
scanf("%d",&num);

int Ans=num+fibonacci(num);
printf("\n %d + %d = %d",num,fibonacci(num),Ans);
	return 0;
}
int fibonacci (int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{	
	return (fibonacci(n-1) + fibonacci(n-2));
	}
}
