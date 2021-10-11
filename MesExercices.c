#include "MesExercices.h"
#include "MesFonctions.h"
#include "MesStructures.h"
#include <stdio.h>


void exercice1(){

    NombreRationnel monRatio = saisieNbRat();
    afficherNbRat(monRatio);
    NombreRationnel sommeMonRatio = sommeNbRat(monRatio , monRatio);
    NombreRationnel produitMonRat = produitNbRat(monRatio , monRatio);
    printf("La somme du nombre rationel avec lui meme donne %d/%d\n ", sommeMonRatio.numerateur, sommeMonRatio.denominateur);
    printf("La produit du nombre rationel avec lui meme donne %d/%d \n", produitMonRat.numerateur, produitMonRat.denominateur);

    return;
}

void exercice2(){

    Point1D Points[NB_POINTS_MAX];
    initTab1D(Points);
    int pointTot;
    int i = 0;

    printf("Combien de points voulez-vous donner?\n");
    scanf("%d", &pointTot);
    if(pointTot > NB_POINTS_MAX){
        printf("Il y a trop de points.\n");
    } else if (pointTot <= 0) {
        printf("Il ne peut pas avoir un total de points negatif...\n");
    }
    else {
        for (i = 0 ; i<pointTot ; i++){
            Points[i] = saisiPoint1D(); // Saisie des entiers du tableau.
        }
    }

    // Balayage des termes du tableau afin de preserver le plus grand entier.
    int max = Points[0].x;
    for (i = 0 ; i<pointTot ; i++){
        if (Points[i].x >= max) {
            max = Points[i].x ;
        }
    }

    printf(" Le plus grand entier de votre tableau est : %d\n", max);

    return;

}
void exercice3(){

    int compteur = 0;
    Point1D tabFinal[12]= {0};
    Point1D tabInitial[3][4];
    void initTab2D(tabInitial);

    // Saisie des valeurs dans le tableau 3x4.
    for ( int i = 0 ; i < 3; i ++){
        for ( int j = 0 ; j < 4 ; j++){
            tabInitial[i][j]=saisiPoint1D();

        }
    }

    // Copie du tableau 3x4 vers un tableau 12.
    for ( int i = 0 ; i < 3; i ++){
        for ( int j = 0 ; j < 4 ; j++){
            tabFinal[compteur].x=tabInitial[i][j].x;
            compteur+=1;
        }
    }

    // Affichage du tableau initial et final.

    printf("Tableau initial :\n");

    for ( int i = 0 ; i < 3; i ++){
        for ( int j = 0 ; j < 4 ; j++){
            printf("%d\t", tabInitial[i][j].x);
        }
        printf("\n");
    }

    printf("Tableau final :\n");

    for (int i = 0 ; i<12 ; i++){
        printf("%d\t", tabFinal[i].x);
    }


    return;
}