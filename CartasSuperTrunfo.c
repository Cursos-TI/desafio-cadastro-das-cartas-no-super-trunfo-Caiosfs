#include <stdio.h>
int main(){

    /*As áreas de pós finalização(if-else-if de comparação) do desafio não precisa ser editadas,pois as
    variaveis das cartas(Primeiras variaveis, conglomerado 01 e 02), sem precisar mudar,
    nome ou atributo pois as variaveis das cartas estão comandando tambem nome e qual atributo ira aparecer na comparação,
    qualquer mudança de menor para maior nas variaveis das cartas(conglomerado 01 e 02) irá mudar o restante do programa.
    
    OBS: Se deve respeitar as variaveis do conglomerado 01 e 02, sem alterar suas funções e trocar variavel,
    Somento trocar valores, obrigado.*/

    //Atributos da primeira carta. Conglomerado 01.
    char NomePais1[10] = "Brasil";
    int PopPais1 = 212583750;
    float AreaPais1 = 8515767;
    float PibPais1 = 2360.00;
    int PTuristicoPais1 = 10;
    float DensidPais1 = 27.7;

    //atributos da segunda carta. Conglomerado 02.
    char NomePais2[10] = "Argentina";
    int PopPais2 = 47479795;
    float AreaPais2 = 2780400;
    float PibPais2 = 635.90;
    int PTuristicoPais2 = 8;
    float DensidPais2 = 16.9;

    //variavel para o usuario inicar, ver tutorial ou sair do jogo.
    int EscolhaUser;

    printf("###Super Trunfo###\n");
    printf("1.Jogar.\n");
    printf("2.Tutorial.\n");
    printf("3.Sair.\n");
    scanf("%d", &EscolhaUser);

    //variaveis que são para comparação para cada atributo.

    //variaveis da CARTA01. Conglomerado 03.
    int Atrib_C1_1 = PopPais1;
    float Atrib_C1_2 = AreaPais1;
    float Atrib_C1_3 = PibPais1;
    int Atrib_C1_4 = PTuristicoPais1;
    float Atrib_C1_5 = DensidPais1;

    //variaveis da CARTA02. Conglomerado 04.
    int Atrib_C2_1 = PopPais2;
    float Atrib_C2_2 = AreaPais2;
    float Atrib_C2_3 = PibPais2;
    int Atrib_C2_4 = PTuristicoPais2;
    float Atrib_C2_5 = DensidPais2;

    //variaveis de escolha do usuario
    //CardEscolhido: vai armazenar a carta escolhida pro jogador continuar.
    //AtributoUser: Atributo que o usuario quer usar para o desafio.
    int CardEscolhido;
    int AtributoUser;


    //primeiro switch
    //CASO 1: Sai do menu e inicia o jogo.
    //CASO 2: Escolhe o tutorial - uma breve explicação de como o jogo vai funcionar.
    //CASO 3: Sair do jogo se ele não quiser jogar.
    //Default: irá finalizar o jogo se o usario escolher uma opção que não está disponivel.
    switch (EscolhaUser) {
        case 1:
        printf("Iniciar Jogo.\n");
        printf("1. Brasil.\n");
        printf("2. Argentina.\n");
        printf("Escolha sua Carta\n");
        scanf("%d", &CardEscolhido);
            switch (CardEscolhido) { //Switch de escolha de cartas.
                case 1: //Usuario escolheu a CARTA 1.
                printf("Brasil.\n"); //Os atributos estão em ordem númerica de 1 até 5.
                printf("Atributos.\n");
                printf("1. População.\n");
                printf("2. Área.\n");
                printf("3. PIB.\n");
                printf("4. Pontos Turisticos.\n");
                printf("5. Densidade Demográfica.\n");
                printf("Escolha um Atributo para o Desafio.\n");
                scanf("%d", &AtributoUser); // após a escolha do atributo pelo úsuario, irá iniciar a comparação das cartas.
                    if (AtributoUser == 1) { //if-else-if para o desafio acontecer, a opção que o usuario escolher.
                        printf("Atributo Escolhido: População.\n");
                            if(Atrib_C1_1 > Atrib_C2_1) { //if caso de vitoria.
                                printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                printf("Atributo de Desafio: População.\n");
                                printf("%s: %d.  <----->  %s: %d.\n", NomePais1, PopPais1, NomePais2, PopPais2);
                                printf("*Carta %s Venceu!*\n", NomePais1);
                                printf("###Você Ganhou.###\n");
                            } else if (Atrib_C1_1 < Atrib_C2_1) { //else if caso de derrota.
                                printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                printf("Atributo de Desafio: População.\n");
                                printf("%s: %d.  <----->  %s: %d.\n", NomePais1, PopPais1, NomePais2, PopPais2);
                                printf("*Carta %s Venceu!*\n", NomePais2);
                                printf("###Você Perdeu.###\n");
                            } else if (Atrib_C1_1 == Atrib_C2_1) { //else if caso empate.
                                printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                printf("Atributo de Desafio: População.\n");
                                printf("%s: %d.  <----->  %s: %d.\n", NomePais1, PopPais1, NomePais2, PopPais2);
                                printf("###Empate!###\n");
                            } else { //esle se o usuario errar a escolha.
                                printf("Interação invalida.\n");
                                printf("Jogo Finalizado.\n");
                            }
                        } else if (AtributoUser == 2) { //else-if para comparação do segundo atributo.
                            printf("Atributo Escolhido: Área.\n");
                                if(Atrib_C1_2 > Atrib_C2_2) { //if caso de vitoria.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2fKm²  <----->  %s: %.2fKm²\n", NomePais1, AreaPais1, NomePais2, AreaPais2);
                                    printf("*Carta %s Venceu!*\n", NomePais1);
                                    printf("###Você Ganhou.###\n");
                                } else if (Atrib_C1_2 < Atrib_C2_2) { //else if caso de derrota.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2fKm²  <----->  %s: %.2fKm²\n", NomePais1, AreaPais1, NomePais2, AreaPais2);
                                    printf("*Carta %s Venceu!*\n", NomePais2);
                                    printf("###Você Perdeu.###\n");
                                } else if (Atrib_C1_2 == Atrib_C2_2) { //else if caso empate.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2fKm²  <----->  %s: %.2fKm²\n", NomePais1, AreaPais1, NomePais2, AreaPais2);
                                    printf("###Empate!###\n");
                            } else { //esle se o usuario errar a escolha.
                                printf("Interação invalida.\n");
                                printf("Jogo Finalizado.\n");
                            } 
                        } else if (AtributoUser == 3) { //else-if para comparação do terceiro atributo.
                            printf("Atributo Escolhido: Área.\n");
                                if(Atrib_C1_3 > Atrib_C2_3) { //if caso de vitoria.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2f  <----->  %s: %.2f\n", NomePais1, PibPais1, NomePais2, PibPais2);
                                    printf("*Carta %s Venceu!*\n", NomePais1);
                                    printf("###Você Ganhou.###\n");
                                } else if (Atrib_C1_3 < Atrib_C2_3) { //else if caso de derrota.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2f  <----->  %s: %.2f\n", NomePais1, PibPais1, NomePais2, PibPais2);
                                    printf("*Carta %s Venceu!*\n", NomePais2);
                                    printf("###Você Perdeu.###\n");
                                } else if (Atrib_C1_3 == Atrib_C2_3) { //else if caso empate.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2f  <----->  %s: %.2f\n", NomePais1, PibPais1, NomePais2, PibPais2);
                                    printf("###Empate!###\n");
                                } else { //esle se o usuario errar a escolha.
                                    printf("Interação invalida.\n");
                                    printf("Jogo Finalizado.\n");
                            }
                        } else if (AtributoUser == 4) { //else-if para comparação do quarto atributo.
                            printf("Atributo Escolhido: Área.\n");
                                if(Atrib_C1_4 > Atrib_C2_4) { //if caso de vitoria.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %d.  <----->  %s: %d.\n", NomePais1, PTuristicoPais1, NomePais2, PTuristicoPais2);
                                    printf("*Carta %s Venceu!*\n", NomePais1);
                                    printf("###Você Ganhou.###\n");
                                } else if (Atrib_C1_4 < Atrib_C2_4) { //else if caso de derrota.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %d.  <----->  %s: %d.\n", NomePais1, PTuristicoPais1, NomePais2, PTuristicoPais2);
                                    printf("*Carta %s Venceu!*\n", NomePais2);
                                    printf("###Você Perdeu.###\n");
                                } else if (Atrib_C1_4 == Atrib_C2_4) { //else if caso empate.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %d.  <----->  %s: %d.\n", NomePais1, PTuristicoPais1, NomePais2, PTuristicoPais2);
                                    printf("###Empate!###\n");
                                } else { //esle se o usuario errar a escolha.
                                    printf("Interação invalida.\n");
                                    printf("Jogo Finalizado.\n");
                                }
                        } else if (AtributoUser == 5) { //else-if para comparação do quinto atributo.
                            printf("Atributo Escolhido: Área.\n");
                                if(Atrib_C1_5 < Atrib_C2_5) { //if caso de vitoria.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2f.  <----->  %s: %.2f.\n", NomePais1, DensidPais1, NomePais2, DensidPais2);
                                    printf("*Carta %s Venceu!*\n", NomePais1);
                                    printf("###Você Ganhou.###\n");
                                } else if (Atrib_C1_5 > Atrib_C2_5) { //else if caso de derrota.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2f.  <----->  %s: %.2f.\n", NomePais1, DensidPais1, NomePais2, DensidPais2);
                                    printf("*Carta %s Venceu!*\n", NomePais2);
                                    printf("###Você Perdeu.###\n");
                                } else if (Atrib_C1_5 == Atrib_C2_5) { //else if caso empate.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais1, NomePais2);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %.2f.  <----->  %s: %.2f.\n", NomePais1, DensidPais1, NomePais2, DensidPais2);
                                    printf("###Empate!###\n");
                                } else { //esle se o usuario errar a escolha.
                                    printf("Interação invalida.\n");
                                    printf("Jogo Finalizado.\n");
                                }
                        }
                break;
                case 2: //Usuario escolheu a CARTA 2.
                    printf("Argentina.\n"); //Os atributos estão em ordem númerica de 1 até 5.
                    printf("Atributos.\n");
                    printf("1. População.\n");
                    printf("2. Área.\n");
                    printf("3. PIB.\n");
                    printf("4. Pontos Turisticos.\n");
                    printf("5. Densidade Demográfica.\n");
                    printf("Escolha um Atributo para o Desafio.\n");
                    scanf("%d", &AtributoUser); // após a escolha do atributo pelo úsuario, irá iniciar a comparação das cartas.
                        if (AtributoUser == 1) { //if-else-if para o desafio acontecer, a opção que o usuario escolher.
                            printf("Atributo Escolhido: População.\n");
                                if(Atrib_C2_1 > Atrib_C1_1) { //if caso de vitoria.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %d.  <----->  %s: %d.\n", NomePais2, PopPais2, NomePais1, PopPais1);
                                    printf("*Carta %s Venceu!*\n", NomePais2);
                                    printf("###Você Ganhou.###\n");
                                } else if (Atrib_C2_1 < Atrib_C1_1) { //else if caso de derrota.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %d.  <----->  %s: %d.\n", NomePais2, PopPais2, NomePais1, PopPais1);
                                    printf("*Carta %s Venceu!*\n", NomePais1);
                                    printf("###Você Perdeu.###\n");
                                } else if (Atrib_C2_1 == Atrib_C1_1) { //else if caso empate.
                                    printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                    printf("Atributo de Desafio: População.\n");
                                    printf("%s: %d.  <----->  %s: %d.\n", NomePais2, PopPais2, NomePais1, PopPais1);
                                    printf("###Empate!###\n");
                                } else { //esle se o usuario errar a escolha.
                                    printf("Interação invalida.\n");
                                    printf("Jogo Finalizado.\n");
                                }
                            } else if (AtributoUser == 2) { //else-if para comparação do segundo atributo.
                                printf("Atributo Escolhido: Área.\n");
                                    if(Atrib_C2_2 > Atrib_C1_2) { //if caso de vitoria.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2fKm²  <----->  %s: %.2fKm²\n", NomePais2, AreaPais2, NomePais1, AreaPais1);
                                        printf("*Carta %s Venceu!*\n", NomePais2);
                                        printf("###Você Ganhou.###\n");
                                    } else if (Atrib_C2_2 < Atrib_C1_2) { //else if caso de derrota.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2fKm²  <----->  %s: %.2fKm²\n", NomePais2, AreaPais2, NomePais1, AreaPais1);
                                        printf("*Carta %s Venceu!*\n", NomePais1);
                                        printf("###Você Perdeu.###\n");
                                    } else if (Atrib_C2_2 == Atrib_C1_2) { //else if caso empate.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2fKm²  <----->  %s: %.2fKm²\n", NomePais2, AreaPais2, NomePais1, AreaPais1);
                                        printf("###Empate!###\n");
                                } else { //esle se o usuario errar a escolha.
                                    printf("Interação invalida.\n");
                                    printf("Jogo Finalizado.\n");
                                } 
                            } else if (AtributoUser == 3) { //else-if para comparação do terceiro atributo.
                                printf("Atributo Escolhido: Área.\n");
                                    if(Atrib_C2_3 > Atrib_C1_3) { //if caso de vitoria.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2f  <----->  %s: %.2f\n", NomePais2, PibPais2, NomePais1, PibPais1);
                                        printf("*Carta %s Venceu!*\n", NomePais2);
                                        printf("###Você Ganhou.###\n");
                                    } else if (Atrib_C2_3 < Atrib_C1_3) { //else if caso de derrota.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2f  <----->  %s: %.2f\n", NomePais2, PibPais2, NomePais1, PibPais1);
                                        printf("*Carta %s Venceu!*\n", NomePais1);
                                        printf("###Você Perdeu.###\n");
                                    } else if (Atrib_C2_3 == Atrib_C1_3) { //else if caso empate.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2f  <----->  %s: %.2f\n", NomePais2, PibPais2, NomePais1, PibPais1);
                                        printf("###Empate!###\n");
                                    } else { //esle se o usuario errar a escolha.
                                        printf("Interação invalida.\n");
                                        printf("Jogo Finalizado.\n");
                                }
                            } else if (AtributoUser == 4) { //else-if para comparação do quarto atributo.
                                printf("Atributo Escolhido: Área.\n");
                                    if(Atrib_C2_4 > Atrib_C1_4) { //if caso de vitoria.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %d.  <----->  %s: %d.\n", NomePais2, PTuristicoPais2, NomePais1, PTuristicoPais1);
                                        printf("*Carta %s Venceu!*\n", NomePais2);
                                        printf("###Você Ganhou.###\n");
                                    } else if (Atrib_C2_4 < Atrib_C1_4) { //else if caso de derrota.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %d.  <----->  %s: %d.\n", NomePais2, PTuristicoPais2, NomePais1, PTuristicoPais1);
                                        printf("*Carta %s Venceu!*\n", NomePais1);
                                        printf("###Você Perdeu.###\n");
                                    } else if (Atrib_C2_4 == Atrib_C1_4) { //else if caso empate.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %d.  <----->  %s: %d.\n", NomePais2, PTuristicoPais2, NomePais1, PTuristicoPais1);
                                        printf("###Empate!###\n");
                                    } else { //esle se o usuario errar a escolha.
                                        printf("Interação invalida.\n");
                                        printf("Jogo Finalizado.\n");
                                    }
                            } else if (AtributoUser == 5) { //else-if para comparação do quarto atributo.
                                printf("Atributo Escolhido: Área.\n");
                                    if(Atrib_C2_5 < Atrib_C1_5) { //if caso de vitoria.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2f.  <----->  %s: %.2f.\n", NomePais2, DensidPais2, NomePais1, DensidPais1);
                                        printf("*Carta %s Venceu!*\n", NomePais2);
                                        printf("###Você Ganhou.###\n");
                                    } else if (Atrib_C2_5 > Atrib_C1_5) { //else if caso de derrota.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2f.  <----->  %s: %.2f.\n", NomePais2, DensidPais2, NomePais1, DensidPais1);
                                        printf("*Carta %s Venceu!*\n", NomePais1);
                                        printf("###Você Perdeu.###\n");
                                    } else if (Atrib_C2_5 == Atrib_C1_5) { //else if caso empate.
                                        printf("País Desafiante: %s <-----> País Desafiado: %s.\n", NomePais2, NomePais1);
                                        printf("Atributo de Desafio: População.\n");
                                        printf("%s: %.2f.  <----->  %s: %.2f.\n", NomePais2, DensidPais2, NomePais1, DensidPais1);
                                        printf("###Empate!###\n");
                                    } else { //esle se o usuario errar a escolha.
                                        printf("Interação invalida.\n");
                                        printf("Jogo Finalizado.\n");
                                    }
                            }
                default: //default para caso usuario errar sua escolha
                    printf("Opção Invalida.\n");
                    printf("Jogo Finalizado.\n");
                break;
            }
        break;
        case 2: //tutorial
            printf("Tutorial.\n");
            printf("Iniciando o Jogo.\n");
            printf("Escolha Opção que deseja.\n");
            printf("Se escolher Jogar, Iniciará o jogo Super Trunfo!\n");
            printf("Escolha a sua carta.\n");
            printf("Após escolher sua carta, escolha o atributo para o desafio.\n");
        break;
        case 3: //caso usuario queira sair do jogo
            printf("Sair");
        break;
        default: //default para caso usuario errar sua escolha
            printf("Opção Invalida.\n");
            printf("Jogo Finalizado.\n");
        break;           
    }
}

