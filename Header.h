#ifndef HEADER_H
#define HEADER_H


#include <stdio.h>
#include <string.h>
#define MAX 200


typedef struct {

    char NumeroUnique[6];
    char Nom[20];
    char PreNom[20];
    char DateDeNaissance[10];
    float NoteGeneral;

}EtudiantInformation ;


int NumberEtudiantsChimie = 0;
int NumberEtudiantsMathematique = 0;
int NumberEtudiantsInformatique = 0;
int NumberIndix = 0;
int call;


EtudiantInformation ToTalIndex[MAX*3];
EtudiantInformation EtudianDepartementChimie[MAX];
EtudiantInformation EtudianDepartementDeMathematique[MAX];
EtudiantInformation EtudianDepartementDeInformatique[MAX];
char Departementchoise[49];
char VerifierNumero[6];

EtudiantInformation temp;

char DepartementsList[3][49]= {{"Chimie"},
                               {"Mathematiques"},
                               {"Informatique"}};
int  VerifierUniqueChimie();
int  VerifierUniqueMathematique();
int  VerifierUniqueInformatique();
void AfficheTousInfoUniqueId();
void AfficheTousChimiUniqueId();
void AfficheTousMathUniqueId();
void AfficherLesDetailsDeEtudiantChimie();
void AfficherLesDetailsDeEtudiantMath();
void AfficherLesDetailsDeEtudiantInfo();
void SupprimerEtudiant();
void ModifierEtudiant();
void AfficherLentreeDeNumero();
void AfficherTousNumeroUniqueschimi();



#endif