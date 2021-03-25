//orienta��o para reparos de vazamento de �gua e desobstru��o de esgoto

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//m�todo Escapar Vazamentos
	void Escapar_Vazamentos() {
		char navegacao = '*';

			printf("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ");
			fflush(stdin);
			scanf("%c", &navegacao);

			switch(navegacao) {

				case 'p': {
					 main();
					 break;
					}

				case 'v': {
					 Vazamentos();
					 break;
					}

				case 'x': {
					 system("exit");
					 break;
					}

				default: {
					Vazamentos();
					break;
					}
        }
	}

//orienta��o vazamento no cavalete
    void Reparar_Cavalete(){

			int atraso = 1;

			sleep(atraso);
			printf("\n\nUsu�rio: Vazamento de �gua no cavalete!");
			sleep(atraso);
			printf("\n\nSAAE: Se poss�vel feche o registro para estancar o vazamento!");
			sleep(atraso);
			printf("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o chamado:");
			sleep(atraso);
			printf("\n\nSAAE: Tenha sempre uma conta em m�os e identifique seu CDC ou o endere�o do im�vel com rua e n�mero.");
			sleep(atraso);
			printf("\n\nSAAE: Se poss�vel feche o registro para estancar o vazamento!");
			sleep(atraso);
			printf("\n\nSAAE: Os encanadores trabalham das 8h �s 22h, a previs�o de execu��o desse servi�o � de 24 horas.");

			Escapar_Vazamentos();
		}

//orienta��o para chamado de vazamento na cal�ada
	void Reparar_Calcada() {

			int atraso = 1;

			sleep(atraso);
			printf("\n\nUsu�rio: Vazamento de �gua na cal�ada!");
			sleep(atraso);
			printf("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o chamado:");
			sleep(atraso);
			printf("\n\nSAAE: Tenha sempre uma conta em m�os e identifique seu CDC ou o endere�o do im�vel com rua e n�mero.");
			sleep(atraso);
			printf("\n\nSAAE: Caso n�o more no local e esteja apenas de passagem, por favor identifique a rua e o n�mero mais pr�ximo do local\n      do vazamento.");
			sleep(atraso);
			printf("\n\nSAAE: Os encanadores trabalham das 8h �s 22h, a previs�o de execu��o desse servi�o � de 24 horas.");
			sleep(atraso);
			printf("\n\nSAAE: Caso a equipe de encanadores tenha que abrir a cal�ada, ap�s o conserto outra equipe de pedreiros voltar� para\n      fechar o piso em at� 10 dias.");

			Escapar_Vazamentos();
		}

//orienta��o para chamado de vazamento na rua
	void Reparar_Rua() {

			int atraso = 1;

			sleep(atraso);
			printf("\n\nUsu�rio: Vazamento de �gua no meio da rua!");
			sleep(atraso);
			printf("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o chamado:");
			sleep(atraso);
			printf("\n\nSAAE: Tenha sempre uma conta em m�os e identifique seu CDC ou o endere�o do im�vel com rua e n�mero.");
			sleep(atraso);
			printf("\n\nSAAE: Caso n�o more no local e esteja apenas de passagem, por favor identifique a rua e o n�mero mais pr�ximo do local\n      do vazamento");
			sleep(atraso);
			printf("\n\nSAAE: Os encanadores trabalham das 8h �s 22h, a previs�o de execu��o desse servi�o � de 24 horas.m");
			sleep(atraso);
			printf("\n\nSAAE: Caso a equipe de encanadores tenha que abrir o pavimento, ap�s o conserto outra equipe de pedreiros voltar� para\n      fechar o piso em at� 10 dias.");

			Escapar_Vazamentos();
		}

//orienta��o para chamado de vazamento de esgoto
	void Reparar_Esgoto() {

			int atraso, tipoEsgoto;
			atraso = 1;
			tipoEsgoto = 0;

			sleep(atraso);
			printf("\n\nUsu�rio: Vazamento de esgoto!");
			sleep(atraso);
			printf("\n\nSAAE: A reclama��o � de boca de lobo ou grelha de �gua de chuva entupida ou � retorno de esgoto em PV (tampa de ferro)\n      na rua ou dentro de casa?");
			printf("\n\nSAAE: Escolha 1: BOCA DE LOBO entupida ou 2: Retorno do esgoto no PV ou em CASA");
			printf("\n\nOp��o: ");
			fflush(stdin);
			scanf("%d", &tipoEsgoto);

			if(tipoEsgoto == 1) {
				sleep(atraso);
				printf("\n\nUsu�rio: Boca de lobo ou grelha que recolhe �gua de chuva.");
				sleep(atraso);
				printf("\n\nSAAE: Se o problema for de boca de lobo ou grelha na rua ou sarjeta que recolhe �gua de chuva � preciso acionar a\n      Secretaria Municipal de Obras e Servi�os P�blicos.");
				sleep(atraso);
				printf("\n\nSAAE: Telefones da Secretaria: 4028-1826 ou 4029-8556");
				sleep(atraso);
				printf("\n\nSAAE: Tamb�m pode ser acionada a Ouvidoria da Prefeitura pelos telefones:");
				sleep(atraso);
				printf("\n\nSAAE: 156 ou 4602-8510 ou 4602-8514");
				}

			else if(tipoEsgoto == 2) {
				sleep(atraso);
				printf("\n\nUsu�rio: Tampa de PV ou casa com retorno de esgoto.");
				sleep(atraso);
				printf("\n\nSAAE: Para abrir um chamado de desobstru��o de esgoto ligue: 4602-6370.");
				sleep(atraso);
				printf("\n\nSAAE: Tenha sempre uma conta em m�os e identifique seu CDC ou o endere�o do im�vel com rua e n�mero.");
				sleep(atraso);
				printf("\n\nSAAE: Caso n�o more no local e esteja apenas de passagem, por favor identifique a rua e o n�mero mais pr�ximo do\n      local do vazamento");
				sleep(atraso);
				printf("\n\nSAAE: Os encanadores trabalham das 8h �s 22h, a previs�o de execu��o desse servi�o � de 24 horas.");
				sleep(atraso);
				printf("\n\nSAAE: Caso a equipe de encanadores tenha que abrir a rua ou cal�ada, ap�s a desobstru��o outra equipe de pedreiros\n      volta para fechar o piso em at� 10 dias.");
				}

			else{
                 Escapar_Vazamentos();
				}

			Escapar_Vazamentos();
		}

//orienta��o para manuten��o de vazamentos de �gua e desobstru��o de esgoto
	void Vazamentos() {

		int tipoVazamento = 0;

		system("cls");
		//m�todo Titulo em main.c gera cabe�alho
		Titulo();
		printf("\n\t\t\t<<< Manuten��o de vazamentos de �gua ou Desobstru��o de Esgoto >>>\n\n");
		printf("\nSAAE: Qual o servi�o desejado?");
		printf("\n\n| 1: Vazamento de �gua no Cavalete\t\t| 3: Vazamento de �gua na Rua");
		printf("\n| 2: Vazamento de �gua na Cal�ada\t\t| 4: Vazamento de Esgoto");
		printf("\n\nOp��o: ");
		fflush(stdin);
		scanf("%d", &tipoVazamento);

		switch(tipoVazamento){

				case 1: {
						Reparar_Cavalete();
						break;
					}

				case 2: {
						Reparar_Calcada();
						break;
					}

				case 3: {
						Reparar_Rua();
						break;
					}

				case 4: {
						Reparar_Esgoto();
						break;
					}

				default: {
						Escapar_Vazamentos();
						break;
					}
			}
	}
