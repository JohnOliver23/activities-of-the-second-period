#include <stdio.h>

int main(){
int i, c, matricula[2], qtdacerto[2], qtderros[2], qtdbranco[2];

for(c=0; c<2; c++){
    printf("Digite a matricula do aluno");
    scanf("%d",&matricula[c]);
    printf("Digite a quantidade de acertos ");
    scanf("%d",&qtdacerto[c]);
    printf("Digite a quantidade de erros");
    scanf("%d", &qtderros[c]);
    printf("Digite a quantidade de questoes em brancos");
    scanf("%d", &qtdbranco[c]);

}
for(c=0; c<2; c++){
    if(qtdacerto[c]>=100){
        printf("matricula : %d acertou mais de 50 por cento das questoes\n",matricula[c]);
        printf("com %d acertos\n",qtdacerto[c]);
        printf("errou %d questoes\n",qtderros[c]);
        printf("com %d questoes nao respondidas",qtdbranco[c]);

    }
}




}
