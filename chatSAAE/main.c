/* Algoritmo: Chat de auto Atendimento do SAAE Salto
Escrito por: S�rgio da Costa Merc�s - sergio.merces@gmail.com
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

//fun��o Titulo exibir t�tulo do programa
void Titulo()
{
    for(int i = 0; i < 120; i++)
        putchar('=');

    printf("\n|\t\t\t\t\t\tSAAE SALTO AUTOATENDIMENTO\t\t\t\t\t\t|\n");

    for(int i = 0; i < 120; i++)
        putchar('=');
}

//fun��o Menu Principal exibir menu principal
void Menu_Principal()
{
        char opPrincipal = '*';

        printf("\n\n  Digite o n�mero correspondente ao servi�o desejado:\n");
		printf("\n| 1: Segunda Via da Fatura \t\t\t| 6: Reclama��o Valor da Fatura");
		printf("\n| 2: Liga��o de �gua e Esgoto \t\t\t| 7: Parcelamento Fatura/Multa");
		printf("\n| 3: Vazamentos \t\t\t\t| 8: Altera��o de Titular");
		printf("\n| 4: Corte a Pedido/Religa��o \t\t\t| 9: Troca de Registro");
		printf("\n| 5: Caminh�o-Pipa \t\t\t\t| 0: Sair");
		printf("\n\nOp��o: ");
		fflush(stdin);
		scanf("%c", &opPrincipal);

		switch(opPrincipal)
		{
			case '1':{
			    //chama m�dulo SegundaVia.c
                Segunda_Via();
				break;
				}

			case '2':{
			    //chama  m�dulo agua_Esgoto.c
				Agua_Esgoto();
				break;
				}

			case '3':{
			    //chama  m�dulo Vazamentos.c
				Vazamentos();
				break;
				}

			case '4':{
				//chama  m�dulo Corte_Religacao.c
				Corte_Religacao();
				break;
				}

			case '5':{
				//chama  m�dulo Caminhao_Pipa.c
				Caminhao_Pipa();
				break;
				}

			case '6':{
				//chama m�dulo Revisao_Conta.c
				Revisao_Conta();
				break;
				}

			case '7':{
				//chama o m�dulo Parcelamento.c
				Parcelamento();
				break;
				}

			case '8':{
			    //chama o m�dulo Trocar_Titularidade.c
				Trocar_Titularidade();
				break;
				}

			case '9':{
				//chama o m�dulo Trocar Registro
				Trocar_Registro();
				break;
				}

			case '0':{
				system("exit");
				break;
				}

			default:{
				printf("Escolha um n�mero associado a uma op��o v�lida\n\n");
				system("pause");
				system("cls");
				main();
				}
			}
}

int main(){

    setlocale(LC_ALL, "portuguese");

    system("cls");
    // chamar m�todo T�tulo
    Titulo();
    //chamar m�todo Menu Principal
    Menu_Principal();
    return 0;
}
