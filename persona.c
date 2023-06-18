//
// Created by Usuario on 28/4/2023.
//

#include "persona.h"
#include <stdio.h>
#include "malloc.h"

Persona *newPersona (int dni){
    Persona * aux= NULL;

    aux = malloc (sizeof (Persona));

    if (aux == NULL){
        printf("No hay memoria suficiente.");
        exit (-1);
    }

    aux->dni = dni;
    aux->conocido = NULL;

    return aux;
}

