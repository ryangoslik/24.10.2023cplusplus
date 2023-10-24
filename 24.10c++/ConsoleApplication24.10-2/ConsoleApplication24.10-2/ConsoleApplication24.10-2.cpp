
#include <iostream>

using namespace std;
int main()
{
    /*
    Zad.1
     *****
     **@**
     **@**
     *****
     wiersze=4, kolumny=5
     */
     /* jeśli mamy tablice 2d to stosujemy 2 pętle */
    for (int wiersz = 0; wiersz < 4; wiersz++)
    {
        for (int kolumna = 0; kolumna < 5; kolumna++) {
            if ((wiersz == 1 && kolumna == 2) || (wiersz == 2 && kolumna == 2)) {
                cout << "@";
            }
            else
        
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
