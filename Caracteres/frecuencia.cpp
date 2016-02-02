#include <iostream>
#include <iomanip>
#include <map>

// iomanip: https://msdn.microsoft.com/es-mx/library/ydd54a6t.aspx
// map:     https://msdn.microsoft.com/en-us/library/s44w4h2s.aspx

using namespace std;

int main()
{
    // Matriz asociativa
    map<char, int> c;
    
    // Indice de matriz
    char caracter;
    
    string linea = "";
    
    cout << "Introduce texto para contar la frecuencia de caracteres..." << endl;
    cout << "Para finalizar solo presiona Ctrl + D (Unix) o Ctrl + Z (Windows)" << endl;
    
    while(cin.get(caracter) && !cin.eof())
        if (caracter >= 'a' && caracter <= 'z')
            c[caracter]++;
    
    cout << endl;
    
    // Escribimos la frecuencia
    for (caracter = 'a'; caracter <= 'z'; caracter++)
        cout << "  " << caracter;
 
    cout << endl;
     
    for (int i = 0; i != (26*3) + 2; i++)
        linea = linea + "-";
        
    cout << linea << endl;
    
    for (caracter = 'a'; caracter <= 'z'; caracter++)
        cout << setw(3) << c[caracter];
        
    cout << endl;
    
    return 0;
}