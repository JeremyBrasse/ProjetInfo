//
//  mode4.c
//  Projetinfo
//
//  Created by Partouche on 12/12/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#include "mode4.h"



void fonctionmode4 (){


    //Remplissage de tout le tableau avec 0
   int damier[18][18];
    int i,j;
    for (i=0;i<18;i++)
    {
        for (j=0;j<18;j++)
        {
            damier[i][j]=0;
        }
    }
    for (i=0; i<18; i++){
        j=0;
        damier[i][j]=8;
    }
    for (j=0; j<18; j++){
        i=0;
        damier[i][j]=8;
    }
    for (i=0; i<18; i++){
        j=17;
        damier[i][j]=8;
    }
    for (j=0; j<18; j++){
        i=17;
        damier[i][j]=8;
    }
     //Remplissage du 1er jeu de pions dans le tableau du damier LES PIONS DU JOUEUR 1
     damier[1][1]=1;
    damier[1][2]=1;
    damier[1][3]=1;
    damier[1][4]=1;
    damier[1][5]=1;
    damier[2][1]=1;
    damier[2][2]=1;
    damier[2][3]=1;
    damier[2][4]=1;
    damier[2][5]=1;
    damier[3][1]=1;
    damier[3][2]=1;
    damier[3][3]=1;
    damier[3][4]=1;
    damier[4][1]=1;
    damier[4][2]=1;
    damier[4][3]=1;
    damier[5][1]=1;
    damier[5][2]=1;
    //Remplissage du 2ème jeu de pions dans le tableau du damier lES PIONS DU JOUEUR 2
    damier[16][16]=2;
    damier[16][15]=2;
    damier[16][14]=2;
    damier[16][13]=2;
    damier[16][12]=2;
    damier[15][16]=2;
    damier[15][15]=2;
    damier[15][14]=2;
    damier[15][13]=2;
    damier[15][12]=2;
    damier[14][16]=2;
    damier[14][15]=2;
    damier[14][14]=2;
    damier[14][13]=2;
    damier[13][16]=2;
    damier[13][15]=2;
    damier[13][14]=2;
    damier[12][16]=2;
    damier[12][15]=2;

    //affichage du plateau de jeu
    int bool1=1;
    int m=1, a;
    int Joueurquijoue=0;
    do {
        fonctionaffichagepion(damier, 18, 18, 2);
        int Aquiletour=m%2;
        if (Aquiletour!=0)
        {
            printf("\nA l'ordi 1 de jouer\n");
            fonctiondeplacementparlordi(damier, 1, 4, m-1);
        }
        else {
            printf("\nA l'ordi 2 de jouer\n");
            fonctiondeplacementparlordi(damier, 2, 4, m-1);
        }
        m++;
        a=m-1;
        if (a%200==0){
            printf("Petite pause dans le jeu histoire de voir l'évolution\n");
            printf("Les deux joueurs ont joué à eux deux %d coup(s). \n", m-1);
            a++;
            sleep(7);
        }

        detectiondevictoire (damier, Joueurquijoue, 2);
        system("clear");
    } while (bool1==1);

}

void fonctionmode5 (){



    //Remplissage de tout le tableau avec des 0
    int damier[18][18];
    int i,j;
    for (i=0;i<18;i++)
    {
        for (j=0;j<18;j++)
        {
            damier[i][j]=0;
        }
    }

    for (i=0; i<18; i++){
        j=0;
        damier[i][j]=8;
    }
    for (j=0; j<18; j++){
        i=0;
        damier[i][j]=8;
    }
    for (i=0; i<18; i++){
        j=17;
        damier[i][j]=8;
    }
    for (j=0; j<18; j++){
        i=17;
        damier[i][j]=8;
    }
    //Remplissage du 1er jeu de pions dans le tableau du damier LES PIONS DU JOUEUR 1
    damier[1][1]=1;
    damier[1][2]=1;
    damier[1][3]=1;
    damier[1][4]=1;
    damier[2][1]=1;
    damier[2][2]=1;
    damier[2][3]=1;
    damier[2][4]=1;
    damier[3][1]=1;
    damier[3][2]=1;
    damier[3][3]=1;
    damier[4][1]=1;
    damier[4][2]=1;


    //Remplissage du 2ème jeu de pions dans le tableau du damier LES PIONS DU JOUEUR 2

    damier[16][16]=2;
    damier[16][15]=2;
    damier[16][14]=2;
    damier[16][13]=2;
    damier[15][16]=2;
    damier[15][15]=2;
    damier[15][14]=2;
    damier[15][13]=2;
    damier[14][16]=2;
    damier[14][15]=2;
    damier[14][14]=2;
    damier[13][16]=2;
    damier[13][15]=2;

    //Remplissage du 3ème jeu de pions dans le tableau du damier LES PIONS DU JOUEUR 4

    damier[16][1]=3;
    damier[16][2]=3;
    damier[16][3]=3;
    damier[16][4]=3;
    damier[15][1]=3;
    damier[15][2]=3;
    damier[15][3]=3;
    damier[15][4]=3;
    damier[14][1]=3;
    damier[14][2]=3;
    damier[14][3]=3;
    damier[13][1]=3;
    damier[13][2]=3;

    //Remplissage du 4ème jeu de pions dans le tableau du damier LES PIONS DU JOUEUR 3

    damier[1][16]=4;
    damier[1][15]=4;
    damier[1][14]=4;
    damier[1][13]=4;
    damier[2][16]=4;
    damier[2][15]=4;
    damier[2][14]=4;
    damier[2][13]=4;
    damier[3][16]=4;
    damier[3][15]=4;
    damier[3][14]=4;
    damier[4][16]=4;
    damier[4][15]=4;


    //affichage du plateau de jeu à 4 joueurs et déplacement de pions verifiés
    int bool1=1;
    int m=1, a;
    int Joueurquijoue=0;
    do {
        fonctionaffichagepion(damier, 18, 18, 4);
        int Aquiletour=m%4;
        if (Aquiletour==1)
        {
            printf("\nAu joueur 1 de jouer\n");
            fonctiondeplacementparlordi(damier, 1, 5, m-1);
            Joueurquijoue=1;
        }
        else if(Aquiletour==2)
        {
            printf("\nAu joueur 2 de jouer\n");
            fonctiondeplacementparlordi(damier, 2, 5, m-1);
            Joueurquijoue=2;
        }
        else if (Aquiletour==3)
        {
            printf("\nAu joueur 3 de jouer\n");
            fonctiondeplacementparlordi(damier, 3, 5, m-1);
            Joueurquijoue=3;
        }
        else
        {
            printf("\nAu joueur 4 de jouer\n");
            fonctiondeplacementparlordi(damier, 4, 5, m-1);
            Joueurquijoue=4;
        }
        m++;
         a=m-1;
        if (a%200==0){
            printf("Petite pause dans le jeu histoire de voir l'évolution\n");
            printf("Les quatres joueurs ont joué à eux quatres %d coup. \n", m-1);
            a++;
            sleep(7);
        }

        detectiondevictoire (damier, Joueurquijoue, 4);
        system("clear\n");
    } while (bool1==1);
}


