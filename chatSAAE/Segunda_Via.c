//orinta��o para emiss�o de segunda via de fatura

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//M�todo Escapar Segunda Via
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

//M�todo Segunda Via
void Segunda_Via(){

		char contaVencida = '*';
		int atraso = 1;

		system("cls");
        //Chamar m�todo Titulo em main.c
        Titulo();
		printf("\n\n\t\t\t\t\t\t<<< Segunda Via da Fatura >>>\n\n");
		printf("\nSAAE: A conta que voc� deseja foi emitida antes de 1�/01/2020?");
		printf("\n\nSAAE: Digite S (SIM) ou N (N�o) ");
		fflush(stdin);
		scanf("%c", &contaVencida);

		switch(contaVencida){
            case 's':{
			printf("\nUsu�rio: Sim!");
			sleep(atraso);
			printf("\n\nSAAE: Contas emitidas antes de 1�/01/2020 devem ser tratadas como D�vida Ativa.");
			sleep(atraso);
			printf("\n\nSAAE: Por gentileza, entre em contato com o SAAE pelo WhatsApp (11) 9-9984-3028 ou pelo telefone (11) 4602-6370.\n");
			sleep(atraso);
			break;
            }
		case 'n':{
			printf("\nUsu�rio: N�o!");
			sleep(atraso);
			printf("\n\nSAAE: A segunda via da fatura pode ser obtida pelo site https://www.saaesalto.sp.gov.br � preciso apenas informar o CDC\n      com dois d�gitos ao final.");
			sleep(atraso);
			printf("\n\nSAAE: Se preferir pode retirar a fatura pessoalmente na Conasa, na rua Nove de Julho 849 - Vila Nova, sem a necessidade\n      de agendamento pr�vio.\n");
			sleep(atraso);
			break;
            }

        default: {
            printf("Digite uma op��o v�lida!");
            system("pause");
            Segunda_Via();
            }
		}
	    //chamar m�todo Escapar Segunda Via
        Escapar_SegundaVia();
	}
