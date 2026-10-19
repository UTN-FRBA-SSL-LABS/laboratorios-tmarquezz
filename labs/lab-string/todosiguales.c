#include <stdio.h>
#include "String.h"

/*
 * todosiguales — imprime 1 si todos los argumentos son iguales, 0 si no.
 *
 * Uso: ./todosiguales hola hola hola  →  1
 *      ./todosiguales hola mundo      →  0
 *
 * Pista: compara cada argumento contra argv[1] usando AreEqual.
 *        Iterá con puntero (char **arg), no con indice entero.
 */

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    for (char **arg = argv + 2; *arg != NULL; arg++) {
        if (!AreEqual(argv[1], *arg)) {
            printf("0\n");
            return 0; // corta cuando no coindice
        }
    }
    
    printf("1\n"); // son todos iguales
    return 0;
}
