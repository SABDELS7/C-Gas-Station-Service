#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    char nom[30], prenom[30];
    int i = 0;
    float km[N], ess[N];
    double taux;
    while (1)
    {
        system("clear");
        if (i == 0)
        {
            printf("Bonjour,veuiller saisir votre nom et votre prenom\n");
            scanf("%s %s", &nom, &prenom);
        }
        else
        {
            printf("Bonjour %s %s c'est votre %d eme visites\n", prenom, nom, i + 1);
        }
        printf("Veuiller saisir votre kilometrage \n");
        scanf("%f", &km[i]);
        printf("Veuiller saisir la quantite d'essence\n");
        scanf("%f", &ess[i]);
        if (i != 0)
        {
            taux = ess[i - 1] * 100 / (km[i] - km[i - 1]);
            printf("Votre taux est: %.2lf\n", taux);
        }
        i++;
        system("sleep 5");
    }
    return 0;
}