#include <iostream>
using namespace std;

enum 
estaciones  {
    primavera,  
       verano, 
      otono, 
       invierno,  
	      }; 
	      
int main() {
    int estacion;   

    cout << "ingrese un dato del 1 al 4 para obtener una estaci�n del a�o: ";
    cin >> estacion;
    
    switch (estacion) {
        case 1:
            cout << "Primavera" << endl;
            break;
        case 2:
            cout << "Verano" << endl;
             break;
        case 3:
            cout << "Oto�o" << endl;
            break;
        case 4:
            cout << "Invierno" << endl;
            break;
        default:
            cout << "el numero no aplica por favor ingresar otro dato" << endl;
    }

    return 0;
}
