#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op,final,contador;
	// float pode armazear numeros decimais//
	float n1,n2,res;
	setlocale(LC_ALL,"Portuguese");
	system("color A");
	do{
	printf("Calculadora \n");
	printf("Digite 1 para somar \n");
	printf("Digite 2 para subtrair \n");
	printf("Digite 3 para multiplicar \n");
	printf("Digite 4 para dividir \n");
	printf("Digite 0 para sair \n");
	scanf("%d" , &op);
	if (op == 0) {
		return 0;
	} else{
	
	printf("Digite o Primeiro numero da equação\n");
	scanf("%f" , &n1);
	printf("Digite o Ultimo numero da equação\n");
	scanf("%f" , &n2);
	if (op == 1) 
	{
		res= n1 + n2;
		printf("O resultado é %f", res);

	}
	if (op == 2) 
	{
		res= n1 - n2;
		printf("O resultado é %f \n",res);

	}
	if (op == 3) 
	{
		res= n1 * n2;
		printf("O resultado é %f", res);

	}
	if (op == 4) {
		if(n2 == 0){
			printf("divisão por zero \n ");
		} else {
			res=n1/n2;
			printf("O resultado é %f \n", res);}
			
	
		
	
         
        
	
	
}
}
}while(op !=0); 



return 0; 
}
