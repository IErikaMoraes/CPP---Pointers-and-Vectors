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
	cout<<" &x (endere�o de mem�ria de x)..: "<< &x <<endl; 
	cout<<" &px (endere�o de mem�ria de px): "<< &px <<endl; 
	cout<<" px (endere�o de mem�ria de &x).: "<< px <<endl ; 
	cout<<" *px (valor de px = valor de x).: "<< *px <<endl; 
	
	cout<<"_________________________________________________________________________________________\n";
	int v[5] = {4, 58, 13, 4, 5};	
	cout<<" (v[5]= {4, 58, 13, 4, 5};)"<<endl;
	cout<<"   "<<endl;	
	cout<<" v[0] (valor da posicao [0] de v)...........................................: "<< v[0] <<endl ; //qd indicada posi��o atrav�s [i] � compreens�vel que se trata do valor, afinal o array/vetor tem apenas 1 endere�o de mem�ria
	cout<<" v (endere�o de memoria do vetor v).........................................: "<< v <<endl; //seguindo a l�gica acima, com indica��o v (sem [i]) � compreens�vel que se trata do endere�o de mem�ria, afinal n�o existe a indica��o da posi��o solictada.
	cout<<" &v (endere�o de memoria de &v).............................................: "<< &v <<endl; //=&v[0]; 
	cout<<" *v (como se trata de numeros, imprime o valor da primeira posi��o do vetor): "<< *v <<endl; //=v[0]; 
	
	cout<<"___________________________________________________________________________________________\n";
	px = v;
	cout<<" (px= v;)" << endl;
	cout<<"   " <<endl;
	cout<<" px (endere�o de mem�ria de &v):............................................................: "<< px <<endl;
	cout<<" &px (endere�o de mem�ria de px)............................................................: "<< &px <<endl;
	cout<<" *px (=v[0] / valor que est� no endere�o de mem�ria que est� no ponteiro px)................: "<< *px <<endl ;
	cout<<" *(px+1) (=v[1] / primeiro: incrementa a posi��o do ponteiro de px e depois imprime o valor): "<< *(px +1) <<endl;
	cout<<" *(px+2) (=v[2] / primeiro: incrementa a posi��o do ponteiro de px e depois imprime o valor): "<< *(px +2) <<endl;
	cout<<" px[2] (=*(px+2) / valor contido na indica��o da posi��o [2])...............................: "<< px[2] <<endl;
	
	
	cout<<"_________________________________________________________________________________________________"<<endl;
	cout<<"   "<<endl;
	cout<<" *px (como se trata de numeros, imprime o valor da primeira posi��o do vetor).......................: "<< *px <<endl;
	px ++; // nova posicao[0]= px[1]
	cout<<"   "<<endl;
	cout<<" (px++; // NOVA posicao[0]= ANTIGA px[1] ou v[1])"<< endl;
	cout<<"   "<<endl;
	cout<< " v: "<< v <<endl;
	cout<< " *v: "<< *v <<endl;
	cout<< " v[1]: "<< v[1] <<endl;
	cout<<"   "<<endl;	
	cout<<" px[3] (a posi��o[0] � alterada c/ a incrementa��o (px++) anterior, contudo altera o todo)..........: "<< px[3] <<endl;
	cout<<" (*px)++ (primeiro: imprime o CONTE�DO/VALOR de px e depois o incrementa)...........................: "<< (*px)++ <<endl; 
	cout<<" (*px)++ (primeiro: imprime o CONTE�DO/VALOR de px e depois o incrementa)...........................: "<< (*px)++ <<endl; 
	cout<<" (*px)++ (primeiro: imprime o CONTE�DO/VALOR de px e depois o incrementa)...........................: "<< (*px)++ <<endl; 
	cout<<" (*px)-- (primeiro: imprime o CONTE�DO/VALOR de px e depois o decrementa)...........................: "<< (*px)-- <<endl; 	
	cout<<" (*px)-- (primeiro: imprime o CONTE�DO/VALOR de px e depois o decrementa)...........................: "<< (*px)-- <<endl; 	
	cout<<"   "<<endl;
	cout<<" px[0]: "<< px[0]<< "; px[1]: "<< px[1]<<"; px[2]: "<< px[2]<< "; px[3]: "<< px[3] << "; px[4]: "<< px[4]<< endl;
	cout<<" *px: " << *px << endl;
	cout<<"   "<<endl;
	cout<<" ++(*px) (mostra o CONTE�DO/VALOR j� incrementado)................................................: "<< ++(*px) << endl; 
	cout<<" *(px++) (primeiro: POSI��O do ponteiro de px � incrementada; Segundo: impressa)..................: "<< *(px++) <<endl;
	cout<<" *(px++) (primeiro: POSI��O do ponteiro de px � incrementada; Segundo: impressa)..................: "<< *(px++) <<endl;
	cout<<" *(px++) (primeiro: POSI��O do ponteiro de px � incrementada; Segundo: impressa)..................: "<< *(px++) <<endl;
	cout<<" *px..............................................................................................: "<< *px <<endl;
	
return 0;
}
