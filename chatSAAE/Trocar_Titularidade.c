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
				    //chama o módulo de inicialização
					 main();
					 break;
					}

				case 'v':{
				    //método Trocar Titularidade
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
		printf("\n\nSAAE: A troca de titular de conta pode ocorrer pelo motivo de compra/venda do imóvel, herança ou locação.");
		sleep(atraso);
		printf("\n\nSAAE: O serviço de alteração de titularidade pode ser solicitado pelo proprietário, cônjuge ou inquilino.");
		sleep(atraso);
		printf("\n\nSAAE: Para realizar a alteração cadastral é preciso apresentar um documento de posse do imóvel, pode ser Matrícula,\n      Escritura Pública, Contrato Particular de Compra e Venda com firmas reconhecidas.");
		sleep(atraso);
		printf("\n\nSAAE: Caso o pedido seja feito pelo proprietário, basta juntar cópias do RG e CPF ou CNH a um dos documentos de\n      posse citados.");
		sleep(atraso);
		printf("\n\nSAAE: Cônjuges podem requerer a alteração de titularidade juntando cópia do RG e CPF ou CNH e Certidão de Casamento\n      ou Contrato de União Estável a um dos documentos de posse citados. Em caso de imóvel objeto de partilha de\n      bens de divórcio é preciso juntar o Termo Formal de Partilha homologado judicialmente.");
		sleep(atraso);
		printf("\n\nSAAE: Em caso de herança parentes em primeiro grau poderão requerer a alteração juntando cópias do RG e CPF ou CNH a\n      um dos documentos de posse citado, também será necessário juntar a certidão de óbito e o inventário quando houver.");
		sleep(atraso);
		printf("\n\nSAAE: Inquilinos ou proprietários podem requerer a alteração juntando cópias do RG e CPF ou CNH e o Contrato Particular\n      de Locação dentro da vigência e com firmas reconhecidas.");
		sleep(atraso);
		printf("\n\nSAAE: Qualquer outra pessoa com procuração do usuário registrada em cartório, juntando RG e CPF ou CNH a um dos\n      documentos de posse citados pode requerer a alteração de titularidade.");

		Escapar_Titularidade();
	}
