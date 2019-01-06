#include <iostream>

using namespace std;

int main()
{
    cout << "Program Mengetahui Kuadran Titik Koordinat" << endl;
    float x,y;
    cout << "Masukan Nilai x: "; cin >> x; cout << endl;
    cout << "Masukan Nilai y: "; cin >> y; cout << endl;
    cout << "Posisi Titkik Berada di ";
    if (x>=0 && y>=0) { cout << "Kuadran 1" << endl;}
    else if (x>=0 && y<0) { cout << "Kuadran 2" << endl;}
    else if (x<0 && y<0) { cout << "Kuadran 3" << endl;}
    else if (x<0 && y>=0) { cout << "Kuadran 4" << endl;}
    return 0;
}
