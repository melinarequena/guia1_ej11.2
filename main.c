#include <stdio.h>
#include "Departamentos.h"

int main(){
    Lista * lista = newLista();
    enlistar(lista, newNodo("Canitas", 3, 80000));
    enlistar(lista, newNodo("Palermo", 1, 20000));
    enlistar(lista, newNodo("Belgrano", 3, 80000));
    enlistar(lista, newNodo("Recoleta", 5, 100000));
    enlistar(lista, newNodo("Almagro", 3, 60000));
    enlistar(lista, newNodo("Devoto", 2, 50000));
    enlistar(lista, newNodo("Canitas", 3, 90000));
    enlistar(lista, newNodo("Olivos", 2, 40000));

    printear(lista);

    printf("Ingrese barrio deseado por el usuario, cantidad de ambientes y precio maximo\n");
    char barrio[20];
    int ambientes;
    float precio;

    gets(barrio);
    scanf("%d", &ambientes);
    scanf("%.2f", &precio);

    Usuario * user = (newUsuario(barrio, ambientes, precio));

    comparar(lista, user);



}