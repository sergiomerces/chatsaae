//orienta��o para procedimentos de confer�ncia do valor da fatura

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//escapar da reclama��o de valor de conta
	void Escapar_RevisaoConta()
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
					 system("cls");
					 //chama m�todo titulo em main.c
					 Revisao_Conta();
					 break;
					}

				case 'x':{
					 system("exit");
					 break;
					}

				default:{
					system("cls");
					Revisao_Conta();
					}
				}
	}

	//orienta��o para verificar erro de leitura
	void Erro_Leitura(){

		int atraso, verLeitura, leiMedidor, leiFatura, consumo, moradores;
		verLeitura = 0;
		leiMedidor = 0;
		leiFatura = 0;
		consumo = 0;
		moradores = 1;
		atraso = 1;

		sleep(atraso);
		printf("\n\nUsu�rio: Verificar ERRO DE LEITURA!");
		sleep(atraso);
		printf("\n\nSAAE: O primeiro passo � verificar a possibilidade de um erro de leitura.");
		sleep(atraso);
		printf("\n\nSAAE: Voc� est� no local e deseja verificar a leitura agora?");
		sleep(atraso);
		printf("\n\nSAAE: Digite 1: SIM ou 2: N�o");
		sleep(atraso);
		printf("\n\nOp��o: ");
		fflush(stdin);
		scanf("%d", &verLeitura);

		switch(verLeitura){

			case 1:{
				sleep(atraso);
				printf("\nUsu�rio: Desejo conferir a leitura agora!");
				sleep(atraso);
				printf("\n\nSAAE: Por favor informe a leitura lan�ada em sua fatura com quatro d�gitos: ");
				sleep(atraso);
				printf("\n\nUsu�rio: A leitura da fatura �: ");
				fflush(stdin);
				scanf("%d", &leiFatura);
				sleep(atraso);
				printf("\nSAAE: Por favor v� at� seu hidr�metro, anote a leitura e informe somente os n�meros pretos: ");
				sleep(atraso);
				printf("\n\nUsu�rio: A leitura do hidr�metro �: ");
				fflush(stdin);
				scanf("%d", &leiMedidor);

				if(leiFatura > leiMedidor){
					sleep(atraso);
					printf("\nSAAE: A falta de acesso ou as condi��es de leitura do hidr�metro podem ter levado ao erro de leitura ou lan�amento\n      pela m�dia de consumo.");
					sleep(atraso);
					printf("\n\nSAAE: Fotografe a leitura na c�pula do hidr�metro e apresente na Conasa, na rua Nove de Julho 849 - Centro, para\n      repasse da leitura e a emiss�o de uma nova fatura.");
					sleep(atraso);
					printf("\n\nSAAE: Caso o seu hidr�metro esteja com a c�pula emba�ada, chame o SAAE pelo WhatsApp (11)99984-3028 e solicite o\n      servi�o de troca de hidr�metro.");
					sleep(atraso);
					printf("\n\nSAAE: Se o seu cavalete est� instalado na parte de dentro do quintal, impedindo o acesso do leiturista/encanador,\n      chame o SAAE pelo WhatsApp (11)99984-3028 e solicite informa��es sobre a mudan�a de cavalete.");
					}

				else if(leiFatura == leiMedidor){
					sleep(atraso);
					printf("\nSAAE: A leitura registrada na fatura � a mesma do medidor.");
					sleep(atraso);
					printf("\n\nSAAE: N�o h� erro de leitura, recomenda-se fazer o teste de vazamento.");
					}

				else{
					sleep(atraso);
					printf("\nSAAE: As leituras est�o sequenciais, a leitura do hidr�metro est� maior que a leitura apontada pelo leiturista.");
					sleep(atraso);
					printf("\n\nSAAE: Est� tudo certo quanto a leitura.");
					sleep(atraso);
					printf("\n\nSAAE: Recomenda-se a realiza��o do teste de vazamento.");
					}
				break;
				}

			case 2:{
				sleep(atraso);
				printf("\nUsu�rio: N�o estou no local da liga��o para fazer o teste agora.");
				sleep(atraso);
				printf("\n\nSAAE: Para a orienta��o adequada pedimos que fa�a essa verifica��o asim que poss�vel.");
				break;
				}
			default: {
				system("cls");
				Erro_Leitura();
				break;
				}
			}
	}

	//orienta��o para teste de vazamento
	void Teste_Vazamento()
	{
		int atraso = 1;

		sleep(atraso);
		printf("\n\nUsu�rio: Fazer TESTE DE VAZAMENTO!");
		sleep(atraso);
		printf("\n\nSAAE: Para realizar o teste e vazamento ser� necess�rio o per�odo m�nimo de quatro horas sem usar �gua.");
		sleep(atraso);
		printf("\n\nSAAE: Recomenda-se que o teste seja feito no per�odo noturno enquanto todos dormem.");
		sleep(atraso);
		printf("\n\nSAAE: Antes de realizar o teste � preciso verificar se a caixa d'�gua est� cheia e as descargas dos banheiros tamb�m.\n      Todas as torneiras e chuveiros devem estar fechados tamb�m.");
		sleep(atraso);
		printf("\n\nSAAE: O registro do cavalete e outros registros que existam na rede interna devem estar todos abertos.");
		sleep(atraso);
		printf("\n\nSAAE: Se o registro do cavalete estiver fechado o hidr�metro deve permanecer parado, pois n�o deve permitir a passagem\n      do fluxo de �gua. Se houver movimento no medidor com o registro do cavalete fechado, o registro pode estar\n      espanado e ser� necess�rio pedir o servi�o de troca de registro pelo WhatsApp (11) 9-9984-3028.");
		sleep(atraso);
		printf("\n\nSAAE: Observadas as orienta��es, preferencialmente � noite, quando todos forem dormir, anotar todos os n�meros pretos e\n      vermelhos do hidr�metro e tamb�m a data e hor�rio da leitura.");
		sleep(atraso);
		printf("\n\nSAAE: Ningu�m pode ligar torneira, chuveiro ou dar descarga pelo per�odo m�nimo de quatro horas.");
		sleep(atraso);
		printf("\n\nSAAE: Depois do intervalo necess�rio, anotar novamente todos os n�meros pretos e vermelhos do hidr�metro, lembrando de\n      indicar a data e hora da marca��o final.");
		sleep(atraso);
		printf("\n\nSAAE: Se houver diferen�a entre as leituras � um forte ind�cio de vazamento interno. Recomenda-se chamar um encanador\n      ca�a-vazamentos para encontr�-lo e fazer o reparo do vazamento.");
		sleep(atraso);
		printf("\n\nSAAE: � preciso registrar fotos ou v�deo das etapas antes, durante ou depois o reparo. As fotos devem ser impressas\n      coloridas ou o v�deo gravado em CD.");
		sleep(atraso);
		printf("\n\nSAAE: Se o reparo for realizado por profissional (pedreiro/encanador), dever� ser feito um laudo do conserto informando\n      onde estava o vazamento, o material usado no reparo e a data de execu��o do servi�o. O laudo dever� ser assinado\n      e ter sua assinatura reconhecida em cart�rio.");
		sleep(atraso);
		printf("\n\nSAAE: O reconhecimento da assinatura no cart�rio pode ser dispensado, se for apresentado RG ou CNH do profissional\n      original ou c�pia autenticada com assinatura semelhante a do documento.");
		sleep(atraso);
		printf("\n\nSAAE: Se for o propriet�rio ou morador que fizer o reparo, deve fazer o laudo da mesma forma e assinatura pode ser\n      reconhecida por semelhan�a no atendimento presencial.");
		sleep(atraso);
		printf("\n\nSAAE: Para abertura do processo administrativo de revis�o de conta � necess�rio juntar:");
		sleep(atraso);
		printf("\n\n\t1. RG ou CNH do requerente");
		printf("\n\t2. As contas a serem reclamadas emitidas no m�ximo h� 60 dias antes da data de abertura do processo");
		printf("\n\t3. O formul�rio do teste de vazamento com anota��es de data, hor�rio e leituras");
		printf("\n\t4. Fotos impressas coloridas ou v�deo em CD do vazameto e do conserto");
		printf("\n\t5. Laudo do conserto");
		sleep(atraso);
		printf("\n\nSAAE: Juntado os documentos, agendar o atendimento presencial para abertura do processo administrativo para revis�o\n      de conta pelo telefone (11) 4602-6370 ou pelo WhatsApp (11) 99735-1691.");
		sleep(atraso);
		printf("\n\nSAAE: Caso n�o haja vazamento o usu�rio poder� optar pelo parcelamento de conta ou se insistir em que h� algo\n      errado e quer uma explica��o do SAAE poder� agendar um atendimento presencial para abertura de processo\n      administrativo, desde que junte os seguintes documentos:");
		sleep(atraso);
		printf("\n\n\t1. RG ou CNH do requerente");
		printf("\n\t2. As contas a serem reclamadas emitidas no m�ximo h� 60 dias da data de abertura do processo");
		printf("\n\t3. O formul�rio do teste de vazamento com anota��es de data, hor�rio e leituras");
		printf("\n\t4. Requerimento relatando sua hip�tese do motivo do aumento do consumo apontado nas faturas reclamadas");
	}

	//orienta��o para aferi��o de hidr�metro
	void Afericao_HD()
	{
		int atraso = 1;

		sleep(atraso);
		printf("\n\nUsu�rio: Fazer AFERI��O DE HIDR�METRO!");
		sleep(atraso);
		printf("\n\nSAAE: Antes de solicitar o servi�o de aferi��o o contribuinte deve realizar os procedimentos de verifica��o de ERRO\n      DE LEITURA e o de TESTE DE VAZAMENTO.");
		sleep(atraso);
		printf("\n\nSAAE: Descartada a possibilidade de ERRO DE LEITURA ou VAZAMENTO OCULTO o contribuinte deve juntar os documentos para\n      abertura de processo de aferi��o de hidr�metro:");
		sleep(atraso);
		printf("\n\n\t1. RG ou CNH do requerente");
		printf("\n\t2. As contas a serem reclamadas emitidas no m�ximo h� 60 dias antes da data de abertura do processo");
		printf("\n\t3. O formul�rio do teste de vazamento com anota��es de data, hor�rio e leituras");
		printf("\n\t4. Requerimento relatando sua hip�tese do motivo do aumento do consumo apontado nas faturas reclamadas e o\n           pedido de aferi��o de hidr�metro");
		sleep(atraso);
		printf("\n\nSAAE: Uma equipe do SAAE vai at� o im�vel, retira o hidr�metro suspeito de mau funcionamento e instala um novo.");
		sleep(atraso);
		printf("\n\nSAAE: O hidr�metro retirado � enviado para um laborat�rio externo para aferi��o.");
		sleep(atraso);
		printf("\n\nSAAE: A aferi��o pode ter r�s resultados diferentes:\n\n     a) Marcando a mais\n     b) Marcando a menos\n     c) Normal");
		sleep(atraso);
		printf("\n\nSAAE: Se o hidr�metro estiver marcando a mais, o contribuinte n�o ter� nenhum custo com a troca e com a aferi��o\n      do hidr�metro; tamb�m ter� direito � revis�o de contas.");
		sleep(atraso);
		printf("\n\nSAAE: Se o hidr�metro estiver marcando a menos, o contribuinte n�o ter� nenhum custo com a troca e com a aferi��o\n      do hidr�metro; mas n�o ter� direito � revis�o de contas.");
		sleep(atraso);
		printf("\n\nSAAE: Se o hidr�metro estiver marcando normalmente, o contribuinte pagar� R$ 168,35 pela troca do hidr�metro e\n      R$ 123,00 pela aferi��o em laborat�rio e n�o ter� direito � revis�o de contas.");
		sleep(atraso);
		printf("\n\nSAAE: Caso o hidr�metro retirado tenha mais de cinco anos de fabrica��o n�o ser� cobrado. O hidr�metro n�o ser�\n      recolocado ap�s o procedimento de aferi��o, a liga��o permanecer� como novo medidor.");
		sleep(atraso);
		printf("\n\nSAAE: Em caso de desist�ncia do pedido de aferi��o do hidr�metro por parte do requerente, se o medidor j� estiver\n      com o laborat�rio os custos de troca e aferi��o ser�o cobrados integralmente do requerente.");
		sleep(atraso);
		printf("\n\nSAAE: O processo de aferi��o deve ser aberto via atendimento presencial previamente agendado pelo telefone\n      (11) 4602-6370 ou pelo WhatsApp (11) 997536-1691.");
	}

