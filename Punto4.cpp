# include <iostream>

using namespace std;

int Ejercicio4(){
    int num1;
        int num2;
        cout << "Ingrese primer numero entero:" << endl;
        cin >> num1;
        cout << "Ingrese segundo numero entero:" << endl;
        cin >> num2;
        if (num1<=2400) {
            if ((num1%100)<60) {
                num1 = num1+num2;
                if ((num1<=2400)) {
                    if ((num1%100)>=60) {
                        num1 = num1-(num1%100)+100+((num1%100)%60);
                    }
                    cout << "La hora es " << num1 << endl;
                } else {
                    cout << num1 << " es un tiempo invalido" << endl;
                }
            } else {
                cout << num1 << " es un tiempo invalido" << endl;
            }
        } else {
            cout << num1 << " es un un tiempo invalido" << endl;
    }
    return 0;
}
