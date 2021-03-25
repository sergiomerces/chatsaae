//orientacao para pedido de corte a pedido e religa��o

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//escape de corte e religa��o
	void Escapar_CorteReligacao()
	{
		char navegacao = '*';

			printf("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ");
			fflush(stdin);
			scanf("%c", &navegacao);

			switch(navegacao) {

				case 'p':{
					 main();
					 break;
					}

				case 'v':{
					 Corte_Religacao();
					 break;
					}

				case 'x':{
					 system("exit");
					 break;
					}

				default:{
					Corte_Religacao();
					}
				}
	}

//m�todo Corte_Religa��o
	void Corte_Religacao()
	{
		int corteReligacao, atraso;
		corteReligacao = 0;
		atraso = 1;

		system("cls");
		//m�todo Titulo em main.c
		Titulo();
		printf("\n\n\t\t\t\t\t    <<< Corte a Pedido e Religa��o >>>");
		sleep(atraso);
		printf("\n\nSAAE: Voc� deseja o servi�o de CORTE ou RELIGA��O?");
		sleep(atraso);
		printf("\n\nSAAE: 1: Para CORTE ou 2: RELIGA��O");
		printf("\n\nOp��o: ");
		fflush(stdin);
		scanf("%d", &corteReligacao);

		if(corteReligacao == 1){
			sleep(atraso);
			printf("\n\nUsu�rio: Corte de liga��o de �gua a pedido do propriet�rio.");
			sleep(atraso);
			printf("\n\nSAAE: Para solicitar o corte o im�vel deve estar desocupado, sem moradores e n�o pode haver conta ou parcela vencidas.");
			sleep(atraso);
			printf("\n\nSAAE: O pedido de ser feito pelo propriet�rio com apresenta��o de RG e CPF ou CNH e a �ltima conta paga.");
			sleep(atraso);
			printf("\n\nSAAE: Se o requerente for parente em primeiro grau, pode fazer o pedido apresentando o RG, CPF ou CNH do titular e\n      os seus tamb�m.");
			sleep(atraso);
			printf("\n\nSAAE: Se o requerente for um terceiro deve apresentar seu RG e CPF ou CNH e autoriza��o preenchida e assinada pelo\n      titular com firma reconhecida.");
			sleep(atraso);
			printf("\n\nSAAE: Para fazer o corte n�o h� cobran�a de taxa de servi�o; quando for pedida a religa��o ser� recolhida a taxa de\n      R$ 78,57.");
			sleep(atraso);
			printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");

			Escapar_CorteReligacao();
			}

		else if(corteReligacao == 2){
			sleep(atraso);
			printf("\n\nUsu�rio: Religa��o de �gua cortada a pedido do propriet�rio.");
			sleep(atraso);
			printf("\n\nSAAE: O pedido deve ser feito pelo propriet�rio com apresenta��o de RG e CPF ou CNH.");
			sleep(atraso);
			printf("\n\nSAAE: Se o requerente for parente em primeiro grau, pode fazer o pedido apresentando o RG, CPF ou CNH do titular e\n      os seus tamb�m.");
			sleep(atraso);
			printf("\n\nSAAE: Se o requerente for um terceiro deve apresentar seu RG e CPF ou CNH e autoriza��o preenchida e assinada pelo\n      titular com firma reconhecida.");
			sleep(atraso);
			printf("\n\nSAAE: Para fazer o religa��o e cobrada a taxa de servi�o de R$ 78,57 e apresentar o comprovante de pagamento.");
			sleep(atraso);
			printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");

			Escapar_CorteReligacao();
			}

		else{
				Escapar_CorteReligacao();
			}
	}
