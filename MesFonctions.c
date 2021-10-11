//
// Created by omara on 04/10/2021.
//
#include <stdio.h>
#include "MesFonctions.h"
#include "MesStructures.h"
#define NB_POINTS_MAX 100

/* Fonction qui initialise les valeurs d'un tableau de 100 points à dimension 1D à 0.
* Paramètres :
* - IN : Un tableau 1D de points à valeurs aléatoires.
* - OUT : Un tableau 1D de points à valeurs entières nulles.
*/
void initTab1D(Point1D tab1D[NB_POINTS_MAX]) {

    for (int i = 0; i < NB_POINTS_MAX; ++i) {
        tab1D[i].x = 0;
    }
    return;
}


/* Fonction qui initialise les valeurs d'un tableau 3*4 de points dimension 2D à 0.
* Paramètres :
* - IN : Un tableau 3*4 de points à valeurs aléatoires.
* - OUT : Un tableau 3*4 de points à valeurs entières nulles.
*/
void initTab2D(Point2D tab2D[3][4]) {
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 4; j++){
            tab2D[i][j].x = 0;
        }
    }
    return;
}

/* Fonction qui permet de saisir manuellement les valeurs des points d'un tableau de points à dimension 1D.
* Paramètres :
* - IN : Un tableau 1D de points à valeurs quelconque.
* - OUT : Un tableau 1D de points avec les valeurs entières saisies .
*/
Point1D saisiPoint1D(){
    Point1D point;
    printf("Veuillez saisir un entier.\n");
    scanf("%d", &point.x);
    return point;
}
