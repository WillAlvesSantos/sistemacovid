
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void main(){

        


}

int main(){


    int opcao, opcao1, opcao2, opcao3, opcao4, i, quant;
    struct referencia{
        char nome0[200], nome1[200], nome2[200], nome3[200], nome4[200], nome5[200], nome6[200], nome7[200], nome8[200], nome9[200],
        nome10[200], nome11[200], op[50];
    }


CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];




            system("color F3");
            system("cls");



            inicio:

                printf("---------------------------------------------------------------------------");
                printf("\n\t\t\t  Sistema de Saude\n");
                printf("---------------------------------------------------------------------------\n\n");
                printf("\t\t\t   Seja Bem Vindo \n");
                printf("___________________________________________________________________________\n\n");
                printf("\t1-Cadastrar\n");
                printf("\t2-Exibir Dados\n");
                printf("\t3-Alterar\n");
                printf("\t4-Excluir\n");
                printf("\t5-Informacoes do Sistema\n");
                printf("\t6-Sair\n");
                printf("---------------------------------------------------------------------------\n\n");
                printf("\n\tQual Opcao Voce Deseja Acessar? ");
                scanf("%d", &opcao);
                getchar();



        switch(opcao){
            case 1:
                system("cls");
                printf("\n\nQuantos Cadastros Voce Deseja Realizar? Digite 0 para voltar ao menu Principal:   ");
                scanf("%d", &quant);

               for (i=1;i<=quant;i++){
                system("cls");
                printf("\n\n\t\t\t   INICIANDO CADASTRO %d\n", i);
                printf("\n\n\t\t\t   ------------------\n\n");
                printf("\n   Nome do Paciente: ");
                fflush(stdin);
                scanf("%[^\n]s", CA[i].nome0);
                printf("\n   Telefone do Paciente: ");
                fflush(stdin);
                scanf("%[^\n]s", CA[i].nome1);
                printf("\n   CPF: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome2);
                printf("\n   Data de Nascimento: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome3);
                printf("\n   Data do Diagnostico: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome4);
                printf("\n   Endereco: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome5);
                printf("\n   Bairro: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome6);
                printf("\n   Cidade: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome7);
                printf("\n   Estado: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome8);
                printf("\n   CEP: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome9);
                printf("\n   Email: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome10);
                printf("\n   Paciente possui Comorbidade? Qual: ");
                fflush(stdin);
                scanf("%[\n]s", CA[i].nome11);
                printf("\n\n\t");
                system("pause");
                system("cls");
                getchar();


              }
            break;


            case 2:
                system("cls");
                printf("\n\nDigite a Quantidade de cadastros a exibir ou 0 para Voltar ao Menu Principal: ");
                scanf("%d", &quant);

                for(i=1;i<=quant;i++){
                    system("cls");
                    printf("\n\n\t\t\t   EXIBINDO CADASTRO %d\n", i);
                    printf("\t\t\t   -----------------\n\n");
                    printf(" Nome do Paciente: %s\n", CA[i].nome0);
                    printf("\nTelefone do Paciente: %s\n", CA[i].nome1);
                    printf("\nCPF: %s\n", CA[i].nome2);
                    printf("\nData de Nascimento: %s\n", CA[i].nome3);
                    printf("\nData do Diagnostico: %s\n", CA[i].nome4);
                    printf("\nEndereco: %s\n", CA[i].nome5);
                    printf("\nBairro: %s\n", CA[i].nome6);
                    printf("\nCidade: %s\n", CA[i].nome7);
                    printf("\nEstado: %s\n", CA[i].nome8);
                    printf("\nCEP: %s\n", CA[i].nome9);
                    printf("\nEmail: %s\n", CA[i].nome10);
                    printf("\nComorbidade: %s\n", CA[i].nome11);
                    system("pause");
                    system ("cls");

                }
                    break;

                    case 3:
                        system("cls");
                        for(i=1;i<=quant;i++){
                            printf("\n\n\t\t\t   ALTERAR CADASTRO\n");
                            printf("\t\t\t   ----------------\n\n");
                            printf(" 1- Nome do Paciente");
                            printf("\n 2- Telefone do Paciente");
                            printf("\n 3- CPF");
                            printf("\n 4- Data de Nascimento");
                            printf("\n 5- Data do Diagnostico");
                            printf("\n 6- Endereco");
                            printf("\n 7- Bairro");
                            printf("\n 8- Cidade");
                            printf("\n 9- Estado");
                            printf("\n 10- CEP");
                            printf("\n 11- Email");
                            printf("\n 11- Comorbidade\n\n");
                            printf("Qual Opcao Voce Deseja Acessar? \n");
                            scanf("%d", &opcao1);
                            system("pause");
                            system("cls");

                switch(opcao1){
                 case 1:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar Nome do Paciente: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome0);
                        printf("\nNovo Nome: %s\n\n\t\t");
                        system("pause");
                }
                break;

                 case 2:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar Telefone do Paciente: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome1);
                        printf("\nNovo Telefone: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                case 3:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar o CPF: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome2);
                        printf("\nNovo CPF: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                  case 4:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar a Data de Nascimento: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome3);
                        printf("\nNova Data de Nascismento: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                  case 5:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar a Data do Diagnostico: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome4);
                        printf("\nNova Data do Diagnostico: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                  case 6:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar o Endereco: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome5);
                        printf("\nNovo Endereco: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                   case 7:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar o Bairro: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome6);
                        printf("\nNovo Bairro: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                   case 8:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar a Cidade: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome7);
                        printf("\nNova Cidade: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                   case 9:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar o Estado: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome8);
                        printf("\nNovo Estado: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                   case 10:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar o CEP: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome9);
                        printf("\nNovo CEP: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                   case 11:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar o Email: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome10);
                        printf("\nNovo Email: %s\n\n\t\t");
                        system("pause");
                    }
                    break;

                   case 12:
                    for(i=1;i<=quant;i++){
                        system("cls");
                        printf("\n\n CADASTRO %d\n", i);
                        printf("\n Alterar a Comorbidade: ");
                        fflush(stdin);
                        scanf("%[^\n]s", &CA[i].nome11);
                        printf("\nNova Comorbidade: %s\n\n\t\t");
                        system("pause");
                    }
                    break;
                 }
            }
            break;

                case 4:
                    system("cls");
                    for(i=1;i<=quant;i++){
                            printf("\n\n\t\t\t   EXCLUIR CADASTRO\n");
                            printf("\t\t\t   ----------------\n\n");
                            printf(" 1- Nome do Paciente");
                            printf("\n 2- Telefone do Paciente");
                            printf("\n 3- CPF");
                            printf("\n 4- Endereço");
                            printf("\n 5- Bairro");
                            printf("\n 6- Cidade");
                            printf("\n 7- Estado");
                            printf("\n 8- CEP");
                            printf("\n 9- email");
                            printf("\n 10- Comorbidade");
                            printf("\n 11- Excluir todos os dados\n\n");
                            printf("Qual opcao Voce Deseja Acessar? \n");
                            scanf("%d", &opcao4);

                        switch(opcao4){
                            case 1:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome0, 0, sizeof(CA [i].nome0));
                                printf("Nome do Paciente Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 2:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome1, 0, sizeof(CA [i].nome1));
                                printf("Telefone do Paciente Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 3:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome2, 0, sizeof(CA [i].nome2));
                                printf("CPF do Paciente Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 4:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome5, 0, sizeof(CA [i].nome5));
                                printf("Endereco do Paciente Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 5:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome6, 0, sizeof(CA [i].nome6));
                                printf("Bairro Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 6:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome7, 0, sizeof(CA [i].nome7));
                                printf("Cidade Excluida!\n\n");
                                system("pause");
                              }
                              break;

                            case 7:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome8, 0, sizeof(CA [i].nome8));
                                printf("Estado Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 8:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome9, 0, sizeof(CA [i].nome9));
                                printf("CEP Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 9:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome10, 0, sizeof(CA [i].nome10));
                                printf("Email Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 10:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome11, 0, sizeof(CA [i].nome11));
                                printf("Comorbidade do Paciente Excluido!\n\n");
                                system("pause");
                              }
                              break;

                            case 11:
                              for(i=1;i<=quant;i++){
                                system("cls");
                                memset(&CA[i].nome0, 0, sizeof(CA [i].nome0));
                                memset(&CA[i].nome1, 0, sizeof(CA [i].nome1));
                                memset(&CA[i].nome2, 0, sizeof(CA [i].nome2));
                                memset(&CA[i].nome3, 0, sizeof(CA [i].nome3));
                                memset(&CA[i].nome4, 0, sizeof(CA [i].nome4));
                                memset(&CA[i].nome5, 0, sizeof(CA [i].nome5));
                                memset(&CA[i].nome6, 0, sizeof(CA [i].nome6));
                                memset(&CA[i].nome7, 0, sizeof(CA [i].nome7));
                                memset(&CA[i].nome8, 0, sizeof(CA [i].nome8));
                                memset(&CA[i].nome9, 0, sizeof(CA [i].nome9));
                                memset(&CA[i].nome10, 0, sizeof(CA [i].nome10));
                                memset(&CA[i].nome11, 0, sizeof(CA [i].nome11));
                                printf("Todos os Dados Foram Excluidos!\n\n");
                                system("pause");
                              }
                              break;
                        }
                    }
                    break;

                case 5:
                    system("cls");
                    printf("\n\n\t\t\tDesenvolvido por Willian Alves\n\n\n");
                    system("pause");
                    break;

                case 6:
                    system("cls");
                    printf("\n Voce Realmente Deseja Sair do sistema de Saude?\n\n");
                    printf(" 1- Sim\n 2- Nao");
                    printf("\n\n");
                    scanf("%d", &opcao2);

                switch(opcao2){
                    case 1:
                        system("cls");
                        printf("\n\n Acesso Encerrado! \n\n\n\t\t");
                        system("pause");
                        return 0;
                        break;

                }

                } goto inicio;

                }



