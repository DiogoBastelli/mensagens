#include <stdio.h>
int main(){
    int msg , escolha = 1 , ValidadeSaida = 1 ;
    char sn;
    
    while (escolha == 1){
        ValidadeSaida = 1;
        escolha = 1;
        printf("Qual mensagem deseja ser visualizada?\n");
        printf("1- Mensagem 1\n2- Mensagem 2\n3- Mensagem 3\n4- Mensagem 4\n5- Mensagem 5\n0- Sair\n");
        scanf("%d" , &msg);

        switch (msg){
            case 1: 
                printf("Você escolheu a Mensagem 1: Olá, mundo!\n");
                escolha = 0;
                break;
            case 2: 
                printf("Você escolheu a Mensagem 2: Bem-vindo ao programa!\n");
                escolha = 0;
                break;
            case 3: 
                printf("Você escolheu a Mensagem 3: Programação em C é divertida!\n");
                escolha = 0;
                break;
            case 4: 
                printf("Você escolheu a Mensagem 4: Estudando C pode abrir portas para você!\n");
                escolha = 0;
                break;
            case 5: 
                printf("Você escolheu a Mensagem 5: Pratique sempre para melhorar suas habilidades.\n");
                escolha = 0;
                break;
            case 0: 
                printf("Saindo do programa\n");
                escolha = 0;
                break;
            default:
                printf("Insira um numero valido!!\n");
                escolha = 1;
                ValidadeSaida = 0;
                break;
        }

        while (ValidadeSaida == 1){
            printf("Deseja ver outra mensagem? Digite 's' para sim ou 'n' para não:\n");
            scanf("%s" , &sn);
            if(sn == 's'|| sn =='S'){
                escolha = 1;
                ValidadeSaida = 0;
            }else if(sn == 'n' || sn == 'N'){
                printf("Obrigado por usar o programa. Até a próxima!");
                escolha = 0;
                ValidadeSaida = 0;
                break;
            }else{
                printf("escolha S ou N\n");
                ValidadeSaida = 1;
            }
       }
    } 
}