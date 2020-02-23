#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
char c ;
printf("Ingresa un caracter: ");
c=getchar();
int a = (int)c;
if(48<=a && a<=57)
printf("Numero\n");
else
if (65<=a && a<=90)
printf("Mayuscula\n");
else
if(97<=a && a<=122)
printf("Minuscula\n");
else
printf("simbolo\n");
system("PAUSE");	
}
  
 
