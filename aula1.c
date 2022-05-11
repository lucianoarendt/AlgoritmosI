#include <stdio.h>

typedef int Exercicio();

Exercicio *exercicios[6];

void SetCallbackFunc(int indice, Exercicio *exercicio){
    exercicios[indice] = exercicio;
}

void media(){
    float num1, num2;
    printf("Digite os numeros:\n");
    scanf("%f %f", &num1, &num2);

    float media = (num1+num2)/2;
    printf("Media: %f", media);
}

void quadrado(){
    float n;
    scanf("%f", &n);

    printf("%f", n*n);
}

void imc(){
    float peso, altura;
    scanf("%f %f", &peso, &altura);

    float imc = peso/(altura*altura);

    printf("%f", imc);
}

void troca(){
    int i, j/*, aux*/;

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
    scanf("%d %d %d", &h, &m, &s);

    printf("%d", h*3600+m*60+s);
}

void msTokmh(){
    float ms;
    scanf("%f", &ms);

    printf("%f", ms*3.6);
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