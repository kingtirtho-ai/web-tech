#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int scelta = 0;
    char tasto;

    do {

        system("cls");

        cout << " ******************************************************\n";

        if (scelta == 0)
            cout << " > 1. Gioco Indovinello\n";
        else
            cout << "   1. Gioco Indovinello\n";

        if (scelta == 1)
            cout << " > 2. Quiz\n";
        else
            cout << "   2. Quiz\n";

        if (scelta == 2)
            cout << " > 3. Fine\n";
        else
            cout << "   3. Fine\n";

        cout << " ******************************************************\n";

        tasto = _getch();//acquisisce il carattere senza mostrare in output il corrispondente carattere (non vedi nulla, ma memorizza)

        if (tasto == -32) {//-32 è un codice speciale che Windows usa nella console quando viene premuto un tasto speciale della tastiera, ad esempio: frecce ↑ ↓ ← → F1, F2...INS, DEL,HOME, END

            tasto = _getch();

           
            if (tasto == 72) { // Freccia SU

                scelta--;

                if (scelta < 0)
                    scelta = 2;
            }

            
            else if (tasto == 80) {// Freccia GIU

                scelta++;

                if (scelta > 2)
                    scelta = 0;
            }
        }

    } while (tasto != 13);//13 è il tasto INVIO

    system("cls");

    switch(scelta) {

        case 0:
            cout << "Hai scelto Gioco Indovinello";
            break;

        case 1:
            cout << "Hai scelto Quiz";
            break;

        case 2:
            cout << "Fine programma";
            break;
    }

    return 0;
}
