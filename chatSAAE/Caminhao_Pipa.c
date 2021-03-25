//orientacao para venda de caminh�o-pipa

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//menu de escape de caminh�o-pipa
	void Escapar_CaminhaoPipa()
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
					 Caminhao_Pipa();
					 break;
					}

				case 'x':{
					 system("exit");
					 break;
					}

				default:{
					Caminhao_Pipa();
					}
				}
	}


	void Caminhao_Pipa()
	{
		int tipoEntrega, atraso;
		tipoEntrega = 0;
		atraso = 1;

		system("cls");
		Titulo();
		printf("\n\n\t\t\t\t\t\t  <<< Caminh�o-Pipa >>>");
		sleep(atraso);
		printf("\n\nSAAE: Digite o n�mero do servi�o desejado:");
		sleep(atraso);
		printf("\n\n\t 1: Compra de Caminh�o-Pipa para caixa d'�gua ou piscina\n\t 2: Abastecimento de regi�o sem �gua h� mais de 12 horas\n\t 3: Entregas programadas em empresas/entidades");
		printf("\n\nOp��o: ");
		fflush(stdin);
		scanf("%d", &tipoEntrega);

		if(tipoEntrega == 1){
			sleep(atraso);
			printf("\n\nUsu�rio: Compra de CAMINH�O-PIPA para CAIXA D'�GUA ou PISCINA.");
			sleep(atraso);
			printf("\n\nSAAE: A venda de �gua com caminh�o-pipa est� condicionada a disponibilidade de �gua para o abastecimento do sistema\n      p�blico de abastecimento e a capacidade de entrega.");
			sleep(atraso);
			printf("\n\nSAAE: A venda � fechada em 10 m� (metros c�bicos) o equivalente a 10 mil litros, que � capacidade de transporte do\n      caminh�o. Mesmo que a entrega seja fracionada o custo ser� o mesmo.");
			sleep(atraso);
			printf("\n\nSAAE: Um caminh�o com 10 m� custa R$ 202,02. Pre�o fixado pela Resolu��o ARES-PCJ n.� 328/2019.");
			sleep(atraso);
			printf("\n\nSAAE: Os servidores do SAAE s�o impedidos a trabalhar em locais altos, portanto para encher reservat�rios elevados �\n      preciso que algu�m no local leve a mangueira at� o ponto de descarga.");
			sleep(atraso);
			printf("\n\nSAAE: O solicitante deve apresentar RG, CPF, dar informa��es como endere�o, ponto de refer�ncia, data e turno da\n      entrega, telefone de contato, dist�ncia entre o local de parada do caminh�o e o ponto de descarga, se h�\n      necessidade de mangueira extensora.");
			sleep(atraso);
			printf("\n\nSAAE: A ordem de servi�o � liberada ap�s a apresenta��o do comprovante de pagamento da taxa de servi�o.");
			sleep(atraso);
			printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");

			Escapar_CaminhaoPipa();
			}

		else if(tipoEntrega == 2){
			sleep(atraso);
			printf("\n\nUsu�rio: FALTA DE �GUA.");
			sleep(atraso);
			printf("\n\nSAAE: A Resolu��o ARES-PCJ n.� 336/2020 prev� que o SAAE fa�a a distribui��o de �gua com caminh�o-pipa quando houver\n      falta de �gua por 12 horas consecutivas em decorr�ncia de manuten��o ou problemas na rede.");
			sleep(atraso);
			printf("\n\nSAAE: Os servidores do SAAE s�o impedidos a trabalhar em locais altos, portanto para encher reservat�rios elevados �\n      preciso que algu�m no local leve a mangueira at� o ponto de descarga.");
			sleep(atraso);
			printf("\n\nSAAE: Os servidores do SAAE poder�o abastecer o im�vel apenas com caixas d'�gua, lat�es, baldes e outros meios de\n      reserva��o que estiverem no n�vel da rua.");
			sleep(atraso);
			printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");

			Escapar_CaminhaoPipa();
			}

        else if(tipoEntrega == 3){
            sleep(atraso);
			printf("\n\nUsu�rio: Entrega programada em empresa/entidades");
			sleep(atraso);
			printf("\n\nSAAE: A rela��o de empresas abaixo s�o abastecidas regularmente ou conforme solicita��o. Havendo pedido, basta\n      confirmar a entrega com o chefe dos encanadores em servi�o no turno.");
			sleep(atraso);
			printf("\n\nSAAE: Diferente da venda avulsa do Caminh�o Pipa, a entrega em empresas � faturada pelo volume entregue em cada viagem\n      de acordo com a categoria, conforme a Resolu��o ARES-PCJ n.� 328/2019.");
			sleep(atraso);
			printf("\n\nSAAE: O fechamento das entregas � do dia 20 de um m�s at� 20 do outro e vencimento do boleto at� dia 10 do m�s seguinte.");
			sleep(atraso);
			printf("\n\nEmpresas/Entidades");
			printf("\n1) Altena\t\t\t\t6) Igreja Santa Clara\n2) Canil Municipal\t\t\t7) Igreja N. Sr� D'Oropa\n3) Corbes\t\t\t\t8) JDK\n4) Fecofer\t\t\t\t9) MMS Multia�os\n5) FEIC\t\t\t\t\t10) TR4");
			sleep(atraso);
			printf("\n\nSAAE: As entregas da Corbes n�o s�o cobradas, porque a mesma opera com subs�dios municipais.");

			Escapar_CaminhaoPipa();
        }

		else{
				Escapar_CaminhaoPipa();
			}
	}
