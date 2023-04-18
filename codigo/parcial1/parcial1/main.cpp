#include <fstream>
#include <iostream>
using namespace std;


int main()
{
    char* data;
    ifstream archivoConHorario;
    archivoConHorario.open("C:/Users/keyner/Desktop/horario.txt");

    archivoConHorario>>data;
    for(int i = 1; i <= 10000; i++)
     {
     archivoConHorario>>data;
     cout << data << endl;
     }
    cout<<data;
    archivoConHorario.close();

    return 0;
}


