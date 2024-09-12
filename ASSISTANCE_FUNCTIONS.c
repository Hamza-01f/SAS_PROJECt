#include "Header.h"

//----------------------------------les function de verifier le unique Id ------------------------------
int VerifierUniqueChimie(char EtudianChimieNumero[]){
      for(int i = 0 ; i < NumberEtudiantsChimie ; i++)
      if(strcasecmp(EtudianDepartementChimie[i].NumeroUnique,EtudianChimieNumero)==0){
        NumberIndix = i ;
        return i;
      }

    return -1;
        
}

int  VerifierUniqueMathematique(char EtudiantMathNumero[]){
    for(int i = 0 ; i < NumberEtudiantsMathematique ; i++)
      if(strcasecmp(EtudianDepartementDeMathematique[i].NumeroUnique,EtudiantMathNumero)==0){
         NumberIndix = i;
        return i;
      }

    return -1;
}
int  VerifierUniqueInformatique(char EtudiantInfoNumero[]){
    for(int i = 0 ; i < NumberEtudiantsInformatique ; i++)
      if(strcasecmp(EtudianDepartementDeInformatique[i].NumeroUnique,EtudiantInfoNumero)==0){
         NumberIndix = i ;
        return i;
      }

    return -1;
}

//--------------------------------l'affichage de tous les numero qu'est unique------------------------
void AfficheTousChimiUniqueId(){
 printf("\n");
 printf("Voici Tous Les Numero Unique De Chimique Departement  Deja Entrer : \n");
 printf("\n");
 for(int i = 0 ; i < NumberEtudiantsChimie ; i++ ){
    printf("Numero %d = %s |\n",i+1,EtudianDepartementChimie[i].NumeroUnique);
 }
 printf("\n");
}

void AfficheTousMathUniqueId(){
 printf("\n");
 printf("Voici Tous Les Numero Unique De Mathematique Departement  Deja Entrer : \n");
 printf("\n");
 for(int i = 0 ; i < NumberEtudiantsMathematique ; i++ ){
    printf("Numero %d = %s |\n",i+1,EtudianDepartementDeMathematique[i].NumeroUnique);
 }
 printf("\n");
}

