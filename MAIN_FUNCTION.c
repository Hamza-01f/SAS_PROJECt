#include "Header.h"


int main(){
 
  int choix;
  do{
    //menu principal
   printf(" _________________________________________________________________\n");
   printf("|                                                                 |\n");
   printf("| -----------------------------------------------------------     |\n");
   printf("| |        Gestion Des Etudiants Dans Une Universite         |    |\n");
   printf("| -----------------------------------------------------------     |\n");
   printf("|                                                                 |\n");
   printf("|                                                                 |\n");
   printf("| |--------------[Voici le menu principal]-----------------|      |\n");
   printf("|                                                                 |\n");
   printf("|_1). Ajouter un etudiant .:                                      |\n");
   printf("|                                                                 |\n");
   printf("|_2). Modifier Ou Supprimer Un Etudiant .:                        |\n");
   printf("|                                                                 |\n");
   printf("|_3). Afficher les details des etudiants . :                      |\n");
   printf("|                                                                 |\n");
   printf("|_4). Calculer la moyenne Generale . :                            |\n");
   printf("|                                                                 |\n");
   printf("|_5). Statistiques .:                                             |\n");
   printf("|                                                                 |\n");
   printf("|_6). Rechercher Un Etudiant: . :                                 |\n");
   printf("|                                                                 |\n");
   printf("|_7). Trier Un Etudiant . :                                       |\n");
   printf("|                                                                 |\n");
   printf("|_8). Quitter. :                                                  |\n");
   printf("|                                                                 |\n");
   printf("|_________________________________________________________________|\n");
   printf("\n");
   printf("Utilisez les nombres pour choisir votre choix :\n");
   printf("\n");
   printf("Choisissez une option : ");
   scanf("%d",&choix);
   switch(choix)
   {
    case 1:
        AjouteUnEtudiant();//la function d'ajouter
        break;
    case 2:
        ModifierOuSupprimer();//la function de supprimer ou modifier
        break;
    case 3:
        AfficherLesDetailsDeEtudiant();//la d'affichage
        break;
    case 4:
        CalculerLaMOyenneGeneral();//la function de calculer la moyenne general
        break;
    case 5:
        Statistiques();//la function de les statistiques
        break;
    case 6:
        RechercherUnEtudiant();//la function pour rechercher
        break;
    case 7:
         TrierlesEtudiants();//function de trier
         break;
    case 8 :
         printf("Passe une bonne journee!:\n");//pour quitter
         break;
    default:
        printf("Votre choix est invalide. Essayer encore :\n");
        break;
    }
    }while (choix != 8);//stop le menu

}