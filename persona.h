//
// Created by Usuario on 28/4/2023.
//

#ifndef ESTRUCTURAS_AUTOREFERENCIADAS_PERSONA_H
#define ESTRUCTURAS_AUTOREFERENCIADAS_PERSONA_H


typedef struct persona {
    int dni;
    struct persona * conocido;
}Persona;

Persona * newPersona ( int dni );

#endif //ESTRUCTURAS_AUTOREFERENCIADAS_PERSONA_H
