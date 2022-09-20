#include <iostream>
#include <fstream>
using namespace std;

struct paslaugos{
    int nr;
    string pavadinimas;
    int kaina;
};

void ABC(int a, paslaugos X[])
{

for (int i=0; i<a; i++) {
            for ( int j=i+1; j<a; j++) {
                if (X[i].pavadinimas > X[j].pavadinimas) {
                    swap(X[i], X[j]);
                }
            }
        }
};

void KAINA(int a, paslaugos X[]){
        for (int i=0; i<a; i++) {
            for ( int j=i+1; j<a; j++) {
                if (X[i].kaina > X[j].kaina) {
                    swap(X[i], X[j]);
                }
            }
        }
    };

void KAINA2(int a, paslaugos X[]){
        for (int i=0; i<a; i++) {
            for ( int j=i+1; j<a; j++) {
                if (X[i].kaina < X[j].kaina) {
                    swap(X[i], X[j]);
                }
            }
        }
    };

int main()
{
    ifstream fin("data.txt");
    int a;
    int y;
    fin >> a;
    paslaugos X[a];

    for (int i=0; i<a; i++){
        fin >> X[i].nr >> X[i].pavadinimas >> X[i].kaina;
    }

    cout << "Pasirinkite pagal ka norite surikiuot" << endl;
    cout << "Spauskite 1, jei norite rikiavimo pagal ABC" << endl;
    cout << "Spauskite 2, jei norite rikiavimo pagal KAINA" << endl;
    cout << "Spauskite 3, jei norite rikiavimo pagal KAINA nuo didziausios" << endl;
    cin >> y;

    switch(y){
    case 1:
        ABC(a,X);
        break;
    case 2:
        KAINA(a,X);
        break;
    case 3:
        KAINA2(a,X);
        break;
    }

 /*   if (y==1) {
        ABC(a,X);
    };
    if (y==2) {
        KAINA(a,X);
    }
    */
    for (int i=0; i<a; i++){
        cout << X[i].nr << X[i].pavadinimas << X[i].kaina << endl;
    }
    return 0;
}
