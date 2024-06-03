/*Nombre: Albuja Zambrano Matias Andre
Fecha: 02/06/2024 
3. Determinar el área y perímetro de un rectángulo
*/
#include<stdio.h>
int main(){
    float Area, Perimetro, Lado, Ancho;
    printf("\nIngrese el lado");
    scanf("%f",&Lado);
    printf("\nIngrese el ancho");
    scanf("%f",&Ancho);
    Perimetro=(2*Lado)+(2*Ancho);
    Area=Lado*Ancho;
    printf("\nEl perimetro es de: %f, el area es de: %f", Perimetro, Area);
}