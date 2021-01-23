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
				vender_pipa()
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
			escreva("\n\nSAAE: Também é possível pedir a conta por e-mail pelo 0800-77-96300 a qualquer dia da\n      semana e horário com ligação gratuita.")
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
							escapar_ligaragua()
						}

					senao se(apto == 2){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Solar das Araras!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Solar das Araras localizado à rua Japão 05 - Jd. das\n      Nações não é necessária nenhuma peça para ligação.")
							u.aguarde(tempo)
							escapar_ligaragua()
						}

					senao se(apto == 3){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Brasil!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Brasil localizado à rua Estados Unidos 38 - Guaraú não é\n      necessária nenhuma peça para ligação.")
							u.aguarde(tempo)
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
							escapar_ligaragua()
						}

					senao se(apto == 5){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Green Park!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Green Park localizado à rua Remígio Dalla Vechia 180 - Jd.\n      Nair Maria não é necessária nenhuma peça para ligação.")
							u.aguarde(tempo)
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
							escapar_ligaragua()
						}

					senao se(apto == 8){
							u.aguarde(tempo)
							escreva("\n\nUsuário: Residencial Solar dos Pássaros!")
							u.aguarde(tempo)
							escreva("\n\nSAAE: No Residencial Solar dos Pássaros localizado à Av. da Nações Unidas 664\n      não é necessária nenhuma peça para ligação.")
							u.aguarde(tempo)
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
					
						pare
					}

				caso 4:{
					
						pare
					}

				caso contrario:{
					
						pare
					}
			}
	}

	funcao reparar_cavalete(){ 
			inteiro tempo = 1000
			
			u.aguarde(tempo)
			escreva("\n\nUsuário: Vazamento de água no cavalete!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se possível feche o registro para estancar o vazamento!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Para solicitar o conserto do vazamento ligue na Central de Atendimento 24h\n      para abrir o chamado:")
			u.aguarde(tempo)
			escreva("\n\nSAAE: 0800-77-96300")
			u.aguarde(tempo)
			escreva("\n\nSAAE: A ligação é gratuita.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do\n      imóvel com rua e número.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Se possível feche o registro para estancar o vazamento!")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Os encanadores trabalham das 8:00 às 22:00, a previsão de execução desse\n      serviço é de 24 horas.m")

			escapar_vazamentos()
		}

	funcao reparar_calcada(){ 
			inteiro tempo = 1000
			
			u.aguarde(tempo)
			escreva("\n\nUsuário: Vazamento de água na calçada!")
			u.aguarde(tempo)			
			escreva("\n\nSAAE: Para solicitar o conserto do vazamento ligue na Central de Atendimento 24h\n      para abrir o chamado:")
			u.aguarde(tempo)
			escreva("\n\nSAAE: 0800-77-96300")
			u.aguarde(tempo)
			escreva("\n\nSAAE: A ligação é gratuita.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Tenha sempre uma conta em mãos e identifique seu CDC ou o endereço do\n      imóvel com rua e número.")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Caso não more no local e esteja apenas de passagem, por favor identifique\n      a rua e o número mis próximo do local do vazamento")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Os encanadores trabalham das 8:00 às 22:00, a previsão de execução desse\n      serviço é de 24 horas.m")
			u.aguarde(tempo)
			escreva("\n\nSAAE: Caso a equipe de encanadores tenha que abrir a calçada, após o conserto\n      outra equipe de pedreiros volta para fechar o piso em até 10 dias.")

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
		escreva("\n\t\tCorte a Pedido e Religação\n\n")
	}

	//orientacao para venda de caminhão-pipa
	funcao vender_pipa()
	{
		escreva("\n\t\tVenda de Caminhão-Pipa\n\n")
	}
	
	//orientação para procedimentos de conferência do valor da fatura
	funcao reclamar_valor()
	{
		escreva("\n\t\tReclamaão do Valor da Fatura\n\n")
	}

	//orientação para parcelamento de faturas em atraso e multas
	funcao parcelar_conta()
	{
		escreva("\n\t\tNegociação de Faturas em Atraso ou Multas\n\n")
	}

	//orientacao para troca de titular de conta
	funcao trocar_titular()
	{
		escreva("\n\t\tTroca de Titular da Conta\n\n")
	}

	//orientacao para troca de registro
	funcao trocar_registro()
	{
		escreva("\n\t\tTroca de Registro\n\n")
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
 * @POSICAO-CURSOR = 30023; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */