//orientação para pedido de ligações de água e esgoto em casa, apartamento e horta comuntária

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Método de escape Agua_Esgoto
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

//Método Agua_Esgoto: ligação nova, segunda ligação e mudança
	void Agua_Esgoto()
	{
		int atraso, imovel, ligacao, apto;
		atraso = 1;
		imovel = 0;
		ligacao = 0;
		apto = 0;

		system("cls");
		//Chama método Titulo no arquivo main
		Titulo();
		sleep(atraso);
		printf("\n\n\t\t\t\t\t<<< Pedido de Ligação de Água e Esgoto >>>\n\n");
		sleep(atraso);
		printf("SAAE: Você deseja informação para ligação de água em CASA (terreno), APARTAMENTO ou HORTA COMUNITÁRIA?");
		sleep(atraso);
		printf("\n\nSAAE: Digite 1 para CASA ou 2 para APARTAMENTO ou 3 para HORTA COMUNITÁRIA: ");
		fflush(stdin);
		scanf("%d", &imovel);

		switch(imovel)
		{
			case 1:{
					sleep(atraso);
					printf("\n\nUsuário: 1 Ligação para casa ou terreno!");
					sleep(atraso);
					printf("\n\nSAAE: É uma PRIMEIRA LIGAÇÃO de água no local, uma SEGUNDA LIGAÇÃO ou MUDANÇA DE CAVALETE?");
					sleep(atraso);
					printf("\n\nSAAE: Digite 1 para PRIMEIRA LIGAÇÃO ou 2 para SEGUNDA LIGAÇÃO ou 3 para MUDANÇA DE CAVALETE: ");
					fflush(stdin);
					scanf("%d", &ligacao);

					if(ligacao == 1){
							sleep(atraso);
							printf("\n\nUsuário: 1 Primeira ligação de água e esgoto!");
							sleep(atraso);
							printf("\n\nSAAE: Para fazer o pedido da primeira ligação de água é preciso ser proprietário do imóvel, cônjuge ou parente em\n      primeiro grau que comprove vínculo com o proprietário.");
							sleep(atraso);
							printf("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo proprietário com procuração ou documento\n      de autorização.");
							sleep(atraso);
							printf("\n\nSAAE: Na primeira ligação de água deve ser feito obrigatoriamente o pedido de ligação esgoto também.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme preço fixado na Resolução ARES-PCJ n.º 328/2019 deve ser recolhida uma taxa de R$ 852,98 pelo serviço de\n      ligação de água e esgoto.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme a Resolução ARES-PCJ nº 336/2020 o medidor deve ser instalado em caixa padrão com acesso externo aos\n      leituristas e encanadores.");
							sleep(atraso);
							printf("\n\nSAAE: A caixa padrão deve ser instalada pelo proprietário antes do pedido de ligação e deve haver identificação com\n      número do imóvel, lote e quadra na fachada. Não pode haver obstáculos que impeçam a execução do serviço no\n      passeio ou o acesso à caixa padrão.");
							sleep(atraso);
							printf("\n\nSAAE: Caso o serviço não possa ser executado por qualquer um dos motivos mencionados será cobrada uma taxa extra de\n      R$ 78,57 a ser recolhida à vista em razão da visita improdutiva.");
							sleep(atraso);
							printf("\n\n\tDocumentos:");
							printf("\n\tA) Planta aprovada pela Prefeitura com número do imóvel");
							printf("\n\tB) Alvará de Construção expedido pela Prefeitura");
							printf("\n\tC) Carteira de Identidade e CPF ou CNH do proprietário");
							printf("\n\tD) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável");
							printf("\n\tE) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t   documentos pessoais");
							printf("\n\tF) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida");
							printf("\n\tG) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ");
							sleep(atraso);
							printf("\n\n\tMateriais");
							printf("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas");
							printf("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada");
							printf("\n\tC) 03 cotovelos de bronze em 90° 3/4 de polegada");
							printf("\n\tD) 03 niples de bronze 3/4 de polegada");
							printf("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada");
							printf("\n\tF) 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(ligacao == 2){
							sleep(atraso);
							printf("\n\nUsuário: 2 Segunda ligação de água e esgoto!");
							sleep(atraso);
							printf("\n\nSAAE: Para fazer o pedido da segunda ligação de água é preciso ser proprietário do imóvel, cônjuge ou parente em\n      primeiro grau que comprove vínculo com o proprietário.");
							sleep(atraso);
							printf("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo proprietário com procuração ou documento\n      de autorização.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme preço fixado na Resolução ARES-PCJ n.º 328/2019 deve ser recolhida uma taxa de R$ 426,48 pelo serviço de\n      ligação de água e esgoto.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme a Resolução ARES-PCJ nº 336/2020 o medidor deve ser instalado em caixa padrão com acesso externo aos\n      leituristas e encanadores.");
							sleep(atraso);
							printf("\n\nSAAE: A caixa padrão deve ser instalada pelo proprietário antes do pedido de ligação e deve haver identificação com\n      número do imóvel, lote e quadra na fachada. Não pode haver obstáculos que impeçam a execução do serviço no\n      passeio ou o acesso à caixa padrão.");
							sleep(atraso);
							printf("\n\nSAAE: Caso o serviço não possa ser executado por qualquer um dos motivos mencionados será cobrada uma taxa extra de\n      R$ 78,57 a ser recolhida à vista em razão da visita improdutiva.");
							sleep(atraso);
							printf("\n\n\tDocumentos:");
							printf("\n\tA) Carteira de Identidade e CPF ou CNH do proprietário");
							printf("\n\tB) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável");
							printf("\n\tC) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t   documentos pessoais");
							printf("\n\tD) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida");
							printf("\n\tE) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ");
							sleep(atraso);
							printf("\n\n\tMateriais");
							printf("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas");
							printf("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada");
							printf("\n\tC) 03 cotovelos de bronze em 90° 3/4 de polegada");
							printf("\n\tD) 03 niples de bronze 3/4 de polegada");
							printf("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada");
							printf("\n\tF) 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(ligacao == 3){
							sleep(atraso);
							printf("\n\nUsuário: 3 Mudança de cavalete!");
							sleep(atraso);
							printf("\n\nSAAE: Para fazer o pedido da mudança de cavalete é preciso ser proprietário do imóvel, cônjuge ou parente em primeiro\n      grau que comprove vínculo com o proprietário.");
							sleep(atraso);
							printf("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo proprietário com procuração ou documento\n      de autorização.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme preço fixado na Resolução ARES-PCJ n.º 328/2019 deve ser recolhida uma taxa de R$ 168,35 pelo serviço\n      de ligação de água e esgoto.");
							sleep(atraso);
							printf("\n\nSAAE: Se o cavalete aind não estiver instalado em caixa-padrão a mudança é gratuita.");
							sleep(atraso);
							printf("\n\nSAAE: Conforme a Resolução ARES-PCJ nº 336/2020 o medidor deve ser instalado em caixa padrão com acesso externo aos\n      leituristas e encanadores.");
							sleep(atraso);
							printf("\n\nSAAE: A caixa padrão deve ser instalada pelo proprietário antes do pedido de mudança e deve haver identificação com\n      número do imóvel, lote e quadra na fachada. Não pode haver obstáculos que impeçam a execução do serviço no\n      passeio ou o acesso à caixa padrão.");
							sleep(atraso);
							printf("\n\nSAAE: Caso o serviço não possa ser executado por qualquer um dos motivos mencionados será cobrada uma taxa extra de\n      R$ 78,57 a ser recolhida à vista em razão da visita improdutiva.");
							sleep(atraso);
							printf("\n\n\tDocumentos:");
							printf("\n\tA) Carteira de Identidade e CPF ou CNH do proprietário");
							printf("\n\tB) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável");
                            printf("\n\tC) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t   documentos pessoais");
							printf("\n\tD) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida");
							printf("\n\tE) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ");
							sleep(atraso);
							printf("\n\n\tMateriais");
							printf("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas");
							printf("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada");
							printf("\n\tC) 03 cotovelos de bronze em 90° 3/4 de polegada");
							printf("\n\tD) 03 niples de bronze 3/4 de polegada");
							printf("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada");
							printf("\n\tF) 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else{
							Escapar_AguaEsgoto();
						}

			break;
			}

			case 2:{
					sleep(atraso);
					printf("\n\nUsuário: 2 Ligação para Apartamento!");
					sleep(atraso);
					printf("\n\nSAAE: Cada empreendimento tem padrão de instalação diferentes, em alguns casos a construtora deixa tudo pronto apenas\n      para o SAAE colocar o hidrômetro; em outros casos são necessárias peças de adoptação para a ligação.");
					sleep(atraso);
					printf("\n\nSAAE: A ligação de esgoto em apartamento é feito pela construtora.");
					sleep(atraso);
					printf("\n\nSAAE: A taxa de ligação de é de R$ 168,35 conforme a Resolução 328/2019.");
					sleep(atraso);
					printf("\n\n\tDocumentos:");
					printf("\n\tA) Carteira de Identidade e CPF ou CNH do proprietário");
					printf("\n\tB) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável");
					printf("\n\tC) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t   documentos pessoais");
					printf("\n\tD) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida");
					printf("\n\tE) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ");
					printf("\n\tF) Contrato de Compra/Venda com firmas reconhecidas ou Escritura ou\n           Matrícula.");
					sleep(atraso);
					printf("\n\nSAAE: Você deseja informações para ligação em qual condomínio?");
					sleep(atraso);
					printf("\n| 1: Ágata \t\t\t| 8: Pássaros");
					printf("\n| 2: Araras \t\t\t| 9: Pedra do Sol");
					printf("\n| 3: Brasil \t\t\t| 10: Sábias");
					printf("\n| 4: Galena \t\t\t| 11: São Bento");
					printf("\n| 5: Green Park \t\t| 12: São Paulo");
					printf("\n| 6: Monte Serrat \t\t| 13: Madre Paulina");
					printf("\n| 7: Moutonée \t\t\t| 14: Varandas da Matriz");
					printf("\n\nOpção: ");
					fflush(stdin);
					scanf("%d", &apto);

					if(apto == 1){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Ágata!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Ágata localizado à rua Eviner Gonzaga 30 - Jd. das Constelações é necessário o seguinte kit de\n      peças para ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 2){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Solar das Araras!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Solar das Araras localizado à rua Japão 05 - Jd. das Nações não é necessária nenhuma peça\n      para ligação.");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 3){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Brasil!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Brasil localizado à rua Estados Unidos 38 - Guaraú não é necessária nenhuma peça para ligação.");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 4){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Galena!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Ágata localizado à rua Eviner Gonzaga 90 - Jd. das Constelações é necessário o seguinte kit de\n      peças para ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 5){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Green Park!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Green Park localizado à rua Remígio Dalla Vechia 180 - Jd. Nair Maria não é necessária nenhuma\n      peça para ligação.");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
					}

					else if(apto == 6){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Monte Serrat!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Monte Serrat localizado à rua Antônio Gianoto 243 - Guaraú é necessário o seguinte kit de\n      peças para ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 7){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Moutonée!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Moutonée localizado à rua São Mateus 79 - Nova Era é necessário o seguinte kit de peças para\n      ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 02 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
                            printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 8){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Solar dos Pássaros!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Solar dos Pássaros localizado à Av. da Nações Unidas 664 não é necessária nenhuma peça para\n      ligação.");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 9){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Pedra do Sol!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Pedra do Sol localizado à rua Eviner Gonzaga 350 - Jd. das Constelações é necessário o seguinte\n      kit de peças para ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 10){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Solar dos Sabiás!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Solar dos Sabiás localizado à Av. Eugênio Coltro 1925 - Salto Ville não é necessária nenhuma\n      peça para ligação.");
							Escapar_AguaEsgoto();
						}

					else if(apto == 11){
							sleep(atraso);
							printf("\n\nUsuário: Residencial São Bento!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial São Bento localizado à Av. Jânio Quadros 107 - Jd. Sontag é necessário o seguinte kit de\n      peças para ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 niple 3/4 de pol. em bronze");
							sleep(atraso);
							printf("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90°");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 12){
							sleep(atraso);
							printf("\n\nUsuário: Residencial São Paulo!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial São Paulo localizado à rua Várzea Paulista 35 - Jd. Eldorado é necessário o seguinte kit de\n      peças para ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 02 niple 3/4 de pol. em bronze");
							sleep(atraso);
							printf("\n\t* 02 luvas 3/4 de pol. em PVC lisas dos dois lados");
							sleep(atraso);
							printf("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90°");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 13){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Madre Paulina!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Madre Paulina localizado à rua Dr. Walter Edgar Maffei 399 - Santa Madre Paulina é necessário\n      o seguinte kit de peças para ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 02 niple 3/4 de pol. em bronze");
							sleep(atraso);
							printf("\n\t* 02 luvas 3/4 de pol. em PVC lisas dos dois lados");
							sleep(atraso);
							printf("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90°");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}

					else if(apto == 14){
							sleep(atraso);
							printf("\n\nUsuário: Residencial Varandas da Matriz!");
							sleep(atraso);
							printf("\n\nSAAE: No Residencial Varandas da Matriz localizado à rua Joaquim Nabuco 140 - Centro é necessário o seguinte kit de\n      peças para ligação:");
							sleep(atraso);
							printf("\n\n\t* 01 fita veda rosca de 50 metros");
							sleep(atraso);
							printf("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)");
							sleep(atraso);
							printf("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC");
							sleep(atraso);
							printf("\n\n\tApresentar NF ou cupom fiscal dos materiais");
							sleep(atraso);
							printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
							Escapar_AguaEsgoto();
						}
			break;
			}

			case 3:{
					sleep(atraso);
					printf("\n\nUsuário: 3 Ligação para Horta Comunitária!");
					sleep(atraso);
					printf("\n\nSAAE: Para fazer o pedido da ligação de água é preciso ser proprietário do imóvel, cônjuge ou parente em primeiro\n      grau que comprove vínculo com o proprietário.");
					sleep(atraso);
					printf("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo proprietário com procuração ou documento\n      de autorização.");
					sleep(atraso);
					printf("\n\nSAAE: Conforme preço fixado na Resolução ARES-PCJ n.º 328/2019 deve ser recolhida uma taxa de R$ 426,48 pelo serviço\n      de ligação de água e esgoto.");
					sleep(atraso);
					printf("\n\nSAAE: Conforme a Resolução ARES-PCJ nº 336/2020 o medidor deve ser instalado em caixa padrão com acesso externo aos\n      leituristas e encanadores.");
					sleep(atraso);
					printf("\n\nSAAE: A caixa padrão deve ser instalada pelo proprietário antes do pedido de ligação e deve haver identificação com\n      número do imóvel, lote e quadra na fachada. Não pode haver obstáculos que impeçam a execução do serviço no\n      passeio ou o acesso à caixa padrão.");
					sleep(atraso);
					printf("\n\nSAAE: Caso o serviço não possa ser executado por qualquer um dos motivos mencionados será cobrada uma taxa extra de\n      R$ 78,57 a ser recolhida à vista em razão da visita improdutiva.");
					sleep(atraso);
					printf("\n\n\tDocumentos:");
					printf("\n\tA) Contrato de Compra e Venda");
					printf("\n\tB) Carnê do IPTU");
					printf("\n\tC) Autorização expedida pela Prefeitura");
					printf("\n\tD) Carteira de Identidade e CPF ou CNH do proprietário");
					printf("\n\tE) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável");
					printf("\n\tF) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t   documentos pessoais");
					printf("\n\tG) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida");
					printf("\n\tH) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ");
					sleep(atraso);
					printf("\n\n\tMateriais");
					printf("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas");
					printf("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada");
					printf("\n\tC) 03 cotovelos de bronze em 90° 3/4 de polegada");
					printf("\n\tD) 03 niples de bronze 3/4 de polegada");
					printf("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada");
					printf("\n\tF) 01 fita veda rosca de 50 metros");
					sleep(atraso);
					printf("\n\nSAAE: Esse serviço pode ser solicitado pelo WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de\n      atendimento presencial no SAAE previamente agendado.\n");
					Escapar_AguaEsgoto();
            break;
				}
			}
		}
