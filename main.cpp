#include "Evaluador.h"
#include <fstream>
#include <math.h>
using namespace std;

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo de texto
void escribirNumeroTexto(string nombre_archivo, int num)
{
    ofstream archivo(nombre_archivo.c_str(), ios::in); // abre el archivo para escribir en el
    archivo<<num; // escribe en el archivo
    archivo.close(); // cierra el archivo
}
int leerNumeroTexto(string nombre_archivo)
{
    int numero; // crea la variable
    ifstream archivo(nombre_archivo.c_str(), ios::out); // abre el archivo para leerlo
    archivo>>numero; // lee los datos del archivo y los mete en la variable
    return numero; // retorna el valor
}
//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo de texto
void escribirStringTexto(string nombre_archivo, string str)
{
    ofstream archivo(nombre_archivo.c_str()); // abre el archivo para escribir en el
    archivo<<str; // escribe la variable al archivo
    archivo.close(); // cierra el archivo
}
string leerStringTexto(string nombre_archivo)
{
    ifstream archivo(nombre_archivo.c_str()); // abre el archivo para leerlo
    string str; // apertura de la variable
    archivo>>str; // lee los datos del archivo y los mete en la variable
    return str; //retorna la cadena ubicada al inicio del archivo de texto
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo binario
void escribirNumeroBinario(string nombre_archivo, int num)
{
    ofstream archivo(nombre_archivo.c_str()); // abre el archivo para escribir en el
    archivo.write((char*)&num,4); // escribe el valor de la variable en el archivo
    archivo.close(); // cierra el archivo
}
int leerNumeroBinario(string nombre_archivo)
{
    ifstream archivo(nombre_archivo.c_str()); // abre el archivo para lectura
    int num; // apertura de la variable
    archivo.read((char*)&num,10); // lee el archivo binario y escribe el valor a la variable
    return num; // retorna el valor ingresado

}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo binario
void escribirStringBinario(string nombre_archivo, string str)
{
    ofstream archivo(nombre_archivo.c_str()); // abre el archivo para escribir en el
    archivo.write(str.c_str(),15); // escribe los primeros 15 caracteres de la variable en el archivo
    archivo.close(); // cierra el archivo
}
string leerStringBinario(string nombre_archivo)
{
    ifstream archivo(nombre_archivo.c_str()); // abre el archivo para lectura
    char* cadena; // apertura de variable de tipo char apuntador
    cadena = new char[15]; // crea un arreglo de 15 caracteres para ingresar texto
    archivo.read(cadena,15); // lee los primeros 15 caracteres del archivo y los guarda en el arreglo
    return cadena;
}

//Devuelve true si encuentra str (dada) en un archivo dado el nombre
bool existe(string nombre_archivo, string str)
{
return false;
}

//Devuelve el numero mayor dado el nombre de un archivo binario
int obtenerMayor(string nombre)
{
ifstream in(nombre.c_str()); //abre el archivo para lectura
int tamano, num, num_mayor=0; //apertura de variables
in.seekg(0,ios::end); // se va al final del archivo para saber el tamaño total del mismo
tamano = in.tellg()/4; //encuentra el tamaño
in.seekg(0,ios::beg); // se va al comienzo del archivo

for(int i=0;i<tamano;i++)
{
    in.read((char*)&num,4); // lee el archivo y escribe el valor a la variable
    if(num>num_mayor)
    {
        num_mayor=num; // encuentra el numero mayor
    }
}
return num_mayor; // imprime el mismo
}
int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
