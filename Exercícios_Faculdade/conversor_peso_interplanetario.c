#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

# Nome_do _programa: Conversor de Peso Interplanetário
#
# site: https://github.com/FabianoLandimDev/Exercícios_Faculdade
#
# Autor: Fabiano Landim <landimfabiano01@gmail.com>
#
# Manutenção: Fabiano Landim <landimfabiano01@gmail.com>
#
# ESCOPO:
# O Programa nada mais é que um conversor solicitado pr Professor para aplicação de conhecimento da linguagem C, em que se pede o valor do peso do usuário em kilogramas e solicita que o mesmo escolha um planeta para que ocorra o cálculo da pesagem do usuário segundo o planeta de escolha.
#
# Histórico:
#
# v1.0 2020-03-05, Fabiano Landim:
# - Versão Inicial do Programa.
#
# Licença: MIT.


int main(void)
{
    setlocale(LC_ALL, "Portuguese");
	int escolha;
	float peso_terra,peso;
	char resposta;
	
	printf("Olá, sou o seu assistente Virtual, Vamos começar?\n");
	printf("\n");
	printf("Digite 's' para sim ou 'n' para não:\n");
	scanf("%c",&resposta);
	
	if(resposta=='s'){
		printf("\nOk!!! Vamos Prossseguir\n");
		printf("Informe o seu peso em kg:\n");
		scanf("%f",&peso_terra);
		printf("\nPerfeito!!! Escolha um número referente ao planeta desejado para saber o peso que você teria nesse planeta:\n");
		printf("\n1>Mercúrio\n2>Vênus\n3>Terra\n4>Marte\n5>Júpter\n6>Saturno\n7>Urano\n8>Netuno\n9>Plutão.\n");
		scanf("%d",&escolha);
		switch(escolha){
			case 1:
				printf("Você escolheu  o planeta Mercúrio:");
				peso = peso_terra * 0.378;
				printf("\nSeu peso em Mercúrio equivale a %.1f Kg\n",peso);
				break;
			case 2:
				printf("Você escolheu  o planeta Vênus:");
				peso = peso_terra * 0.907;
				printf("\nSeu peso em Vênus equivale a %.1f Kg\n",peso);
				break;
			case 3:
				printf("Você escolheu  o planeta Terra:");
				peso = peso_terra * 1;
				printf("\nSeu peso na Terra equivale a %.1f Kg\n",peso);
				printf("\nMas creio que isso você já saiba!!!\n");
				break;
			case 4:
				printf("Você escolheu  o planeta Marte:");
				peso = peso_terra * 0.377;
				printf("\nSeu peso em Marte equivale a %.1f Kg\n",peso);
				break;
			case 5:
				printf("Você escolheu  o planeta Júpter:");
				peso = peso_terra * 2.36;
				printf("\nSeu peso em Júpter equivale a %.1f Kg\n",peso);
				break;
			case 6:
				printf("Você escolheu  o planeta Saturno:");
				peso = peso_terra * 0.916;
				printf("\nSeu peso em Saturno equivale a %.1f Kg\n",peso);
				break;
			case 7:
				printf("Você escolheu  o planeta Urano:");
				peso = peso_terra * 0.889;
				printf("\nSeu peso em Urano equivale a %.1f Kg\n",peso);
				break;
			case 8:
				printf("Você escolheu  o planeta Netuno:");
				peso = peso_terra * 1.12;
				printf("\nSeu peso em Netuno equivale a %.1f Kg\n",peso);
				break;
			case 9:
				printf("Você escolheu o planeta Plutão:");
				peso = peso_terra * 0.059;
				printf("\nSeu peso em Plutão equivale a %.1f Kg\n",peso);
				break;		
			default:
				printf("\n>>>Informação inválida<<<!!!\nRepita a Operação!!!\n");														
		}
	}
	else if(resposta=='n'){
		printf("Ok, estarei sempre aqui, caso mude de idéia\n");
		printf("Obrigado!\n");
	}
	else{
		printf(">>>Opção Inválida<<<\nRepita a operção!!!\n");
	}
		
	system("pause");
	return 0;
}
