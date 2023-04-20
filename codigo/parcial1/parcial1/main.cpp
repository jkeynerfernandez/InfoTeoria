#include <fstream>
#include <iostream>
using namespace std;

void diasSemana();
void semana();
void escriibirarchivo();

int main()
{
    char A[24][7];//hora- dia
    bool df=0;
    char fila;
    int puesto;
    char array[24]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
    char* nombredeldia[7]={"  Lunes     ","martes    ","miercoles ","jeves     ","viernes  ","sabado    ","domingo   " };
    int fila_num = 0,ocup;

    //inicializo en horas disponibles
    for(int i=0;i<=24;i++){
        for(int j =0;j<=7;j++){

            A[i][j]='-';
       }
    }
    //_____________


    cout<<endl;

    cout<<"- indica horario disponible"<<endl;


    do {



//___imprimo la matriz

    for(int k =0;k<=6;k++){


    cout<< nombredeldia[k];}

    for(int i=0;i<24;i++){
        cout<<endl;


        for(int j=0;j<7;j++){

          cout<<"|"<<A[i][j]<<"        ";}
        cout<<"|";}
        cout<<endl;
        for(int k =0;k<=21;k++){
        cout<<"-";}
        cout<<endl;




//Ingresamos la dia y hora
   bool roc;
   //escriibirarchivo();//prueba
   cout<<"agregar curso (1)"<<endl;cout<<"Para cancelar 0"<<endl;cin>>roc;
   if(roc==1){
   cout<<"extraer hora del archivo"<<endl;cin>>fila;
   cout<<"extrar dia del archivo "<<endl;cin>>puesto;

   for(int k=0;k<24;k++){
        if(array[k]==fila){
            fila_num=k;
        }
    }ocup=A[fila_num][puesto-1];//marcar como ocupado

//Ahora para canceelar reserva:

    cout<<"Ingrese 0 para salir ";cin>>df;
    }
   }while(df==1);


    return 0;
}

void escriibirarchivo(ofstream &archivo ){
    char* nombre;
    int hora;
    int dia;

    archivo.open("horario.txt", ios::out |ios::app);
    cout<<"curso"<< endl;
    cin>>nombre;

    cout<<"hora 0-23"<< endl;
    cin>>hora;

    cout<<"dia 1-7"<< endl;
    cin>>dia;

    archivo<<nombre<<""<<hora<<""<<dia<<endl;
    archivo.close();





}




//void semana ( ){
//    for(int dia =1 ;dia  <=7; dia++){

//        cout << diasSemana(dia)<<endl;
//        for (float hora=0.00; hora<=23.00;hora ++){
//            cout << hora <<endl;

//        }



//    }
//}

//void diasSemana(int dia){
//    switch (dia) {
//    case 1: cout<< "Lunes";
//        break;
//    case 2: cout<< "MARTES";
//        break;
//    case 3: cout<< "MIERCOLES";
//        break;
//    case 4: cout<< "JUEVES";
//        break;
//    case 5: cout<< "VIERNES";
//        break;
//    case 6: cout<< "SABADO";
//        break;
//    case 7: cout<< "DOMINGO";
//        break;

//    default:
//        break;


//    }

//}
