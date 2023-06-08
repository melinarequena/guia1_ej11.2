//
// Created by Administrador on 6/6/2023.
//

#include "Departamentos.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>

Nodo *newNodo(char *barrio, int ambientes, float precio) {
    Nodo * auxDepartamento = NULL;
    auxDepartamento = malloc(sizeof(Nodo));
    if(auxDepartamento == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }else
        strcpy(auxDepartamento->barrio, barrio);
        auxDepartamento->ambientes = ambientes;
        auxDepartamento->precio = precio;
        auxDepartamento->sig = NULL;

    return auxDepartamento;
}

Lista * newLista(){
    Lista * auxLista = NULL;
    auxLista = malloc(sizeof(Lista));
    if(auxLista == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }else
        auxLista->cabecera = NULL;
    return auxLista;
}

void enlistar(Lista *lista, Nodo * nodoAInsertar) {
    if(lista->cabecera == NULL){
        lista->cabecera = nodoAInsertar;
    }else{
        Nodo * aux = lista->cabecera;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nodoAInsertar;
    }
}

Usuario *newUsuario(char *barrio, int ambientes, float precio) {
    Usuario * auxUsuario = NULL;
    auxUsuario = malloc(sizeof(Usuario));
    if(auxUsuario == NULL){
        printf("Error al asignar memoria\n");
        exit -1;
    }else
        strcpy(auxUsuario->barrio, barrio);
        auxUsuario->ambientes = ambientes;
        auxUsuario->precio = precio;
    return auxUsuario;
}



void comparar(Lista *lista, Usuario *usuario) {
    int cont = 0;
    Nodo * aux = lista->cabecera;
    while(aux->sig != NULL){
        if(strcmp(aux->barrio, usuario->barrio)==0){
            if(aux->ambientes == usuario->ambientes){
                if(aux->precio < usuario->precio){
                    printf("Departamento encontrado:\nBarrio de %s, %d ambientes y precio de %.2f\n", aux->barrio, aux->ambientes, aux->precio);
                    cont++;
                }
            }
        }
        aux = aux->sig;
    }
    if(cont == 0){
        printf("No hubo coincidencias\n");
    }
}

void printear(Lista *lista) {
    int i=1;
    printf("Total de departamentos:\n");
    while(lista->cabecera != NULL){
        printf("Depa %d:\nBarrio de %s, %d ambientes y $%.2f\n", i, lista->cabecera->barrio, lista->cabecera->ambientes, lista->cabecera->precio);
        i++;
        lista->cabecera = lista->cabecera->sig;
    }
}







