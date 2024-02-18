# include <iostream >
#include<locale.h>

using namespace std ;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int *px;
	
	px = &x;
	
	cout <<" Digite um valor para x: ";
	cin >> x;
	
	// Colocar um cout antes de cada linha
	cout<<"__________________________________________________"<<endl;
	cout<<" (px= &x;)"<<endl;
	cout<<"   " <<endl;	
	cout<<" x (valor de x).................: "<< x <<endl ; 
	cout<<" &x (endereço de memória de x)..: "<< &x <<endl; 
	cout<<" &px (endereço de memória de px): "<< &px <<endl; 
	cout<<" px (endereço de memória de &x).: "<< px <<endl ; 
	cout<<" *px (valor de px = valor de x).: "<< *px <<endl; 
	
	cout<<"_________________________________________________________________________________________\n";
	int v[5] = {4, 58, 13, 4, 5};	
	cout<<" (v[5]= {4, 58, 13, 4, 5};)"<<endl;
	cout<<"   "<<endl;	
	cout<<" v[0] (valor da posicao [0] de v)...........................................: "<< v[0] <<endl ; //qd indicada posição através [i] é compreensível que se trata do valor, afinal o array/vetor tem apenas 1 endereço de memória
	cout<<" v (endereço de memoria do vetor v).........................................: "<< v <<endl; //seguindo a lógica acima, com indicação v (sem [i]) é compreensível que se trata do endereço de memória, afinal não existe a indicação da posição solictada.
	cout<<" &v (endereço de memoria de &v).............................................: "<< &v <<endl; //=&v[0]; 
	cout<<" *v (como se trata de numeros, imprime o valor da primeira posição do vetor): "<< *v <<endl; //=v[0]; 
	
	cout<<"___________________________________________________________________________________________\n";
	px = v;
	cout<<" (px= v;)" << endl;
	cout<<"   " <<endl;
	cout<<" px (endereço de memória de &v):............................................................: "<< px <<endl;
	cout<<" &px (endereço de memória de px)............................................................: "<< &px <<endl;
	cout<<" *px (=v[0] / valor que está no endereço de memória que está no ponteiro px)................: "<< *px <<endl ;
	cout<<" *(px+1) (=v[1] / primeiro: incrementa a posição do ponteiro de px e depois imprime o valor): "<< *(px +1) <<endl;
	cout<<" *(px+2) (=v[2] / primeiro: incrementa a posição do ponteiro de px e depois imprime o valor): "<< *(px +2) <<endl;
	cout<<" px[2] (=*(px+2) / valor contido na indicação da posição [2])...............................: "<< px[2] <<endl;
	
	
	cout<<"_________________________________________________________________________________________________"<<endl;
	cout<<"   "<<endl;
	cout<<" *px (como se trata de numeros, imprime o valor da primeira posição do vetor).......................: "<< *px <<endl;
	px ++; // nova posicao[0]= px[1]
	cout<<"   "<<endl;
	cout<<" (px++; // NOVA posicao[0]= ANTIGA px[1] ou v[1])"<< endl;
	cout<<"   "<<endl;
	cout<< " v: "<< v <<endl;
	cout<< " *v: "<< *v <<endl;
	cout<< " v[1]: "<< v[1] <<endl;
	cout<<"   "<<endl;	
	cout<<" px[3] (a posição[0] é alterada c/ a incrementação (px++) anterior, contudo altera o todo)..........: "<< px[3] <<endl;
	cout<<" (*px)++ (primeiro: imprime o CONTEÚDO/VALOR de px e depois o incrementa)...........................: "<< (*px)++ <<endl; 
	cout<<" (*px)++ (primeiro: imprime o CONTEÚDO/VALOR de px e depois o incrementa)...........................: "<< (*px)++ <<endl; 
	cout<<" (*px)++ (primeiro: imprime o CONTEÚDO/VALOR de px e depois o incrementa)...........................: "<< (*px)++ <<endl; 
	cout<<" (*px)-- (primeiro: imprime o CONTEÚDO/VALOR de px e depois o decrementa)...........................: "<< (*px)-- <<endl; 	
	cout<<" (*px)-- (primeiro: imprime o CONTEÚDO/VALOR de px e depois o decrementa)...........................: "<< (*px)-- <<endl; 	
	cout<<"   "<<endl;
	cout<<" px[0]: "<< px[0]<< "; px[1]: "<< px[1]<<"; px[2]: "<< px[2]<< "; px[3]: "<< px[3] << "; px[4]: "<< px[4]<< endl;
	cout<<" *px: " << *px << endl;
	cout<<"   "<<endl;
	cout<<" ++(*px) (mostra o CONTEÚDO/VALOR já incrementado)................................................: "<< ++(*px) << endl; 
	cout<<" *(px++) (primeiro: POSIÇÃO do ponteiro de px é incrementada; Segundo: impressa)..................: "<< *(px++) <<endl;
	cout<<" *(px++) (primeiro: POSIÇÃO do ponteiro de px é incrementada; Segundo: impressa)..................: "<< *(px++) <<endl;
	cout<<" *(px++) (primeiro: POSIÇÃO do ponteiro de px é incrementada; Segundo: impressa)..................: "<< *(px++) <<endl;
	cout<<" *px..............................................................................................: "<< *px <<endl;
	
return 0;
}
