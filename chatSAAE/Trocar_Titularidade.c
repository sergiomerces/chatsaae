//orientacao para troca de titular de conta

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

	//menu de escape de troca de titular de conta
	void Escapar_Titularidade()
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
					 Trocar_Titularidade();
					 break;
					}

				case 'x':{
					 system("exit");
					 break;
					}

				default:{
					Escapar_Titularidade();
					}
				}
		}

	void Trocar_Titularidade()
	{
		int atraso = 1;

		system("cls");
		sleep(atraso);
		Titulo();
		printf("\n\n\t\t\t\t\t<<< Trocar de Titularidade da Fatura >>>");
		sleep(atraso);
		printf("\n\nSAAE: A troca de titular de conta pode ocorrer pelo motivo de compra/venda do im�vel, heran�a ou loca��o.");
		sleep(atraso);
		printf("\n\nSAAE: O servi�o de altera��o de titularidade pode ser solicitado pelo propriet�rio, c�njuge ou inquilino.");
		sleep(atraso);
		printf("\n\nSAAE: Para realizar a altera��o cadastral � preciso apresentar um documento de posse do im�vel, pode ser Matr�cula,\n      Escritura P�blica, Contrato Particular de Compra e Venda com firmas reconhecidas.");
		sleep(atraso);
		printf("\n\nSAAE: Caso o pedido seja feito pelo propriet�rio, basta juntar c�pias do RG e CPF ou CNH a um dos documentos de\n      posse citados.");
		sleep(atraso);
		printf("\n\nSAAE: C�njuges podem requerer a altera��o de titularidade juntando c�pia do RG e CPF ou CNH e Certid�o de Casamento\n      ou Contrato de Uni�o Est�vel a um dos documentos de posse citados. Em caso de im�vel objeto de partilha de\n      bens de div�rcio � preciso juntar o Termo Formal de Partilha homologado judicialmente.");
		sleep(atraso);
		printf("\n\nSAAE: Em caso de heran�a parentes em primeiro grau poder�o requerer a altera��o juntando c�pias do RG e CPF ou CNH a\n      um dos documentos de posse citado, tamb�m ser� necess�rio juntar a certid�o de �bito e o invent�rio quando houver.");
		sleep(atraso);
		printf("\n\nSAAE: Inquilinos ou propriet�rios podem requerer a altera��o juntando c�pias do RG e CPF ou CNH e o Contrato Particular\n      de Loca��o dentro da vig�ncia e com firmas reconhecidas.");
		sleep(atraso);
		printf("\n\nSAAE: Qualquer outra pessoa com procura��o do usu�rio registrada em cart�rio, juntando RG e CPF ou CNH a um dos\n      documentos de posse citados pode requerer a altera��o de titularidade.");

		Escapar_Titularidade();
	}
