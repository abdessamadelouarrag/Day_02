#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max_livre 100

int main(){
    char titre[max_livre][100];
    char auteur[max_livre][60];
    float prix[20];
    int quantite[100];
    int choix;
    int nbtlivre = 0;
    int num;
    int nvquan;
    char nvtitre[100];
    char num2[100];
    int sum = 0;

    //ajouter un livre au stock
    do
    {
        //menu:
        printf("-------- WELCOME (entrer un choix) --------\n");
        printf("1.pour ajouter un livre\n");
        printf("2.pour afficher tous les livres disponibles\n");
        printf("3.pour rechercher un livre par son titre\n");
        printf("4.pour mettre a jour la Quantite d\'un Livre\n");
        printf("5.pour supprimer un livre du stock\n");
        printf("6.pour afficher le nombre total de livres en stock\n");
        printf("7.pour sortie\n");

        printf("le choix :");
        scanf("%d", &choix);
        getchar();

        switch (choix)
    {
    case 1:

        //ajouter un livre

        printf("-------------------------------\n");
        printf("entrer le titre de livre :\n");
        scanf(" %[^\n]s", &titre[nbtlivre]);

        printf("entrer l'auteur de livre :\n");
        scanf(" %[^\n]s", &auteur[nbtlivre]);

        printf("entrer le prix de livre :\n");
        scanf("%f", &prix[nbtlivre]);

        printf("entrer la quantite de livre :\n");
        scanf("%d", &quantite[nbtlivre]);

        nbtlivre++;

        break;
    case 2:

        //afficher un livre

        for (int i = 0; i < nbtlivre; i++)
        {
            printf("-------------------------------\n");
            printf("titre : %s\n", titre[i]);
            printf("auteur : %s\n", auteur[i]);
            printf("le prix : %.2f\n", prix[i]);
            printf("la quantite : %d\n", quantite[i]);
        }
        break;

    case 3:

        //recherche avec le titre

        printf("entrer le titre de livre :");
        scanf(" %[^\n]s", nvtitre);

        int found = 0;

        for (int i = 0; i < nbtlivre; i++)
        {
            if (strcmp(nvtitre, titre[i]) == 0)
            {
                printf("--------------------\n");
                printf("livre trouve :\n");
                printf("titre : %s\n", titre[i]);
                printf("auteur : %s\n", auteur[i]);
                printf("le prix : %.2f\n", prix[i]);
                printf("la quantite : %d\n", quantite[i]);
                found = 1;
            }
        }

        if (found != 1)
        {
            printf("non livre avec ce titre la !!\n");
        }
        break;

    case 4:
        //Mettre à Jour la Quantité d'un Livre

        printf("entrer id de livre (1 - %d) :\n", nbtlivre);
        scanf("%d", &num);

        if (num >= 1 && num <= nbtlivre)
        {
            printf("entre la nouvelle quantite :\n");
            scanf("%d", &nvquan);

            quantite[num - 1] = nvquan;
            printf("mettre a jour de quantite !good\n");
        }
        else
        printf("nombre invalide!?\n");
        break;
    case 5:
        //supprime un livre 
        printf("entrer le titre de livre : \n");
        scanf(" %[^\n]s", num2);

        for (int i = 0; i < nbtlivre; i++)
        {
            if (strcmp(num2, titre[i]) == 0)
            {
                 for (int j = i; j < nbtlivre; j++)
                {
                    strcpy(titre[j],titre[j + 1]);
                }
                printf("tu a supprimer le livre !!\n");
            }
        }
        nbtlivre--;

        break;

    case 6:
        //la somme des livres

        for (int i = 0; i < nbtlivre; i++)
        {
            sum = sum + quantite[i];
        }
        printf("--------------------------------------\n");
        printf("la somme des livres en stocke est : %d\n", sum);

        break;
        
    default:
        printf("merci !!!\n");
        //return 0;
    }
    } while (choix != 0);

    return 0;
}