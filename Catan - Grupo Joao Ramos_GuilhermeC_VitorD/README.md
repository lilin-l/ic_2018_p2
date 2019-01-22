# Trabalho 2 de INTRODUÇÃO A COMPUTAÇÃO - Jogo Settlers of Catan

## Trabalho feito por:
	* João Ramos a21807286
	* Guilherme Carvalho a21803633
	* Vitor Daniel a21804362

## Descrição da resolução:

	* Print estático do mapa para ser usado como guia aos jogadores
	* Diversas funções colocadas num ficheiro header para gerir os recursos e lançamento de dados
	* Pergunta onde colocar a primeira aldeia com uma função nomeada "input" que ultiliza um scanf
	* Uma série de ifs que conferem o numero dos dados do jogador e lhe dá recursos dependendo da posição da aldeia do jogador
	* Recursos do jogadores são guardados em variaveis
	* Segue um fluxograma em PDF que serviou para orientar a criação do trabalho por mais que nem todas as funções lá presentes tenham sido implementadas
	* A cada nova aldeia um ponto é acidionado ao jogador, com 4 pontos o jogo termina.

## Manual de ultilizador:
	* Para jogar, seleciona uma casa para montar sua aldeia, o N, S, E, W são North, South, East e West. L, I, B, G, D são:
Lumber, Iron, Brick, Grain e Desert
	* Ao conseguir um Lumber podes contruir uma nova aldeia, a cada aleia que construas ganhas um ponto, com quatro pontos, vences o jogo
	* (obs : escolha então uma casa com Lumber no inicio) (Não foi possivél implementar todas as funçoes do jogo, tornando assim alguns dos recursos basicamente inúteis.

## Conclusões e Materia Aprendida:
	* No inicio tentei ultilizar um array para gerenciar o mapa, mas acabou por ser mesmo só uma função com prints, para guardar informações do jogador, uma lista com os paremtros do jogador (recursos) era a ideia inicial mas apos diversos erros a solução foi ultilizar uma variável.
## Refernecias: 
	* Pesquisas no google e consulta a forums como stackoverflow
