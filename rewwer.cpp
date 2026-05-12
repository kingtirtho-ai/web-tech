#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <ctime>
using namespace std;
int main ()
{
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
	string password;
	while (user!="tchandradas" || user!="vkumar" || user!="gnatalizi" || user!="mbilello" || user!="psuiarko" || user!="mjovanovic" || user!="amizzan" || user!="nfiroz" || user!="gsingh" || user!="cmayer" || user!="dbuleandra" || user!="aorlandi" || user!="sdomeniconi" || user!="bpina" || user!="cmihalas" || user!="ecischele" || user!="jzadipohindri" || user!="dschiavo" || user!="esandri" || user!="ebelletto" || user!="dpasin" ); //scrivi i nomi dei studenti //puoi controllare voti //generati da random
	printf("\a"); 
	sleep(1);	
	cout<<"\n Errore, utente sbagliato! \n";
	system("color B8") //scegli il color rosso a casa
	sleep(1);
	system("cls");
	return 0;
}
