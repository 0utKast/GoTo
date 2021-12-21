int main()
{
    
    goto skip;
    int x{ 5 };
                 // error: este salto es ilegal porque...
                // esta variable inicializada está aún  en alcance en 'skip'
skip:
    x += 3;      // ¿Qué puede evaluar si x no ha sido inicializada?
    return 0;
}














/*#include <iostream>

void imprimeSonrisa(bool omitir)
{
    if (omitir)
        goto final; // salto adelante; etiqueta de declaración 'final' 
                    //es visible aquí porque tiene alcance de función

    std::cout << "sonríe";
final:
    ; // las etiquetas de declaración deben estar asociadas con una declaración
}

int main()
{ 
    setlocale(LC_ALL, "es_ES.UTF-8");
    imprimeSonrisa(true);  // salta sobre la declaración imprimir y no imprime nada
    imprimeSonrisa(false); // imprime "sonríe"

    return 0;
}*/





#include <iostream>
#include <cmath> // para función sqrt()

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    double x{};
otraVez: // esta es una etiqueta de declaración
    std::cout << "Escribe un número no negativo: ";
    std::cin >> x;

    if (x < 0.0)
        goto otraVez; // esta es la declaración goto
    std::cout << "La raíz cuadrada de  " << x << " es " << std::sqrt(x) << '\n';
    return 0;


}



