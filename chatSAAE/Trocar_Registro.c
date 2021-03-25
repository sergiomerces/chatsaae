//orientacao para troca de registro

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//menu de escape de troca de registro
	void Escapar_TrocaRegistro()
	{
		char navegacao = '*';

			printf("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ");
			fflush(stdin);
			scanf("%c", &navegacao);

			switch(navegacao) {

				case 'p':{
				    //chama o m�dulo de inicializa��o
					 main();
					 break;
					}

				case 'v':{
				    //m�todo Trocar Titularidade
					 Trocar_Registro();
					 break;
					}

				case 'x':{
					 system("exit");
					 break;
					}

				default:{
					Trocar_Registro();
					}
				}
		}

	void Trocar_Registro()
	{
		int atraso = 1;

		system("cls");
		Titulo();
		printf("\n\n\t\t\t\t\t\t<<< Troca de Registro >>>");
		sleep(atraso);
		printf("\n\nSAAE: Caso seja um registro 3/4 pol. de gaveta com volante em bronze, o propriet�rio/morador poder� comprar o registro\n      e deixar no local e depois abrir um chamado para troca de forma gratuita");
		sleep(atraso);
		printf("\n\nSAAE: Se o requerente optar que o SAAE leve e instale um registro 3/4 pol. de gaveta com volante em bronze, dever�\n      fazer o pedido e pagar a taxa de R$ 23,00 em boleto recolhido somente no sistema da Caixa Econ�mica Federal ou\n      Casas Lot�ricas ou ainda pode optar pela cobran�a na pr�xima fatura.");
		sleep(atraso);
		printf("\n\nSAAE: Registros 3/4 pol. de esfera em PVC de cavaletes antigos s�o trocados gratuitamente");
		sleep(atraso);
		printf("\n\nSAAE: Esse servi�o ode ser solicitado pelo telefone (11) 4602-6370 ou pelo WhatsApp (11) 99984-3028");

		Escapar_TrocaRegistro();
	}
