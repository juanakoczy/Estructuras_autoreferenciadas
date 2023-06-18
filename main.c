#include <stdio.h>
#include "persona.h"

int main() {
    Persona * juan = newPersona(38070675);
    Persona * maria = newPersona(41563258);
    Persona * pedro = newPersona(35268741);
    Persona * luis = newPersona(23547965);

    pedro->conocido = juan;
    maria->conocido = luis;
    luis->conocido = juan;


    return 0;
}
