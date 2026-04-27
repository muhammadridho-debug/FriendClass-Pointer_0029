#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;
class LayangLayang {
private:
    double d1, d2;
    double sisi1, sisi2;

public:
    
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
    
    void inputData() {
        cout << "--- Input Data Layang-Layang ---" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi 1: ";
        cin >> sisi1;
        cout << "Masukkan sisi 2: ";
        cin >> sisi2;
    }

    friend void tampilkanKeliling(LayangLayang &layang, BelahKetupat &belah);
};

class BelahKetupat {
private:
    double d1, d2;
    double sisi;

public:
    void inputData() {
        cout << "--- Input Data Belah Ketupat ---" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi: ";
        cin >> sisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
    
    friend void tampilkanKeliling(LayangLayang &layang, BelahKetupat &belah);
};

void tampilkanKeliling(LayangLayang &layang, BelahKetupat &belah) //lengkapi disini
{
    double kelilingLayang = 2 * (layang.sisi1 + layang.sisi2);
    double kelilingBelah = 4 * belah.sisi;

    cout << "\n--- Hasil Keliling ---" << endl;
    cout << "Keliling Layang-Layang : " << kelilingLayang << endl;
    cout << "Keliling Belah Ketupat: " << kelilingBelah << endl;
}

int main() {
    
    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelah;

    ObjectLayang.inputData();
    cout << endl;
    ObjectBelah.inputData();
    
    cout << "\n--- Hasil Luas ---" << endl;
    cout << "Luas Layang-Layang     : " << ObjectLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat    : " << ObjectBelah.hitungLuas() << endl;

    tampilkanKeliling(ObjectLayang, ObjectBelah);
}