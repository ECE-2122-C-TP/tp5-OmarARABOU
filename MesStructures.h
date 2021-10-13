
#ifndef TP5_MESSTRUCTURES_H
#define TP5_MESSTRUCTURES_H

typedef struct {
    int x, y;
}Point2D;

typedef struct {
    int x;
}Point1D;


typedef struct {
    int numerateur;
    int denominateur;
}NombreRationnel;

NombreRationnel saisieNbRat();
void afficherNbRat(NombreRationnel monRatio);
NombreRationnel produitNbRat(NombreRationnel monRatio1, NombreRationnel monRatio2);
NombreRationnel sommeNbRat(NombreRationnel monRatio1, NombreRationnel monRatio2);


#endif //TP5_MESSTRUCTURES_H
