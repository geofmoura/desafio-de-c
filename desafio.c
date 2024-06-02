#include <stdio.h>

int main() {
    float altura, largura, comprimento;
    float consumodiario;
    

    printf("Digite a altura da cisterna em cm: ");
    scanf("%f", &altura);

    printf("Digite a largura da cisterna em cm: ");
    scanf("%f", &largura);

    printf("Digite o comprimento da cisterna em cm: ");
    scanf("%f", &comprimento);

    printf("Qual consumo médio diário em litros? ");
    scanf("%f", &consumodiario);

    float capacidadetotal = (altura * largura * comprimento) / 1000;
    float autonomia = capacidadetotal / consumodiario;
    

    if (autonomia > 2) {
     
        printf("Consumo elevado");

    } else if (autonomia <=2 && autonomia <= 7) {

        printf("Consumo moderado");

    } else {

        printf("Consumo reduzido");

    }
    
    printf("Capacidade total do reservatório: %.2f litros\n", capacidadetotal);
    printf("Autonomia do reservatório é: %.2f dias\n", autonomia);

return 0;

}