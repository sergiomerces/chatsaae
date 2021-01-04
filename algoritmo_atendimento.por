/* Algoritmo: Chat de auto Atendimento do SAAE Salto
Escrito por: Sérgio da Costa Mercês - sergio.merces@gmail.com
Github: https://github.com/sergiomerces/chatsaae
Salto - SP (BRA), 3 de janeiro de 2021*/

programa
{
	
	funcao inicio()
	{
		Titulo()
	}
	
	//geração da caixa do título principal
	funcao Titulo()
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

		MenuPrincipal()
	}

	//geração do menu principal
	funcao MenuPrincipal()
	{
		caracter opcao = '0'
		
		escreva("\n\n  Escolha o número correspondente ao serviço desejado:\n")
		escreva("\n| 1: Segunda Via da Fatura \t\t\t| 2: Reclamação Valor da Fatura \n| 3: Ligação de Água e Esgoto \t\t\t| 4: Parcelamento \n| 5: Vazamentos \t\t\t\t| 6: Serviços")
		escreva("\n\nOpçao: ")
		leia(opcao)

		escolha(opcao)
		{
			caso '1':{
				SegundaVia()
				pare
				}

			caso '2':{
				ReclamacaoFatura()
				pare
				}

			caso '3':{
				LigacaoAgua()
				pare
				}

			caso '4':{
				Parcelamento()
				pare
				}

			caso '5':{
				Vazamentos()
				pare
				}

			caso '6':{
				Servicos()
				pare
				}

			caso contrario:{
				escreva("Escolha um número associado a uma opção válida")
				limpa()
				inicio()
				}
			}
	}

	//orietação para eissão da segunda via da fatura
	funcao SegundaVia()
	{
		escreva("\n\t\tSegunda Via da Fatura\n\n")
	}

	//orientação para procedimentos de conferência do valor da fatura
	funcao ReclamacaoFatura()
	{
		escreva("\n\t\tReclamaão do Valor da Fatura\n\n")
	}

	//orientação para pedido de ligação de água e esgoto
	funcao LigacaoAgua()
	{
		escreva("\n\t\tPedido de Ligação de Água e Esgoto\n\n")
	}

	//orientação para parcelamento de faturas em atraso e multas
	funcao Parcelamento()
	{
		escreva("\n\t\tNegociação de Faturas em Atraso ou Multas\n\n")
	}

	//orientação para manutenção de vazamentos de água e desobstrução de esgoto
	funcao Vazamentos()
	{
		escreva("\n\t\tManutenção de vazamentos de Água ou Desobstrução de Esgoto\n\n")
	}

	//orientacao de outros servios do SAAE
	funcao Servicos()
	{
		escreva("\n\t\tOutros serviços do SAAE\n\n")
	}

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 204; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */