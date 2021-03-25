//orintação para emissão de segunda via de fatura

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Método Escapar Segunda Via
	void Escapar_SegundaVia()
	{
		char navegacao = '*';

			printf("\n\n[P: Menu Principal\t V: Voltar\t X: Sair]\n");
			fflush(stdin);
			scanf("%c", &navegacao);

			switch(navegacao) {

				case 'p':{
					 main();
					 break;
					}

				case 'v':{
					 Segunda_Via();
					 break;
					}

				case 'x':{
					 system("exit");
					 break;
					}
				}
}

//Método Segunda Via
void Segunda_Via(){

		char contaVencida = '*';
		int atraso = 1;

		system("cls");
        //Chamar método Titulo em main.c
        Titulo();
		printf("\n\n\t\t\t\t\t\t<<< Segunda Via da Fatura >>>\n\n");
		printf("\nSAAE: A conta que você deseja foi emitida antes de 1º/01/2020?");
		printf("\n\nSAAE: Digite S (SIM) ou N (Não) ");
		fflush(stdin);
		scanf("%c", &contaVencida);

		switch(contaVencida){
            case 's':{
			printf("\nUsuário: Sim!");
			sleep(atraso);
			printf("\n\nSAAE: Contas emitidas antes de 1º/01/2020 devem ser tratadas como Dívida Ativa.");
			sleep(atraso);
			printf("\n\nSAAE: Por gentileza, entre em contato com o SAAE pelo WhatsApp (11) 9-9984-3028 ou pelo telefone (11) 4602-6370.\n");
			sleep(atraso);
			break;
            }
		case 'n':{
			printf("\nUsuário: Não!");
			sleep(atraso);
			printf("\n\nSAAE: A segunda via da fatura pode ser obtida pelo site https://www.saaesalto.sp.gov.br é preciso apenas informar o CDC\n      com dois dígitos ao final.");
			sleep(atraso);
			printf("\n\nSAAE: Se preferir pode retirar a fatura pessoalmente na Conasa, na rua Nove de Julho 849 - Vila Nova, sem a necessidade\n      de agendamento prévio.\n");
			sleep(atraso);
			break;
            }

        default: {
            printf("Digite uma opção válida!");
            system("pause");
            Segunda_Via();
            }
		}
	    //chamar método Escapar Segunda Via
        Escapar_SegundaVia();
	}
