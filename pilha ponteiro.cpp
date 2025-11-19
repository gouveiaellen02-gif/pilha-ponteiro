#include <iostream>;

using namespace std;
 
 
class No{

      public:

      No *proxNo; //atributo

      int dado;

      No ()

      {

           proxNo = NULL;

      }

      bool UltimoNo ()

      {

         return (proxNo == NULL);  

      }      

};
 
class Pilha{


      No *topo;

      public:

      Pilha ()

      {

            topo = NULL;

      }

      bool PilhaVazia()

      {

         return (topo == NULL);  

      }

      void Empilha (int NovoDado)

      {

          No *novoNo = new No();// com o new ele passa a existir na memoria e s� sai q eu apagar

          novoNo->dado = NovoDado;

          novoNo->proxNo = topo; // o topo esta apontando para o �ltimo obj e o novoNo cria o elo com o topo

          topo = novoNo;

      }

      int Desempilha()

      {

          int temp_Dado = 0;

          No *temp_proxNo = NULL;

          if ( PilhaVazia()== false){

                    temp_Dado = topo->dado;

                    temp_proxNo = topo->proxNo;

                    delete topo; // apagando o conte�do do objeto q esta sendo apontado

                    topo  = temp_proxNo; // porque o topo esta sem referencia e agora eu estou redirecionando-o

          }

          return temp_Dado;


      }   


};
 
int main(int argc, char *argv[])

{

    Pilha p;

    cout << p.PilhaVazia()<<"\n";

    p.Empilha(5);

    p.Empilha(8);

    p.Empilha(10);

    p.Empilha(15);

    cout <<"Dado desempilhada: "<< p.Desempilha()<< "\n";

    cout <<"Dado desempilhada: "<< p.Desempilha()<< "\n";

     cout <<"Dado desempilhada: "<< p.Desempilha()<< "\n";

      cout <<"Dado desempilhada: "<< p.Desempilha()<< "\n";

      cout << p.PilhaVazia()<<"\n";


    system("PAUSE");

    return EXIT_SUCCESS;

}

 