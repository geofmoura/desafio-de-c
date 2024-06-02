# Gerenciamento de Consumo de Água em Cisternas

Este projeto tem como objetivo desenvolver um programa em C que auxilia os utilizadores a controlarem o consumo de água armazenada em cisternas ou reservatórios. O programa recebe as dimensões de uma cisterna e o consumo médio diário dos utilizadores, e fornece informações úteis para o gerenciamento do uso da água.

## Problema

O Brasil tem enfrentado uma crise hídrica nos últimos anos, levando muitos brasileiros a construírem cisternas ou reservatórios para armazenar água. No entanto, a falta de um gerenciamento adequado do uso dessa água armazenada é um desafio. Este programa foi desenvolvido para ajudar no controle do consumo de água.

## Funcionalidades

O programa realiza as seguintes operações:

1. **Entrada de dados**:
   - Dimensões da cisterna (altura, largura e comprimento) em centímetros.
   - Consumo médio diário de água em litros.

2. **Cálculos**:
   - Capacidade total do reservatório em litros.
   - Autonomia do reservatório em dias.

3. **Classificação do consumo**:
   - Consumo elevado: se a autonomia for menor que 2 dias.
   - Consumo moderado: se a autonomia estiver entre 2 e 7 dias.
   - Consumo reduzido: se a autonomia for maior que 7 dias.

## Como funciona

### 1. Entrada de Dados

O programa solicita ao usuário as seguintes informações:
- Altura da cisterna em centímetros.
- Largura da cisterna em centímetros.
- Comprimento da cisterna em centímetros.
- Consumo médio diário em litros.

### 2. Cálculo da Capacidade Total do Reservatório

Para calcular a capacidade total do reservatório em litros, o programa realiza os seguintes passos:
1. Calcula o volume da cisterna em centímetros cúbicos (cm³):

  volume_cm3 = altura * largura * comprimento

2. Converte o volume de cm³ para litros, sabendo que 1 litro equivale a 1000 cm³:

  capacidade_total_litros = volume_cm3 / 1000
  
### 3. Cálculo da Autonomia do Reservatório

A autonomia do reservatório, em dias, é calculada dividindo a capacidade total pelo consumo diário:

autonomia_dias = capacidade_total_litros / consumo_diario


### 4. Classificação do Consumo

O programa classifica o consumo de acordo com a autonomia calculada:
- **Consumo elevado**: autonomia < 2 dias
- **Consumo moderado**: 2 dias <= autonomia <= 7 dias
- **Consumo reduzido**: autonomia > 7 dias

## Exemplo de Uso

Aqui está um exemplo de como o programa pode ser utilizado:

1. Digite a altura da cisterna em cm: `200`
2. Digite a largura da cisterna em cm: `150`
3. Digite o comprimento da cisterna em cm: `100`
4. Digite o consumo médio diário em litros: `250`

Saída do programa:

Capacidade total do reservatório: 3000.00 litros
Autonomia do reservatório: 12.00 dias
Consumo reduzido


## Compilação e Execução

Para compilar e executar o programa, utilize os seguintes comandos:

```sh
gcc -o cisterna cisterna.c
./cisterna
