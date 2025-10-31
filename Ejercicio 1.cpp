#include <iostream>
using namespace std;

int main() {
    int totalDias;
    cout << "Ingrese el número de días: ";
    cin >> totalDias;

    int años = 0, meses = 0, semanas = 0, dias = 0;

    while (totalDias >= 365) {
        años++;
        totalDias -= 365;
    }

    while (totalDias >= 30) {
        meses++;
        totalDias -= 30;
    }

    while (totalDias >= 7) {
        semanas++;
        totalDias -= 7;
    }

    dias = totalDias;

    cout << "Equivale a: " << años << " años, " << meses << " meses, "
        << semanas << " semanas, " << dias << " días." << endl;

    return 0;
}
