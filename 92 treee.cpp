#include <iostream>
#include <fstream>
using namespace std;

void cantHojasdes(int cantH, float montoCancelar,float &total)
{ float desc;
    if(cantH>100)
    {
        desc=(montoCancelar*10)/100;
        total=montoCancelar-desc;
        cout<<"Usted tiene un descuento por cantidad de hojas, por tanto cancelara: "<<total<<endl;
    }
    else
    {
        total=montoCancelar;
         cout<<"Usted tiene que cancelar:  "<<total<<endl;}
}
void mensaje1(char &res)
{
    cout<<"Desea anillar sus copias/impresiones s/n"<<endl;
    cin>>res;

}
void datos(int &cantho)
{
        cout<<"ingresa la cantidad de hojas que deseas sacar"<<endl;
        cin>>cantho;
}
float calculopago(int cantHojas, float precio)
{
    float res;
    res=cantHojas*precio;
    return res;
}

int main()
{       char op1,op2,op3,op4;
        int cantHojas;
        float resultado,res,total, TotconDes;

        float acumFotCarta=0, acumFotOficio=0, acumImprBNCarta=0, acumImpBNOfi=0,acumImprColorCarta=0, acumImpBColorOfi=0;

    int op;
    do{
        
    
    cout<<"FOTOCOPIAS DON ANGEL"<<endl;

    cout<<"1.- Fotocopias tamaño Carta --0.1 ctv."<<endl;
    cout<<"2.- Fotocopias tamaño oficio--0.2 ctv."<<endl;
    cout<<"3.- Impresiones tamaño Carta "<<endl;
    cout<<"4.- Impresiones tamaño Oficio "<<endl;
    cout<<"5.- Salir"<<endl;
    cout<< "Ingrese la opcion que desea realizar: "<<endl;
    cin>>op;
    switch (op)
    {
    case 1:
            datos(cantHojas);
            resultado=calculopago(cantHojas,0.1);
            cout<<" El totoal a cancelar por sus fotocopias es . "<<resultado<<endl;
            mensaje1(op2);
            if(op2=='s')
            {
                res=resultado+4;
                cout<<"El monto a cancelar mas el anillado es: "<<res<<endl;
            }
            else
                {res=resultado;
                    
                }

                cantHojasdes(cantHojas,res,total);
            
            acumFotCarta=acumFotCarta+total;

            break;
    case 2:
           datos(cantHojas);
            resultado=calculopago(cantHojas,0.2);
            cout<<" El totoal a cancelar por sus fotocopias es . "<<resultado<<endl;
            break;
    case 3:
           datos(cantHojas);
           cout<<"Desea impresion a color o blanco = N y Color=C"<<endl;
           cin>>op3;

            if(op3=='N')
            {  resultado=calculopago(cantHojas,0.2);
               cout<<" El totoal a cancelar por sus imprsiones es . "<<resultado<<endl;
            }
            else
            {
                resultado=calculopago(cantHojas,2);
                cout<<" El totoal a cancelar por sus imprsiones es . "<<resultado<<endl;
            }
            break;

    case 4:
         datos(cantHojas);
           cout<<"Desea impresion a color o blanco = N y Color =C"<<endl;
           cin>>op4;

            if(op4=='N')
            {  resultado=calculopago(cantHojas,0.5);
               cout<<" El totoal a cancelar por sus imprsiones es . "<<resultado<<endl;
            }
            else
            {
                resultado=calculopago(cantHojas,4);
                cout<<" El totoal a cancelar por sus imprsiones es . "<<resultado<<endl;

            }
            break;
    case 5:

        cout<<"GRacia por usar el programa"<<endl;
        cout<<"El total recaudado por item es: "<<endl;
        cout<<"Fotocopias tamano carta: "<<acumFotCarta<<endl;
       // cout<<"Fotocopias tamano oficio: "<<acumFotOficio<<endl;
       // cout<<"Impreiones tamano oficio Color: "<<acumImpBColorOfi<<endl;
       // cout<<"Impreiones tamano oficio BN: "<<acumImpBNOfi<<endl;
       // cout<<"Impreiones tamano carta BN: "<<acumImprBNCarta<<endl;
      //  cout<<"Impreiones tamano oficio Color: "<<acumImprColorCarta<<endl;

        break;

    default:
            cout<<"Selecciona una incorrecta opcion"<<endl;
        break;
    }
}while (op!=5);
}
