//orientação para reparos de vazamento de água e desobstrução de esgoto

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//método Escapar Vazamentos
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

//orientação vazamento no cavalete
    void Reparar_Cavalete(){

			int atraso = 1;

			sleep(atraso);
			printf("\n\nUsuário: Vazamento de água no cavalete!");
			sleep(atraso);
			printf("\n\nSAAE: Se possível feche o registro para estancar o vazamento!");
			sleep(atraso);
			printf("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o chamado:");
			sleep(atraso);
			printf("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do imóvel com rua e número.");
			sleep(atraso);
			printf("\n\nSAAE: Se possível feche o registro para estancar o vazamento!");
			sleep(atraso);
			printf("\n\nSAAE: Os encanadores trabalham das 8h às 22h, a previsão de execução desse serviço é de 24 horas.");

			Escapar_Vazamentos();
		}

//orientação para chamado de vazamento na calçada
	void Reparar_Calcada() {

			int atraso = 1;

			sleep(atraso);
			printf("\n\nUsuário: Vazamento de água na calçada!");
			sleep(atraso);
			printf("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o chamado:");
			sleep(atraso);
			printf("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do imóvel com rua e número.");
			sleep(atraso);
			printf("\n\nSAAE: Caso não more no local e esteja apenas de passagem, por favor identifique a rua e o número mais próximo do local\n      do vazamento.");
			sleep(atraso);
			printf("\n\nSAAE: Os encanadores trabalham das 8h às 22h, a previsão de execução desse serviço é de 24 horas.");
			sleep(atraso);
			printf("\n\nSAAE: Caso a equipe de encanadores tenha que abrir a calçada, após o conserto outra equipe de pedreiros voltará para\n      fechar o piso em até 10 dias.");

			Escapar_Vazamentos();
		}

//orientação para chamado de vazamento na rua
	void Reparar_Rua() {

			int atraso = 1;

			sleep(atraso);
			printf("\n\nUsuário: Vazamento de água no meio da rua!");
			sleep(atraso);
			printf("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o chamado:");
			sleep(atraso);
			printf("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do imóvel com rua e número.");
			sleep(atraso);
			printf("\n\nSAAE: Caso não more no local e esteja apenas de passagem, por favor identifique a rua e o número mais próximo do local\n      do vazamento");
			sleep(atraso);
			printf("\n\nSAAE: Os encanadores trabalham das 8h às 22h, a previsão de execução desse serviço é de 24 horas.m");
			sleep(atraso);
			printf("\n\nSAAE: Caso a equipe de encanadores tenha que abrir o pavimento, após o conserto outra equipe de pedreiros voltará para\n      fechar o piso em até 10 dias.");

			Escapar_Vazamentos();
		}

//orientação para chamado de vazamento de esgoto
	void Reparar_Esgoto() {

			int atraso, tipoEsgoto;
			atraso = 1;
			tipoEsgoto = 0;

			sleep(atraso);
			printf("\n\nUsuário: Vazamento de esgoto!");
			sleep(atraso);
			printf("\n\nSAAE: A reclamação é de boca de lobo ou grelha de água de chuva entupida ou é retorno de esgoto em PV (tampa de ferro)\n      na rua ou dentro de casa?");
			printf("\n\nSAAE: Escolha 1: BOCA DE LOBO entupida ou 2: Retorno do esgoto no PV ou em CASA");
			printf("\n\nOpção: ");
			fflush(stdin);
			scanf("%d", &tipoEsgoto);

			if(tipoEsgoto == 1) {
				sleep(atraso);
				printf("\n\nUsuário: Boca de lobo ou grelha que recolhe água de chuva.");
				sleep(atraso);
				printf("\n\nSAAE: Se o problema for de boca de lobo ou grelha na rua ou sarjeta que recolhe água de chuva é preciso acionar a\n      Secretaria Municipal de Obras e Serviços Públicos.");
				sleep(atraso);
				printf("\n\nSAAE: Telefones da Secretaria: 4028-1826 ou 4029-8556");
				sleep(atraso);
				printf("\n\nSAAE: Também pode ser acionada a Ouvidoria da Prefeitura pelos telefones:");
				sleep(atraso);
				printf("\n\nSAAE: 156 ou 4602-8510 ou 4602-8514");
				}

			else if(tipoEsgoto == 2) {
				sleep(atraso);
				printf("\n\nUsuário: Tampa de PV ou casa com retorno de esgoto.");
				sleep(atraso);
				printf("\n\nSAAE: Para abrir um chamado de desobstrução de esgoto ligue: 4602-6370.");
				sleep(atraso);
				printf("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do imóvel com rua e número.");
				sleep(atraso);
				printf("\n\nSAAE: Caso não more no local e esteja apenas de passagem, por favor identifique a rua e o número mais próximo do\n      local do vazamento");
				sleep(atraso);
				printf("\n\nSAAE: Os encanadores trabalham das 8h às 22h, a previsão de execução desse serviço é de 24 horas.");
				sleep(atraso);
				printf("\n\nSAAE: Caso a equipe de encanadores tenha que abrir a rua ou calçada, após a desobstrução outra equipe de pedreiros\n      volta para fechar o piso em até 10 dias.");
				}

			else{
                 Escapar_Vazamentos();
				}

			Escapar_Vazamentos();
		}

//orientação para manutenção de vazamentos de água e desobstrução de esgoto
	void Vazamentos() {

		int tipoVazamento = 0;

		system("cls");
		//método Titulo em main.c gera cabeçalho
		Titulo();
		printf("\n\t\t\t<<< Manutenção de vazamentos de Água ou Desobstrução de Esgoto >>>\n\n");
		printf("\nSAAE: Qual o serviço desejado?");
		printf("\n\n| 1: Vazamento de Água no Cavalete\t\t| 3: Vazamento de Água na Rua");
		printf("\n| 2: Vazamento de Água na Calçada\t\t| 4: Vazamento de Esgoto");
		printf("\n\nOpção: ");
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
