//orienta��o para pedido de liga��es de �gua e esgoto em casa, apartamento e horta comunt�ria

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//M�todo de escape Agua_Esgoto
	void Escapar_AguaEsgoto()
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
					 Agua_Esgoto();
					 break;
					}

				case 'x':{
					 system("exit");
					 break;
					}
				}
		}

//M�todo Agua_Esgoto: liga��o nova, segunda liga��o e mudan�a
	void Agua_Esgoto()
	{
		int atraso, imovel, ligacao, apto;
		atraso = 1;
		imovel = 0;
		ligacao = 0;
		apto = 0;

		system("cls");
		//Chama m�todo Titulo no arquivo main
		Titulo();
		sleep(atraso);
		printf("\n\n\t\t\t\t\t<<< Pedido de Liga��o de �gua e Esgoto >>>\n\n");
		sleep(atraso);
		printf("SAAE: Voc� deseja informa��o para liga��o de �gua em CASA (terreno), APARTAMENTO ou HORTA COMUNIT�RIA?");
		sleep(atraso);
		printf("\n\nSAAE: Digite 1 para CASA ou 2 para APARTAMENTO ou 3 para HORTA COMUNIT�RIA: ");
		fflush(stdin);
		scanf("%d", &imovel);

		switch(imovel)
		{
			case 1:{
					sleep(atraso);
					printf("\n\nUsu�rio: 1 Liga��o para casa ou terreno!");
					sleep(atraso);
					printf("\n\nSAAE: � uma PRIMEIRA LIGA��O de �gua no local, uma SEGUNDA LIGA��O ou MUDAN�A DE CAVALETE?");
					sleep(atraso);
					printf("\n\nSAAE: Digite 1 para PRIMEIRA LIGA��O ou 2 para SEGUNDA LIGA��O ou 3 para MUDAN�A DE CAVALETE: ");
					fflush(stdin);
					scanf("%d", &ligacao);

					if(ligacao == 1){
							sleep(atraso);
							printf("\n\nUsu�rio: 1 Primeira liga��o de �gua e esgoto!");
							sleep(atraso);
							printf("\n\nSAAE: Para fazer o pedido da primeira liga��o de �gua � preciso ser propriet�rio do im�vel, c�njuge ou parente em\n      primeiro grau que comprove v�nculo com o propriet�rio.");
							sleep(atraso);
							printf("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo propriet�rio com procura��o ou documento\n      de autoriza��o.");
							sleep(atraso);
							printf("\n\nSAAE: Na primeira liga��o de �gua deve ser feito obrigatoriamente o pedido de liga��o esgoto tamb�m.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme pre�o fixado na Resolu��o ARES-PCJ n.� 328/2019 deve ser recolhida uma taxa de R$ 852,98 pelo servi�o de\n      liga��o de �gua e esgoto.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme a Resolu��o ARES-PCJ n� 336/2020 o medidor deve ser instalado em caixa padr�o com acesso externo aos\n      leituristas e encanadores.");
							sleep(atraso);
							printf("\n\nSAAE: A caixa padr�o deve ser instalada pelo propriet�rio antes do pedido de liga��o e deve haver identifica��o com\n      n�mero do im�vel, lote e quadra na fachada. N�o pode haver obst�culos que impe�am a execu��o do servi�o no\n      passeio ou o acesso � caixa padr�o.");
							sleep(atraso);
							printf("\n\nSAAE: Caso o servi�o n�o possa ser executado por qualquer um dos motivos mencionados ser� cobrada uma taxa extra de\n      R$ 78,57 a ser recolhida � vista em raz�o da visita improdutiva.");
							sleep(atraso);
							printf("\n\n\tDocumentos:");
							printf("\n\tA) Planta aprovada pela Prefeitura com n�mero do im�vel");
							printf("\n\tB) Alvar� de Constru��o expedido pela Prefeitura");
							printf("\n\tC) Carteira de Identidade e CPF ou CNH do propriet�rio");
							printf("\n\tD) Se o requerente for c�njuge deve apresentar seus documentos pessoais e\n\t   Certid�o de Casamento ou Contrato de Uni�o Est�vel");
							printf("\n\tE) Se o requerente for filho, pai, m�e ou irm�o deve apresentar seus\n\t   documentos pessoais");
							printf("\n\tF) Se o requerente for um terceiro deve apresentar procura��o ou documento\n\t   de autoriza��o com firma reconhecida");
							printf("\n\tG) Se o titular for uma pessoa jur�dica o requerente deve apresentar o\n\t   procura��o ou autoriza��o com firma reconhecida, Contrato Social e CNPJ");
							sleep(atraso);
							printf("\n\n\tMateriais");
							printf("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas");
							printf("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada");
							printf("\n\tC) 03 cotovelos de bronze em 90� 3/4 de polegada");
							printf("\n\tD) 03 niples de bronze 3/4 de polegada");
							printf("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada");
							printf("\n\tF) 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(ligacao == 2){
							sleep(atraso);
							printf("\n\nUsu�rio: 2 Segunda liga��o de �gua e esgoto!");
							sleep(atraso);
							printf("\n\nSAAE: Para fazer o pedido da segunda liga��o de �gua � preciso ser propriet�rio do im�vel, c�njuge ou parente em\n      primeiro grau que comprove v�nculo com o propriet�rio.");
							sleep(atraso);
							printf("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo propriet�rio com procura��o ou documento\n      de autoriza��o.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme pre�o fixado na Resolu��o ARES-PCJ n.� 328/2019 deve ser recolhida uma taxa de R$ 426,48 pelo servi�o de\n      liga��o de �gua e esgoto.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme a Resolu��o ARES-PCJ n� 336/2020 o medidor deve ser instalado em caixa padr�o com acesso externo aos\n      leituristas e encanadores.");
							sleep(atraso);
							printf("\n\nSAAE: A caixa padr�o deve ser instalada pelo propriet�rio antes do pedido de liga��o e deve haver identifica��o com\n      n�mero do im�vel, lote e quadra na fachada. N�o pode haver obst�culos que impe�am a execu��o do servi�o no\n      passeio ou o acesso � caixa padr�o.");
							sleep(atraso);
							printf("\n\nSAAE: Caso o servi�o n�o possa ser executado por qualquer um dos motivos mencionados ser� cobrada uma taxa extra de\n      R$ 78,57 a ser recolhida � vista em raz�o da visita improdutiva.");
							sleep(atraso);
							printf("\n\n\tDocumentos:");
							printf("\n\tA) Carteira de Identidade e CPF ou CNH do propriet�rio");
							printf("\n\tB) Se o requerente for c�njuge deve apresentar seus documentos pessoais e\n\t   Certid�o de Casamento ou Contrato de Uni�o Est�vel");
							printf("\n\tC) Se o requerente for filho, pai, m�e ou irm�o deve apresentar seus\n\t   documentos pessoais");
							printf("\n\tD) Se o requerente for um terceiro deve apresentar procura��o ou documento\n\t   de autoriza��o com firma reconhecida");
							printf("\n\tE) Se o titular for uma pessoa jur�dica o requerente deve apresentar o\n\t   procura��o ou autoriza��o com firma reconhecida, Contrato Social e CNPJ");
							sleep(atraso);
							printf("\n\n\tMateriais");
							printf("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas");
							printf("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada");
							printf("\n\tC) 03 cotovelos de bronze em 90� 3/4 de polegada");
							printf("\n\tD) 03 niples de bronze 3/4 de polegada");
							printf("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada");
							printf("\n\tF) 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(ligacao == 3){
							sleep(atraso);
							printf("\n\nUsu�rio: 3 Mudan�a de cavalete!");
							sleep(atraso);
							printf("\n\nSAAE: Para fazer o pedido da mudan�a de cavalete � preciso ser propriet�rio do im�vel, c�njuge ou parente em primeiro\n      grau que comprove v�nculo com o propriet�rio.");
							sleep(atraso);
							printf("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo propriet�rio com procura��o ou documento\n      de autoriza��o.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme pre�o fixado na Resolu��o ARES-PCJ n.� 328/2019 deve ser recolhida uma taxa de R$ 168,35 pelo servi�o\n      de liga��o de �gua e esgoto.");
							sleep(atraso);
							printf("\n\nSAAE: Se o cavalete aind n�o estiver instalado em caixa-padr�o a mudan�a � gratuita.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme a Resolu��o ARES-PCJ n� 336/2020 o medidor deve ser instalado em caixa padr�o com acesso externo aos\n      leituristas e encanadores.");
							sleep(atraso);
							printf("\n\nSAAE: A caixa padr�o deve ser instalada pelo propriet�rio antes do pedido de mudan�a e deve haver identifica��o com\n      n�mero do im�vel, lote e quadra na fachada. N�o pode haver obst�culos que impe�am a execu��o do servi�o no\n      passeio ou o acesso � caixa padr�o.");
							sleep(atraso);
							printf("\n\nSAAE: Caso o servi�o n�o possa ser executado por qualquer um dos motivos mencionados ser� cobrada uma taxa extra de\n      R$ 78,57 a ser recolhida � vista em raz�o da visita improdutiva.");
							sleep(atraso);
							printf("\n\n\tDocumentos:");
							printf("\n\tA) Carteira de Identidade e CPF ou CNH do propriet�rio");
							printf("\n\tB) Se o requerente for c�njuge deve apresentar seus documentos pessoais e\n\t   Certid�o de Casamento ou Contrato de Uni�o Est�vel");
                            printf("\n\tC) Se o requerente for filho, pai, m�e ou irm�o deve apresentar seus\n\t   documentos pessoais");
							printf("\n\tD) Se o requerente for um terceiro deve apresentar procura��o ou documento\n\t   de autoriza��o com firma reconhecida");
							printf("\n\tE) Se o titular for uma pessoa jur�dica o requerente deve apresentar o\n\t   procura��o ou autoriza��o com firma reconhecida, Contrato Social e CNPJ");
							sleep(atraso);
							printf("\n\n\tMateriais");
							printf("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas");
							printf("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada");
							printf("\n\tC) 03 cotovelos de bronze em 90� 3/4 de polegada");
							printf("\n\tD) 03 niples de bronze 3/4 de polegada");
							printf("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada");
							printf("\n\tF) 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else{
							Escapar_AguaEsgoto();
						}

			break;
			}

			case 2:{
					sleep(atraso);
					printf("\n\nUsu�rio: 2 Liga��o para Apartamento!");
					sleep(atraso);
					printf("\n\nSAAE: Cada empreendimento tem padr�o de instala��o diferentes, em alguns casos a construtora deixa tudo pronto apenas\n      para o SAAE colocar o hidr�metro; em outros casos s�o necess�rias pe�as de adopta��o para a liga��o.");
					sleep(atraso);
					printf("\n\nSAAE: A liga��o de esgoto em apartamento � feito pela construtora.");
					sleep(atraso);
					printf("\n\nSAAE: A taxa de liga��o de � de R$ 168,35 conforme a Resolu��o 328/2019.");
					sleep(atraso);
					printf("\n\n\tDocumentos:");
					printf("\n\tA) Carteira de Identidade e CPF ou CNH do propriet�rio");
					printf("\n\tB) Se o requerente for c�njuge deve apresentar seus documentos pessoais e\n\t   Certid�o de Casamento ou Contrato de Uni�o Est�vel");
					printf("\n\tC) Se o requerente for filho, pai, m�e ou irm�o deve apresentar seus\n\t   documentos pessoais");
					printf("\n\tD) Se o requerente for um terceiro deve apresentar procura��o ou documento\n\t   de autoriza��o com firma reconhecida");
					printf("\n\tE) Se o titular for uma pessoa jur�dica o requerente deve apresentar o\n\t   procura��o ou autoriza��o com firma reconhecida, Contrato Social e CNPJ");
					printf("\n\tF) Contrato de Compra/Venda com firmas reconhecidas ou Escritura ou\n           Matr�cula.");
					sleep(atraso);
					printf("\n\nSAAE: Voc� deseja informa��es para liga��o em qual condom�nio?");
					sleep(atraso);
					printf("\n| 1: �gata \t\t\t| 8: P�ssaros");
					printf("\n| 2: Araras \t\t\t| 9: Pedra do Sol");
					printf("\n| 3: Brasil \t\t\t| 10: S�bias");
					printf("\n| 4: Galena \t\t\t| 11: S�o Bento");
					printf("\n| 5: Green Park \t\t| 12: S�o Paulo");
					printf("\n| 6: Monte Serrat \t\t| 13: Madre Paulina");
					printf("\n| 7: Mouton�e \t\t\t| 14: Varandas da Matriz");
					printf("\n\nOp��o: ");
					fflush(stdin);
					scanf("%d", &apto);

					if(apto == 1){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial �gata!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial �gata localizado � rua Eviner Gonzaga 30 - Jd. das Constela��es � necess�rio o seguinte kit de\n      pe�as para liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 2){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Solar das Araras!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Solar das Araras localizado � rua Jap�o 05 - Jd. das Na��es n�o � necess�ria nenhuma pe�a\n      para liga��o.");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 3){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Brasil!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Brasil localizado � rua Estados Unidos 38 - Guara� n�o � necess�ria nenhuma pe�a para liga��o.");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 4){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Galena!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial �gata localizado � rua Eviner Gonzaga 90 - Jd. das Constela��es � necess�rio o seguinte kit de\n      pe�as para liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 5){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Green Park!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Green Park localizado � rua Rem�gio Dalla Vechia 180 - Jd. Nair Maria n�o � necess�ria nenhuma\n      pe�a para liga��o.");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
					}

					else if(apto == 6){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Monte Serrat!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Monte Serrat localizado � rua Ant�nio Gianoto 243 - Guara� � necess�rio o seguinte kit de\n      pe�as para liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 7){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Mouton�e!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Mouton�e localizado � rua S�o Mateus 79 - Nova Era � necess�rio o seguinte kit de pe�as para\n      liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 02 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
                            printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 8){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Solar dos P�ssaros!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Solar dos P�ssaros localizado � Av. da Na��es Unidas 664 n�o � necess�ria nenhuma pe�a para\n      liga��o.");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 9){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Pedra do Sol!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Pedra do Sol localizado � rua Eviner Gonzaga 350 - Jd. das Constela��es � necess�rio o seguinte\n      kit de pe�as para liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 10){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Solar dos Sabi�s!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Solar dos Sabi�s localizado � Av. Eug�nio Coltro 1925 - Salto Ville n�o � necess�ria nenhuma\n      pe�a para liga��o.");
							Escapar_AguaEsgoto();
						}

					else if(apto == 11){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial S�o Bento!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial S�o Bento localizado � Av. J�nio Quadros 107 - Jd. Sontag � necess�rio o seguinte kit de\n      pe�as para liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 niple 3/4 de pol. em bronze");
							sleep(atraso);
							printf("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90�");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 12){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial S�o Paulo!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial S�o Paulo localizado � rua V�rzea Paulista 35 - Jd. Eldorado � necess�rio o seguinte kit de\n      pe�as para liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 02 niple 3/4 de pol. em bronze");
							sleep(atraso);
							printf("\n\t* 02 luvas 3/4 de pol. em PVC lisas dos dois lados");
							sleep(atraso);
							printf("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90�");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 13){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Madre Paulina!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Madre Paulina localizado � rua Dr. Walter Edgar Maffei 399 - Santa Madre Paulina � necess�rio\n      o seguinte kit de pe�as para liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 02 niple 3/4 de pol. em bronze");
							sleep(atraso);
							printf("\n\t* 02 luvas 3/4 de pol. em PVC lisas dos dois lados");
							sleep(atraso);
							printf("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90�");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 14){
							sleep(atraso);
							printf("\n\nUsu�rio: Residencial Varandas da Matriz!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Varandas da Matriz localizado � rua Joaquim Nabuco 140 - Centro � necess�rio o seguinte kit de\n      pe�as para liga��o:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}
			break;
			}

			case 3:{
					sleep(atraso);
					printf("\n\nUsu�rio: 3 Liga��o para Horta Comunit�ria!");
					sleep(atraso);
					printf("\n\nSAAE: Para fazer o pedido da liga��o de �gua � preciso ser propriet�rio do im�vel, c�njuge ou parente em primeiro\n      grau que comprove v�nculo com o propriet�rio.");
					sleep(atraso);
					printf("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo propriet�rio com procura��o ou documento\n      de autoriza��o.");
					sleep(atraso);
					printf("\n\nSAAE: Conforme pre�o fixado na Resolu��o ARES-PCJ n.� 328/2019 deve ser recolhida uma taxa de R$ 426,48 pelo servi�o\n      de liga��o de �gua e esgoto.");
					sleep(atraso);
					printf("\n\nSAAE: Conforme a Resolu��o ARES-PCJ n� 336/2020 o medidor deve ser instalado em caixa padr�o com acesso externo aos\n      leituristas e encanadores.");
					sleep(atraso);
					printf("\n\nSAAE: A caixa padr�o deve ser instalada pelo propriet�rio antes do pedido de liga��o e deve haver identifica��o com\n      n�mero do im�vel, lote e quadra na fachada. N�o pode haver obst�culos que impe�am a execu��o do servi�o no\n      passeio ou o acesso � caixa padr�o.");
					sleep(atraso);
					printf("\n\nSAAE: Caso o servi�o n�o possa ser executado por qualquer um dos motivos mencionados ser� cobrada uma taxa extra de\n      R$ 78,57 a ser recolhida � vista em raz�o da visita improdutiva.");
					sleep(atraso);
					printf("\n\n\tDocumentos:");
					printf("\n\tA) Contrato de Compra e Venda");
					printf("\n\tB) Carn� do IPTU");
					printf("\n\tC) Autoriza��o expedida pela Prefeitura");
					printf("\n\tD) Carteira de Identidade e CPF ou CNH do propriet�rio");
					printf("\n\tE) Se o requerente for c�njuge deve apresentar seus documentos pessoais e\n\t   Certid�o de Casamento ou Contrato de Uni�o Est�vel");
					printf("\n\tF) Se o requerente for filho, pai, m�e ou irm�o deve apresentar seus\n\t   documentos pessoais");
					printf("\n\tG) Se o requerente for um terceiro deve apresentar procura��o ou documento\n\t   de autoriza��o com firma reconhecida");
					printf("\n\tH) Se o titular for uma pessoa jur�dica o requerente deve apresentar o\n\t   procura��o ou autoriza��o com firma reconhecida, Contrato Social e CNPJ");
					sleep(atraso);
					printf("\n\n\tMateriais");
					printf("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas");
					printf("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada");
					printf("\n\tC) 03 cotovelos de bronze em 90� 3/4 de polegada");
					printf("\n\tD) 03 niples de bronze 3/4 de polegada");
					printf("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada");
					printf("\n\tF) 01 fita veda rosca de 50 metros");
					sleep(atraso);
					printf("\n\nSAAE: Esse servi�o pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e hor�rio atrav�s de\n      atendimento presencial no SAAE previamente agendado.\n");
					Escapar_AguaEsgoto();
            break;
				}
			}
		}
