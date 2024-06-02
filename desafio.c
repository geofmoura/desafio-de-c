#include <stdio.h>

int main() {
    float altura, largura, comprimento;
    float consumo_diario;


    printf("Digite a altura da cisterna em cm: ");
    scanf("%d", &altura);

    printf("Digite a largura da cisterna em cm: ");
    scanf("%d", &largura);

    printf("Digite o comprimento da cisterna em cm: ");
    scanf("%d", &comprimento);

    printf("Qual consumo médio diário em litros? ");
    scanf("%d", &consumo_diario);

    float capacidade_total = (altura * largura * comprimento) / 1000;
    float autonomia = capacidade_total / consumo_diario;

    printf("Capacidade total do reservatório: \n"capacidade_total);
    printf("Autonomia do reservatório é: /n"autonomia);

    if (autonomia > 2) {
     
        printf("Consumo elevado");

    } else if (autonomia <=2 && autonomia <= 7) {

        printf("Consumo moderado");

    } else {

        printf("Consumo reduzido");

    }

return 0;

}