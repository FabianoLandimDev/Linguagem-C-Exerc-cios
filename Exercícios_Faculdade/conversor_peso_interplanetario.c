#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int escolha;
	float peso_terra,peso;
	char resposta;
	
	printf("Ola, sou o seu assistente Virtual, Vamos comecar?\n");
	printf("\n");
	printf("Digite 's' para sim ou 'n' para nao:\n");
	scanf("%c",&resposta);
	
	if(resposta=='s'){
		printf("\nOk!!! Vamos Prossseguir\n");
		printf("Informe o seu peso em kg:\n");
		scanf("%f",&peso_terra);
		printf("\nPerfeito!!! Escolha um numero referente ao planeta desejado para saber o seu peso:\n");
		printf("\n1>Mercurio\n2>Venus\n3>Terra\n4>Marte\n5>Jupter\n6>Saturno\n7>Urano\n8>Netuno\n9>PLutao.\n");
		scanf("%d",&escolha);
		switch(escolha){
			case 1:
				printf("Voce escolheu  o planeta Mercurio:");
				peso = peso_terra * 0.378;
				printf("\nSeu peso em Mercurio equivale a %.1f Kg\n",peso);
				break;
			case 2:
				printf("Voce escolheu  o planeta Venus:");
				peso = peso_terra * 0.907;
				printf("\nSeu peso em Venus equivale a %.1f Kg\n",peso);
				break;
			case 3:
				printf("Voce escolheu  o planeta Terra:");
				peso = peso_terra * 1;
				printf("\nSeu peso na Terra equivale a %.1f Kg\n",peso);
				printf("\nMas creio que isso voce ja sabe!!!\n");
				break;
			case 4:
				printf("Voce escolheu  o planeta Marte:");
				peso = peso_terra * 0.377;
				printf("\nSeu peso em Marte equivale a %.1f Kg\n",peso);
				break;
			case 5:
				printf("Voce escolheu  o planeta Jupter:");
				peso = peso_terra * 2.36;
				printf("\nSeu peso em Jupter equivale a %.1f Kg\n",peso);
				break;
			case 6:
				printf("Voce escolheu  o planeta Saturno:");
				peso = peso_terra * 0.916;
				printf("\nSeu peso em Saturno equivale a %.1f Kg\n",peso);
				break;
			case 7:
				printf("Voce escolheu  o planeta Urano:");
				peso = peso_terra * 0.889;
				printf("\nSeu peso em Urano equivale a %.1f Kg\n",peso);
				break;
			case 8:
				printf("Voce escolheu  o planeta Netuno:");
				peso = peso_terra * 1.12;
				printf("\nSeu peso em Netuno equivale a %.1f Kg\n",peso);
				break;
			case 9:
				printf("Voce escolheu o planeta Plutao:");
				peso = peso_terra * 0.059;
				printf("\nSeu peso em Plutao equivale a %.1f Kg\n",peso);
				break;		
			default:
				printf("\n>>>Informacao invalida<<<!!!\nRepita a Operacao!!!\n");														
		}
	}
	else if(resposta=='n'){
		printf("Ok, estarei sempre aqui para te ajudar\n");
		printf("Obrigado!\n");
	}
	else{
		printf(">>>Opcao Invalida<<<\nRepita a operacao!!!\n");
	}
		
	system("pause");
	return 0;
}
