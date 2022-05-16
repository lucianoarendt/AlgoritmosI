#include <stdio.h>
#include <math.h>
#define numEx 11

typedef void Exercicio();

Exercicio *exercicios[numEx];

int indice = 0;
void SetCallbackFunc(Exercicio *exercicio){
    exercicios[indice++] = exercicio;
}

void media(){
    float num1, num2;
    printf("Digite os numeros para a media:\n");
    scanf("%f %f", &num1, &num2);

    float soma = num1+num2;
    printf("Media: %f\n", soma/2);
}

void quadrado(){
    float n;
    printf("Digite o numero para o quadrado:\n");
    scanf("%f", &n);

    printf("%f^2 = %f\n", n, n*n);
}

void imc(){
    float peso, altura;
    printf("Digite o peso e a altura:\n");
    scanf("%f %f", &peso, &altura);

    float imc = peso/(altura*altura);

    printf("IMC: %f\n", imc);
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

    printf("i:%d, j:%d\n", i, j);
}

void converteTempo(){
    int h, m, s;
    printf("Insira as horas, minutos e segundos:\n");
    scanf("%d %d %d", &h, &m, &s);

    printf("%d s\n", h*3600+m*60+s);
}

void msTokmh(){
    float ms;
    printf("Insira uma velocidade em m/s para conversao:\n");
    scanf("%f", &ms);

    printf("%f km/h\n", ms*3.6);
}

void distanciaEntreDoisPontos(){
    float x1, x2, y1, y2;

    printf("Digite x1 y1 x2 y2\n");

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    printf("A distancia e: %f\n", sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
}

void volumeEsfera(){
    float r;
    printf("Digite o raio:\n");

    scanf("%f", &r);

    printf("O volume e: %f", (4.0/3)*M_PI*pow(r, 3));
}

void areaTriangulo(){
    float a, b, c;

    printf("Insira os lados do triangulo:\n");

    scanf("%f %f %f", &a, &b, &c);

    float p = (a+b+c)/2;

    printf("A area e: %f", sqrt(p*(p - a)*(p - b)*(p - c)));
}

void litrosPorHora(){
    float km, l;
    printf("Digite os km rodados e o combustivel consumido\n");

    scanf("%f %f", &km, &l);

    printf("Media de consumo: %f l/km", l/km);
}

void dinheiroFumo(){
    int anos;
    float cigPorDia, precoCarteira;

    scanf("%d %f %f", &anos, &cigPorDia, &precoCarteira);

    printf("%f", anos*365*cigPorDia*(precoCarteira/20));
}

void celciusFahreinheit(){
    float celcius;

    printf("Digite o valor em Celcius:\n");

    scanf("%f", &celcius);

    printf("%f °F", (9.0/5)*celcius-32);
}

void precoFinal(){
    float precoCusto;

    scanf("%f", &precoCusto);

    printf("%f", precoCusto * 1.95);
}

int main(){
    SetCallbackFunc(media);
    SetCallbackFunc(quadrado);
    SetCallbackFunc(imc);
    SetCallbackFunc(troca);
    SetCallbackFunc(converteTempo);
    SetCallbackFunc(msTokmh);
    SetCallbackFunc(litrosPorHora);
    SetCallbackFunc(dinheiroFumo);
    SetCallbackFunc(precoFinal);

    SetCallbackFunc(distanciaEntreDoisPontos);
    SetCallbackFunc(volumeEsfera);
    SetCallbackFunc(areaTriangulo);

    int choice;
    do {
      printf("\n\nEscolha o Exercicio:\n");
      printf("0: Media\n");
      printf("1: Quadrado\n");
      printf("2: IMC\n");
      printf("3: inverte a com b\n");
      printf("4: Converte tempo\n");
      printf("5: Ms para Km/H\n");
      printf("6: Litros por hora\n");
      printf("7: Preco final\n");

      //questoes math.h
      printf("8: Distancia entre dois pontos:\n");
      printf("9: Volume de uma esfera:\n");
      printf("10: Area triangulo:\n");
      printf(">%d: Sair\n", indice);

      scanf("%d", &choice);

      if(choice <= indice){
        exercicios[choice]();
      }
    } while (choice <= indice);
}