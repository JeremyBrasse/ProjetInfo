#include <stdio.h>
#include <time.h>
#include "damier.h"
#include "Lesfctdedeplacementdespions.h"
#include "affichagemode1.h"





void fonctionmode1();
void fonctionmode2();
void fonctionmode3();
//void fonctionmode4();



int main() {

	int bool=0;
    fonctionturorielmode1();
	//Menu Principal
while (bool==0) {

    printf("        Bievenue dans le jeu de Halma \n");
    printf("1. Voulez vous jouer une personne vs une personne : 1 \n");
    printf("2. Voulez vous jouer a une personne vs l'ordinateur : 2\n");
    printf("3. Voulez vous jouer a quatres personne : 3\n");
    printf("4. Voulez vous voir jouer deux ordinateur c.a.d mode Machine vs Machine : 4\n");
    int nombredejoueur;
    srand(time(NULL));
    scanf("%d" ,&nombredejoueur);

	switch (nombredejoueur){
		case 1:
			bool=1;
            fonctionmode1();
		break;
		case 2:
			bool=1;
            fonctionmode2();
		break;
		case 3:
            bool=1;
            fonctionmode3();
            break;
		case 4:
            bool=1;
            fonctionmode4();
		break;
		default:
			bool=0;
			printf("Veuillez sélectioner un mode existant c'est a dire compris en 1 et 4 inclus\n");

	}
}
    return 0;
}
