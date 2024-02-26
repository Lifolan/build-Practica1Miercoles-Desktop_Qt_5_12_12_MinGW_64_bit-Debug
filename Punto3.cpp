# include <iostream>

using namespace std;

int Ejercicio3(){
    cout<<"Ejercicio3"<<endl;

    float abril;
        float agosto;
        float day;
        float diciembre;
        float enero;
        float febb;
        float febrero;
        float julio;
        float junio;
        float marzo;
        float mayo;
        float mon;
        float noviembre;
        float octubre;
        float septiembre;
        cout << "Ingrese el numero del mes, de acuerdo a las opciones: " << endl;
        cout << "Enero:1, Febrero:2, Marzo:3, Abril:4, Mayo:5, Junio:6, Julio:7, Agosto:8, Septiembre:9, Octubre:10, Noviembre:11, Diciembre:12, Bisiesto: 13" << endl;
        cin >> mon;
        cout << "Ingrese dia(numero): " << endl;
        cin >> day;
        enero = 1;
        febrero = 2;
        febb = 13;
        marzo = 3;
        abril = 4;
        mayo = 5;
        junio = 6;
        julio = 7;
        agosto = 8;
        septiembre = 9;
        octubre = 10;
        noviembre = 11;
        diciembre = 12;
        if (mon<=13) {
            if ((mon==enero) || (mon==marzo) || (mon==mayo) || (mon==julio) || (mon==agosto) || (mon==octubre) || (mon==diciembre)) {
                if (day<=31) {
                    cout << day << "/" << mon << " es una fecha valida" << endl;
                } else {
                    cout << day << "/" << mon << " es una fecha invalida." << endl;
                }
            } else {
                if ((mon==abril) || (mon==junio) || (mon==septiembre) || (mon==noviembre)) {
                    if (day<=30) {
                        cout << day << "/" << mon << " es una fecha valida" << endl;
                    } else {
                        cout << day << "/" << mon << " es una fecha invalida." << endl;
                    }
                } else {
                    if ((mon==febrero) || (mon==febb)) {
                        if (day<=28) {
                            cout << day << "/" << mon << " es una fecha valida" << endl;
                        } else {
                            if (day<=29) {
                                cout << day << "/" << mon << " es una fecha valida en bisiesto." << endl;
                            } else {
                                cout << day << "/" << mon << " es una fecha invalida" << endl;
                            }
                        }
                    }
                }
            }
        } else {
            cout << mon << " es un mes invalido" << endl;
    }
    return 0;
}
