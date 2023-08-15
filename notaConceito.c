#include <stdio.h>
#include <stdlib.h>

int main() {
    char conceito;
    double trabalho, avaliação, exame, media;

    printf("Digite a nota da P1 : ");
    scanf("%lf", &trabalho);
    printf("Digite a nota da P2 : ");
    scanf("%lf", &avaliação);
    printf("Digite a nota da PF : ");
    scanf("%lf", &exame);
    printf("-----------------------------------------------\n");
    printf("       R E S U L T A D O  D O  A L U N O       \n");
    printf("-----------------------------------------------\n");

    media = ((trabalho * 2) + (avaliação * 3) + (exame * 5)) / 10;

    if (media >= 0 && media <= 10) {
        if (media >= 8) {
            conceito = 'A';
        } else if (media >= 7) {
            conceito = 'B';
        } else if (media >= 6) {
            conceito = 'C';
        } else if (media >= 5) {
            conceito = 'D';
        } else {
            conceito = 'F';
        }
    }
    
    printf("Média ponderada : %.2lf\n", media);
    printf("Conceito        : %c", conceito);

    return 0;
}