//m�todo Revisao_Conta
	void Revisao_Conta()
	{
		int atraso = 1;
		char reclamacao = '*';

		system("cls");
		//m�todo Titulo em main.c
		Titulo();
		printf("\n\n\t\t\t\t\t\t<<< Revis�o de Fatura >>>\n\n");
		sleep(atraso);
		printf("\nSAAE: Recomenda-se iniciar com a verifica��o de um eventual erro de leitura, depois o teste de vazamento e se houver\n      suspeita de mau fucionamento do hidr�metro o processo de aferi��o.");
		printf("\n\n|E: Erro de Leitura\t\t\t\t        |A: Aferi��o de Hidr�metro\n|T: Teste de Vazamento\t\t\t\t\t|P: Menu Principal");
		printf("\n\nOp��o: ");
		fflush(stdin);
		scanf("%c", &reclamacao);
		sleep(atraso);

		switch(reclamacao){

		case 'e': {
			Erro_Leitura();
			Escapar_RevisaoConta();
			break;
			}

		case 't': {
			Teste_Vazamento();
			Escapar_RevisaoConta();
			break;
			}

		case 'a': {
			Afericao_HD();
			Escapar_RevisaoConta();
			break;
			}

		default: {
			Revisao_Conta();
			break;
			}
		}
	}
