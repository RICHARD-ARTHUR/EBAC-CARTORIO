     #include <stdio.h> //biblioteca de comunica��o com usu�rio
     #include <stdlib.h> //blibioteca de aloca��o de espa�o em memoria
     #include <locale.h> //blibioteca de aloca�oes de texto por regiao
     #include <string.h> //blibioteca resposavel por cuidar das strings
     
	 int registro() //fun��o responsavel por cadastrar usuarios no sistema
     
     {
     	//inicio da cria��o de variaveis/strings
     	char arquivo[40];
     	char cpf[40];
	    char nome[40];
	    char sobrenome[40];
	    char cargo[40];
	    //final da cria��o de variaveis/strings
	    
	    printf("informe o CPF, por favor: "); //coletando informar��es do usuario
	    scanf("%s", cpf); //%s refere-se a string
	    
	    strcpy(arquivo, cpf); //responsavel por copiar os valores das strings
	    
	    FILE *file; //cria o arquivo
	    file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	    fprintf(file,cpf); //salva o valor da variavel 
	    fclose(file); //fecha o arquivo
	    
	    file = fopen(arquivo, "a"); //"a" atualiza um arquivo ja criado, inserindo novas informa�oes
	    fprintf(file, ","); //colocando uma virgula para deixar o texto mais organizado
	    fclose(file); //fecha o arquivo
	    
	    printf("qual o nome a ser cadastrado? "); //coletando informacoes do usuario
	    scanf("%s", nome); //scaneando o que o usuario digitou
	    
	    file = fopen(arquivo, "a"); //abrindo o arquivo e atualizando as informacoes
	    fprintf(file, nome); // salvando na char nome
	    fclose(file); //fechando
	    
	    file = fopen(arquivo, "a");
	    fprintf(file, ",");
	    fclose(file);
	    
	    printf("qual o sobrenome? ");
	    scanf("%s", sobrenome);
	    
	    file = fopen(arquivo, "a");
	    fprintf(file, sobrenome);
	    fclose(file);
	    
	    file = fopen(arquivo, "a");
	    fprintf(file, ",");
	    fclose(file);
	    
	    printf("qual o cargo? ");
	    scanf("%s", cargo);
	
	    file = fopen(arquivo, "a");
	    fprintf(file, cargo);
	    fclose(file);
	    
	    system("pause");

   	 }
	
	 int consultar()
	 {
	 	setlocale(LC_ALL, "Portuguese"); //definir a linguagem
	 	
	    char cpf[40];
	    char conteudo[200];
	    
	    printf("digite o CPF a ser consultado: ");
	    scanf("%s", cpf);
	    
	    FILE * file;
	    file = fopen(cpf,"r");
	    
	    if(file == NULL)
	 {
	    printf("N�o foi possivel abrir o arquivo, cpf n�o localizado.\n");
     }
	    
	    while(fgets(conteudo, 200, file) != NULL)
	 {
	 	printf("\nEssas s�o informa��es do usu�rio");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 }
	    system("pause");
	 
	 }
	 
	 int deletar()
	 {
	 	char cpf[40];
	 	
	 	printf("Digite o cpf a ser deletado: ");
	 	scanf("%s", cpf);
	 	
	 	remove(cpf);
	 	
	 	FILE *file;
	 	file = fopen(cpf, "r");
	 	
	 	if(file == NULL)
	 	{
	 	  printf("O usu�rio n�o se encontra no sistema.\n");
	 	  system("pause");
		}
	 	
	 }
	 
     int main ()
      {  
    
      int opcao=0; //definir variaveis
   
      int loop=1;
    
	  for(loop=1;loop=1;)
	  {
		
	  system("cls");
		
	  setlocale(LC_ALL, "Portuguese"); //definir a linguagem
	
  	  printf("\n\nCART�RIO DA EBAC \n\n");	//inicio do menu
	  printf(" Escolha a op��o desejada do menu:\n\n");
	  printf("  1 - Registrar nomes\n" );
	  printf("  2 - Consultar nomes\n"); 
	  printf("  3 - Deletar nomes\n"); 
	  printf("  4 - Sair do sistema\n\n");
   	  printf("Op��o: "); //fim do menu
	
	  scanf("%d", &opcao); //armazenando a escolha do usuario
	  
	  system("cls"); //limpa a tela
		
	  switch(opcao) 
	  {
		case 1:
		registro();
		system("pause");
		break;
		
		case 2:
		consultar();
		system("pause");
		break;
		
		case 3:
		deletar();
		system("pause");
		break;
		
		case 4:
		printf("\n\n Obrigado por ultilizar o nosso sistema <3\n\n");
		return 0;
		break;
		
		default:
		printf("\n\tEssa op��o n�o existe\n\n"); //fim da sele�ao
		system("pause");
		break;
	  		
	  }
	
	  printf("\n\tEsse software � uma atidade pratica, da Escola Brit�nica de artes criativas & tecnologia, EBAC.\n"); 

	  }
	  
	  }
