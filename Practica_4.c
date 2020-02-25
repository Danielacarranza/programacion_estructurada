#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char op;
	float num1, num2, result=0.0f;
	printf("Welcome to simple calculator\n");
	printf("----------------------------\n");
	printf("number 1 \n");
	scanf("%f",&num1);
	printf("+ - * /\n");
	scanf(" %c",&op);
	printf("number 2 \n");
	scanf("%f",&num2);
	switch(op){
	
		case '+':
				result=num1+num2;
				break;
		case '-':
				result=num1-num2;
				break;
		case '*':
				result=num1*num2;
				break;
		case '/':
				result=num1/num2;
			
	default:printf("Invalid operator");
}
printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
	

	return 0;
}
