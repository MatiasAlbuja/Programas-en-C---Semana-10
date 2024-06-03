/*Nombre: Albuja Zambrano Matias Andre
Fecha: 02/06/2024  
2. Una tienda ofrece un descuento del 
15% sobre el total de la compra y un cliente desea saber 
cuanto deberá pagar finalmente por su compra.
*/
#include<stdio.h>
int main(){
    //Obtencion de datos
    float TotalCompra, Compra, Descuento;
    printf("\nIngrese la compra");
    scanf("%f",&Compra);
    //Descuento aplicado en la compra
    Descuento=Compra*0.15;
    TotalCompra=Compra-Descuento;
    printf("\nEl valor de la compra es de: %.2f, con el descuento es de: %.2f", Compra, TotalCompra);
    printf("\nEl descuento es de: %.2f", Descuento);
}