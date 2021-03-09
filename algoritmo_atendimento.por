/* Algoritmo: Chat de auto Atendimento do SAAE Salto
Escrito por: Sérgio da Costa Mercês - sergio.merces@gmail.com
Github: https://github.com/sergiomerces/chatsaae
Salto - SP (BRA), 3 de janeiro de 2021*/

programa
{
	inclua biblioteca Util --> u
	
	funcao inicio()
	{
		limpa()
		exibir_titulo()
		exibir_servico()
	}
	
	//geração da caixa do título principal
	funcao exibir_titulo()
	{
		inteiro linha = 0
		
		para(linha = 0; linha <= 79; linha++)
		{
			escreva("=")
			}
			
		escreva("\n|\t\t\tSAAE Salto Auto Atendimento\t\t\t\t|\n")
		
		para(linha = 0; linha <= 79; linha++)
		{
			escreva("=")
			}		
	}

	//geração do menu principal
	funcao exibir_servico()
	{
		caracter opcao = '*'
		
		escreva("\n\n  Escolha o número correspondente ao serviço desejado:\n")
		escreva("\n| 1: Segunda Via da Fatura \t\t\t| 6: Reclamação Valor da Fatura")
		escreva("\n| 2: Ligação de Água e Esgoto \t\t\t| 7: Parcelamento Fatura/Multa")
		escreva("\n| 3: Vazamentos \t\t\t\t| 8: Alteração de Titular")
		escreva("\n| 4: Corte a Pedido/Religação \t\t\t| 9: Troca de Registro")
		escreva("\n| 5: Caminhão-Pipa \t\t\t\t| 0: Outros Serviços")
		escreva("\n\nOpçao: ")
		leia(opcao)

		escolha(opcao)
		{
			caso '1':{
				gerar_fatura()
				pare
				}

			caso '2':{
				ligar_agua()
				pare
				}

			caso '3':{
				consertar_vazamento()
				pare
				}

			caso '4':{
				cortar_religar()
				pare
				}

			caso '5':{
				entregar_pipa()
				pare
				}

			caso '6':{
				reclamar_valor()
				pare
				}			

			caso '7':{
				parcelar_conta()
				pare
				}
			
			caso '8':{
				trocar_titular()
				pare
				}
			
			caso '9':{
				trocar_registro()
				pare
				}
			
			caso '0':{
				solicitar_outros()
				pare
				}

			caso contrario:{
				escreva("Escolha um número associado a uma opção válida")
				limpa()
				inicio()
				}
			}
	}

	//encerrar a execução do programa
	funcao sair()
	{
	 limpa()	
	}

	//orietação para eissão da segunda via da fatura
	funcao gerar_fatura()
	{
		inteiro tempo = 1000
		caracter contaVencida = '0'		
		
		limpa()
		exibir_titulo()
		escreva("\n\n\t\t\t<<< Segunda Via da Fatura >>>\n\n")
		u.aguarde(tempo)
		escreva("\nSAAE: A conta que você deseja foi emitida antes de 1º/01/2020?")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Digite S (SIM) ou N (Não) ")
		leia(contaVencida)
		
		se(contaVencida == 's'){
			escreva("\nUsuário: Sim!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Contas emitidas antes de 1º/01/2020 devem ser tratadas como Dívida Ativa.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Por gentileza, entre em contato com o SAAE de segunda à sexta em horário\n      comercial pelo WhatsApp (11) 9-9984-3028 ou pelo telefone (11) 4602-6370.")
			u.aguarde(tempo)

			escapar_gerarfatura()
		}
		senao se(contaVencida == 'n') {
			escreva("\nUsuário: Não!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: A segunda via da fatura pode ser obtida pelo site https://www.saaesalto.sp.gov.br.")			
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se preferir pode retirar a fatura pessoalmente na Conasa, na rua Nove de Julho 849\n      - Vila Nova, sem a necessidade de agendamento prévio.")

			u.aguarde(tempo)

			escapar_gerarfatura()		
		}
	}

	//menu de escape de gerar segunda via da fatura
	funcao escapar_gerarfatura()
	{
		caracter navegacao = '*'
		
			escreva("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ")
			leia(navegacao)
			
			escolha(navegacao) {

				caso 'p':{
					 inicio()
					 pare
					}

				caso 'v':{
					 gerar_fatura()
					 pare
					}

				caso 'x':{
					 sair()
					 pare
					}

				caso contrario:{
					escapar_gerarfatura()
					}
				
				}
		}
		
	//orientação para pedido de ligação de água e esgoto
	funcao ligar_agua()
	{
		inteiro tempo, imovel, ligacao, apto
		tempo = 1000
		imovel = 0
		ligacao = 0
		apto = 0
		
		limpa()
		exibir_titulo()
		u.aguarde(tempo)
		escreva("\n\n\t\t<<< Pedido de Ligação de Água e Esgoto >>>\n\n")
		u.aguarde(tempo)
		escreva("SAAE: Você deseja informação para ligação de água em CASA (terreno), APARTAMENTO\n      ou HORTA COMUNITÁRIA?")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Digite 1 para CASA ou 2 para APARTAMENTO ou 3 para HORTA COMUNITÁRIA: ")
		leia(imovel)

		escolha(imovel)
		{
			caso 1:{
					u.aguarde(tempo)
					escreva("\n\nUsuário: 1 Ligação para casa ou terreno!")
					u.aguarde(tempo)
					escreva("\n\nSAAE: É uma PRIMEIRA LIGAÇÃO de água no local, uma SEGUNDA LIGAÇÃO ou MUDANÇA DE\n      CAVALETE?")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Digite 1 para PRIMEIRA LIGAÇÃO ou 2 para SEGUNDA LIGAÇÃO ou 3 para MUDANÇA\n      DE CAVALETE: ")
					leia(ligacao)

					se(ligacao == 1){
							u.aguarde(tempo)
							escreva("\n\nUsuário: 1 Primeira ligação de água e esgoto!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Para fazer o pedido da primeira ligação de água é preciso ser proprietário\n      do imóvel, cônjuge ou parente em primeiro grau que comprove vínculo com o\n      proprietário.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo\n      proprietário com procuração ou documento de autorização.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Na primeira ligação de água deve ser feito obrigatoriamente o pedido de\n      ligação esgoto também.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Conforme preço fixado na Resolução ARES-PCJ n.º 328/2019 deve ser recolhida\n      uma taxa de R$ 852,98 pelo serviço de ligação de água e esgoto.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Conforme a Resolução ARES-PCJ nº 336/2020 o medidor deve ser instalado em\n      caixa padrão com acesso externo aos leituristas e encanadores.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: A caixa padrão deve ser instalada pelo proprietário antes do pedido de\n      ligação e deve haver identificação com número do imóvel, lote e quadra na\n      fachada. Não pode haver obstáculos que impeçam a execução do serviço no\n      passeio ou o acesso à caixa padrão.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Caso o serviço não possa ser executado por qualquer um dos motivos\n      mencionados será cobrada uma taxa extra de R$ 78,57 a ser recolhida à vista\n      em razão da visita improdutiva.")
							u.aguarde(tempo)
							escreva("\n\n\tDocumentos:")
							escreva("\n\tA) Planta aprovada pela Prefeitura com número do imóvel")
							escreva("\n\tB) Alvará de Construção expedido pela Prefeitura")
							escreva("\n\tC) Carteira de Identidade e CPF ou CNH do proprietário")
							escreva("\n\tD) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável")
							escreva("\n\tE) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t    documentos pessoais")
							escreva("\n\tF) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida")
							escreva("\n\tG) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ")
							u.aguarde(tempo)
							escreva("\n\n\tMateriais")
							escreva("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas")							
							escreva("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada")							
							escreva("\n\tC) 03 cotovelos de bronze em 90° 3/4 de polegada")							
							escreva("\n\tD) 03 niples de bronze 3/4 de polegada")
							escreva("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada")
							escreva("\n\tF) 01 fita veda rosca de 50 metros")	
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						} 

					senao se(ligacao == 2){
							u.aguarde(tempo)
							escreva("\n\nUsuário: 2 Segunda ligação de água e esgoto!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Para fazer o pedido da segunda ligação de água é preciso ser proprietário\n      do imóvel, cônjuge ou parente em primeiro grau que comprove vínculo com o\n      proprietário.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo\n      proprietário com procuração ou documento de autorização.")
							u.aguarde(tempo)							
							escreva("\n\nSAAE: Conforme preço fixado na Resolução ARES-PCJ n.º 328/2019 deve ser recolhida\n      uma taxa de R$ 426,48 pelo serviço de ligação de água e esgoto.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Conforme a Resolução ARES-PCJ nº 336/2020 o medidor deve ser instalado em\n      caixa padrão com acesso externo aos leituristas e encanadores.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: A caixa padrão deve ser instalada pelo proprietário antes do pedido de\n      ligação e deve haver identificação com número do imóvel, lote e quadra na\n      fachada. Não pode haver obstáculos que impeçam a execução do serviço no\n      passeio ou o acesso à caixa padrão.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Caso o serviço não possa ser executado por qualquer um dos motivos\n      mencionados será cobrada uma taxa extra de R$ 78,57 a ser recolhida à vista\n      em razão da visita improdutiva.")
							u.aguarde(tempo)
							escreva("\n\n\tDocumentos:")							
							escreva("\n\tA) Carteira de Identidade e CPF ou CNH do proprietário")
							escreva("\n\tB) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável")
							escreva("\n\tC) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t    documentos pessoais")
							escreva("\n\tD) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida")
							escreva("\n\tE) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ")
							u.aguarde(tempo)
							escreva("\n\n\tMateriais")
							escreva("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas")							
							escreva("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada")							
							escreva("\n\tC) 03 cotovelos de bronze em 90° 3/4 de polegada")							
							escreva("\n\tD) 03 niples de bronze 3/4 de polegada")
							escreva("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada")
							escreva("\n\tF) 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(ligacao == 3){
							u.aguarde(tempo)
							escreva("\n\nUsuário: 3 Mudança de cavalete!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Para fazer o pedido da mudança de cavalete é preciso ser proprietário\n      do imóvel, cônjuge ou parente em primeiro grau que comprove vínculo com o\n      proprietário.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo\n      proprietário com procuração ou documento de autorização.")
							u.aguarde(tempo)							
							escreva("\n\nSAAE: Conforme preço fixado na Resolução ARES-PCJ n.º 328/2019 deve ser recolhida\n      uma taxa de R$ 168,35 pelo serviço de ligação de água e esgoto.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Se o cavalete aind não estiver instalado em caixa-padrão a mudança é gratuita.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Conforme a Resolução ARES-PCJ nº 336/2020 o medidor deve ser instalado em\n      caixa padrão com acesso externo aos leituristas e encanadores.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: A caixa padrão deve ser instalada pelo proprietário antes do pedido de\n      mudança e deve haver identificação com número do imóvel, lote e quadra na\n      fachada. Não pode haver obstáculos que impeçam a execução do serviço no\n      passeio ou o acesso à caixa padrão.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Caso o serviço não possa ser executado por qualquer um dos motivos\n      mencionados será cobrada uma taxa extra de R$ 78,57 a ser recolhida à vista\n      em razão da visita improdutiva.")
							u.aguarde(tempo)
							escreva("\n\n\tDocumentos:")							
							escreva("\n\tA) Carteira de Identidade e CPF ou CNH do proprietário")
							escreva("\n\tB) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável")
							escreva("\n\tC) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t    documentos pessoais")
							escreva("\n\tD) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida")
							escreva("\n\tE) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ")
							u.aguarde(tempo)
							escreva("\n\n\tMateriais")
							escreva("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas")							
							escreva("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada")							
							escreva("\n\tC) 03 cotovelos de bronze em 90° 3/4 de polegada")							
							escreva("\n\tD) 03 niples de bronze 3/4 de polegada")
							escreva("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada")
							escreva("\n\tF) 01 fita veda rosca de 50 metros")	
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao {
							escapar_ligaragua()				
						}

			pare
			}

			caso 2:{
					u.aguarde(tempo)
					escreva("\n\nUsuário: 2 Ligação para Apartamento!")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Cada empreendimento tem padrão de instalação diferentes, em alguns casos a\n      construtora deixa tudo pronto apenas para o SAAE colocar o hidrômetro; em\n      outros casos são necessárias peças de adoptação para a ligação.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: A ligação de esgoto em apartamento é feito pela construtora.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: A taxa de ligação de é de R$ 168,35 conforme a Resolução 328/2019.")
					u.aguarde(tempo)					
					escreva("\n\n\tDocumentos:")							
					escreva("\n\tA) Carteira de Identidade e CPF ou CNH do proprietário")
					escreva("\n\tB) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável")
					escreva("\n\tC) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t   documentos pessoais")
					escreva("\n\tD) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida")
					escreva("\n\tE) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ")					
					escreva("\n\tF) Contrato de Compra/Venda com firmas reconhecidas ou Escritura ou\n           Matrícula.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Você deseja informações para ligação em qual condomínio?")
					u.aguarde(tempo)
					escreva("\n| 1: Ágata \t\t\t| 8: Pássaros")
					escreva("\n| 2: Araras \t\t\t| 9: Pedra do Sol")
					escreva("\n| 3: Brasil \t\t\t| 10: Sábias")
					escreva("\n| 4: Galena \t\t\t| 11: São Bento")
					escreva("\n| 5: Green Park \t\t| 12: São Paulo")
					escreva("\n| 6: Monte Serrat \t\t| 13: Madre Paulina")
					escreva("\n| 7: Moutonée \t\t\t| 14: Varandas da Matriz")
					escreva("\n\nOpçao: ")
					leia(apto)

					se(apto == 1){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Ágata!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Ágata localizado à rua Eviner Gonzaga 30 - Jd. das\n      Constelações é necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)
							escreva("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)")
							u.aguarde(tempo)
							escreva("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 2){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Solar das Araras!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Solar das Araras localizado à rua Japão 05 - Jd. das\n      Nações não é necessária nenhuma peça para ligação.")							
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 3){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Brasil!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Brasil localizado à rua Estados Unidos 38 - Guaraú não é\n      necessária nenhuma peça para ligação.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 4){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Galena!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Ágata localizado à rua Eviner Gonzaga 90 - Jd. das\n      Constelações é necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)
							escreva("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)")
							u.aguarde(tempo)
							escreva("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 5){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Green Park!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Green Park localizado à rua Remígio Dalla Vechia 180 - Jd.\n      Nair Maria não é necessária nenhuma peça para ligação.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
					}

					senao se(apto == 6){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Monte Serrat!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Monte Serrat localizado à rua Antônio Gianoto 243 - Guaraú\n      é necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)							
							escreva("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 7){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Moutonée!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Moutonée localizado à rua São Mateus 79 - Nova Era é\n      necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)							
							escreva("\n\t* 02 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
			escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 8){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Solar dos Pássaros!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Solar dos Pássaros localizado à Av. da Nações Unidas 664\n      não é necessária nenhuma peça para ligação.")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 9){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Pedra do Sol!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Pedra do Sol localizado à rua Eviner Gonzaga 350 - Jd. das\n      Constelações é necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)
							escreva("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)")
							u.aguarde(tempo)
							escreva("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 10){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Solar dos Sabiás!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Solar dos Sabiás localizado à Av. Eugênio Coltro 1925 - Salto\n      Ville não é necessária nenhuma peça para ligação.")
							u.aguarde(tempo)
							escapar_ligaragua()
						}

					senao se(apto == 11){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial São Bento!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial São Bento localizado à Av. Jânio Quadros 107 - Jd. Sontag é\n      necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)
							escreva("\n\t* 01 niple 3/4 de pol. em bronze")
							u.aguarde(tempo)
							escreva("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90°")
							u.aguarde(tempo)
							escreva("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 12){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial São Paulo!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial São Paulo localizado à rua Várzea Paulista 35 - Jd. Eldorado\n      é necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)
							escreva("\n\t* 02 niple 3/4 de pol. em bronze")
							u.aguarde(tempo)
							escreva("\n\t* 02 luvas 3/4 de pol. em PVC lisas dos dois lados")
							u.aguarde(tempo)
							escreva("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90°")
							u.aguarde(tempo)
							escreva("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 13){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Madre Paulina!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Madre Paulina localizado à rua Dr. Walter Edgar Maffei 399 -\n      Santa Madre Pauina é necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)
							escreva("\n\t* 02 niple 3/4 de pol. em bronze")
							u.aguarde(tempo)
							escreva("\n\t* 02 luvas 3/4 de pol. em PVC lisas dos dois lados")
							u.aguarde(tempo)
							escreva("\n\t* 01 cotovelo 3/4 de pol. em bronze de 90°")
							u.aguarde(tempo)
							escreva("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}

					senao se(apto == 14){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Varandas da Matriz!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Varandas da Matriz localizado à rua Joaquim Nabuco 140 -\n      Centro é necessário o seguinte kit de peças para ligação:")
							u.aguarde(tempo)
							escreva("\n\n\t* 01 fita veda rosca de 50 metros")
							u.aguarde(tempo)
							escreva("\n\t* 01 luva 3/4 de pol. em PVC um lado com rosca e outro de solda (liso)")
							u.aguarde(tempo)
							escreva("\n\t* 01 par de rosca com tubete curto e anel de borracha 3/4 de pol. em PVC")
							u.aguarde(tempo)
							escreva("\n\n\tApresentar NF ou cupom fiscal dos materiais")
							u.aguarde(tempo)
							escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
							escapar_ligaragua()
						}								
			pare	
			}

			caso 3:{
					u.aguarde(tempo)
					escreva("\n\nUsuário: 3 Ligação para Horta Comunitária!")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Para fazer o pedido da ligação de água é preciso ser proprietário do\n      imóvel, cônjuge ou parente em primeiro grau que comprove vínculo com o\n      proprietário.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Terceiros podem fazer o pedido, desde que autorizados formalmente pelo\n      proprietário com procuração ou documento de autorização.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Conforme preço fixado na Resolução ARES-PCJ n.º 328/2019 deve ser recolhida\n      uma taxa de R$ 426,48 pelo serviço de ligação de água e esgoto.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Conforme a Resolução ARES-PCJ nº 336/2020 o medidor deve ser instalado em\n      caixa padrão com acesso externo aos leituristas e encanadores.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: A caixa padrão deve ser instalada pelo proprietário antes do pedido de\n      ligação e deve haver identificação com número do imóvel, lote e quadra na\n      fachada. Não pode haver obstáculos que impeçam a execução do serviço no\n      passeio ou o acesso à caixa padrão.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Caso o serviço não possa ser executado por qualquer um dos motivos\n      mencionados será cobrada uma taxa extra de R$ 78,57 a ser recolhida à vista\n      em razão da visita improdutiva.")
					u.aguarde(tempo)
					escreva("\n\n\tDocumentos:")
					escreva("\n\tA) Contrato de Compra e Venda")
					escreva("\n\tB) Carnê do IPTU")
					escreva("\n\tC) Autorização expedida pela Prefeitura")
					escreva("\n\tD) Carteira de Identidade e CPF ou CNH do proprietário")
					escreva("\n\tE) Se o requerente for cônjuge deve apresentar seus documentos pessoais e\n\t   Certidão de Casamento ou Contrato de União Estável")
					escreva("\n\tF) Se o requerente for filho, pai, mãe ou irmão deve apresentar seus\n\t   documentos pessoais")
					escreva("\n\tG) Se o requerente for um terceiro deve apresentar procuração ou documento\n\t   de autorização com firma reconhecida")
					escreva("\n\tH) Se o titular for uma pessoa jurídica o requerente deve apresentar o\n\t   procuração ou autorização com firma reconhecida, Contrato Social e CNPJ")
					u.aguarde(tempo)
					escreva("\n\n\tMateriais")
					escreva("\n\tA) 02 registros de bloqueio PVC 3/4 polegadas")							
					escreva("\n\tB) 01 registro de gaveta com volante de bronze 3/4 polegada")							
					escreva("\n\tC) 03 cotovelos de bronze em 90° 3/4 de polegada")							
					escreva("\n\tD) 03 niples de bronze 3/4 de polegada")
					escreva("\n\tE) 02 porcas com tubete PVC e anel de borracha 3/4 polegada")
					escreva("\n\tF) 01 fita veda rosca de 50 metros")	
					u.aguarde(tempo)
					escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
					escapar_ligaragua()
					pare
				}
			}
									
		}	

	//menu de escape de ligação de água
	funcao escapar_ligaragua()
	{
		caracter navegacao = '*'
		
			escreva("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ")
			leia(navegacao)
			
			escolha(navegacao) {

				caso 'p':{
					 inicio()
					 pare
					}

				caso 'v':{
					 ligar_agua()
					 pare
					}

				caso 'x':{
					 sair()
					 pare
					}

				caso contrario:{
					ligar_agua()
					}
				
				}
		}
	
	//orientação para manutenção de vazamentos de água e desobstrução de esgoto
	funcao consertar_vazamento()
	{
		inteiro tipoVazamento = 0
		
		limpa()
		exibir_titulo()
		escreva("\n\t<<< Manutenção de vazamentos de Água ou Desobstrução de Esgoto >>>\n\n")
		escreva("\nSAAE: Qual o serviço desejado?")
		escreva("\n\n| 1: Vazamento de Água no Cavalete\t\t| 3: Vazamento de Água na Rua")
		escreva("\n| 2: Vazamento de Água na Calçada\t\t| 4: Vazamento de Esgoto")
		escreva("\n\nOpção: ")
		leia(tipoVazamento)

		escolha(tipoVazamento){

				caso 1:{
						reparar_cavalete()
						pare
					}

				caso 2:{
						reparar_calcada()
						pare
					}

				caso 3:{
						reparar_rua()
						pare
					}

				caso 4:{
						reparar_esgoto()
						pare
					}

				caso contrario:{
						escapar_vazamentos()
						pare
					}
			}
	}

	//orientação para chamado de vazamento no cavalete
	funcao reparar_cavalete(){ 
			inteiro tempo = 1000
			
			u.aguarde(tempo)
			escreva("\n\nUsuário: Vazamento de água no cavalete!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se possível feche o registro para estancar o vazamento!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o\n      chamado:")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do\n      imóvel com rua e número.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se possível feche o registro para estancar o vazamento!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Os encanadores trabalham das 8:00 às 22:00, a previsão de execução desse\n      serviço é de 24 horas.")

			escapar_vazamentos()
		}

	//orientação para chamado de vazamento na calçada
	funcao reparar_calcada(){ 
			inteiro tempo = 1000
			
			u.aguarde(tempo)
			escreva("\n\nUsuário: Vazamento de água na calçada!")
			u.aguarde(tempo)			
			escreva("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o\n      chamado:")			
			u.aguarde(tempo)
			escreva("\n\nSAAE: A ligação é gratuita.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do\n      imóvel com rua e número.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Caso não more no local e esteja apenas de passagem, por favor identifique\n      a rua e o número mais próximo do local do vazamento.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Os encanadores trabalham das 8:00 às 22:00, a previsão de execução desse\n      serviço é de 24 horas.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Caso a equipe de encanadores tenha que abrir a calçada, após o conserto\n      outra equipe de pedreiros volta para fechar o piso em até 10 dias.")

			escapar_vazamentos()
		}

	//orientação para chamado de vazamento na rua
	funcao reparar_rua(){ 
			inteiro tempo = 1000
			
			u.aguarde(tempo)
			escreva("\n\nUsuário: Vazamento de água no meio da rua!")
			u.aguarde(tempo)			
			escreva("\n\nSAAE: Para solicitar o conserto do vazamento ligue 4602-6370 para abrir o\n      chamado:")			
			u.aguarde(tempo)
			escreva("\n\nSAAE: A ligação é gratuita.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do\n      imóvel com rua e número.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Caso não more no local e esteja apenas de passagem, por favor identifique\n      a rua e o número mais próximo do local do vazamento")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Os encanadores trabalham das 8:00 às 22:00, a previsão de execução desse\n      serviço é de 24 horas.m")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Caso a equipe de encanadores tenha que abrir o pavimento, após o conserto\n      outra equipe de pedreiros volta para fechar o piso em até 10 dias.")

			escapar_vazamentos()
		}

	//orientação para chamado de vazamento de esgoto
	funcao reparar_esgoto(){ 
			
			inteiro tempo, tipoEsgoto
			tempo = 1000
			tipoEsgoto = 0
			
			u.aguarde(tempo)
			escreva("\n\nUsuário: Vazamento de esgoto!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: A reclamação é de boca de lobo ou grelha de água de chuva entupida ou é\n      retorno de esgoto em PV (tampa de ferro) na rua ou dentro de casa?")
			escreva("\n\nSAAE: Escolha 1: BOCA DE LOBO entupida ou 2: Retorno do esgoto no PV ou em CASA")
			escreva("\n\nOpção: ")
			leia(tipoEsgoto)
			
			se(tipoEsgoto == 1){
				u.aguarde(tempo)
				escreva("\n\nUsuário: Boca de lobo ou grelha que recolhe água de chuva.")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Se o problema for de boca de lobo ou grelha na rua ou sarjeta que recolhe\n      água de chuva é preciso acionar a Secretaria Municipal de Obras e Serviços\n Públicos.")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Telefones da Secretaria: 4028-1826 ou 4029-8556")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Também pode ser acionada a Ouvidoria da Prefeitura pelos telefones:")
				u.aguarde(tempo)
				escreva("\n\nSAAE: 156 ou 4602-8510 ou 4602-8514")
				}
						
			senao se(tipoEsgoto == 2){
				u.aguarde(tempo)
				escreva("\n\nUsuário: Tampa de PV ou casa com retorno de esgoto.")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Para abrir um chamado de desobstrução de esgoto ligue: 4602-6370.")				
				u.aguarde(tempo)
				escreva("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do\n      imóvel com rua e número.")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Caso não more no local e esteja apenas de passagem, por favor identifique\n      a rua e o número mis próximo do local do vazamento")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Os encanadores trabalham das 8:00 às 22:00, a previsão de execução desse\n      serviço é de 24 horas.")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Caso a equipe de encanadores tenha que abrir a rua ou calçada, após a\n      desobstrução outra equipe de pedreiros volta para fechar o piso em até 10 dias.")
				}

			senao{					
				escapar_vazamentos()
				}
									
			escapar_vazamentos()
		}

	//menu de escape de vazamentos
	funcao escapar_vazamentos()
	{
		caracter navegacao = '*'
		
			escreva("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ")
			leia(navegacao)
			
			escolha(navegacao) {

				caso 'p':{
					 inicio()
					 pare
					}

				caso 'v':{
					 consertar_vazamento()
					 pare
					}

				caso 'x':{
					 sair()
					 pare
					}

				caso contrario:{
					consertar_vazamento()
					}
				
				}
	}
	
	//orientacao para pedido de corte a pedido e religação
	funcao cortar_religar()
	{
		inteiro corteReligacao, tempo
		corteReligacao = 0
		tempo = 1000
		
		limpa()
		exibir_titulo()
		escreva("\n\n\t\t    <<< Corte a Pedido e Religação >>>")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Você deseja o serviço de CORTE ou RELIGAÇÃO?")
		u.aguarde(tempo)
		escreva("\n\nSAAE: 1: Para CORTE ou 2: RELIGAÇÃO")
		escreva("\nOpção: ")
		leia(corteReligacao)
		
		se(corteReligacao == 1){
			u.aguarde(tempo)
			escreva("\n\nUsuário: Corte de ligação de água.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Para solicitar o corte o imóvel deve estar desocupado, sem moradores e não\n      pode haver conta ou parcela vencidas.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: O pedido de ser feito pelo proprietário com apresentação de RG e CPF ou CNH\n      e a última conta paga.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se o requerente for parente em primeiro grau, pode fazer o pedido\n      apresentando o RG, CPF ou CNH do titular e os seus também.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se o requerente for um terceiro deve apresentar seu RG e CPF ou CNH e\n      autorização preenchida e assinada pelo titular com firma reconhecida.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Para fazer o corte não há cobrança de taxa de serviço; quando for pedida a\n      religação será recolhida a taxa de R$ 78,57.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
			
			escapar_corte()
			}

		senao se(corteReligacao == 2){
			u.aguarde(tempo)
			escreva("\n\nUsuário: Religação de água.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: O pedido deve ser feito pelo proprietário com apresentação de RG e CPF ou CNH.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se o requerente for parente em primeiro grau, pode fazer o pedido\n      apresentando o RG, CPF ou CNH do titular e os seus também.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se o requerente for um terceiro deve apresentar seu RG e CPF ou CNH e\n      autorização preenchida e assinada pelo titular com firma reconhecida.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Para fazer o religação e cobrada a taxa de serviço de R$ 78,57 e apresentar o\n      comprovante de pagamento.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")

			escapar_corte()
			}
			
		senao{
				escapar_corte()
			}
	}

	//menu de escape de corte e religação
	funcao escapar_corte()
	{
		caracter navegacao = '*'
		
			escreva("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ")
			leia(navegacao)
			
			escolha(navegacao) {

				caso 'p':{
					 inicio()
					 pare
					}

				caso 'v':{
					 cortar_religar()
					 pare
					}

				caso 'x':{
					 sair()
					 pare
					}

				caso contrario:{
					cortar_religar()
					}
				
				}
	}

	//orientacao para venda de caminhão-pipa
	funcao entregar_pipa()
	{
		inteiro tipoEntrega, tempo
		tipoEntrega = 0
		tempo = 1000
		
		limpa()
		exibir_titulo()
		escreva("\n\n\t\t\t    <<< Caminhã-Pipa >>>")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Qual a situação?")
		u.aguarde(tempo)
		escreva("\n\nSAAE: 1: Compra de Caminhão-Pipa para caixa d'água ou piscina\n      2: Abastecimento de região sem água há mais de 12 horas")
		escreva("\n\nOpção: ")
		leia(tipoEntrega)

		se(tipoEntrega == 1){
			u.aguarde(tempo)
			escreva("\n\nUsuário: Compra de CAMINHÃO-PIPA para CAIXA D'ÁGUA ou PISCINA.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: A venda de água com caminhão-pipa está condicionada a disponibilidade de\n      água para o abastecimento do sistema público de abastecimento e a capacidade\n      de entrega.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: A venda é fechada em 10 m³ (metros cúbicos) o equivalente a 10 mil litros,\n      que é  capacidade de transporte do caminhão. Mesmo que a entrega seja\n      fracionada o custo será o mesmo.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Um caminhão com 10 m³ custa R$ 202,02. Preço fixado pela Resolução ARES-PCJ\n      n.º 328/2019.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Os servidores do SAAE são impedidos a trabalhar em locais altos, portanto\n      para encher reservatórios elevados é preciso que alguém no local leve a\n      mangueira até o ponto de descarga.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: O solicitante deve apresentar RG, CPF, dar informações como endereço, ponto\n      de referência, data e turno da entrega, telefone de contato, distância entre\n      o local de parda do caminhão e o ponto de descarga, se há necessidade de\n      mangueira extensora.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: A ordem de serviço é liberada após a apresentação do comprovante de pagamento\n      da taxa de serviço.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")
			escapar_pipa()
			}

		senao se(tipoEntrega == 2){
			u.aguarde(tempo)
			escreva("\n\nUsuário: FALTA DE ÁGUA.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: A Resolução ARES-PCJ n.º 336/2020 prevê que o SAAE faça a distribuição de\n      água com caminhão-pipa quando houver falta de água por 12 horas consecutivas\n      em decorrência de manutenção ou problemas na rede.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Os servidores do SAAE são impedidos a trabalhar em locais altos, portanto\n      para encher reservatórios elevados é preciso que alguém no local leve a\n      mangueira até o ponto de descarga.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Os servidores do SAAE poderão abastecer o imóvel apenas com caixas d'água,\n      latões, baldes e outros meios de reservação que estiverem no nível da rua.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Esse serviço pode ser solicitado de segunda à sexta-feira das 8h às 17h pelo\n      WhatsApp (11) 9-9984-3028 ou a qualquer dia e horário através de atendimento\n      presencial no SAAE previamente agendado.\n")

			escapar_pipa()
			}
			
		senao{
				escapar_pipa()
			}
	}

	//menu de escape de caminhão-pipa
	funcao escapar_pipa()
	{
		caracter navegacao = '*'
		
			escreva("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ")
			leia(navegacao)
			
			escolha(navegacao) {

				caso 'p':{
					 inicio()
					 pare
					}

				caso 'v':{
					 entregar_pipa()
					 pare
					}

				caso 'x':{
					 sair()
					 pare
					}

				caso contrario:{
					entregar_pipa()
					}
				
				}
	}
	
	//orientação para procedimentos de conferência do valor da fatura
	funcao reclamar_valor()
	{
		inteiro tempo
		caracter reclamacao = '*'		
		tempo = 1000		
		
		limpa()
		exibir_titulo()
		escreva("\n\n\t\t   <<< Reclamação do Valor da Fatura >>>\n\n")
		u.aguarde(tempo)
		escreva("\nSAAE: Recomenda-se iniciar com a verificação de um eventual erro de leitura,\n      depois o teste de vazamento e se houver suspeita de mau fucionamento do\n      hidrômetro o processo de aferição.")
		escreva("\n\n|E: Erro de Leitura\t\t\t\t        |A: Aferição de Hidrômetro\n|T: Teste de Vazamento\t\t\t\t\t|P: Menu Principal")
		escreva("\n\nOpção: ")
		leia(reclamacao)
		u.aguarde(tempo)						
		
		escolha(reclamacao){
		
		caso 'e': {
			erro_leitura()
			escapar_valor()
			pare
			}

		caso 't': {
			teste_vazamento()
			escapar_valor()
			pare
			}

		caso 'a': {
			afericao_hd()
			escapar_valor()
			pare
			}

		caso contrario: {
			inicio()
			pare
			}
		}
		
	}

	//escapar da reclamação de valor de conta
	funcao escapar_valor()
	{
		caracter navegacao = '*'
		
			escreva("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ")
			leia(navegacao)
			
			escolha(navegacao) {

				caso 'p':{
					 inicio()
					 pare
					}

				caso 'v':{
					 limpa()
					 exibir_titulo()
					 erro_leitura()
					 pare
					}

				caso 'x':{
					 sair()
					 pare
					}

				caso contrario:{
					limpa()
					exibir_titulo()
					erro_leitura()
					}
				
				}
	}

	//orientação para verificar erro de leitura
	funcao erro_leitura(){

		inteiro tempo, verLeitura, leiMedidor, leiFatura, consumo, moradores
		verLeitura = 0
		leiMedidor = 0
		leiFatura = 0
		consumo = 0
		moradores = 1
		tempo = 1000
				
		u.aguarde(tempo)
		escreva("\n\nUsuário: Verificar ERRO DE LEITURA!")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O primeiro passo é verificar a possibilidade de um erro de leitura.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Você está no local e deseja verificar a leitura agora?")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Digite 1: SIM ou 2: Não")
		u.aguarde(tempo)
		escreva("\n\nOpção: ")
		leia(verLeitura)

		escolha(verLeitura){
			
			caso 1:{
				u.aguarde(tempo)
				escreva("\nUsuário: Desejo conferir a leitura agora!")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Por favor informe a leitura lançada em sua fatura: ")			
				u.aguarde(tempo)
				escreva("\n\nUsuário: A leitura da fatura é: ")			
				leia(leiFatura)
				u.aguarde(tempo)
				escreva("\nSAAE: Por favor vá até seu hidrômetro anote e informa somente os números pretos: ")			
				u.aguarde(tempo)
				escreva("\n\nUsuário: A leitura do hidrômetro é: ")			
				leia(leiMedidor)

				se(leiFatura > leiMedidor){
					u.aguarde(tempo)
					escreva("\nSAAE: A falta de acesso ou as condições de leitura do hidrômetro podem ter levado\n      ao erro de leitura ou lançamento pela média de consumo.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Fotografe a leitura na cúpula do hidrômetro e apresente na Conasa, na rua\n      Nove de Julho 849 - Centro, para repasse da leitura e a emissão de uma nova\n      fatura.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Caso o seu hidrômetro esteja com a cúpula embaçada, chame o SAAE pelo\n      WhatsApp (11)99984-3028 e solicite o serviço de troca de hidrômetro.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Se o seu cavalete está instalado na parte de dentro do quintal, impedindo o\n      acesso do leiturista/encanador, chame o SAAE pelo WhatsApp (11)99984-3028 e\n      solicite informações sobre a mudança de cavalete.")
					}

				senao se(leiFatura == leiMedidor){
					u.aguarde(tempo)
					escreva("\nSAAE: A leitura registrada na fatura é a mesma do medidor.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Não há erro de leitura, recomenda-se fazer o teste de vazamento.")
					}
		
				senao{
					u.aguarde(tempo)
					escreva("\nSAAE: As leituras estão sequenciais, a leitura do hidrômetro está maior que a\n      leitura apontada pelo leiturista.")
					u.aguarde(tempo)
					escreva("\n\nSAAE: Está tudo certo quanto a leitura.")	
					u.aguarde(tempo)
					escreva("\n\nSAAE: Recomenda-se a realização do teste de vazamento.")
					}
				pare
				}

			caso 2:{
				u.aguarde(tempo)
				escreva("\nUsuário: Não estou no local da ligação para fazer o teste agora.")
				u.aguarde(tempo)
				escreva("\n\nSAAE: Para a orientação adequada pedimos que faça essa verificação asim que\n      possível.")
				pare
				}
			caso contrario: {
				limpa()
				exibir_titulo()
				reclamar_valor()
				pare
				}	
			}
			
	}

	//orientação para teste de vazamento
	funcao teste_vazamento()
	{
		inteiro tempo = 1000
		
		u.aguarde(tempo)
		escreva("\n\nUsuário: Fazer TESTE DE VAZAMENTO!")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Para realizar o teste e vazamento será necessário o período mínimo de\n      quatro horas sem usar água.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Recomenda-se que o teste seja feito no período noturno enquanto todos dormem.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Antes de realizar o teste é preciso verificar se a caixa d'água está cheia e\n      as descargas dos banheiros também. Todas as torneiras e chuveiros devem estar\n      fechados também.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O registro do cavalete e outros registros que existam na rede interna devem\n      estar todos abertos.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Se o registro do cavalete estiver fechado o hidrômetro deve permanecer parado,\n      pois não deve permitir a passagem do fluxo de água. Se houver movimento no\n      medidor com o registro do cavalete fechado, o registro pode estar espanado e\n      será necessário pedir o serviço de troca de registro pelo WhatsApp\n      (11) 9-9984-3028.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Observadas as orientações, preferencialmente à noite, quando todos forem\n      dormir, anotar todos os números pretos e vermelhos do hidrômetro e também a\n      data e horário da leitura.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Ninguém pode ligar torneira, chuveiro ou dar descarga pelo período mínimo de\n      quatro horas.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Depois do intervalo necessário, anotar novamente todos os números pretos e\n      vermelhos do hidrômetro, lembrando de indicar a data e hora da marcação final.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Se houver diferença entre as leituras é um forte indício de vazamento interno.\n      Recomenda-se chamar um encanador caça-vazamentos para encontrá-lo e fazer o\n      reparo do vazamento.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: É preciso registrar fotos ou vídeo das etapas antes, durante ou depois o reparo.\n      As fotos devem ser impressas coloridas ou o vídeo gravado em CD.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Se o reparo for realizado por profissional (pedreiro/encanador), deverá ser\n      feito um laudo do conserto informando onde estava o vazamento, o material usado\n      no reparo e a data de execução do serviço. O laudo deverá ser assinado e ter sua\n      assinatura reconhecida em cartório.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O reconhecimento da assinatura no cartório pode ser dispensado, se for apresentado\n      RG ou CNH do profissional original ou cópia autenticada com assinatura semelhante\n      a do documento.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Se for o proprietário ou morador que fizer o reparo, deve fazer o laudo da mesma\n      forma e assinatura pode ser reconhecida por semelhança no atendimento presencial.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Para abertura do processo administrativo de revisao de conta é necessário juntar:")
		u.aguarde(tempo)
		escreva("\n\n\t1. RG ou CNH do requerente")
		escreva("\n\t2. As contas a serem reclamadas emitidas no máximo há 60 dias da data de\n\t    abertura do processo")
		escreva("\n\t3. O formulário do teste de vazamento com anotações de data, horário e leituras")
		escreva("\n\t4. Fotos impressas coloridas ou vídeo em CD do vazameto e do conserto")
		escreva("\n\t5. Laudo do conserto")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Juntado os documentos, agendar o atendimento presencial para abertura do processo\n      administrativo para revisão de conta pelo telefone (11) 4602-6370 ou pelo WhatsApp\n      (11) 99735-1691.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Caso não haja vazamento o usuário poderá optar pelo parcelamento de conta ou se\n      insistir em que há algo errado e quer uma explicação do SAAE poderá agendar\n      um atendimento presencial para abertura de processo administrativo, desde que junte\n      os seguintes documentos:")
		u.aguarde(tempo)
		escreva("\n\n\t1. RG ou CNH do requerente")
		escreva("\n\t2. As contas a serem reclamadas emitidas no máximo há 60 dias da data de abertura\n\t   do processo")
		escreva("\n\t3. O formulário do teste de vazamento com anotações de data, horário e leituras")
		escreva("\n\t4. Requerimento relatando sua hipótese do motivo do aumento do consumo apontado nas\n         faturas reclamadas")
	}

	//orientação para aferição de hidrômetro
	funcao afericao_hd()
	{
		inteiro tempo = 1000
		
		u.aguarde(tempo)
		escreva("\n\nUsuário: Fazer AFERIÇÃO DE HIDRÔMETRO!")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Antes de solicitar o serviço de aferição o contribuinte deve realizar os\n      procedimentos de verificação de ERRO DE LEITURA e o de TESTE DE VAZAMENTO.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Descartada a possibilidade de ERRO DE LEITURA ou VAZAMENTO OCULTO o\n      contribuinte deve juntar os documentos para abertura de processo de aferição\n      de hidrômetro:")
		u.aguarde(tempo)
		escreva("\n\n\t1. RG ou CNH do requerente")
		escreva("\n\t2. As contas a serem reclamadas emitidas no máximo há 60 dias da data de abertura\n\t   do processo")
		escreva("\n\t3. O formulário do teste de vazamento com anotações de data, horário e leituras")
		escreva("\n\t4. Requerimento relatando sua hipótese do motivo do aumento do consumo apontado\n           nas faturas reclamadas e o pedido de aferição de hidrômetro")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Uma equipe do SAAE vai até o imóvel, retira o hidrômetro suspeito de mau\n      funcionamento e instala um novo.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O hidrômetro retirado é enviado para um laboratório externo para aferição.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: A aferição pode ter rês resultados diferentes:\n\n     a) Marcando a mais\n     b) Marcando a menos\n     c) Normal")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Se o hidrômetro estiver marcando a mais, o contribuinte não terá nenhum custo\n      com a troca e com a aferição do hidrômetro; também terá direito à revisão de\n      contas.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Se o hidrômetro estiver marcando a menos, o contribuinte não terá nenhum custo\n      com a troca e com a aferição do hidrômetro; mas não terá direito à revisão de\n      contas.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Se o hidrômetro estiver marcando normalmente, o contribuinte pagará R$ 168,35\n      pela troca do hidrômetro e R$ 123,00 pela aferição em laboratório e não terá\n      direito à revisão de contas.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Caso o hidrômetro retirado tenha mais de cinco anos de fabricação não será\n      cobrado. O hidrômetro não será recolocado após o procedimento de aferição, a\n      ligação permanecerá como novo medidor.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Em caso de desistência do pedido de aferição do hidrômetro por parte do\n      requerente, se o medidor já estiver com o laboratório os custos de troca e\n      aferição serão cobrados integralmente do requerente.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O processo de aferição deve ser aberto via atendimento presencial previamente\n      agendado pelo telefone (11) 4602-6370 ou pelo WhatsApp (11) 997536-1691.")
	}	

	//orientação para parcelamento de faturas em atraso e multas 
	funcao parcelar_conta()
	{
		inteiro tempo = 1000
		
		limpa()
		exibir_titulo()
		escreva("\n\n\t\t<<< Negociação de Faturas em Atraso ou Multas >>>")
		
		u.aguarde(tempo)
		escreva("\n\nSAAE: Contas com menos de noventa dias não podem ser parceladas, excepcionalmente\n      se a conta for objeto de um processo de revisão de conta.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Se já existir um parcelamento aberto, ele deverá ser quitado antes de realizar\n      um novo parcelamento. Reparcelamentos não são permitidos.")
		escreva("\n\nSAAE: O parcelamento deverá ser solicitado pelo titular da conta ou cônjuge com\n      apresentação de Certidão de Casamento com regime e comunhão parcial ou total\n      de bens ou ainda com Contrato de União Estável.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O inquilino também pode solicitar parcelamento desde que faça seu cadastro\n      como usuário apresentando o Contrato de Locação dentro do período de vigência\n      e com assinaturas reconhecidas.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Outros casos em que terceiros solicitem o parcelamento devem apresentar\n      procuração ou autorização do proprietário com firma reconhecida.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O parcelamento só pode ser feito por meio de atendimento presencial\n      previamente agendado pelo telefone (11) 4602-6370 ou por meio do WhatsApp\n      (11) 99735-1691.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O parcelamento pode ser feito no máximo em 30 parcelas, desde que respeitada\n      a parcela mínima de R$ 50,00 conforme a Resolução ARES-PCJ n. 336/2020.")
		escapar_parcelamento()
	}

	//menu de escape de parcela conta
	funcao escapar_parcelamento()
	{
		caracter navegacao = '*'
		
			escreva("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ")
			leia(navegacao)
			
			escolha(navegacao) {

				caso 'p':{
					 inicio()
					 pare
					}

				caso 'v':{
					 parcelar_conta()
					 pare
					}

				caso 'x':{
					 sair()
					 pare
					}

				caso contrario:{
					escapar_gerarfatura()
					}
				
				}
		}

	//orientacao para troca de titular de conta
	funcao trocar_titular()
	{
		inteiro tempo = 1000
		
		limpa()
		exibir_titulo()
		escreva("\n\n\t\t     <<< Troca de Titular da Conta >>>")
		u.aguarde(tempo)
		escreva("\n\nSAAE: A troca de titular de conta pode ocorrer pelo motivo de compra/venda do\n      imóvel, herança ou locação.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: O serviço de alteração de titularidade pode ser solicitado pelo proprietário,\n      cônjuge ou inquilino.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Para realizar a alteração cadastral é preciso apresentar um documento de\n      posse do imóvel, pode ser Matrícula, Escritura Pública, Contrato Particular\n      de Compra e Venda com firmas reconhecidas.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Caso o pedido seja feito pelo proprietário, basta juntar cópias do RG e CPF\n      ou CNH a um dos documentos de posse citados.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Cônjuges podem requerer a alteração de titularidade juntando cópia do RG e\n      CPF ou CNH e Certidão de Casamento ou Contrato de União Estável a um dos\n      documentos de posse citados. Em caso de imóvel objeto de partilha de bens de\n      divórcio é preciso juntar o Termo Formal de Partilha homologado judicialmente.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Em caso de herança parentes em primeiro grau poderão requerer a alteração\n      juntando cópias do RG e CPF ou CNH a um dos documentos de posse citado,\n      também será necessário juntar a certidão de óbito e o inventário quando houver.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Inquilinos ou proprietários podem requerer a alteração juntando cópias do RG e\n      CPF ou CNH e o Contrato Particular de Locação dentro da vigência e com firmas\n      reconhecidas.")
		u.aguarde(tempo)
		escreva("\n\nSAAE: Qualquer outra pessoa com procuração do usuário registrada em cartório,\n      juntando RG e CPF ou CNH a um dos documentos de posse citados pode requerer\n      a alteração de titularidade.")
		escapar_titular()
	}

	//menu de escape de troca de titular de conta
	funcao escapar_titular()
	{
		caracter navegacao = '*'
		
			escreva("\n\n[P: Menu Principal\t V: Voltar\t X: Sair] ")
			leia(navegacao)
			
			escolha(navegacao) {

				caso 'p':{
					 inicio()
					 pare
					}

				caso 'v':{
					 trocar_titular()
					 pare
					}

				caso 'x':{
					 sair()
					 pare
					}

				caso contrario:{
					escapar_gerarfatura()
					}
				
				}
		}

	//orientacao para troca de registro
	funcao trocar_registro()
	{
		inteiro tempo = 1000

		limpa()
		exibir_titulo()
		escreva("\n\n\t\t\t  <<< Troca de Registro >>>")
	}

	//orientacao de outros servios do SAAE
	funcao solicitar_outros()
	{
		escreva("\n\t\tOutros serviços do SAAE\n\n")
	}

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 61483; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */