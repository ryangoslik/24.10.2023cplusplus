
#include <iostream>

using namespace std;
int main()
{
    /*
    Zad.1
     &***&
     **@**
     **@**
     &***&
     wiersze=4, kolumny=5
     */
     /* jeśli mamy tablice 2d to stosujemy 2 pętle */
    for (int wiersz = 0; wiersz < 4; wiersz++)
    {
        for (int kolumna = 0; kolumna < 5; kolumna++) {
           
                
                if (wiersz == 0) {
                    if (kolumna == 0 || kolumna == 4) {
                        cout << "&";
                    }
                    else {
                        cout << "*";
                    }
                }
                else if (wiersz == 1) {
                    if (kolumna == 2) {
                        cout << "@";
                    }
                    else {
                        cout << "*";
                    }
                }
                else if (wiersz == 2) {
                    if (kolumna == 2) {
                        cout << "@";
                    }
                    else {
                        cout << "*";
                    }
                }
                 else if (wiersz == 3) {
                    if (kolumna == 0 || kolumna == 4) {
                        cout << "&";
                    }
                    else {
                        cout << "*";
                    }
                }
            

         
            }
            cout << "\n";
        
    }
    
}
