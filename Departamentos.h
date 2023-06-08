//Una inmobiliaria posee una lista de registros con los siguientes campos: barrio,
//cantidad de ambientes y precio. Escribir un programa que lea del teclado: barrio,
//cantidad de ambientes mínima y precio máximo que está dispuesto a pagar el
//cliente a fin de listar todos los departamentos que se ajusten a las condiciones
//leídas.
// Created by Administrador on 6/6/2023.
//

#ifndef GUIA1_EJ11_2_DEPARTAMENTOS_H
#define GUIA1_EJ11_2_DEPARTAMENTOS_H

typedef struct nodo{
    char barrio[20];
    int ambientes;
    float precio;
    struct nodo * sig;
}Nodo;

typedef struct usuario{
    char barrio[20];
    int ambientes;
    float precio;
}Usuario;

typedef struct lista{
    Nodo * cabecera;
}Lista;

Nodo * newNodo(char * barrio, int ambientes, float precio);
Lista * newLista();

void enlistar(Lista * lista, Nodo * nodoAInsertar);

void llenarUsuario(Usuario * usuario);

Usuario * newUsuario(char * barrio, int ambientes, float precio);

void comparar(Lista * lista, Usuario * usuario);

void printear(Lista * lista);
#endif //GUIA1_EJ11_2_DEPARTAMENTOS_H
