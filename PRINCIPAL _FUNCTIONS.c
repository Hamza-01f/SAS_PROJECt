#include "Header.h"


//--------------------------------------function de ajouter
void AjouteUnEtudiant(){      
              printf("Voici La Listre du Les Departement Disponible : \n");
              printf("\n");
              for(int i = 0 ; i < 3 ; i++ ){
                printf("%s :\n",DepartementsList[i]);
              }
              printf("\n");
              printf("Entrer Le Departement Du L'etudiant Pendent La List : ");
              scanf("%49s",Departementchoise);
              if(strcasecmp(Departementchoise,"Chimie")==0){
                   AfficherLentreeDeNumero();
                   do{
                   printf("Entrez le numero Unique: ");
                   scanf("%6s",VerifierNumero);
                   call =  VerifierUniqueChimie(VerifierNumero);
                   if(call == -1){
                   strcpy(EtudianDepartementChimie[NumberEtudiantsChimie].NumeroUnique,VerifierNumero);
                   printf("Entrer Le Nom Du L'etudiant : ");
                   scanf("%20s",EtudianDepartementChimie[NumberEtudiantsChimie].Nom);
                   printf("Entrer Le Prenom L'etudiant : ");
                   scanf("%20s",EtudianDepartementChimie[NumberEtudiantsChimie].PreNom);
                   printf("Entrer La Date de naissance Du L'etudiant En Form de (dd/mm/yyyy): ");
                   scanf("%10s",EtudianDepartementChimie[NumberEtudiantsChimie].DateDeNaissance);
                   printf("Entrer  La Note generale : ");
                   scanf("%f",&EtudianDepartementChimie[NumberEtudiantsChimie].NoteGeneral);
                   printf("L'etudiant Ajoute A Chimie Departement Avec Succe : \n");

                   NumberEtudiantsChimie++;
                    }else{
                     printf("Ce Numero Deja Exister, Essayer un autre : \n");
                     AfficheTousChimiUniqueId();
                    }
                    }while(call != -1);

              }else if(strcasecmp(Departementchoise,"Mathematiques") == 0 || strcasecmp(Departementchoise,"Mathematique") == 0){
                   printf("\n");
                      AfficherLentreeDeNumero();
                   do{
                   printf("Entrez le numero Unique: ");
                   scanf("%6s",VerifierNumero);
                   call=VerifierUniqueMathematique(VerifierNumero);
                   if(call == -1){
                     strcpy(EtudianDepartementDeMathematique[NumberEtudiantsMathematique].NumeroUnique,VerifierNumero);
                     printf("Entrer Le Nom Du L'etudiant : ");
                     scanf("%20s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].Nom);
                     printf("Entrer Le Prenom L'etudiant : ");
                     scanf("%20s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].PreNom);
                     printf("Entrer La Date de naissance Du L'etudiant En Form de dd/mm/yyyy: ");
                     scanf("%10s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].DateDeNaissance);
                     printf("Entrer  La Note generale : ");
                     scanf("%f",&EtudianDepartementDeMathematique[NumberEtudiantsMathematique].NoteGeneral);
                   
                     printf("L'etudiant Ajoute A Mathematique Departement Avec Succe : \n");
                     NumberEtudiantsMathematique++;
                    }else{
                        printf("Ce Numero Deja Exister, Essayer un autre : \n");
                        AfficheTousMathUniqueId();
                    }
                   }while(call != -1);

              }else if(strcasecmp(Departementchoise,"Informatique") == 0){
                      AfficherLentreeDeNumero();
                   do{
                     printf("Entrez le numero Unique: ");
                     scanf("%6s",VerifierNumero);
                     call=VerifierUniqueInformatique(VerifierNumero);
                    if(call == -1){
                     strcpy(EtudianDepartementDeInformatique[NumberEtudiantsInformatique].NumeroUnique,VerifierNumero);
                     printf("Entrer Le Nom Du L'etudiant : ");
                     scanf("%20s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].Nom);
                     printf("Entrer Le Prenom L'etudiant : ");
                     scanf("%20s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].PreNom);
                     printf("Entrer La Date de naissance Du L'etudiant En Form de dd/mm/yyyy: ");
                     scanf("%10s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].DateDeNaissance);
                     printf("Entrer  La Note generale : ");
                     scanf("%f",&EtudianDepartementDeInformatique[NumberEtudiantsInformatique].NoteGeneral);

                     printf("L'etudiant Ajoute A L'informatique Departement Avec Succe : \n");
                     NumberEtudiantsInformatique ++;
                    
                    }else{
                       printf("Ce Numero Deja Existe, Essayer Un Autre : \n");
                       AfficheTousInfoUniqueId();
                    }
                   }while(call != -1);

                }else{
                    printf("Le Departement Choise Est Pas Disponible Ou Le Term Invalid : \n");
                }
}

//-------------------------------------modification function------------------------------------------
void ModifierOuSupprimer(){

int choix;
do{
     printf("---------[Voici le Menu De Pour Choisir]-------- : \n");
     printf("------------------------------------------------\n");
     printf("1_Supprimer L'etudiant : \n");
     printf("2_Modifier les information d'un etudiant : \n");
     printf("3_Quitter : \n");
     printf("Que Voulez vous faire : ");
     scanf("%d",&choix);
        switch (choix)
        {
        case 1 :
            SupprimerEtudiant();
            break;
        case 2 :
            ModifierEtudiant();
             break;
        case 3 :
          printf("Au revoir ! : \n");
             break;
   
         default:
            printf("La Valeur choise est invalid : \n");
             break;
        }
}while (choix != 3 );
}
//--------------------------------------affaicher les detailes d'etudiants-------------------------
void AfficherLesDetailsDeEtudiant(){
   if(NumberEtudiantsChimie + NumberEtudiantsMathematique + NumberEtudiantsInformatique != 0){

             AfficherLesDetailsDeEtudiantChimie();
             AfficherLesDetailsDeEtudiantMath();
             AfficherLesDetailsDeEtudiantInfo();
             return;
   }else{
       printf("Rien Information ajouter : \n");
       return;
   }
}

void CalculerLaMOyenneGeneral(){
     float LaMoyenneChimie ;
     float LaMoyenneMath ;
     float LaMoyenneInfo ;
     float TotalChimie = 0;
     float TotalMath = 0 ;
     float TotalInfo = 0 ;
     float TotaDepartement;
     int TotalEtudiants;
     float MoyenneGeneral;

     for(int i = 0 ; i < NumberEtudiantsChimie ; i++){
          TotalChimie = TotalChimie + EtudianDepartementChimie[i].NoteGeneral;
        }
     LaMoyenneChimie = TotalChimie / NumberEtudiantsChimie ;
     printf("Le Moyenne General De La Departement Chimie est : %.2f \n",LaMoyenneChimie);
     printf("\n");
     printf("---------------------------------------------------------\n");
     printf("\n");
          for(int i = 0 ; i < NumberEtudiantsMathematique ; i++){
          TotalMath = TotalMath + EtudianDepartementDeMathematique[i].NoteGeneral;
          }
     LaMoyenneMath = TotalMath / NumberEtudiantsMathematique ;
     printf("Le Moyenne General De La Departement Mathematique est : %.2f \n",LaMoyenneMath);
     printf("\n");
     printf("---------------------------------------------------------\n");
     printf("\n");
         for(int i = 0 ; i < NumberEtudiantsInformatique ; i++){
          TotalInfo = TotalInfo + EtudianDepartementDeInformatique[i].NoteGeneral;
         }
     LaMoyenneInfo = TotalInfo / NumberEtudiantsInformatique ;
     printf("Le Moyenne General De La Departement Informatique est : %.2f \n",LaMoyenneInfo);
     printf("\n");
     printf("-------------------------------------------------------------------\n");
     TotaDepartement = TotalInfo + TotalMath + TotalChimie;
     TotalEtudiants = NumberEtudiantsChimie + NumberEtudiantsMathematique + NumberEtudiantsInformatique;
     MoyenneGeneral = TotaDepartement / TotalEtudiants;
     printf("\n");
     printf("La Moyenne General De L'universite est : %.2f \n",MoyenneGeneral);
     
}
//-----------------------------------------function de statistiques --------------------------------
void Statistiques(){
      int counteur = 0 ;

      printf("\n");
      printf("Bienvenue Au partie De Statistiques :\n");
      printf("Voici , le statistiques de votre Univerite : \n");
      printf("---------------------------------------------------\n");
      printf("Le nombre Total d'etudiants inscris est : %d |",NumberEtudiantsChimie+NumberEtudiantsInformatique
      +NumberEtudiantsMathematique);
      printf("\n");
      printf("---------------------------------------------------\n");
      printf("Le Nombre Total de l'etudiant Dans le departement Du Chimie est : %d \n",NumberEtudiantsChimie);
      printf("---------------------------------------------------\n");
      printf("Le Nombre Total de l'etudiant Dans le departement Du Mathematiques est : %d \n",NumberEtudiantsMathematique);
      printf("---------------------------------------------------\n");
      printf("Le Nombre Total de l'etudiant Dans le departement D'informatique est : %d \n",NumberEtudiantsInformatique);
      printf("----------------------------------------------------\n");
      printf("les etudiants ayant une moyenne generale superieure au seuil. 12 sont :\n");
      printf("\n");
       for(int i = 0 ; i < NumberEtudiantsChimie ; i++ ){
                 if(EtudianDepartementChimie[i].NoteGeneral > 12 ){
                    printf("************************************\n");
                    printf("Le Numero Unique : %s |\n",EtudianDepartementChimie[i].NumeroUnique);
                    printf("le nome : %s |\n",EtudianDepartementChimie[i].Nom);
                    printf("Le Prenom : %s |\n",EtudianDepartementChimie[i].PreNom);
                    printf("La Date De Naissance : %s |\n",EtudianDepartementChimie[i].DateDeNaissance);
                    printf("La Note General : %.2f |\n",EtudianDepartementChimie[i].NoteGeneral);
                 }
       }
       printf("\n");
              for(int i = 0 ; i < NumberEtudiantsMathematique ; i++ ){
                 if(EtudianDepartementDeMathematique[i].NoteGeneral > 12 ){
                    printf("************************************\n");
                    printf("Le Numero Unique : %s |\n",EtudianDepartementDeMathematique[i].NumeroUnique);
                    printf("le nome : %s |\n",EtudianDepartementDeMathematique[i].Nom);
                    printf("Le Prenom : %s |\n",EtudianDepartementDeMathematique[i].PreNom);
                    printf("La Date De Naissance : %s |\n",EtudianDepartementDeMathematique[i].DateDeNaissance);
                    printf("La Note General : %.2f |\n",EtudianDepartementDeMathematique[i].NoteGeneral);
                 }
       }
       printf("\n");
              for(int i = 0 ; i < NumberEtudiantsInformatique ; i++ ){
                 if(EtudianDepartementDeInformatique[i].NoteGeneral > 12 ){
                    printf("************************************\n");
                    printf("Le Numero Unique : %s |\n",EtudianDepartementDeInformatique[i].NumeroUnique);
                    printf("le nome : %s |\n",EtudianDepartementDeInformatique[i].Nom);
                    printf("Le Prenom : %s |\n",EtudianDepartementDeInformatique[i].PreNom);
                    printf("La Date De Naissance : %s |\n",EtudianDepartementDeInformatique[i].DateDeNaissance);
                    printf("La Note General : %.2f |\n",EtudianDepartementDeInformatique[i].NoteGeneral);
                 }
       }
        printf("\n");
    int ToTalEtudiants = NumberEtudiantsChimie + NumberEtudiantsInformatique + NumberEtudiantsMathematique;
    int index = 0;
     for (int i = 0; i < NumberEtudiantsChimie; i++) {
       ToTalIndex[index++] = EtudianDepartementChimie[i];
      }
     for (int i = 0; i < NumberEtudiantsMathematique; i++) {
      ToTalIndex[index++] = EtudianDepartementDeMathematique[i];
     }
    for (int i = 0; i < NumberEtudiantsInformatique; i++) {
      ToTalIndex[index++] = EtudianDepartementDeInformatique[i];
    }

 for (int i = 0; i < ToTalEtudiants - 1 ; i++) {
  for (int j = 0; j < ToTalEtudiants - i - 1; j++) {
       if (ToTalIndex[j].NoteGeneral < ToTalIndex[j + 1].NoteGeneral) {
                temp = ToTalIndex[j];
                ToTalIndex[j] = ToTalIndex[j + 1];
                ToTalIndex[j + 1] = temp;
            }
        }
    }

    printf("\nLes 3 etudiants ayant les meilleures notes sont :\n");
    for (int i = 0; i < 3 ; i++) {
        printf("Nom: %s, Note: %.2f\n", ToTalIndex[i].Nom, ToTalIndex[i].NoteGeneral);
        }
         printf("\n");
         for(int i = 0 ; i < NumberEtudiantsChimie ; i++ ){
              if(EtudianDepartementChimie[i].NoteGeneral >= 10 && EtudianDepartementChimie[i].NoteGeneral <= 20 )
                  counteur++;
               }
       printf("le nombre d'etudiants ayant reussi dans chimie departement est : %d \n",counteur);
       printf("-----------------------------------------------------------------------\n");
       counteur = 0 ;
              for(int i = 0 ; i < NumberEtudiantsMathematique ; i++ ){
                 if(EtudianDepartementDeMathematique[i].NoteGeneral >= 10 && EtudianDepartementDeMathematique[i].NoteGeneral <= 20 )
                  counteur++;
               }
        printf("le nombre d'etudiants ayant reussi dans Mathematiques departement est : %d \n",counteur);
        printf("-------------------------------------------------------------------------\n");
        counteur = 0 ;
              for(int i = 0 ; i < NumberEtudiantsInformatique ; i++ ){
                 if(EtudianDepartementDeInformatique[i].NoteGeneral >= 10 && EtudianDepartementDeInformatique[i].NoteGeneral <= 20 )
                  counteur++;
               }
        printf("le nombre d'etudiants ayant reussi dans Informatique departement est : %d \n",counteur);
        printf("------------------------------------------------------------------------\n");
        return;
}
//-----------------------------------Rechercher function----------------------------------------------
void RechercherUnEtudiant(){
      int choix ;
      printf("Bienvenue Au rechercher partie : \n");
      printf("Voici La Listre du Les Departement Disponible : \n");
      printf("\n");
        for(int i = 0 ; i < 3 ; i++ ){
             printf("%s :\n",DepartementsList[i]);
         }
      printf("\n");
      printf("Entrez le departement ou voulez vous rechercher : \n");
      printf("En attende Votre choix : ");
      scanf("%49s",Departementchoise);

      if(strcasecmp(Departementchoise,"chimie") == 0){
                   if(NumberEtudiantsChimie != 0){
                     do{
                           printf("Bienvenue ! Au Departement Du chimie :\n");
                           printf("Entrez le numero Unique de l'etudiant: ");
                           scanf("%6s",VerifierNumero);
                           call=VerifierUniqueChimie(VerifierNumero);
                       if(call == -1){
                           printf("Ce Numero Pas exister , Essayer encore: \n");
                           AfficheTousChimiUniqueId();
                       }else{
                            printf("\n");
                            printf("l'etudiant trouver aver succe : \n");
                            printf("\n");
                            printf("Voici les information De l'etudiant trouve : \n");
                            printf("le Numero Unique du l'etudiant est : %s |\n",EtudianDepartementChimie[NumberIndix].NumeroUnique);
                            printf("le Nome du l'etudiant est : %s |\n",EtudianDepartementChimie[NumberIndix].Nom);
                            printf("le Prenom Unique du l'etudiant est : %s |\n",EtudianDepartementChimie[NumberIndix].PreNom);
                            printf("la date de naissance du l'etudiant est : %s |\n",EtudianDepartementChimie[NumberIndix].DateDeNaissance);
                            printf("la Note Generale Du l'etudiant est : %.2f |\n",EtudianDepartementChimie[NumberIndix].NoteGeneral);
                     }
                   }while(call == -1);
                }else{
                  printf("le departement est vide , essayer de la remplir : \n");
                }
      }else if(strcasecmp(Departementchoise,"mathematique") == 0 || strcasecmp(Departementchoise,"mathematiques") == 0){
                 if(NumberEtudiantsChimie != 0){
                        do{
                           printf("Bienvenue ! Au Departement Du mathematique :\n");
                           printf("Entrez le numero Unique de l'etudiant: ");
                           scanf("%6s",VerifierNumero);
                           call=VerifierUniqueMathematique(VerifierNumero);
                       if(call == -1){
                           printf("Ce Numero Pas exister , Essayer encore: \n");
                           AfficheTousMathUniqueId();
                       }else{
                            printf("\n");
                            printf("l'etudiant trouver aver succe : \n");
                            printf("\n");
                            printf("Voici les information De l'etudiant trouve : \n");
                            printf("le Numero Unique du l'etudiant est : %s |\n",EtudianDepartementDeMathematique[NumberIndix].NumeroUnique);
                            printf("le Nome du l'etudiant est : %s |\n",EtudianDepartementDeMathematique[NumberIndix].Nom);
                            printf("le Prenom Unique du l'etudiant est : %s |\n",EtudianDepartementDeMathematique[NumberIndix].PreNom);
                            printf("la date de naissance du l'etudiant est : %s |\n",EtudianDepartementDeMathematique[NumberIndix].DateDeNaissance);
                            printf("la Note Generale Du l'etudiant est : %.2f |\n",EtudianDepartementDeMathematique[NumberIndix].NoteGeneral);
                     }
                   }while(call == -1);
               }else{
                  printf("le departement est vide , essayer de la remplir : \n");
               }

      }else if(strcasecmp(Departementchoise,"Informatique") == 0 ){
                 if(NumberEtudiantsChimie != 0){
                        do{
                           printf("Bienvenue ! Au Departement D'informatique :\n");
                           printf("Entrez le numero Unique de l'etudiant: ");
                           scanf("%6s",VerifierNumero);
                           call=VerifierUniqueInformatique(VerifierNumero);
                       if(call == -1){
                           printf("Ce Numero Pas exister , Essayer encore: \n");
                           AfficheTousInfoUniqueId();
                       }else{
                            printf("\n");
                            printf("l'etudiant trouver aver succe : \n");
                            printf("\n");
                            printf("Voici les information De l'etudiant trouve : \n");
                            printf("le Numero Unique du l'etudiant est : %s |\n",EtudianDepartementDeInformatique[NumberIndix].NumeroUnique);
                            printf("le Nome du l'etudiant est : %s |\n",EtudianDepartementDeInformatique[NumberIndix].Nom);
                            printf("le Prenom Unique du l'etudiant est : %s |\n",EtudianDepartementDeInformatique[NumberIndix].PreNom);
                            printf("la date de naissance du l'etudiant est : %s |\n",EtudianDepartementDeInformatique[NumberIndix].DateDeNaissance);
                            printf("la Note Generale Du l'etudiant est : %.2f |\n",EtudianDepartementDeInformatique[NumberIndix].NoteGeneral);
                     }
                   }while(call == -1);
               }else{
                  printf("le departement est vide , essayer de la remplir : \n");
               }
        }else{
           printf("Le Departement Entrer est pas exister , ou le term est invalide : \n");
           return;
     }
        
}

//-----------------------------------latriation de les etudiants---------------------------------------
void  TrierlesEtudiants(){
   int choix1;
   int index;
   
   if(NumberEtudiantsChimie + NumberEtudiantsInformatique+NumberEtudiantsMathematique != 0){
       int ToTal = NumberEtudiantsChimie + NumberEtudiantsInformatique + NumberEtudiantsMathematique;
      printf("Bienvenue! Au Triation partie : \n");
      do{
         printf("\n");
         printf("--------------------[Le Menu De Triage]-----------------------------\n");
         printf("1)_Tri alphabetique des etudiants en fonction de leur nom de A a Z:\n");
         printf("2)_Tri les etudiants par la moyenne generale, du plus faible au plus eleve.:\n");
         printf("3)_Tri des etudiants selon leur statut de reussite :\n");
         printf("4)_Quitter :\n");
         printf("\n");
         printf("Entrez votre choix : ");
         scanf("%d",&choix1);
         switch(choix1)
         {
            case 1 :
                  index = 0;
                  for(int i = 0 ; i < NumberEtudiantsChimie ; i++ ){
                     ToTalIndex[index++] = EtudianDepartementChimie[i];
                  }
                  for(int i = 0 ; i < NumberEtudiantsMathematique ; i++){
                     ToTalIndex[index++] = EtudianDepartementDeMathematique[i];
                  }
                  for(int i = 0 ; i < NumberEtudiantsInformatique ; i++){
                    ToTalIndex[index++] = EtudianDepartementDeInformatique[i];
                  }

                  for(int i = 0 ; i < ToTal ; i++ ){
                       if(ToTalIndex[i].Nom[0] >= 'a' && ToTalIndex[i].Nom[0] <= 'z')
                            ToTalIndex[i].Nom[0]-32;
                  }

                  for(int i = 0 ; i < ToTal - 1 ; i++){
                     for(int j = 0 ; j < ToTal - i - 1 ; j++){
                        if(strcmp(ToTalIndex[j].Nom,ToTalIndex[j+1].Nom)>0){
                           temp = ToTalIndex[j];
                            ToTalIndex[j] = ToTalIndex[j+1];
                            ToTalIndex[j+1] = temp;
                        }
                     }
                  }
                  printf("Voici , la Triation alphabetique des etudiants en fonction de leur nom de A a Z : \n");
                  printf("\n");
                  for(int i = 0 ; i < ToTal ; i++){
                  printf("Nom : %s |\n",ToTalIndex[i].Nom);
                  }
                  printf("\n");
                 break;
            case 2 :
                   index = 0;
                  for(int i = 0 ; i < NumberEtudiantsChimie ; i++ ){
                     ToTalIndex[index++] = EtudianDepartementChimie[i];
                  }
                  for(int i = 0 ; i < NumberEtudiantsMathematique ; i++){
                     ToTalIndex[index++] = EtudianDepartementDeMathematique[i];
                  }
                  for(int i = 0 ; i < NumberEtudiantsInformatique ; i++){
                    ToTalIndex[index++] = EtudianDepartementDeInformatique[i];
                  }
                  for(int i = 0 ; i < ToTal - 1 ; i++ ){
                     for(int j = 0 ; j < ToTal - i - 1 ; j++){
                        if(ToTalIndex[j].NoteGeneral > ToTalIndex[j+1].NoteGeneral){
                        temp = ToTalIndex[j];
                        ToTalIndex[j] = ToTalIndex[j+1];
                        ToTalIndex[j+1] = temp;
                        }
                    }
                  }
                  printf("Voici la moyenne generale, du plus faible au plus eleve : \n");
                  for(int i = 0 ; i < ToTal ; i++ ){
                     printf("Prenom = %s ,Moyenne General = %.2f\n",ToTalIndex[i].PreNom,ToTalIndex[i].NoteGeneral);
                  }
                   printf("\n");
                 break;
            case 3 : 
              index = 0;
                  for(int i = 0 ; i < NumberEtudiantsChimie ; i++ ){
                     ToTalIndex[index++] = EtudianDepartementChimie[i];
                  }
                  for(int i = 0 ; i < NumberEtudiantsMathematique ; i++){
                     ToTalIndex[index++] = EtudianDepartementDeMathematique[i];
                  }
                  for(int i = 0 ; i < NumberEtudiantsInformatique ; i++){
                    ToTalIndex[index++] = EtudianDepartementDeInformatique[i];
                  }
                          for (int i = 0; i < ToTal - 1; i++) {
                              for (int j = 0; j < ToTal - i - 1; j++) {
                               if (ToTalIndex[j].NoteGeneral > ToTalIndex[j + 1].NoteGeneral) {
                               temp = ToTalIndex[j];
                              ToTalIndex[j] = ToTalIndex[j + 1];
                              ToTalIndex[j + 1] = temp;
                                     }
                                   }
                                 }

                 printf("Voici la triation des etudiants qui reussite selon leur statut (10/20 et plus) : \n");
                  for(int i = 0 ; i < ToTal ; i++) {
                    if (ToTalIndex[i].NoteGeneral >= 10) {
                    printf("Prenom = %s , Moyenne General = %.2f\n", ToTalIndex[i].PreNom, ToTalIndex[i].NoteGeneral);
                      }
                  }
                 printf("\n");
                 printf("---------------------------------------\n");
                 printf("Voici la triation des etudiants qui pas reussite selon leur statut (10/20 et plus) : \n");
                   for(int i = 0; i < ToTal; i++) {
                    if (ToTalIndex[i].NoteGeneral < 10) {
                    printf("Prenom = %s , Moyenne General = %.2f\n", ToTalIndex[i].PreNom, ToTalIndex[i].NoteGeneral);
                      }
                  }
                 break;
           case 4 : 
             printf("Bye! :\n");
              printf("\n");
             break;
           default :
                 printf("la vleur entre est invalide : \n");
                  printf("\n");
         }
      }while(choix1 != 4);
   }else{
      printf("Le Database est vide, Rien de trier : \n");
       printf("\n");
   }

}

