/* Nombre: Albuja Zambrano Matias Andre
Fecha: 02/06/2024 
1. Un estudiante desea saber cuál será su calificación final en la materia de programación. 
Dicha calificación se compone de los siguientes porcentajes:
55% del promedio de sus tres notas parciales
30% de la calificación del examen final 
15% de la calificación de un trabajo final.
*/
#include<stdio.h>
int main(){
    //Ingreso de notas
    float NotaFinal, Nota1, Nota2, Nota3, NotaEF, NotaTF;
    float Promedio;
    //Recopilacion de las notas
    printf("\nIngresar la nota1");
    scanf("%f",&Nota1);
    printf("\nIngresar la nota2");
    scanf("%f",&Nota2);
    printf("\nIngresar la nota3");
    scanf("%f",&Nota3);
    printf("\nIngresar la nota del examen final");
    scanf("%f",&NotaEF);
    printf("\nIngresar la nota del trabajo final");
    scanf("%f",&NotaTF);
    //Obtencio del promedio para obtener la nota final
    Promedio=(Nota1+Nota2+Nota3)/3;
    NotaFinal=Promedio*0.55+NotaEF*0.3+NotaTF*0.15;
    printf("\nLa nota final del estudiante es: %.2f", NotaFinal);
}
