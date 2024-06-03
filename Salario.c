/*Nombre: Albuja Zambrano Matias Andre
Fecha: 02/06/2024 
4. Calcular el nuevo salario de un obrero si obtuvo un 
incremento del 25% sobre su salario anterior 
*/
#include<stdio.h>
int main(){
    float Salario, Incremento, NuevoSalario;
    printf("\nIntroduce el salario del trabajador");
    scanf("%f",&Salario);
    Incremento=Salario*0.25;
    NuevoSalario=Salario+Incremento;
    printf("\nEl nuevo salario es de: %2.f, tuvo un incremetno de: %.2f", NuevoSalario, Incremento);
}