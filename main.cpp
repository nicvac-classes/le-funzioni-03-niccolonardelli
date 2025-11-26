#include <iostream>
#include <cmath>
using namespace std;
float calcolarea(float r)
{
    float area;
    area = M_PI * r *r;
    return area;
}
float calcolacirconferenza (float r)
{
    float circonferenza;
    circonferenza = 2*r*M_PI;
    return circonferenza;
}
void main()
{
    float circonferenza, area, r1, r2;
    cout << "inserisci i valori dei raggi di due cerchi"<< endl;
    cin>>r1>>r2;
    area = calcolarea(r1);
    circonferenza = calcolacirconferenza(r1);
    cout << "l'area del cerchio del primo raggio ha un valore di " << area << endl;
    cout << "la circonferenza del cerchio del primo raggio ha un valore di " << circonferenza << endl;
    area = calcolarea(r2);
    circonferenza = calcolacirconferenza(r2);
    cout << "l'area del cerchio del secondo raggio ha un valore di " << area << endl;
    cout << "la circonferenza del cerchio del secondo raggio ha un valore di " << circonferenza << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
