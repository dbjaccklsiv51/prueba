#include <iostream>
using namespace std;


int registrodatos()
{
    char nombre[15],apellido[15];
    int edad,ci,telefono;

    cout<<"Ingrese el nombre paciente: "<<endl;
    cin>>nombre;
    cout<<"Ingrese el apellido paciente: "<<endl;
    cin>>apellido;
    cout<<"Ingrese el edad paciente: "<<endl;
    cin>>edad;
    cout<<"Ingrese el ci paciente: "<<endl;
    cin>>ci;
    cout<<"Ingrese el telefono paciente: "<<endl;
    cin>>telefono;
    return edad;
}

int registropeso()
{
    int peso;
    cout<<"ingresar el peso del paciente"<<endl;
    cin>>peso;
    return peso;
}

void controlpresion(int presion)
{
    if (presion>=80 && presion <=120)
        cout<<"presion normal"<<endl;
    else
    {
        if (presion>120)
            cout<<"REvision Importante"<<endl;
        else
            cout<<"Revision"<<endl;
    }
}

void controlrespitario()
{  int res;
    cout<<"ingrese los resultados de su analisis respiratorio"<<endl;
    cin>>res;
}
int main()
{
    int edad1,peso1,PA,OP;
    do{
    cout<<"Clinica los Angeles"<<endl;

    cout<<"1.- Registro edad 1-15 "<<endl;
    cout<<"2.- Registro edad 16-19 "<<endl;
    cout<<"3.- Registro edad 20-59 "<<endl;
    cout<<"4.- Registro edad mayores a 59 "<<endl;
    cout<<"5.- Salir"<<endl;

    cout<<"Ingrese su opción"<<endl;

    cin>>OP;


    switch(OP)
    {
    case 1:  edad1= registrodatos();
              peso1= registropeso();
              cout<<"El peso del paciente es: "<<peso1<<endl;
              controlrespitario();
             break;
    case 2:
             edad1= registrodatos();
             cout<<"El peso del paciente es: "<<peso1<<endl;
              cout<<"Ingrese la presion arterial del paciente"<<endl;
              cin>>PA;
              controlpresion(PA);
              controlrespitario();
             break;
    case 3:
            edad1= registrodatos();
             cout<<"Ingrese la presion arterial del paciente"<<endl;
             cin>>PA;
             controlpresion(PA);
             controlrespitario();
             break;
    case 4:
            edad1= registrodatos();
            peso1= registropeso();
            cout<<"El peso del paciente es: "<<peso1<<endl;
            cout<<"Ingrese la presion arterial del paciente"<<endl;
            cin>>PA;
            controlpresion(PA);
             controlrespitario();

             break;
    case 5:
            cout<<"Gracias por usar el sistema de clinica los angeles"<<endl;
             break;
    default:

            cout<<"Selecciono una opcion incorrecta"<<endl;

    }
}while(OP==5);
/*

     cout<<"Clinica los angeles";
      edad1= registrodatos();

        if(edad1>=1 && edad1 <=15)
        {
           peso1= registropeso();
           cout<<"El peso del paciente es: "<<peso1;
           controlrespitario();
        }
        else
            {
            if(edad1>=16 && edad1 <=19)
                {
                    peso1= registropeso();
                    cout<<"El peso del paciente es: "<<peso1;
                    cout<<"Ingrese la presion arterial del paciente"<<endl;
                    cin>>PA;
                    controlpresion(PA);
                    controlrespitario();
                }else
                    { if(edad1>=20 && edad1 <=59)
                      {

                       cout<<"Ingrese la presion arterial del paciente"<<endl;
                        cin>>PA;
                        controlpresion(PA);
                        controlrespitario();
                      }else
                        {
                            peso1= registropeso();
                            cout<<"El peso del paciente es: "<<peso1;
                            cout<<"Ingrese la presion arterial del paciente"<<endl;
                            cin>>PA;
                            controlpresion(PA);
                            controlrespitario();
                        }
                    }


            }*/

}
