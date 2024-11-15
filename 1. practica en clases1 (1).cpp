#include <iostream>
using namespace std;

void mensaje()
{
    cout<<"Bienvenido, al sistema de pago de "<<endl;
    cout<<"servicios basicos"<<endl;
    cout<<"por favor ingrese los datos solicitados"<<endl;
    cout<<" por el cobrador"<<endl;
}

float descuento(float montopagar,int porc)
{   float res;
    res=(montopagar*porc)/100;
    return res;
}
int controlmeses(int totalmeses)
{
    int desc;
    if(totalmeses<3 && totalmeses >=1)
    {
        desc=0;
        return desc;
    } else
        {
                if(totalmeses>=3 && totalmeses <=4)
                    {
                        desc=10;
                        return desc;
                    }else
                    {
                    if(totalmeses>=5 && totalmeses <=8)
                    {
                        desc=18;
                        return desc;
                    }else
                    cout<<"Solicitar corte de servicio"<<endl;

                }
        }
}
int main()
{
    int descuento1,op,meses;
    float resultado2, montopagar;
    cout<<"1.- Agua"<<endl;
    cout<<"2.- Luz"<<endl;
    cout<<"3.- Internet"<<endl;
    cout<<"4.- Gas"<<endl;
    cout<<"5.- Telefono"<<endl;
    cout<<"6.- Salir"<<endl;


    cout <<"Ingrese que servicio desea cancelar:"<<endl;
    cin>>op;

    switch(op)
    {
    case 1: cout<<"SERVICIO  AGUA"<<endl;
            mensaje();
            cout<<"Ingresar cuantos meses desea pagar: "<<endl;
            cin>>meses;
            descuento1=controlmeses(meses);
            montopagar=meses*93;
            resultado2=descuento(montopagar,descuento1);
            cout<<"El monto a cancelar es :"<<montopagar<<" y su decuento es: "<<resultado2<<endl;
            cout<<"Por tanto el total a pagar con sudescunto es: "<<montopagar-resultado2<<endl;


            break;
    case 2:
            cout<<"SERVICIO  LUZ"<<endl;
            mensaje();
            cout<<"Ingresar cuantos meses desea pagar: "<<endl;
            cin>>meses;
            descuento1=controlmeses(meses);
            montopagar=meses*35;
            resultado2=descuento(montopagar,descuento1);
            cout<<"El monto a cancelar es :"<<montopagar<<" y su decuento es: "<<resultado2<<endl;
            cout<<"Por tanto el total a pagar con sudescunto es: "<<montopagar-resultado2<<endl;
            break;

    case 3:cout<<"SERVICIO  INTERNET"<<endl;
                mensaje();
            cout<<"Ingresar cuantos meses desea pagar: "<<endl;
            cin>>meses;
            descuento1=controlmeses(meses);
            montopagar=meses*209;
            resultado2=descuento(montopagar,descuento1);
            cout<<"El monto a cancelar es :"<<montopagar<<" y su decuento es: "<<resultado2<<endl;
            cout<<"Por tanto el total a pagar con sudescunto es: "<<montopagar-resultado2<<endl;
            break;

    case 4: cout<<"SERVICIO  GAS"<<endl;
            mensaje();
            cout<<"Ingresar cuantos meses desea pagar: "<<endl;
            cin>>meses;
            descuento1=controlmeses(meses);
            montopagar=meses*8.9;
            resultado2=descuento(montopagar,descuento1);
            cout<<"El monto a cancelar es :"<<montopagar<<" y su decuento es: "<<resultado2<<endl;
            cout<<"Por tanto el total a pagar con sudescunto es: "<<montopagar-resultado2<<endl;
            break;
    case 5:
            cout<<"SERVICIO  TELEFONO"<<endl;
            mensaje();
            cout<<"Ingresar cuantos meses desea pagar: "<<endl;
            cin>>meses;
            descuento1=controlmeses(meses);
            montopagar=meses*35;
            resultado2=descuento(montopagar,descuento1);
            cout<<"El monto a cancelar es :"<<montopagar<<" y su decuento es: "<<resultado2<<endl;
            cout<<"Por tanto el total a pagar con sudescunto es: "<<montopagar-resultado2<<endl;
            break;

    case 6: cout<<"Gracias por usar el programa"<<endl;
            break;

    default: cout<<"Te equivocaste opcion"<<endl;

    }

}
