#include <iostream>
#include <string.h>

using namespace std;

class Pessoa{
      int numero, idade, qtdfilhos, aniversario;  
      char nome[30],endereco[30];
      float altura, salario;
      public:
             void set_numero(int num);
             void set_nome(char *aux);
             void set_endereco(char *aux);
             void set_idade(int num);
             void set_altura(float num);
             void set_salario(float num);
             void set_qtdfilhos(int num);
             void set_aniversario(int num);
             
             
			 int get_numero();
             int get_idade();
             char *get_nome();
             char *get_endereco();
             float get_altura();
             int get_qtdfilhos();
             int get_aniversario();
             float get_salario();
             
                                       
			 void mostra();
             
	};
             
             void Pessoa::set_numero(int num)
             {
                  numero = num;
             };

             void Pessoa::set_nome(char *aux)
             {
             	 
                  strcpy(nome, aux);
             };

             void Pessoa::set_endereco(char *aux)
             {
                  strcpy(endereco, aux);
             };

             void Pessoa::set_idade(int num)
             {
                 
                  idade = num;
             };
             
             void Pessoa::set_altura(float num){
             	   altura = num;
			 }
			 void Pessoa::set_qtdfilhos(int num){
			 	qtdfilhos = num;
			 }
			 void Pessoa::set_aniversario(int num){
			 	aniversario = num;
			 }
			 void Pessoa::set_salario(float num){
			 	salario = num;
			 }
			 
             int Pessoa::get_numero()
             {
                 return numero;
             };
             char* Pessoa::get_nome()
             {
                  return nome;
             };

             char* Pessoa::get_endereco()
             {
                  return endereco;
             };
             
             int Pessoa::get_idade()
             {
                 return idade;
             };
             
             float Pessoa::get_altura(){
             	return altura;
			 }
			 int Pessoa::get_qtdfilhos(){
			 	return qtdfilhos;
			 }
			 int Pessoa::get_aniversario(){
			 	aniversario = idade +1;
			 	return aniversario;
			 }
			 float Pessoa::get_salario(){
			 	return salario;
			 }
             


             void Pessoa::mostra()
             {
                   cout<<"xxxxxxxxxxxxxx DADOS xxxxxxxxxxxxxx\n\n";
                   cout<<"NUMERO do RA: "<<get_numero()<<"\n"<<endl;
                   cout<<"NOME: "<<get_nome()<<"\n"<<endl;
                   cout<<"Endereco: "<<get_endereco()<<"\n"<<endl;
                   cout<<"Idade: "<<get_idade()<<"\n"<<endl;
                   cout<<"Altura:"<<get_altura()<<"\n"<<endl;
				   cout<<"Quantide de Filhos"<<get_qtdfilhos()<<"\n"<<endl;	
				   cout<<"Voc� ir� fazer "<<get_aniversario()<<" anos"<<"\n"<<endl;
				   
				   if (qtdfilhos !=0){
				   	salario = salario+qtdfilhos * 200;
				   	cout<<"O teu salario passa a ser: "<<salario<<endl;
				   }
				                   	
                   system("pause");
                   //system("cls");
             };

main()
{
         int num;
         char nomes[30];
         float valor;
         setlocale(LC_ALL, "Portuguese");
         Pessoa aluno;
         
         Pessoa aluno2;
         
cout<<"xxxxxxxxxxxxxxxx UniSalesiano - 2018 xxxxxxxxxxxxxxxxx\n\n";
                          cout<<"xxxxxxxxxxxx CADASTRO DO ALUNO 1 xxxxxxxxxxxx\n\n";
                          cout<<"DIGITE O NUMERO DO RA: ";
                          cin>>num;
                          aluno.set_numero(num);

                          cout<<"DIGITE O NOME: ";
                          fflush(stdin);
                          gets(nomes);
                          aluno.set_nome(nomes);

                          cout<<"DIGITE O ENDERECO: ";
                          fflush(stdin);
                          gets(nomes);
                          aluno.set_endereco(nomes);

                          cout<<"DIGITE A IDADE: ";
                          cin>>num;
                          aluno.set_idade(num);
                          
                          cout<<"DIGITE A ALTURA:";
                          cin>>valor;
                          aluno.set_altura(valor);
                          
                          cout<<"DIGITE QUANTIDADE DE FILHOS: ";
                          cin>>num;
                          aluno.set_qtdfilhos(num);
                          
                          cout<<"DIGITE O SEU SALARIO: ";
                          cin>>num;
                          aluno.set_salario(num);
                          

                          system("pause");
                          system("cls");


                          cout<<"xxxxxxxxxxxx CADASTRO DO ALUNO 2 xxxxxxxxxxxx\n\n";
                          cout<<"DIGITE O NUMERO DO RA: ";
                          fflush(stdin);
                          cin>>num;
                          aluno2.set_numero(num);

                          cout<<"DIGITE O NOME: ";
                          fflush(stdin);
                          gets(nomes);
                          aluno2.set_nome(nomes);

                          cout<<"DIGITE O ENDERECO: ";
                          fflush(stdin);
                          gets(nomes);
                          aluno2.set_endereco(nomes);

                          cout<<"DIGITE A IDADE: ";
                          cin>>num;
                          aluno2.set_idade(num);
                          
                          cout<<"DIGITE A ALTURA:";
                          cin>>valor;
                          aluno2.set_altura(valor);
                          
                          cout<<"DIGITE QUANTIDADE DE FILHOS: ";
                          cin>>num;
                          aluno2.set_qtdfilhos(num);
                          
                          cout<<"DIGITE O SEU SALARIO: ";
                          cin>>num;
                          aluno2.set_salario(num);

                          system("pause");
                          system("cls");


                          
                          aluno.mostra();
                          aluno2.mostra();
    
    
}
