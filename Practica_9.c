#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i,j,x,mat[10],mat1[10],y=-1;
	char alumnos[10][8];
	printf("Bienvenido\n");
	for(i=0;i<1;i++){
		printf("\nIngrese la matricula del estudiante %d ",i+1);
		scanf("%d",&mat1[i]);
		mat[i]=mat1[i];
		y++;
		if(y>0){
		for(x=0;x<10;x++){
			do{
			if(mat1[i]==mat[x]){
				printf("Matricula ya ingresada, intente de nuevo  ");
				scanf("%d",&mat1[i]);
			}}while(mat1[i]==mat[x]);
		}}
		printf("\nIngrese el nombre del estudiante  ");
		scanf("%s",&alumnos[i][0]);
		printf("\nIngrese el primer apellido del estudiante  ");
		scanf("%s",&alumnos[i][1]);
		printf("\nIngrese el segundo apellido del estudiante  ");
		scanf("%s",&alumnos[i][2]);	
		printf("\nIngrese la fecha de nacimiento del estudiante dd/mm/aaaa  ");
		scanf("%s",&alumnos[i][3]);
		printf("\nIngrese el nombre de la facultad del estudiante  ");
		scanf("%s",&alumnos[i][4]);
		printf("\nIngrese el semestre del estudiante  ");
		scanf("%s",&alumnos[i][5]);
		printf("\nIngrese la carrera del estudiante  ");
		scanf("%s",&alumnos[i][6]);
		printf("\nIngrese el genero del estudiante F-femenino M-masculino  ");
		scanf("%s",&alumnos[i][7]);
		system("cls");
	}
	printf("Matricula\tNombre\t\tApellido_Paterno\tApellido_Materno\tFecha_de_Naciemiento\tFacultad\tSemestre\t\tCarrera\t\tSexo\n");
	for(i=0;i<1;i++){
	printf("%d\t",mat1[i]);
	printf("%s\t",alumnos[i][0]);
	printf("%s\t",alumnos[i][1]);
	printf("%s\t",alumnos[i][2]);
	printf("%s\t",alumnos[i][3]);
	printf("%s\t",alumnos[i][4]);
	printf("%s\t",alumnos[i][5]);
	printf("%s\t",alumnos[i][6]);
	printf("%s\t",alumnos[i][7]);
	printf("\n");
	}
	return 0;}
