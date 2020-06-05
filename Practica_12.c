#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumnos{
	int id;
	char first_name[30];
	char second_name[30];
	char last_name[30];
	char sec_last_name[30];
};

int main() {
int num_alumnos, condicion_nombre,i, j,num_ids=-1;

struct Alumnos  alu[100];
printf ("Cuantos alumnos hay?: ");
scanf ("%d",&num_alumnos);
for (i=0; i<num_alumnos; i++){
		printf ("\nIngresa por favor tu id: \n");
		scanf ("%d", &alu[i].id);
		num_ids++;
		fflush(stdin);
				do{
			for (j=0; j<num_ids; j++){
				if (alu[j+1].id==alu[j].id){
					printf ("Numero de id invalido");
					printf ("\nIngresa por favor tu id: \n");
					scanf ("%d", &alu[j+1].id);
				}}}while(alu[i].id==alu[i-1].id);
				
		printf ("\nIngresa tu nombre: \n");
		scanf ("%s", &alu[i].first_name);
		fflush(stdin);
		printf ("\nIngresa tu apellido: \n");
		scanf ("%s", &alu[i].last_name);
		fflush(stdin);
		printf ("\nIngresa tu segundo apellido: \n");
		scanf ("%s", &alu[i].sec_last_name);
		fflush(stdin);}
printf("\n\nID %15s %15s %20s\n","NOMBRE","APELLIDO","SEGUNDO APELLIDO");
for (i=0; i<num_alumnos; i++){
	printf("%d %11s %14s %16s\n",alu[i].id ,alu[i].first_name ,alu[i].last_name ,alu[i].sec_last_name);
}
			
	
	return 0;
	}
