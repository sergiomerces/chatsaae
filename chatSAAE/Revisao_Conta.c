//orientação para procedimentos de conferência do valor da fatura

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//escapar da reclamação de valor de conta
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
					 //chama método titulo em main.c
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

	//orientação para verificar erro de leitura
	void Erro_Leitura(){

		int atraso, verLeitura, leiMedidor, leiFatura, consumo, moradores;
		verLeitura = 0;
		leiMedidor = 0;
		leiFatura = 0;
		consumo = 0;
		moradores = 1;
		atraso = 1;

		sleep(atraso);
		printf("\n\nUsuário: Verificar ERRO DE LEITURA!");
		sleep(atraso);
		printf("\n\nSAAE: O primeiro passo é verificar a possibilidade de um erro de leitura.");
		sleep(atraso);
		printf("\n\nSAAE: Você está no local e deseja verificar a leitura agora?");
		sleep(atraso);
		printf("\n\nSAAE: Digite 1: SIM ou 2: Não");
		sleep(atraso);
		printf("\n\nOpção: ");
		fflush(stdin);
		scanf("%d", &verLeitura);

		switch(verLeitura){

			case 1:{
				sleep(atraso);
				printf("\nUsuário: Desejo conferir a leitura agora!");
				sleep(atraso);
				printf("\n\nSAAE: Por favor informe a leitura lançada em sua fatura com quatro dígitos: ");
				sleep(atraso);
				printf("\n\nUsuário: A leitura da fatura é: ");
				fflush(stdin);
				scanf("%d", &leiFatura);
				sleep(atraso);
				printf("\nSAAE: Por favor vá até seu hidrômetro, anote a leitura e informe somente os números pretos: ");
				sleep(atraso);
				printf("\n\nUsuário: A leitura do hidrômetro é: ");
				fflush(stdin);
				scanf("%d", &leiMedidor);

				if(leiFatura > leiMedidor){
					sleep(atraso);
					printf("\nSAAE: A falta de acesso ou as condições de leitura do hidrômetro podem ter levado ao erro de leitura ou lançamento\n      pela média de consumo.");
					sleep(atraso);
					printf("\n\nSAAE: Fotografe a leitura na cúpula do hidrômetro e apresente na Conasa, na rua Nove de Julho 849 - Centro, para\n      repasse da leitura e a emissão de uma nova fatura.");
					sleep(atraso);
					printf("\n\nSAAE: Caso o seu hidrômetro esteja com a cúpula embaçada, chame o SAAE pelo WhatsApp (11)99984-3028 e solicite o\n      serviço de troca de hidrômetro.");
					sleep(atraso);
					printf("\n\nSAAE: Se o seu cavalete está instalado na parte de dentro do quintal, impedindo o acesso do leiturista/encanador,\n      chame o SAAE pelo WhatsApp (11)99984-3028 e solicite informações sobre a mudança de cavalete.");
					}

				else if(leiFatura == leiMedidor){
					sleep(atraso);
					printf("\nSAAE: A leitura registrada na fatura é a mesma do medidor.");
					sleep(atraso);
					printf("\n\nSAAE: Não há erro de leitura, recomenda-se fazer o teste de vazamento.");
					}

				else{
					sleep(atraso);
					printf("\nSAAE: As leituras estão sequenciais, a leitura do hidrômetro está maior que a leitura apontada pelo leiturista.");
					sleep(atraso);
					printf("\n\nSAAE: Está tudo certo quanto a leitura.");
					sleep(atraso);
					printf("\n\nSAAE: Recomenda-se a realização do teste de vazamento.");
					}
				break;
				}

			case 2:{
				sleep(atraso);
				printf("\nUsuário: Não estou no local da ligação para fazer o teste agora.");
				sleep(atraso);
				printf("\n\nSAAE: Para a orientação adequada pedimos que faça essa verificação asim que possível.");
				break;
				}
			default: {
				system("cls");
				Erro_Leitura();
				break;
				}
			}
	}

	//orientação para teste de vazamento
	void Teste_Vazamento()
	{
		int atraso = 1;

		sleep(atraso);
		printf("\n\nUsuário: Fazer TESTE DE VAZAMENTO!");
		sleep(atraso);
		printf("\n\nSAAE: Para realizar o teste e vazamento será necessário o período mínimo de quatro horas sem usar água.");
		sleep(atraso);
		printf("\n\nSAAE: Recomenda-se que o teste seja feito no período noturno enquanto todos dormem.");
		sleep(atraso);
		printf("\n\nSAAE: Antes de realizar o teste é preciso verificar se a caixa d'água está cheia e as descargas dos banheiros também.\n      Todas as torneiras e chuveiros devem estar fechados também.");
		sleep(atraso);
		printf("\n\nSAAE: O registro do cavalete e outros registros que existam na rede interna devem estar todos abertos.");
		sleep(atraso);
		printf("\n\nSAAE: Se o registro do cavalete estiver fechado o hidrômetro deve permanecer parado, pois não deve permitir a passagem\n      do fluxo de água. Se houver movimento no medidor com o registro do cavalete fechado, o registro pode estar\n      espanado e será necessário pedir o serviço de troca de registro pelo WhatsApp (11) 9-9984-3028.");
		sleep(atraso);
		printf("\n\nSAAE: Observadas as orientações, preferencialmente à noite, quando todos forem dormir, anotar todos os números pretos e\n      vermelhos do hidrômetro e também a data e horário da leitura.");
		sleep(atraso);
		printf("\n\nSAAE: Ninguém pode ligar torneira, chuveiro ou dar descarga pelo período mínimo de quatro horas.");
		sleep(atraso);
		printf("\n\nSAAE: Depois do intervalo necessário, anotar novamente todos os números pretos e vermelhos do hidrômetro, lembrando de\n      indicar a data e hora da marcação final.");
		sleep(atraso);
		printf("\n\nSAAE: Se houver diferença entre as leituras é um forte indício de vazamento interno. Recomenda-se chamar um encanador\n      caça-vazamentos para encontrá-lo e fazer o reparo do vazamento.");
		sleep(atraso);
		printf("\n\nSAAE: É preciso registrar fotos ou vídeo das etapas antes, durante ou depois o reparo. As fotos devem ser impressas\n      coloridas ou o vídeo gravado em CD.");
		sleep(atraso);
		printf("\n\nSAAE: Se o reparo for realizado por profissional (pedreiro/encanador), deverá ser feito um laudo do conserto informando\n      onde estava o vazamento, o material usado no reparo e a data de execução do serviço. O laudo deverá ser assinado\n      e ter sua assinatura reconhecida em cartório.");
		sleep(atraso);
		printf("\n\nSAAE: O reconhecimento da assinatura no cartório pode ser dispensado, se for apresentado RG ou CNH do profissional\n      original ou cópia autenticada com assinatura semelhante a do documento.");
		sleep(atraso);
		printf("\n\nSAAE: Se for o proprietário ou morador que fizer o reparo, deve fazer o laudo da mesma forma e assinatura pode ser\n      reconhecida por semelhança no atendimento presencial.");
		sleep(atraso);
		printf("\n\nSAAE: Para abertura do processo administrativo de revisão de conta é necessário juntar:");
		sleep(atraso);
		printf("\n\n\t1. RG ou CNH do requerente");
		printf("\n\t2. As contas a serem reclamadas emitidas no máximo há 60 dias antes da data de abertura do processo");
		printf("\n\t3. O formulário do teste de vazamento com anotações de data, horário e leituras");
		printf("\n\t4. Fotos impressas coloridas ou vídeo em CD do vazameto e do conserto");
		printf("\n\t5. Laudo do conserto");
		sleep(atraso);
		printf("\n\nSAAE: Juntado os documentos, agendar o atendimento presencial para abertura do processo administrativo para revisão\n      de conta pelo telefone (11) 4602-6370 ou pelo WhatsApp (11) 99735-1691.");
		sleep(atraso);
		printf("\n\nSAAE: Caso não haja vazamento o usuário poderá optar pelo parcelamento de conta ou se insistir em que há algo\n      errado e quer uma explicação do SAAE poderá agendar um atendimento presencial para abertura de processo\n      administrativo, desde que junte os seguintes documentos:");
		sleep(atraso);
		printf("\n\n\t1. RG ou CNH do requerente");
		printf("\n\t2. As contas a serem reclamadas emitidas no máximo há 60 dias da data de abertura do processo");
		printf("\n\t3. O formulário do teste de vazamento com anotações de data, horário e leituras");
		printf("\n\t4. Requerimento relatando sua hipótese do motivo do aumento do consumo apontado nas faturas reclamadas");
	}

	//orientação para aferição de hidrômetro
	void Afericao_HD()
	{
		int atraso = 1;

		sleep(atraso);
		printf("\n\nUsuário: Fazer AFERIÇÃO DE HIDRÔMETRO!");
		sleep(atraso);
		printf("\n\nSAAE: Antes de solicitar o serviço de aferição o contribuinte deve realizar os procedimentos de verificação de ERRO\n      DE LEITURA e o de TESTE DE VAZAMENTO.");
		sleep(atraso);
		printf("\n\nSAAE: Descartada a possibilidade de ERRO DE LEITURA ou VAZAMENTO OCULTO o contribuinte deve juntar os documentos para\n      abertura de processo de aferição de hidrômetro:");
		sleep(atraso);
		printf("\n\n\t1. RG ou CNH do requerente");
		printf("\n\t2. As contas a serem reclamadas emitidas no máximo há 60 dias antes da data de abertura do processo");
		printf("\n\t3. O formulário do teste de vazamento com anotações de data, horário e leituras");
		printf("\n\t4. Requerimento relatando sua hipótese do motivo do aumento do consumo apontado nas faturas reclamadas e o\n           pedido de aferição de hidrômetro");
		sleep(atraso);
		printf("\n\nSAAE: Uma equipe do SAAE vai até o imóvel, retira o hidrômetro suspeito de mau funcionamento e instala um novo.");
		sleep(atraso);
		printf("\n\nSAAE: O hidrômetro retirado é enviado para um laboratório externo para aferição.");
		sleep(atraso);
		printf("\n\nSAAE: A aferição pode ter rês resultados diferentes:\n\n     a) Marcando a mais\n     b) Marcando a menos\n     c) Normal");
		sleep(atraso);
		printf("\n\nSAAE: Se o hidrômetro estiver marcando a mais, o contribuinte não terá nenhum custo com a troca e com a aferição\n      do hidrômetro; também terá direito à revisão de contas.");
		sleep(atraso);
		printf("\n\nSAAE: Se o hidrômetro estiver marcando a menos, o contribuinte não terá nenhum custo com a troca e com a aferição\n      do hidrômetro; mas não terá direito à revisão de contas.");
		sleep(atraso);
		printf("\n\nSAAE: Se o hidrômetro estiver marcando normalmente, o contribuinte pagará R$ 168,35 pela troca do hidrômetro e\n      R$ 123,00 pela aferição em laboratório e não terá direito à revisão de contas.");
		sleep(atraso);
		printf("\n\nSAAE: Caso o hidrômetro retirado tenha mais de cinco anos de fabricação não será cobrado. O hidrômetro não será\n      recolocado após o procedimento de aferição, a ligação permanecerá como novo medidor.");
		sleep(atraso);
		printf("\n\nSAAE: Em caso de desistência do pedido de aferição do hidrômetro por parte do requerente, se o medidor já estiver\n      com o laboratório os custos de troca e aferição serão cobrados integralmente do requerente.");
		sleep(atraso);
		printf("\n\nSAAE: O processo de aferição deve ser aberto via atendimento presencial previamente agendado pelo telefone\n      (11) 4602-6370 ou pelo WhatsApp (11) 997536-1691.");
	}

//método Revisao_Conta
	void Revisao_Conta()
	{
		int atraso = 1;
		char reclamacao = '*';

		system("cls");
		//método Titulo em main.c
		Titulo();
		printf("\n\n\t\t\t\t\t\t<<< Revisão de Fatura >>>\n\n");
		sleep(atraso);
		printf("\nSAAE: Recomenda-se iniciar com a verificação de um eventual erro de leitura, depois o teste de vazamento e se houver\n      suspeita de mau fucionamento do hidrômetro o processo de aferição.");
		printf("\n\n|E: Erro de Leitura\t\t\t\t        |A: Aferição de Hidrômetro\n|T: Teste de Vazamento\t\t\t\t\t|P: Menu Principal");
		printf("\n\nOpção: ");
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
