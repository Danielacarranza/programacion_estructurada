#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a=5, b=2, c;
c=a+b;
printf("%d + %d = %d\n",a,b,c);
c=a-b;
printf("%d - %d = %d\n",a,b,c);
c=a*b;
printf("%d * %d = %d\n",a,b,c);
c=a%b;
printf("%d mod %d = %d\n\n\n",a,b,c);
a=++a;
b=--b;
printf("Incremento y decremento en a= %d y b= %d\n\n\n",a,b);
if (a>b)
printf("%d es mayor que %d\n",a,b);
c=6;
b=++b;
if(a==c)
printf("a es igual que c\n\n\n",a,c);
c= a<b||b<1;
printf("operador de or= %d\n",c);
c=a>b&&b>0;
printf("operador de and= %d\n",c);
c=!a>b&&b>0;
printf("operador de not= %d\n\n\n",c);
system("pause");
}
