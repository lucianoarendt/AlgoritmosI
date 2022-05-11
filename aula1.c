#include <stdio.h>

typedef int Exercicio();

Exercicio *exercicios[6];

void SetCallbackFunc(int indice, Exercicio *exercicio){
    exercicios[indice] = exercicio;
}

void media(){
    float num1, num2;
    printf("Digite os numeros para a média:\n");
    scanf("%f %f", &num1, &num2);


    float soma = num1+num2;
    printf("Media: %f", soma/2);
}

void quadrado(){
    float n;
    printf("Digite o numero para o quadrado:\n");
    scanf("%f", &n);

    printf("%f^2 = %f", n, n*n);
}

void imc(){
    float peso, altura;
    printf("Digite o peso e a altura:\n");
    scanf("%f %f", &peso, &altura);

    float imc = peso/(altura*altura);

    printf("IMC: %f", imc);
}

void troca(){
    int i, j/*, aux*/;

    printf("Digite os numeros a serem invertidos:\n");
    scanf("%d %d", i, j);

    // aux = i;
    // i = j;
    // j= aux;

    i += j;
    j = i - j;
    i = i - j;

    printf("i:%d, j:%d", i, j);
}

void converteTempo(){
    int h, m, s;
    printf("Insira as horas, minutos e segundos:\n");
    scanf("%d %d %d", &h, &m, &s);

    printf("%d s", h*3600+m*60+s);
}

void msTokmh(){
    float ms;
    printf("Insira uma velocidade em m/s para conversao:");
    scanf("%f", &ms);

    printf("%f km/h", ms*3.6);
}

int main(){
    SetCallbackFunc(0, media);
    SetCallbackFunc(1, quadrado);
    SetCallbackFunc(2, imc);
    SetCallbackFunc(3, troca);
    SetCallbackFunc(4, converteTempo);
    SetCallbackFunc(5, msTokmh);

    printf("Escolha o Exercicio:\n");
    printf("0: Media\n");
    printf("1: Quadrado\n");
    printf("2: IMC\n");
    printf("3: inverte a com b\n");
    printf("4: Converte tempo\n");
    printf("5: Ms para Km/H\n");

    int ex;
    scanf("%d", &ex);

    exercicios[ex]();
}