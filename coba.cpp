#include <iostream>           //file yang disertakan line 1 - 2
using namespace std;           //program utama lone 4 - 21

int main(){ //begin
    
    //numeric luas, P, L
    double Luas, P, L;
    //Display, "masukkan panjangnya : "
    cout << "masukkan panjangnya : ";
    //Accept P
    cin >> P;
    //Display, "masukkan lebarnya : "
    cout << "masukkan lebarnya : ";
    //Accept L
    cin >> L;
    //Compute Luas = P*L
    Luas = P*L;
    //Display, "Luasnya : " + Luas
    cout << "Luasnya : " << Luas;
}//end