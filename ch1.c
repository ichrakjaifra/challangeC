#include <stdio.h>

int main() {
    
    char nom[10], prenom[10], sexe[10], email[10];
    int age;
    
    printf("Veuillez saisir votre nom:");
    scanf("%s",nom);
    
    printf("Veuillez saisir votre prenom:");
    scanf("%s",prenom);
    
    printf("Veuillez saisir votre age:");
    scanf("%d",&age);
    
    printf("Veuillez saisir votre sexe:");
    scanf("%s",sexe);
    
    printf("Veuillez saisir votre email:");
    scanf("%s",email);
    
    printf("Informations Personnelles:\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("Age : %d\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Email : %s\n", email);

    
    return 0;
}