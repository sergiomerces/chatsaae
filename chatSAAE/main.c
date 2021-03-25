/* Algoritmo: Chat de auto Atendimento do SAAE Salto
Escrito por: Sérgio da Costa Mercês - sergio.merces@gmail.com
Github: https://github.com/sergiomerces/chatsaae
Salto - SP (BRA), 3 de janeiro de 2021*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Segunda_Via.c"
#include "Agua_Esgoto.c"
#include "Vazamentos.c"
#include "Corte_Religacao.c"
#include "Caminhao_Pipa.c"
#include "Revisao_Conta.c"
#include "Parcelamento.c"
#include "Trocar_Titularidade.c"
#include "Trocar_Registro.c"

//função Titulo exibir título do programa
void Titulo()
{
    for(int i = 0; i < 120; i++)
        putchar('=');

    printf("\n|\t\t\t\t\t\tSAAE SALTO AUTOATENDIMENTO\t\t\t\t\t\t|\n");

    for(int i = 0; i < 120; i++)
        putchar('=');
}

//função Menu Principal exibir menu principal
void Menu_Principal()
{
        char opPrincipal = '*';

        printf("\n\n  Digite o número correspondente ao serviço desejado:\n");
		printf("\n| 1: Segunda Via da Fatura \t\t\t| 6: Reclamação Valor da Fatura");
		printf("\n| 2: Ligação de Água e Esgoto \t\t\t| 7: Parcelamento Fatura/Multa");
		printf("\n| 3: Vazamentos \t\t\t\t| 8: Alteração de Titular");
		printf("\n| 4: Corte a Pedido/Religação \t\t\t| 9: Troca de Registro");
		printf("\n| 5: Caminhão-Pipa \t\t\t\t| 0: Sair");
		printf("\n\nOpção: ");
		fflush(stdin);
		scanf("%c", &opPrincipal);

		switch(opPrincipal)
		{
			case '1':{
			    //chama módulo SegundaVia.c
                Segunda_Via();
				break;
				}

			case '2':{
			    //chama  módulo agua_Esgoto.c
				Agua_Esgoto();
				break;
				}

			case '3':{
			    //chama  módulo Vazamentos.c
				Vazamentos();
				break;
				}

			case '4':{
				//chama  módulo Corte_Religacao.c
				Corte_Religacao();
				break;
				}

			case '5':{
				//chama  módulo Caminhao_Pipa.c
				Caminhao_Pipa();
				break;
				}

			case '6':{
				//chama módulo Revisao_Conta.c
				Revisao_Conta();
				break;
				}

			case '7':{
				//chama o módulo Parcelamento.c
				Parcelamento();
				break;
				}

			case '8':{
			    //chama o módulo Trocar_Titularidade.c
				Trocar_Titularidade();
				break;
				}

			case '9':{
				//chama o módulo Trocar Registro
				Trocar_Registro();
				break;
				}

			case '0':{
				system("exit");
				break;
				}

			default:{
				printf("Escolha um número associado a uma opção válida\n\n");
				system("pause");
				system("cls");
				main();
				}
			}
}

int main(){

    setlocale(LC_ALL, "portuguese");

    system("cls");
    // chamar método Título
    Titulo();
    //chamar método Menu Principal
    Menu_Principal();
    return 0;
}
