// Um determinado material radioativo perde metade de sua
// massa a cada 50 segundos. Dada a massa inicial, em gramas, fazer um
// programa em C que calcule o tempo necessário para que essa massa se torne
// menor que 0,5 grama. 
// O programa em C deve escrever a massa inicial, a massa
// final e o tempo calculado em horas, minutos e segundos.

#include <stdio.h>

int main()
{
    int tempo_t = 0, tempo_s, tempo_m, tempo_h;
    float massa, massa_final;
    printf("Digite a massa inicial:");
    scanf("%f",&massa);
    
    massa_final = massa;

    while(massa_final >= 0.5){
        massa_final = massa_final/ 2;
        tempo_t = tempo_t + 50;
    }

    tempo_h = tempo_t / 3600;
    tempo_m = (tempo_t % 3600) / 60;
    tempo_s = (tempo_t % 3600) % 60;
    printf("\nMassa inicial: %5.2fg", massa);
    printf("\nMassa final: %7.2fg", massa_final);
    printf("\nTempo de desgaste do material: %dhoras, %dminutos e %dsegundos", tempo_h, tempo_m, tempo_s);


    return 0;
}