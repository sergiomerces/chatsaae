//orienta��o para parcelamento de faturas em atraso e multas

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//menu de escape de parcela conta
	void Escapar_Parcelamento()
	{
		char navegacao = '*';

			printf("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ");
			fflush(stdin);
			scanf("%c", &navegacao);

			switch(navegacao) {

				case 'p':{
				    //chama o m�dulo de iniciliza��o main.c
					 main();
					 break;
					}

				case 'v':{
				    //m�todo Parcelamento
					 Parcelamento();
					 break;
					}

				case 'x':{
					 system("exit");
					 break;
					}

				default:{
					Parcelamento();
					}
				}
		}

	void Parcelamento()
	{
		int atraso = 1;

		system("cls");
		//chama m�todo Titulo em main.c
		Titulo();
		printf("\n\n\t\t\t\t\t<<< Parcelamento de Faturas & Multas >>>");

		sleep(atraso);
		printf("\n\nSAAE: Contas com menos de noventa dias n�o podem ser parceladas, excepcionalmente se a conta for objeto de um\n      processo de revis�o de conta.");
		sleep(atraso);
		printf("\n\nSAAE: Se j� existir um parcelamento aberto, ele dever� ser quitado antes de realizar um novo parcelamento.\n      Reparcelamentos n�o s�o permitidos.");
		sleep(atraso);
		printf("\n\nSAAE: O parcelamento dever� ser solicitado pelo titular da conta ou c�njuge com apresenta��o de Certid�o de\n      Casamento com regime e comunh�o parcial ou total de bens ou ainda com Contrato de Uni�o Est�vel.");
		sleep(atraso);
		printf("\n\nSAAE: O inquilino tamb�m pode solicitar parcelamento desde que fa�a seu cadastro como usu�rio apresentando o\n      Contrato de Loca��o dentro do per�odo de vig�ncia e com assinaturas reconhecidas.");
		sleep(atraso);
		printf("\n\nSAAE: Outros casos em que terceiros solicitem o parcelamento devem apresentar procura��o ou autoriza��o do\n      propriet�rio com firma reconhecida.");
		sleep(atraso);
		printf("\n\nSAAE: O parcelamento s� pode ser feito por meio de atendimento presencial previamente agendado pelo telefone\n      (11) 4602-6370 ou por meio do WhatsApp (11) 99735-1691.");
		sleep(atraso);
		printf("\n\nSAAE: O parcelamento pode ser feito no m�ximo em 30 parcelas, desde que respeitada a parcela m�nima de R$ 50,00\n      conforme a Resolu��o ARES-PCJ n.� 336/2020.");
		sleep(atraso);
		printf("\n\nSAAE: Para inquilinos o n�mero m�ximo de parcelas n�o pode se estender al�m da vig�ncia do Contrato de Loca��o,\n      exceto se o propriet�rio autorizar por meio de procura��o com firma reconhecida.");

		Escapar_Parcelamento();
	}
