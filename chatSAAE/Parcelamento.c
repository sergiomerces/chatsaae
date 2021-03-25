//orientação para parcelamento de faturas em atraso e multas

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
				    //chama o módulo de inicilização main.c
					 main();
					 break;
					}

				case 'v':{
				    //método Parcelamento
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
		//chama método Titulo em main.c
		Titulo();
		printf("\n\n\t\t\t\t\t<<< Parcelamento de Faturas & Multas >>>");

		sleep(atraso);
		printf("\n\nSAAE: Contas com menos de noventa dias não podem ser parceladas, excepcionalmente se a conta for objeto de um\n      processo de revisão de conta.");
		sleep(atraso);
		printf("\n\nSAAE: Se já existir um parcelamento aberto, ele deverá ser quitado antes de realizar um novo parcelamento.\n      Reparcelamentos não são permitidos.");
		sleep(atraso);
		printf("\n\nSAAE: O parcelamento deverá ser solicitado pelo titular da conta ou cônjuge com apresentação de Certidão de\n      Casamento com regime e comunhão parcial ou total de bens ou ainda com Contrato de União Estável.");
		sleep(atraso);
		printf("\n\nSAAE: O inquilino também pode solicitar parcelamento desde que faça seu cadastro como usuário apresentando o\n      Contrato de Locação dentro do período de vigência e com assinaturas reconhecidas.");
		sleep(atraso);
		printf("\n\nSAAE: Outros casos em que terceiros solicitem o parcelamento devem apresentar procuração ou autorização do\n      proprietário com firma reconhecida.");
		sleep(atraso);
		printf("\n\nSAAE: O parcelamento só pode ser feito por meio de atendimento presencial previamente agendado pelo telefone\n      (11) 4602-6370 ou por meio do WhatsApp (11) 99735-1691.");
		sleep(atraso);
		printf("\n\nSAAE: O parcelamento pode ser feito no máximo em 30 parcelas, desde que respeitada a parcela mínima de R$ 50,00\n      conforme a Resolução ARES-PCJ n.º 336/2020.");
		sleep(atraso);
		printf("\n\nSAAE: Para inquilinos o número máximo de parcelas não pode se estender além da vigência do Contrato de Locação,\n      exceto se o proprietário autorizar por meio de procuração com firma reconhecida.");

		Escapar_Parcelamento();
	}
