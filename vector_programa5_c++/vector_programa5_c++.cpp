// vector_programa5_c++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Programador: Rodrigo Nandayapa Medina 2°O LIDST
#include <iostream>
#include <vector>
#include <string>
//Declaramos la libreria Vector 

using namespace std;

int main()
{//Declaramos un vector de cadenas de texto
    vector <string> aves = { "Loro", "Palomas", "Cocte" };
    cout << "Los Valores iniciales del vector son los siguientes: \n";
    for (int i = 0; i<aves.size();i++)
    {
       // cout << aves[i] << " ";
        cout << aves[i] << " ";
        cout << "\n";

    }
    //manera manual
    cout << "\n";
    aves.push_back("PERICO");
    aves.push_back("Chivo de las chivas");
    aves.push_back("Anzueto");
    cout << "Los Valores iniciales del vector son los siguientes: \n";
    for (int i = 0; i < aves.size();i++)
    {
        // cout << aves[i] << " ";
        cout << aves[i] << endl;

    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
