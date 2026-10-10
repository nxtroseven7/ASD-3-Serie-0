#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float A;

    cout << "Enter the value of the real number you want to cubic root it, must be greater than or equal to 0:" << endl;

    do{
        cin >> A;
    }while(A < 0);

    if (A == 0) {
        cout << "The cubic root of the number 0 is 0" << endl;
        return 0;
    }

    double x_new = A / 3.0;
    double x_old;

    do{
        x_old = x_new;
        x_new = ((2 * x_old) + (A / (x_old * x_old))) / 3.0;
    } while (fabs(x_new - x_old) >= 0.000001);

    cout << "The cubic root of the number " << A << " is " << x_new << endl;

    return 0;
}