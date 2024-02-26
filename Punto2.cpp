# include <iostream>

using namespace std;

int Ejercicio2(){
    cout<<"Ejercicio2"<<endl;

    float aux;
    float aux2;
    float aux3;
    float aux4;
    float aux5;
    float aux6;
    float aux7;
    float aux8;
    float aux9;
    int contbilletescincomil;
    int contbilletescincuentamil;
    int contbilletesdiezmil;
    int contbilletesdosmil;
    int contbilletesmil;
    int contbilletesveintemil;
    int contmoncincuenta;
    int contmondoscientos;
    int contmonedascien;
    int contmonedascincuenta;
    int contmonquinientos;
    float devolucion;
    float pago_cliente;
    float resto;
    float total_pago;
    cout << "Ingrese cantidad total a devolver:" << endl;
    cin >> total_pago;
    cout << "Ingrese valor pagado(ingrese un valor superior a la candidad total a devolver, ajustado a la siguiente unidad de mil):" << endl;
    cin >> pago_cliente;
    contbilletescincuentamil = 0;
    contbilletesveintemil = 0;
    contbilletesdiezmil = 0;
    contbilletescincomil = 0;
    contbilletesdosmil = 0;
    contbilletesmil = 0;
    contmonquinientos = 0;
    contmondoscientos = 0;
    contmonedascien = 0;
    contmoncincuenta = 0;
    devolucion = total_pago;
    cout << "Su combinacion de dinero a devolver es : " << devolucion << endl;
    if (pago_cliente < total_pago) {
        cout << "Dinero insuficiente, por favor ingrese mas dinero" << endl;
    } else {
        contbilletescincuentamil = int(devolucion/50000);
        aux = devolucion-50000*contbilletescincuentamil;
        contbilletesveintemil = int(aux/20000);
        aux2 = aux-20000*contbilletesveintemil;
        contbilletesdiezmil = int(aux2/10000);
        aux3 = aux2-10000*contbilletesdiezmil;
        contbilletescincomil = int(aux3/5000);
        aux4 = aux3-5000*contbilletescincomil;
        contbilletesdosmil = int(aux4/2000);
        aux5 = aux4-2000*contbilletesdosmil;
        contbilletesmil = int(aux5/1000);
        aux6 = aux5-1000*contbilletesmil;
        contmonquinientos = int(aux6/500);
        aux7 = aux6-500*contmonquinientos;
        contmondoscientos = int(aux7/200);
        aux8 = aux7-200*contmondoscientos;
        contmonedascien = int(aux8/100);
        aux9 = aux8-100*contmonedascien;
        contmonedascincuenta = int(aux9/50);
        resto = aux9-50*contmoncincuenta;
        cout << "Billetes de cincuenta mil: " << contbilletescincuentamil << endl;
        cout << "Billetes de veintemil: " << contbilletesveintemil << endl;
        cout << "Billetes de diezmil: " << contbilletesdiezmil << endl;
        cout << "Billetes de cincomil: " << contbilletescincomil << endl;
        cout << "Billetes de dosmil: " << contbilletesdosmil << endl;
        cout << "Billetes de mil:" << contbilletesmil << endl;
        cout << "Monedas de quinientos: " << contmonquinientos << endl;
        cout << "Monedas de doscientos: " << contmondoscientos << endl;
        cout << "Monedas de cien: " << contmonedascien << endl;
        cout << "Monedas de cincuenta: " << contmonedascincuenta << endl;
        cout << "Resto en dinero:" << resto << endl;
    }
    return 0;
}
