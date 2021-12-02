#include <iostream>
using namespace std;
#include <cstdlib>

int main()
{
setlocale(LC_ALL, "Spanish");

    const int pescadores=6;
    int codpescador, hora, tipocarnada, carnadatotal, codpescamax,captura=0;
    float pesopez,codcarnada1=0, codcarnada2=0, codcarnada3=0, porcaptura1=0,porcaptura2=0,porcaptura3=0,pesomax=0;;

    for(int x=0;x<pescadores;x++)
    {
        cout<<"Ingrese el codigo de pescador: ";
        cin>>codpescador;

        cout<<endl<<"Ingrese la hora: ";
        cin>>hora;

        int contpesca=0;
        float acupeso=0;
        bool b=0;

        while(hora>0)
        {
           cout<<endl<<"Ingrese el tipo de carnada: ";
           cin>>tipocarnada;


           cout<<endl<<"Ingrese el peso del pez: ";
           cin>>pesopez;

            if(pesopez>0)
            {
            contpesca++;
            acupeso+=pesopez;
            }



                switch(tipocarnada)
                {
                case 1:
                    codcarnada1++;
                    break;

                case 2:
                    codcarnada2++;
                    break;

                case 3:
                    codcarnada3++;
                    break;
                }



            cout<<endl<<"Ingrese la hora: ";
            cin>>hora;
        }

            if(b==0)
            {
                pesomax=pesopez;
                codpescamax=codpescador;
                b=1;
            }
                else
                {
                    if(pesopez>pesomax)
                    {
                    pesomax=pesopez;
                    codpescamax=codpescador;
                    }
                }

                carnadatotal=codcarnada1+codcarnada2+codcarnada3;
                porcaptura1=codcarnada1*100/carnadatotal;
                porcaptura2=codcarnada2*100/carnadatotal;
                porcaptura3=codcarnada3*100/carnadatotal;

                if(hora>=13 && hora<=19)
                {
                  captura++;
                }

        cout<<"El promedio del peso de los peces capturados para el pescador: "<<codpescador<<" es: "<<acupeso/contpesca;

    }


    cout<<endl<<"La cantidad de capturas realizadas entre las 13hs y las 19hs es de :"<<captura;
    cout<<endl<<"El porcentaje de captura realizada con la carnada 1, es de : "<<porcaptura1;
    cout<<endl<<"El porcentaje de captura realizada con la carnada 2, es de : "<<porcaptura2;
    cout<<endl<<"El porcentaje de captura realizada con la carnada 3, es de : "<<porcaptura3;
    cout<<endl<<"El pescador que saco el pez mas grande fue: "<<codpescamax<<" con un peso de: "<<pesomax;

return 0;
}
