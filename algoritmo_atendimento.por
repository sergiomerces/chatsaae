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
		escreva("\n| 1: Segunda Via da Fatura \t\t\t| 2: Reclamação Valor da Fatura")
		escreva("\n| 3: Ligação de Água e Esgoto \t\t\t| 4: Parcelamento Fatura/Multa")
		escreva("\n| 5: Vazamentos \t\t\t\t| 6: Alteração de Titular")
		escreva("\n| 7: Corte a Pedido/Religação \t\t\t| 8: Troca de Registro")
		escreva("\n| 9: Caminhão-Pipa \t\t\t\t| 0: Outros Serviços")
		escreva("\n\nOpçao: ")
		leia(opcao)

		escolha(opcao)
		{
			caso '1':{
				gerar_fatura()
				pare
				}

			caso '2':{
				reclamar_valor()
				pare
				}

			caso '3':{
				ligar_agua()
				pare
				}

			caso '4':{
				parcelar_conta()
				pare
				}

			caso '5':{
				consertar_vazamento()
				pare
				}

			caso '6':{
				trocar_titular()
				pare
				}

			caso '7':{
				cortar_religar()
				pare
				}

			caso '8':{
				trocar_registro()
				pare
				}

			caso '9':{
				vender_pipa()
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
		escreva("\nSAAE: A conta que você deseja é foi emitida antes de 1º/01/2020?")
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
		
	//orientação para procedimentos de conferência do valor da fatura
	funcao reclamar_valor()
	{
		escreva("\n\t\tReclamaão do Valor da Fatura\n\n")
	}

	//orientação para pedido de ligação de água e esgoto
	funcao ligar_agua()
	{
		escreva("\n\t\tPedido de Ligação de Água e Esgoto\n\n")
	}

	//orientação para parcelamento de faturas em atraso e multas
	funcao parcelar_conta()
	{
		escreva("\n\t\tNegociação de Faturas em Atraso ou Multas\n\n")
	}

	//orientação para manutenção de vazamentos de água e desobstrução de esgoto
	funcao consertar_vazamento()
	{
		escreva("\n\t\tManutenção de vazamentos de Água ou Desobstrução de Esgoto\n\n")
	}

	//orientacao para troca de titular de conta
	funcao trocar_titular()
	{
		escreva("\n\t\tTroca de Titular da Conta\n\n")
	}

	//orientacao para pedido de corte a pedido e religação
	funcao cortar_religar()
	{
		escreva("\n\t\tCorte a Pedido e Religação\n\n")
	}

	//orientacao para troca de registro
	funcao trocar_registro()
	{
		escreva("\n\t\tTroca de Registro\n\n")
	}

	//orientacao para venda de caminhão-pipa
	funcao vender_pipa()
	{
		escreva("\n\t\tVenda de Caminhão-Pipa\n\n")
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
 * @POSICAO-CURSOR = 3671; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */