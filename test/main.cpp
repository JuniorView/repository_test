#include <iostream>

using namespace std;

int main()
{
   char element ;
   int matricul;
   bool read1 = false;
   bool read2 = false;

   cout<<"(a) Hello World \n" ;
   cout<<"(b) Matrikel-Nummer eingeben" <<endl ;

   while(read1==false || read2==false ){

   cout<< "waelen sie ein Elemnent des menu" <<endl;
   cin>> element;

   switch (element) {

   case 'a' : cout<< "hello woeld" <<endl; read1 = true; break;

   case 'b' : cout <<"matrikel nummer eingeben" <<endl; cin>>matricul;
              if(matricul>100){
                  cout <<"your are student" <<endl;
                  matricul = matricul/100;
                  cout <<" neue matricul ist "<<  matricul <<endl;
                  read2=true;
              } break;
   default : cerr<<"Fehler ,das ist kein Element des Menu" <<endl; break;
   }

}
}
