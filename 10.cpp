#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <ctime>
using namespace std;

int main()
{
    inizio:
    cout<<" ____________________________________ \n";
    cout<<"|                                    |\n";
    cout<<"|          Benvenuto nel             |\n";
    cout<<"|        registro elettrico!         |\n";
    cout<<"|____________________________________|\n";
    sleep(1);
    system("cls");

    string user;
    cout<<"\n user: \n";
    cin>>user;

    while (user!="tchandradas" && user!="vkumar" && user!="gnatalizi" && user!="mbilello" && user!="psuiarko" && user!="mjovanovic" && user!="amizzan" && user!="nfiroz" && user!="gsingh" && user!="cmayer" && user!="dbuleandra" && user!="aorlandi" && user!="sdomeniconi" && user!="bpina" && user!="cmihalas" && user!="ecischele" && user!="jzadipohindri" && user!="dschiavo" && user!="esandri" && user!="ebelletto" && user!="dpasin")
    {
        printf("\a");
        sleep(1);
        system("color C4");
        cout<<"\n Errore, utente sbagliato! \n";
        sleep(1);
        system("cls");
        cout<<"\n user: \n";
        cin>>user;
        system("color 07");
    }

    system("cls");
    cout<<"\n Benvenuto, "<<user<<"!\n";
    sleep(1);
    system("cls");

    string passwordinput, password="studente123";
    cout<<"\n Confermiamo la tua identita' inserendo la tua password: \n";
    cin>>passwordinput;

    while (passwordinput!=password) {
        printf("\a");
        sleep(1);
        cout<<"\n Errore, password sbagliata! \n";
        sleep(1);
        system("color C4");
        system("cls");
        cout<<"\n password: \n";
        cin>>passwordinput;
        system("color 07");
    }

    int scelta;
    int sezione = 0;

    menu:
    cout<<"\n Salve " <<user<< "! Vuole andare nella zona \n";
    if (sezione != 1) cout<<"\n 1) voti \n";
    if (sezione != 2) cout<<"\n 2) note \n";
    if (sezione != 3) cout<<"\n 3) compiti \n";
    if (sezione != 4) cout<<"\n 4) giustifiche \n";
    cout<<"\n 0) Esci \n";
    cin>>scelta;

    switch (scelta) {

        case 1: {
            sezione = 1;
            system("cls");
            srand(time(0));
            cout<<"\n I tuoi voti:\n";
            cout<<"\n Matematica:    "<<rand()%10+1;
            cout<<"\n Italiano:      "<<rand()%10+1;
            cout<<"\n Storia:        "<<rand()%10+1;
            cout<<"\n Inglese:       "<<rand()%10+1;
            cout<<"\n Scienze:       "<<rand()%10+1;
            cout<<"\n Informatica:   "<<rand()%10+1;
            cout<<"\n Fisica:        "<<rand()%10+1;
            cout<<"\n Arte:          "<<rand()%10+1;
            cout<<"\n Ed. Fisica:    "<<rand()%10+1;
            cout<<"\n";
            goto menu;
        }

        case 2: {
            sezione = 2;
            system("cls");
            srand(time(0));

            string tipiNota[] = {
                "Disturbava i compagni durante la lezione.",
                "Non ha portato il materiale scolastico.",
                "Comportamento scorretto durante l'intervallo.",
                "In ritardo senza giustifica.",
                "Utilizzo del cellulare durante la lezione.",
                "Linguaggio inappropriato in classe.",
                "Non ha svolto i compiti assegnati.",
                "Ha risposto in modo maleducato al professore."
            };

            cout << "\n Le tue note:\n";
            int numNote = rand() % 4 + 2;
            for (int i = 0; i < numNote; i++) {
                int giorno = rand() % 28 + 1;
                int mese = rand() % 3 + 3;
                cout << "\n " << (giorno < 10 ? "0" : "") << giorno << "/"
                     << (mese < 10 ? "0" : "") << mese
                     << " - " << tipiNota[rand() % 8] << "\n";
            }
            goto menu;
        }

        case 3: {
            sezione = 3;
            system("cls");
            srand(time(0));

            string materie[] = {"Matematica", "Italiano", "Storia", "Inglese", "Scienze", "Informatica", "Fisica", "Arte"};
            string compiti[] = {
                "Esercizi sul libro pagg. 120-125",
                "Studiare il capitolo assegnato",
                "Completare la relazione",
                "Svolgere gli esercizi del workbook",
                "Ripassare gli appunti della lezione",
                "Completare il programma assegnato",
                "Leggere e riassumere il testo",
                "Risolvere i problemi assegnati"
            };

            cout << "\n I tuoi compiti:\n";
            int numCompiti = rand() % 4 + 3;
            for (int i = 0; i < numCompiti; i++) {
                int giorno = rand() % 30 + 1;
                cout << "\n " << materie[rand() % 8]
                     << " (consegna " << giorno << "/05)"
                     << ": " << compiti[rand() % 8] << "\n";
            }
            goto menu;
        }

        case 4: {
            sezione = 4;
            system("cls");
            srand(time(0));

            string motiviGiust[] = {
                "malattia (febbre)",
                "visita medica",
                "problemi con i mezzi pubblici",
                "lutto familiare",
                "motivi familiari",
                "malattia"
            };

            cout << "\n Le tue giustifiche:\n";
            int numGiust = rand() % 4 + 3;
            for (int i = 0; i < numGiust; i++) {
                int giorno = rand() % 28 + 1;
                int mese = rand() % 12 + 1;
                int giustificata = rand() % 5;
                cout << "\n " << (giorno < 10 ? "0" : "") << giorno << "/"
                     << (mese < 10 ? "0" : "") << mese;
                if (giustificata != 0)
                    cout << " - Assenza giustificata: " << motiviGiust[rand() % 6] << "\n";
                else
                    cout << " - Assenza NON giustificata\n";
            }
            goto menu;
        }

        case 0: {
            sezione = 0;
            system("cls");
            goto inizio;
        }

        default: {
            cout<<"\n Scelta non valida!\n";
            sleep(1);
            goto menu;
        }
    }

    return 0;
}
