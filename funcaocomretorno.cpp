#include<stdio.h>
void imprime_cabecalho(void){
	printf("******************************\n");
	return;
}
/* Protótipo da função */
int multiplica(int N1, int N2);
int main(void)
{
  int V1, V2, resultado;
  imprime_cabecalho();
  printf("Digite o primeiro valor: ");
  scanf("%d", &V1);
  printf("Digite o segundo valor: ");
  scanf("%d", &V2);
  
  //chama a função e recebe o retorno
  resultado = multiplica(V1,V2);
  printf("Resultado = %d\n", resultado);
  
  imprime_cabecalho();
  return 0;
}
int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}
 