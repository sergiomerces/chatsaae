//orientacao para venda de caminhão-pipa

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//menu de escape de caminhão-pipa
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
		printf("\n\n\t\t\t\t\t\t  <<< Caminhão-Pipa >>>");
		sleep(atraso);
		printf("\n\nSAAE: Digite o número do serviço desejado:");
		sleep(atraso);
		printf("\n\n\t 1: Compra de Caminhão-Pipa para caixa d'água ou piscina\n\t 2: Abastecimento de região sem água há mais de 12 horas\n\t 3: Entregas programadas em empresas/entidades");
		printf("\n\nOpção: ");
		fflush(stdin);
		scanf("%d", &tipoEntrega);

		if(tipoEntrega == 1){
			sleep(atraso);
			printf("\n\nUsuário: Compra de CAMINHÃO-PIPA para CAIXA D'ÁGUA ou PISCINA.");
			sleep(atraso);
			printf("\n\nSAAE: A venda de água com caminhão-pipa está condicionada a disponibilidade de água para o abastecimento do sistema\n      público de abastecimento e a capacidade de entrega.");
			sleep(atraso);
			printf("\n\nSAAE: A venda é fechada em 10 m³ (metros cúbicos) o equivalente a 10 mil litros, que é capacidade de transporte do\n      caminhão. Mesmo que a entrega seja fracionada o custo será o mesmo.");
			sleep(atraso);
			printf("\n\nSAAE: Um caminhão com 10 m³ custa R$ 202,02. Preço fixado pela Resolução ARES-PCJ n.º 328/2019.");
			sleep(atraso);
			printf("\n\nSAAE: Os servidores do SAAE são impedidos a trabalhar em locais altos, portanto para encher reservatórios elevados é\n      preciso que alguém no local leve a mangueira até o ponto de descarga.");
			sleep(atraso);
			printf("\n\nSAAE: O solicitante deve apresentar RG, CPF, dar informações como endereço, ponto de referência, data e turno da\n      entrega, telefone de contato, distância entre o local de parada do caminhão e o ponto de descarga, se há\n      necessidade de mangueira extensora.");
			sleep(atraso);
			printf("\n\nSAAE: A ordem de serviço é liberada após a apresentação do comprovante de pagamento da taxa de serviço.");
			sleep(atraso);
			printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");

			Escapar_CaminhaoPipa();
			}

		else if(tipoEntrega == 2){
			sleep(atraso);
			printf("\n\nUsuário: FALTA DE ÁGUA.");
			sleep(atraso);
			printf("\n\nSAAE: A Resolução ARES-PCJ n.º 336/2020 prevê que o SAAE faça a distribuição de água com caminhão-pipa quando houver\n      falta de água por 12 horas consecutivas em decorrência de manutenção ou problemas na rede.");
			sleep(atraso);
			printf("\n\nSAAE: Os servidores do SAAE são impedidos a trabalhar em locais altos, portanto para encher reservatórios elevados é\n      preciso que alguém no local leve a mangueira até o ponto de descarga.");
			sleep(atraso);
			printf("\n\nSAAE: Os servidores do SAAE poderão abastecer o imóvel apenas com caixas d'água, latões, baldes e outros meios de\n      reservação que estiverem no nível da rua.");
			sleep(atraso);
			printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");

			Escapar_CaminhaoPipa();
			}

        else if(tipoEntrega == 3){
            sleep(atraso);
			printf("\n\nUsuário: Entrega programada em empresa/entidades");
			sleep(atraso);
			printf("\n\nSAAE: A relação de empresas abaixo são abastecidas regularmente ou conforme solicitação. Havendo pedido, basta\n      confirmar a entrega com o chefe dos encanadores em serviço no turno.");
			sleep(atraso);
			printf("\n\nSAAE: Diferente da venda avulsa do Caminhão Pipa, a entrega em empresas é faturada pelo volume entregue em cada viagem\n      de acordo com a categoria, conforme a Resolução ARES-PCJ n.º 328/2019.");
			sleep(atraso);
			printf("\n\nSAAE: O fechamento das entregas é do dia 20 de um mês até 20 do outro e vencimento do boleto até dia 10 do mês seguinte.");
			sleep(atraso);
			printf("\n\nEmpresas/Entidades");
			printf("\n1) Altena\t\t\t\t6) Igreja Santa Clara\n2) Canil Municipal\t\t\t7) Igreja N. Srª D'Oropa\n3) Corbes\t\t\t\t8) JDK\n4) Fecofer\t\t\t\t9) MMS Multiaços\n5) FEIC\t\t\t\t\t10) TR4");
			sleep(atraso);
			printf("\n\nSAAE: As entregas da Corbes não são cobradas, porque a mesma opera com subsídios municipais.");

			Escapar_CaminhaoPipa();
        }

		else{
				Escapar_CaminhaoPipa();
			}
	}
