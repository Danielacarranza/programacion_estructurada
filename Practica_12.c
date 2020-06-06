#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct Alumnos{
	int id;
	char first_name[30];
	char second_name[30];
	char last_name[30];
	char sec_last_name[30];
	char bday[30];
	char escuela[30];
	int semestre[30];
	char carrera [30];
	char genero [30];
};

int main() {
int num_alumnos, condicion_nombre,i, j,num_ids=-1;
struct Alumnos  alu[100], *p_al;
p_al=alu; 
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
		scanf ("%s", &p_al->first_name);
		fflush(stdin);
		printf ("\nIngresa tu apellido: \n");
		scanf ("%s", &p_al->last_name);
		fflush(stdin);
		printf ("\nIngresa tu segundo apellido: \n");
		scanf ("%s", &p_al->sec_last_name);
		fflush(stdin);
		printf ("\nIngresa tu cumpleaños: \n");
		scanf ("%s", &p_al->bday);
		fflush(stdin);
		printf ("\nIngresa tu escuela: \n");
		scanf ("%s", &p_al->escuela);
		fflush(stdin);
		printf ("\nIngresa tu semestre: \n");
		scanf ("%d", &p_al->semestre);
		fflush(stdin);
		printf ("\nIngresa tu carrera: \n");
		scanf ("%s", &p_al->carrera);
		fflush(stdin);
		printf ("\nIngresa tu genero: \n");
		scanf ("%s", &p_al->genero);
		fflush(stdin);
		p_al++;
		}
printf("Usuarios registrados");
printf("\n\nID %10s %10s %10s \n","NOMBRE","APELLIDO","SEGUNDO APELLIDO","CUMPLEAÑOS","ESCUELA","SEMESTRE","ESCUELA","CARRERA","GENERO");
p_al=alu; 
for (i=0; i<num_alumnos; i++){
	printf("%d %10s %10s %10s \n",p_al->id,p_al->first_name,p_al->last_name ,p_al->sec_last_name);
	p_al++;
}
			
	
	return 0;
	}
