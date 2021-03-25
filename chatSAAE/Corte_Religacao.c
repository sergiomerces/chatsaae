//orientacao para pedido de corte a pedido e religação

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//escape de corte e religação
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

//método Corte_Religação
	void Corte_Religacao()
	{
		int corteReligacao, atraso;
		corteReligacao = 0;
		atraso = 1;

		system("cls");
		//método Titulo em main.c
		Titulo();
		printf("\n\n\t\t\t\t\t    <<< Corte a Pedido e Religação >>>");
		sleep(atraso);
		printf("\n\nSAAE: Você deseja o serviço de CORTE ou RELIGAÇÃO?");
		sleep(atraso);
		printf("\n\nSAAE: 1: Para CORTE ou 2: RELIGAÇÃO");
		printf("\n\nOpção: ");
		fflush(stdin);
		scanf("%d", &corteReligacao);

		if(corteReligacao == 1){
			sleep(atraso);
			printf("\n\nUsuário: Corte de ligação de água a pedido do proprietário.");
			sleep(atraso);
			printf("\n\nSAAE: Para solicitar o corte o imóvel deve estar desocupado, sem moradores e não pode haver conta ou parcela vencidas.");
			sleep(atraso);
			printf("\n\nSAAE: O pedido de ser feito pelo proprietário com apresentação de RG e CPF ou CNH e a última conta paga.");
			sleep(atraso);
			printf("\n\nSAAE: Se o requerente for parente em primeiro grau, pode fazer o pedido apresentando o RG, CPF ou CNH do titular e\n      os seus também.");
			sleep(atraso);
			printf("\n\nSAAE: Se o requerente for um terceiro deve apresentar seu RG e CPF ou CNH e autorização preenchida e assinada pelo\n      titular com firma reconhecida.");
			sleep(atraso);
			printf("\n\nSAAE: Para fazer o corte não há cobrança de taxa de serviço; quando for pedida a religação será recolhida a taxa de\n      R$ 78,57.");
			sleep(atraso);
			printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");

			Escapar_CorteReligacao();
			}

		else if(corteReligacao == 2){
			sleep(atraso);
			printf("\n\nUsuário: Religação de água cortada a pedido do proprietário.");
			sleep(atraso);
			printf("\n\nSAAE: O pedido deve ser feito pelo proprietário com apresentação de RG e CPF ou CNH.");
			sleep(atraso);
			printf("\n\nSAAE: Se o requerente for parente em primeiro grau, pode fazer o pedido apresentando o RG, CPF ou CNH do titular e\n      os seus também.");
			sleep(atraso);
			printf("\n\nSAAE: Se o requerente for um terceiro deve apresentar seu RG e CPF ou CNH e autorização preenchida e assinada pelo\n      titular com firma reconhecida.");
			sleep(atraso);
			printf("\n\nSAAE: Para fazer o religação e cobrada a taxa de serviço de R$ 78,57 e apresentar o comprovante de pagamento.");
			sleep(atraso);
			printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");

			Escapar_CorteReligacao();
			}

		else{
				Escapar_CorteReligacao();
			}
	}
