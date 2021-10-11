#include <stdio.h>
#include "MesStructures.h"

/* Fonction qui permet de saisir manuellement le numerateur et le denominateur d'un nombre rationnel.
* Paramètres :
* - IN : vide.
* - OUT : un nombre rationnel avec les valeurs entières saisies.
*/
NombreRationnel saisieNbRat(){

    NombreRationnel monRatio;
    printf("Saisissez le numerateur et le denominateur\n");
    scanf("%d %d", &monRatio.numerateur, &monRatio.denominateur);

    return monRatio;
}


/* Fonction qui permet d' afficher sur la console le numerateur et le denominateur d'un nombre rationnel.
* Paramètres :
* - IN : un nombre rationnel.
* - OUT : vide.
*/
void afficherNbRat(NombreRationnel monRatio){

    float quotient = (float)(monRatio.numerateur)/(monRatio.denominateur);
    printf("Votre nombre rationnel est %d/%d = %f\n", monRatio.numerateur, monRatio.denominateur, quotient);

    return;
}

/* Fonction qui permet d'effectuer le produit de deux nombres rationnel.
* Paramètres :
* - IN : Deux nombres rationnels.
* - OUT : Le produit des deux nombres rationnels en entrée.
*/
NombreRationnel produitNbRat(NombreRationnel monRatio1, NombreRationnel monRatio2){

    NombreRationnel produitRatio;
    produitRatio.numerateur = monRatio1.numerateur*monRatio2.numerateur;
    produitRatio.denominateur = monRatio1.denominateur*monRatio2.denominateur;

    return produitRatio;

}

/* Fonction qui permet d'effectuer la somme de deux nombres rationnel.
* Paramètres :
* - IN : Deux nombres rationnels.
* - OUT : La somme des deux nombres rationnels en entrée.
*/
NombreRationnel sommeNbRat(NombreRationnel monRatio1, NombreRationnel monRatio2) {
    NombreRationnel sommeRatio;

    sommeRatio.numerateur =
            (monRatio1.numerateur * monRatio2.denominateur) + (monRatio2.numerateur * monRatio1.denominateur);
    sommeRatio.denominateur = monRatio1.denominateur * monRatio2.denominateur;

    return sommeRatio;
}