void AfficheTousInfoUniqueId(){
 printf("\n");
 printf("Voici Tous Les Numero Unique D'informatique Departement  Deja Entrer : \n");
 printf("\n");
 for(int i = 0 ; i < NumberEtudiantsInformatique ; i++ ){
    printf("Numero %d = %s |\n",i+1,EtudianDepartementDeInformatique[i].NumeroUnique);
 }
 printf("\n");
}
//--------------------------l'affichag de tous les detailes -------------------------------------
void AfficherLesDetailsDeEtudiantChimie(){
         printf("Voici tous les information des etudiant de Chimie departement : \n");
         printf("-------------------------------------------\n");
         printf("le total nombr des etudiants est : %d |\n",NumberEtudiantsChimie);
         for(int i = 0 ; i < NumberEtudiantsChimie ; i++){
                   printf("les information de etudiant %d :\n",i+1);
                   printf("Le Unique Numero est : %s |\n",EtudianDepartementChimie[i].NumeroUnique);
                   printf("Le Nom est : %s |\n",EtudianDepartementChimie[i].Nom);
                   printf("Le Prenom est : %s |\n",EtudianDepartementChimie[i].PreNom);
                   printf("La Date De Naissance est  : %s |\n",EtudianDepartementChimie[i].DateDeNaissance);
                   printf("La Note General est : %.2f |\n",EtudianDepartementChimie[i].NoteGeneral);
                   printf("----------------------------------------\n");
                   printf("\n");
        }
}
void AfficherLesDetailsDeEtudiantMath(){
            printf("\n");
            printf("Voici tous les information des etudiant de Mathematique departement : \n"); 
            printf("-------------------------------------------\n");
            printf("le total nombr des etudiants est : %d |\n",NumberEtudiantsMathematique);
            for(int i = 0 ; i < NumberEtudiantsMathematique ; i++){
                   printf("les information de etudiant %d :\n",i+1);
                   printf("Le Unique Numero est : %s |\n",EtudianDepartementDeMathematique[i].NumeroUnique);
                   printf("Le Nom est : %s |\n",EtudianDepartementDeMathematique[i].Nom);
                   printf("Le Prenom est : %s |\n",EtudianDepartementDeMathematique[i].PreNom);
                   printf("La Date De Naissance est  : %s |\n",EtudianDepartementDeMathematique[i].DateDeNaissance);
                   printf("La Note General est : %.2f |\n",EtudianDepartementDeMathematique[i].NoteGeneral);
                   printf("----------------------------------------\n");
                    printf("\n");
                    }
}
void AfficherLesDetailsDeEtudiantInfo(){
            printf("\n");
            printf("Voici tous les information des etudiant de Informatique departement : \n"); 
            printf("-------------------------------------------\n");
            printf("le total nombr des etudiants est : %d |\n",NumberEtudiantsInformatique);
            for(int i = 0 ; i < NumberEtudiantsInformatique ; i++){
                   printf("les information de etudiant %d :\n",i+1);
                   printf("Le Unique Numero est : %s |\n",EtudianDepartementDeInformatique[i].NumeroUnique);
                   printf("Le Nom est : %s |\n",EtudianDepartementDeInformatique[i].Nom);
                   printf("Le Prenom est : %s |\n",EtudianDepartementDeInformatique[i].PreNom);
                   printf("La Date De Naissance est  : %s |\n",EtudianDepartementDeInformatique[i].DateDeNaissance);
                   printf("La Note General est : %.2f |\n",EtudianDepartementDeInformatique[i].NoteGeneral);
                   printf("----------------------------------------\n");
                   printf("\n");
   }
}
//------------------------suprimer function------------------------------------------------------
void SupprimerEtudiant(){

  if(NumberEtudiantsChimie + NumberEtudiantsInformatique + NumberEtudiantsMathematique != 0){
              printf("Voici La Listre du Les Departement Disponible : \n");
              printf("\n");
              for(int i = 0 ; i < 3 ; i++ ){
                printf("%s :\n",DepartementsList[i]);
              }
              printf("\n");
              printf("Entrer Le departement ou l'etudiant exist  : ");
              scanf("%49s",Departementchoise);
                if(strcasecmp(Departementchoise,"Chimie")==0){
                    AfficherLentreeDeNumero();
                   do{
                     printf("Entrez le numero Unique: ");
                     scanf("%6s",VerifierNumero);
                     call=VerifierUniqueChimie(VerifierNumero);
                     if(call == -1){
                       printf("Ce Numero Ne existe pas Essayer Une Autre Qu'est Correct : \n");
                       AfficheTousChimiUniqueId();
                     }else{
                       for(int i = NumberIndix ; i <= NumberEtudiantsChimie ; i++){
                         strcpy(EtudianDepartementChimie[i+1].NumeroUnique,EtudianDepartementChimie[i].NumeroUnique);
                          strcpy(EtudianDepartementChimie[i+1].Nom,EtudianDepartementChimie[i].Nom);
                           strcpy(EtudianDepartementChimie[i+1].PreNom,EtudianDepartementChimie[i].PreNom);
                            EtudianDepartementChimie[i].NoteGeneral = EtudianDepartementChimie[i+1].NoteGeneral;
                             strcpy(EtudianDepartementChimie[i+1].DateDeNaissance,EtudianDepartementChimie[i].DateDeNaissance);
                         }
                         printf("L'etudiant supprime avec succe : \n");
                         NumberEtudiantsChimie--;
                         return;
                     }
                   }while(call == -1);
                  
                   }else if(strcasecmp(Departementchoise,"Mathematiques")==0){
                     printf("\n");
                         AfficherLentreeDeNumero();
                      do{
                        printf("Entrez le numero Unique: ");
                        scanf("%6s",VerifierNumero);
                        call=VerifierUniqueMathematique(VerifierNumero);
                        if(call == -1){
                        printf("Ce Numero Ne existe pas Essayer Une Autre Qu'est Correct : \n");
                        AfficheTousMathUniqueId();
                        }else{
                        for(int i = NumberIndix ; i <= NumberEtudiantsMathematique ; i++){
                         strcpy(EtudianDepartementDeMathematique[i+1].NumeroUnique,EtudianDepartementDeMathematique[i].NumeroUnique);
                          strcpy(EtudianDepartementDeMathematique[i+1].Nom,EtudianDepartementDeMathematique[i].Nom);
                           strcpy(EtudianDepartementDeMathematique[i+1].PreNom,EtudianDepartementDeMathematique[i].PreNom);
                            EtudianDepartementDeMathematique[i].NoteGeneral =EtudianDepartementDeMathematique[i+1].NoteGeneral;
                             strcpy(EtudianDepartementDeMathematique[i+1].DateDeNaissance,EtudianDepartementDeMathematique[i].DateDeNaissance);
                         }
                          printf("L'etudiant supprime avec succe : \n");
                          NumberEtudiantsMathematique--;
                          return;
                     }
                    }while(call == -1);
                   }else if(strcasecmp(Departementchoise,"Informatique") ==0 ){
                       AfficherLentreeDeNumero();
                     printf("\n");
                      do{
                        printf("Entrez le numero Unique: ");
                        scanf("%6s",VerifierNumero);
                        call=VerifierUniqueInformatique(VerifierNumero);
                        if(call == -1){
                           printf("Ce Numero Ne existe pas Essayer Une Autre Qu'est Correct : \n");
                           AfficheTousInfoUniqueId();
                        }else{
                        for(int i = NumberIndix ; i <= NumberEtudiantsInformatique ; i++){
                         strcpy(EtudianDepartementDeInformatique[i+1].NumeroUnique,EtudianDepartementDeInformatique[i].NumeroUnique);
                          strcpy(EtudianDepartementDeInformatique[i+1].Nom,EtudianDepartementDeInformatique[i].Nom);
                           strcpy(EtudianDepartementDeInformatique[i+1].PreNom,EtudianDepartementDeInformatique[i].PreNom);
                            EtudianDepartementDeInformatique[i].NoteGeneral =EtudianDepartementDeInformatique[i+1].NoteGeneral;
                             strcpy(EtudianDepartementDeInformatique[i+1].DateDeNaissance,EtudianDepartementDeInformatique[i].DateDeNaissance);
                         }
                          printf("L'etudiant supprime avec succe : \n");
                          NumberEtudiantsInformatique--;
                          return;
                     }
                   }while(call == -1);

                   }
  }else{
            printf("Le Database Est Vide , Rien De Supprimer : \n");
      }
}
//--------------------------------------modification function---------------------------------------
void ModifierEtudiant(){
                int valeur  = 0;
                printf("\n");
                printf("Bienvenue ! Au Part De Modification : \n");
                printf("Voici La Listre du Les Departement Disponible : \n");
                printf("\n");
                for(int i = 0 ; i < 3 ; i++ ){
                printf("%s :\n",DepartementsList[i]);
                }
                printf("\n");
                printf("Entrer Le departement ou l'etudiant exist  : ");
                scanf("%49s",Departementchoise);
             if(strcasecmp(Departementchoise,"Chimique")==0){
                      AfficherLentreeDeNumero();
                    do{
                        printf("Entrez le numero Unique: ");
                        scanf("%6s",VerifierNumero);
                        call=VerifierUniqueChimie(VerifierNumero);
                       if(call == -1){
                         printf("Ce Numero Ne existe pas Essayer Une Autre Qu'est Correct : \n");
                         AfficheTousChimiUniqueId();
                        }else{
                         printf("Entrer La nouvelle Departement De l'etudiant : ");
                         scanf("%49s",Departementchoise);
                         if(strcasecmp(Departementchoise,"Mathematiques")==0 || strcasecmp(Departementchoise,"Mathematique")==0 ){
                           printf("Entrer La nouvelle Numero Unique : ");
                           scanf("%6s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].NumeroUnique);
                           printf("Entrer La nouvelle Nom : ");
                           scanf("%20s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].Nom);
                           printf("Entrer La nouvelle Prenom : ");
                           scanf("%20s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].PreNom);
                           printf("Entrer La nouvelle Date De Naissance : ");
                           scanf("%10s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].DateDeNaissance);
                           printf("Entrer La nouvelle Note General : ");
                           scanf("%f",&EtudianDepartementDeMathematique[NumberEtudiantsMathematique].NoteGeneral);
                           printf("les information de l'etudiant modifier avec succe : \n");
                           NumberEtudiantsMathematique++;

                            for(int i = NumberIndix ; i <= NumberEtudiantsChimie ; i++){
                             strcpy(EtudianDepartementChimie[i+1].NumeroUnique,EtudianDepartementChimie[i].NumeroUnique);
                             strcpy(EtudianDepartementChimie[i+1].Nom,EtudianDepartementChimie[i].Nom);
                             strcpy(EtudianDepartementChimie[i+1].PreNom,EtudianDepartementChimie[i].PreNom);
                             EtudianDepartementChimie[i].NoteGeneral = EtudianDepartementChimie[i+1].NoteGeneral;
                             strcpy(EtudianDepartementChimie[i+1].DateDeNaissance,EtudianDepartementChimie[i].DateDeNaissance);
                            }
                         
                            NumberEtudiantsChimie--;

                           }else if(strcasecmp(Departementchoise,"Informatique")==0){
                            printf("Entrer La nouvelle Numero Unique : ");
                            scanf("%6s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].NumeroUnique);
                            printf("Entrer La nouvelle Nom : ");
                            scanf("%20s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].Nom);
                            printf("Entrer La nouvelle Prenom : ");
                            scanf("%20s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].PreNom);
                            printf("Entrer La nouvelle Date De Naissance : ");
                            scanf("%10s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].DateDeNaissance);
                            printf("Entrer La nouvelle Note General : ");
                            scanf("%f",&EtudianDepartementDeInformatique[NumberEtudiantsInformatique].NoteGeneral);
                            printf("les information de l'etudiant modifier avec succe : ");
                            NumberEtudiantsInformatique++;

                            for(int i = NumberIndix ; i <= NumberEtudiantsChimie ; i++){
                             strcpy(EtudianDepartementChimie[i+1].NumeroUnique,EtudianDepartementChimie[i].NumeroUnique);
                             strcpy(EtudianDepartementChimie[i+1].Nom,EtudianDepartementChimie[i].Nom);
                             strcpy(EtudianDepartementChimie[i+1].PreNom,EtudianDepartementChimie[i].PreNom);
                             EtudianDepartementChimie[i].NoteGeneral = EtudianDepartementChimie[i+1].NoteGeneral;
                             strcpy(EtudianDepartementChimie[i+1].DateDeNaissance,EtudianDepartementChimie[i].DateDeNaissance);
                            }
                         
                            NumberEtudiantsChimie--;

                          }else if(strcasecmp(Departementchoise,"Chimie")==0){
                            printf("Entrer La nouvelle Numero Unique : ");
                            scanf("%6s",EtudianDepartementChimie[NumberIndix].NumeroUnique);
                            printf("Entrer La nouvelle Nom : ");
                            scanf("%20s",EtudianDepartementChimie[NumberIndix].Nom);
                            printf("Entrer La nouvelle Prenom : ");
                            scanf("%20s",EtudianDepartementChimie[NumberIndix].PreNom);
                            printf("Entrer La nouvelle Date De Naissance : ");
                            scanf("%10s",EtudianDepartementChimie[NumberIndix].DateDeNaissance);
                            printf("Entrer La nouvelle Note General : ");
                            scanf("%f",&EtudianDepartementChimie[NumberIndix].NoteGeneral);
                            printf("les information de l'etudiant modifier avec succe : \n");
                          }else{
                            printf("le departement entre est pas disponible ou la valeur invalid : \n");
                            valeur = 1 ;
                          }
                        }
                     }while(call == -1 || valeur == 1);
                 }else if(strcasecmp(Departementchoise,"Mathematiques")==0 || strcasecmp(Departementchoise,"Mathematique")==0){
                   AfficherLentreeDeNumero();
                   do{
                        printf("Entrez le numero Unique: ");
                        scanf("%6s",VerifierNumero);
                        call=VerifierUniqueMathematique(VerifierNumero);
                     if(call == -1){
                        printf("Ce Numero Ne existe pas Essayer Une Autre Qu'est Correct : \n");
                        AfficheTousMathUniqueId();
                     }else{
                         printf("Entrer La nouvelle Departement De l'etudiant : ");
                         scanf("%49s",Departementchoise);
                         if(strcasecmp(Departementchoise,"Chimie")==0){
                         printf("Entrer La nouvelle Numero Unique : ");
                         scanf("%6s",EtudianDepartementChimie[NumberEtudiantsChimie].NumeroUnique);
                         printf("Entrer La nouvelle Nom : ");
                         scanf("%20s",EtudianDepartementChimie[NumberEtudiantsChimie].Nom);
                         printf("Entrer La nouvelle Prenom : ");
                         scanf("%20s",EtudianDepartementChimie[NumberEtudiantsChimie].PreNom);
                         printf("Entrer La nouvelle Date De Naissance : ");
                         scanf("%10s",EtudianDepartementChimie[NumberEtudiantsChimie].DateDeNaissance);
                         printf("Entrer La nouvelle Note General : ");
                         scanf("%f",&EtudianDepartementChimie[NumberEtudiantsChimie].NoteGeneral);
                         printf("les information de l'etudiant modifier avec succe : \n");
                         NumberEtudiantsChimie++;
                         for(int i = NumberIndix ; i <= NumberEtudiantsMathematique ; i++){
                            strcpy(EtudianDepartementDeMathematique[i+1].NumeroUnique,EtudianDepartementChimie[i].NumeroUnique);
                            strcpy(EtudianDepartementDeMathematique[i+1].Nom,EtudianDepartementChimie[i].Nom);
                            strcpy(EtudianDepartementDeMathematique[i+1].PreNom,EtudianDepartementChimie[i].PreNom);
                            EtudianDepartementDeMathematique[i].NoteGeneral = EtudianDepartementDeMathematique[i+1].NoteGeneral;
                            strcpy(EtudianDepartementDeMathematique[i+1].DateDeNaissance,EtudianDepartementDeMathematique[i].DateDeNaissance);
                           }
                         
                          NumberEtudiantsMathematique--;

                        }else if(strcasecmp(Departementchoise,"Informatique")==0){
                         printf("Entrer La nouvelle Numero Unique : ");
                         scanf("%6s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].NumeroUnique);
                         printf("Entrer La nouvelle Nom : ");
                         scanf("%20s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].Nom);
                         printf("Entrer La nouvelle Prenom : ");
                         scanf("%20s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].PreNom);
                         printf("Entrer La nouvelle Date De Naissance : \n");
                         scanf("%10s",EtudianDepartementDeInformatique[NumberEtudiantsInformatique].DateDeNaissance);
                         printf("Entrer La nouvelle Note General : ");
                         scanf("%f",&EtudianDepartementDeInformatique[NumberEtudiantsInformatique].NoteGeneral);
                         printf("les information de l'etudiant modifier avec succe : \n");
                         NumberEtudiantsInformatique++;
                         for(int i = NumberIndix ; i <= NumberEtudiantsMathematique ; i++){
                            strcpy(EtudianDepartementDeMathematique[i+1].NumeroUnique,EtudianDepartementChimie[i].NumeroUnique);
                            strcpy(EtudianDepartementDeMathematique[i+1].Nom,EtudianDepartementChimie[i].Nom);
                            strcpy(EtudianDepartementDeMathematique[i+1].PreNom,EtudianDepartementChimie[i].PreNom);
                            EtudianDepartementDeMathematique[i].NoteGeneral = EtudianDepartementDeMathematique[i+1].NoteGeneral;
                            strcpy(EtudianDepartementDeMathematique[i+1].DateDeNaissance,EtudianDepartementDeMathematique[i].DateDeNaissance);
                           }
                         
                          NumberEtudiantsMathematique--;

                        } else if(strcasecmp(Departementchoise,"Mathematique")==0 || strcasecmp(Departementchoise,"Mathematiques")==0){
                         printf("Entrer La nouvelle Numero Unique : ");
                         scanf("%6s",EtudianDepartementDeMathematique[NumberIndix].NumeroUnique);
                         printf("Entrer La nouvelle Nom : ");
                         scanf("%20s",EtudianDepartementDeMathematique[NumberIndix].Nom);
                         printf("Entrer La nouvelle Prenom : ");
                         scanf("%20s",EtudianDepartementDeMathematique[NumberIndix].PreNom);
                         printf("Entrer La nouvelle Date De Naissance : ");
                         scanf("%10s",EtudianDepartementDeMathematique[NumberIndix].DateDeNaissance);
                         printf("Entrer La nouvelle Note General : ");
                         scanf("%f",&EtudianDepartementDeMathematique[NumberIndix].NoteGeneral);
                         printf("les information de l'etudiant modifier avec succe : \n");
                        }else{
                          printf("le departement entre est pas disponible ou la valeur invalid : \n");
                         valeur = 1 ;
                        }
                       }
                   }while(call == -1 || valeur == 1);
                 }else if(strcasecmp(Departementchoise,"Informatiques")==0){
                    AfficherLentreeDeNumero();
                   do{
                        printf("Entrez le numero Unique: ");
                        scanf("%6s",VerifierNumero);
                        call=VerifierUniqueInformatique(VerifierNumero);
                     if(call == -1){
                        printf("Ce Numero Ne existe pas Essayer Une Autre Qu'est Correct : \n");
                        AfficheTousInfoUniqueId();
                     }else{
                         printf("Entrer La nouvelle Departement De l'etudiant : ");
                         scanf("%49s",Departementchoise);
                       if(strcasecmp(Departementchoise,"Mathematique")==0 || strcasecmp(Departementchoise,"Mathematiques")==0){
                         printf("Entrer La nouvelle Numero Unique : \n");
                         scanf("%6s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].NumeroUnique);
                         printf("Entrer La nouvelle Nom : \n");
                         scanf("%20s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].Nom);
                         printf("Entrer La nouvelle Prenom : \n");
                         scanf("%20s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].PreNom);
                         printf("Entrer La nouvelle Date De Naissance : \n");
                         scanf("%10s",EtudianDepartementDeMathematique[NumberEtudiantsMathematique].DateDeNaissance);
                         printf("Entrer La nouvelle Note General : \n");
                         scanf("%f",&EtudianDepartementDeMathematique[NumberEtudiantsMathematique].NoteGeneral);
                         printf("les information de l'etudiant modifier avec succe : \n");
                         NumberEtudiantsMathematique++;
                         for(int i = NumberIndix ; i <= NumberEtudiantsInformatique ; i++){
                            strcpy(EtudianDepartementDeInformatique[i+1].NumeroUnique,EtudianDepartementDeInformatique[i].NumeroUnique);
                            strcpy(EtudianDepartementDeInformatique[i+1].Nom,EtudianDepartementDeInformatique[i].Nom);
                            strcpy(EtudianDepartementDeInformatique[i+1].PreNom,EtudianDepartementDeInformatique[i].PreNom);
                             EtudianDepartementDeInformatique[i].NoteGeneral = EtudianDepartementDeInformatique[i+1].NoteGeneral;
                             strcpy(EtudianDepartementDeInformatique[i+1].DateDeNaissance,EtudianDepartementDeInformatique[i].DateDeNaissance);
                           }
                         
                          NumberEtudiantsInformatique--;

                        }else if(strcasecmp(Departementchoise,"Chimie")==0){
                          printf("Entrer La nouvelle Numero Unique : ");
                          scanf("%6s",EtudianDepartementChimie[NumberEtudiantsChimie].NumeroUnique);
                          printf("Entrer La nouvelle Nom : ");
                          scanf("%20s",EtudianDepartementChimie[NumberEtudiantsChimie].Nom);
                          printf("Entrer La nouvelle Prenom : ");
                          scanf("%20s",EtudianDepartementChimie[NumberEtudiantsChimie].PreNom);
                          printf("Entrer La nouvelle Date De Naissance : ");
                          scanf("%10s",EtudianDepartementChimie[NumberEtudiantsChimie].DateDeNaissance);
                          printf("Entrer La nouvelle Note General : ");
                          scanf("%f",&EtudianDepartementChimie[NumberEtudiantsChimie].NoteGeneral);
                          printf("les information de l'etudiant modifier avec succe : \n");
                          NumberEtudiantsChimie++;
                           for(int i = NumberIndix ; i <= NumberEtudiantsInformatique ; i++){
                             strcpy(EtudianDepartementDeInformatique[i+1].NumeroUnique,EtudianDepartementDeInformatique[i].NumeroUnique);
                             strcpy(EtudianDepartementDeInformatique[i+1].Nom,EtudianDepartementDeInformatique[i].Nom);
                             strcpy(EtudianDepartementDeInformatique[i+1].PreNom,EtudianDepartementDeInformatique[i].PreNom);
                             EtudianDepartementDeInformatique[i].NoteGeneral = EtudianDepartementDeInformatique[i+1].NoteGeneral;
                              strcpy(EtudianDepartementDeInformatique[i+1].DateDeNaissance,EtudianDepartementDeInformatique[i].DateDeNaissance);
                            }
                         
                            NumberEtudiantsMathematique--;
                        }else if(strcasecmp(Departementchoise,"Informatique")==0){
                         printf("Entrer La nouvelle Numero Unique : ");
                         scanf("%6s",EtudianDepartementDeInformatique[NumberIndix].NumeroUnique);
                         printf("Entrer La nouvelle Nom : ");
                         scanf("%20s",EtudianDepartementDeInformatique[NumberIndix].Nom);
                         printf("Entrer La nouvelle Prenom : ");
                         scanf("%20s",EtudianDepartementDeInformatique[NumberIndix].PreNom);
                         printf("Entrer La nouvelle Date De Naissance : ");
                         scanf("%10s",EtudianDepartementDeInformatique[NumberIndix].DateDeNaissance);
                         printf("Entrer La nouvelle Note General : ");
                         scanf("%f",&EtudianDepartementDeInformatique[NumberIndix].NoteGeneral);
                         printf("les information de l'etudiant modifier avec succe : \n");
                        }else{
                          printf("le departement entre est pas disponible ou la valeur invalid : \n");
                          valeur = 1 ;
                        }
                     }
                   }while(call == -1);

              }
}
//----------------------------le function d'afficher le bienvenu message -----------------------
void AfficherLentreeDeNumero(){
                   printf("\n");
                   printf("Bienvenue Au Votre Departement : \n");
                   printf("Entrer Le Numero Unique Du L'etudiant : \n");
                   printf("La Valeur Doit Etre Inferieure Ou Egale a 6 caracteres :\n");
                   printf("Voici un example de Numero Unique D12345 : \n");
                   printf("\n");
}