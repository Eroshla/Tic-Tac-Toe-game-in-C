#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
//LEMBRA DE COLOCAR O & QUANDO USAR SCANF
//Colocar 0 nas posições
int main()
{
    int A=0, B=0, C=0, D=0,J[3][3],S=0,P=0,S2=0,I=0,F=0;
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");
    for(A=0;A<3;A++){
        for(B=0;B<3;B++){
            J[A][B]=0;
        }
    }
    printf("Deseja jogar? 1 para sim");
    scanf("%d",&S);
    system("cls");
    printf("Quem ira jogar primeiro? 1 ou 2?");
    scanf("%d",&P);
    system("cls");
      while(S==1){
         if(P==1){
        for(P=1;P==1;P++){
            system("cls");
            printf("\nJogador 1\n");
            printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            printf("\nEm que posição quer colocar?\nLinha:");
            scanf("%d",&A);
            printf("\nColuna:");
            scanf("%d",&B);
            if(J[A][B]!=0){
               while(S2==0){
                system("cls");
                printf("Jogada Invalida\nJogue novamente");
                printf("\nJogador 1\n");
                printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
                printf("\nEm que posição quer colocar?\nLinha:");
            scanf("%d",&A);
            printf("\nColuna:");
            scanf("%d",&B);
            if(J[A][B]!=0){
            S2=0;
            }
            else{
            S2++;
            }
            }
        }
            system("cls");
            S2=0;
            J[A][B]=1;
             printf("\nJogador 1\n");
            printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            if ((J[0][0] == J[0][1] && J[0][0] == J[0][2] && J[0][0] != ' ') ||
                (J[0][0] == J[1][1] && J[0][0] == J[2][2] && J[0][0] != ' ') ||
                (J[0][0] == J[1][0] && J[0][0] == J[2][0] && J[0][0] != ' ') ||
                (J[0][1] == J[1][1] && J[0][1] == J[2][1] && J[0][1] != ' ') ||
                (J[0][2] == J[1][2] && J[0][2] == J[2][2] && J[0][2] != ' ') ||
                (J[1][0] == J[1][1] && J[1][0] == J[1][2] && J[1][0] != ' ') ||
                (J[2][0] == J[2][1] && J[2][0] == J[2][2] && J[2][0] != ' ') ||
                (J[2][0] == J[1][1] && J[2][0] == J[0][2] && J[2][0] != ' ')) {

                    system("cls");
                    S++;
                    printf("Parabens jogador %d, você é o ganhador");
                    break;
                }

            }
        for(P=2;P==2;P--){
            system("cls");
            printf("\nJogador 2\n");
            printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            printf("\nEm que posição quer colocar?\nLinha:");
            scanf("%d",&A);
            printf("\nColuna:");
            scanf("%d",&B);
             if(J[A][B]!=0){
               while(S2==0){
            system("cls");
            printf("Jogada Invalida\nJogue novamente");
            printf("\nJogador 2\n");
            printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            printf("\nEm que posição quer colocar?\nLinha:");
            scanf("%d",&A);
            printf("\nColuna:");
            scanf("%d",&B);
            if(J[A][B]!=0){
            S2=0;
            }
            else{
            S2++;
            }
        }
    }
            system("cls");
            S2=0;
            J[A][B]=2;
            printf("\nJogador 2\n");
             printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            if ((J[0][0] == J[0][1] && J[0][0] == J[0][2]  && J[0][0] != ' ') ||
                (J[0][0] == J[1][1] && J[0][0] == J[2][2] && J[0][0] != ' ') ||
                (J[0][0] == J[1][0] && J[0][0] == J[2][0] && J[0][0] != ' ') ||
                (J[0][1] == J[1][1] && J[0][1] == J[2][1] && J[0][1] != ' ') ||
                (J[0][2] == J[1][2] && J[0][2] == J[2][2] && J[0][2] != ' ') ||
                (J[1][0] == J[1][1] && J[1][0] == J[1][2] && J[1][0] != ' ') ||
                (J[2][0] == J[2][1] && J[2][0] == J[2][2] && J[2][0] != ' ') ||
                (J[2][0] == J[1][1] && J[2][0] == J[0][2] && J[2][0] != ' ')) {

                    system("cls");
                    S++;
                    printf("Parabens jogador %d, você é o ganhador");
                    break;
                }
        }
    }
        if(P==2){
         while(S==1){
        for(P=2;P==2;P--){
                system("cls");
                printf("\nJogador 2\n");
                 printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            printf("\nEm que posição quer colocar?\nLinha:");
            scanf("%d",&A);
            printf("\nColuna:");
            scanf("%d",&B);
                         if(J[A][B]!=0){
               while(S2==0){
            system("cls");
            printf("Jogada Invalida\nJogue novamente");
            printf("\nJogador 2\n");
            printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            printf("\nEm que posição quer colocar?\nLinha:");
            scanf("%d",&A);
            printf("\nColuna:");
            scanf("%d",&B);
            if(J[A][B]!=0){
            S2=0;
            }
            else{
            S2++;
            }
               }
                         }
             system("cls");
             S2=0;
             J[A][B]=2;
             printf("\nJogador 2\n");
            printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            if ((J[0][0] == J[0][1] && J[0][0] == J[0][2]  && J[0][0] != ' ') ||
                (J[0][0] == J[1][1] && J[0][0] == J[2][2] && J[0][0] != ' ') ||
                (J[0][0] == J[1][0] && J[0][0] == J[2][0] && J[0][0] != ' ') ||
                (J[0][1] == J[1][1] && J[0][1] == J[2][1] && J[0][1] != ' ') ||
                (J[0][2] == J[1][2] && J[0][2] == J[2][2] && J[0][2] != ' ') ||
                (J[1][0] == J[1][1] && J[1][0] == J[1][2] && J[1][0] != ' ') ||
                (J[2][0] == J[2][1] && J[2][0] == J[2][2] && J[2][0] != ' ') ||
                (J[2][0] == J[1][1] && J[2][0] == J[0][2] && J[2][0] != ' ')) {

                    system("cls");
                    S++;
                    printf("Parabens jogador %d, você é o ganhador");
                    break;
                }
    }
        for(P=1;P==1;P++){
            system("cls");
            printf("\nJogador 1\n");
             printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
         printf("\nEm que posição quer colocar?\nLinha:");
            scanf("%d",&A);
            printf("\nColuna:");
            scanf("%d",&B);
                         if(J[A][B]!=0){
               while(S2==0){
            system("cls");
            printf("Jogada Invalida\nJogue novamente");
               printf("\nJogador 1\n");
            printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            printf("\nEm que posição quer colocar?\nLinha:");
            scanf("%d",&A);
            printf("\nColuna:");
            scanf("%d",&B);
            if(J[A][B]!=0){
            S2=0;
            }
            else{
            S2++;
            }
        }
    }
            system("cls");
            S2=0;
            J[A][B]=1;
            printf("\nJogador 1\n");
            printf("\n%d|%d|%d\n%d|%d|%d\n%d|%d|%d",J[0][0],J[0][1],J[0][2],J[1][0],J[1][1],J[1][2],J[2][0],J[2][1],J[2][2]);
            if ((J[0][0] == J[0][1] && J[0][0] == J[0][2]  && J[0][0] != ' ') ||
                (J[0][0] == J[1][1] && J[0][0] == J[2][2] && J[0][0] != ' ') ||
                (J[0][0] == J[1][0] && J[0][0] == J[2][0] && J[0][0] != ' ') ||
                (J[0][1] == J[1][1] && J[0][1] == J[2][1] && J[0][1] != ' ') ||
                (J[0][2] == J[1][2] && J[0][2] == J[2][2] && J[0][2] != ' ') ||
                (J[1][0] == J[1][1] && J[1][0] == J[1][2] && J[1][0] != ' ') ||
                (J[2][0] == J[2][1] && J[2][0] == J[2][2] && J[2][0] != ' ') ||
                (J[2][0] == J[1][1] && J[2][0] == J[0][2] && J[2][0] != ' ')) {

                    system("cls");
                    S++;
                    printf("Parabens jogador %d, você é o ganhador");
                    break;
                }

            }
        }
    }
}
}
