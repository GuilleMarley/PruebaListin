#include <iostream>
#include <vector>

using namespace std;

class Persona{
private:
        string nombre;
        int telefono;
        int edad;
public:
        void setNombre(string n){
            nombre = n;
        }
        void setTelf(int telf){
            telefono=telf;
        }
        void setEdad(int age){
            edad=age;
        }

        string getNombre(){
            return nombre;
        }
        int getTelefono(){
            return telefono;
        }
        int getEdad(){
            return edad;
        }
};

class Listin{
private:
    vector <Persona> agenda;
public:

    void pushBackVec(Persona person){
        agenda.push_back(person);
    }
    void showInfo(){
        for(auto elem:agenda){
            cout<<"\n"<<elem.getNombre()<<" "<<elem.getEdad()<<" "<<elem.getTelefono()<<"\n";
        }
    }
    Persona showInfoPos(string name){

    }
    Persona getInfo(){
        for(auto elem:agenda){
            return elem;
        }
    }

};

int main()
{
    Listin listin;
    int numPad=0;
    do{
      cin>>numPad;
      switch (numPad) {
      case 1:{
          Persona persona;
          string name;
          cout<<"\nIntroduce un nombre que no este en la agenda ya.\n";
          cin>>name;
          persona.setNombre(name);

          int age=0;
          while(age<=0){
          cout<<"\nIntroduce una edad mayor que 0.\n";
          cin>>age;
          }
          persona.setEdad(age);

          int telefono;
          cout<<"\nIntroduce un numero de telefono de 9 digitos.\n";
          cin>>telefono;
          persona.setTelf(telefono);

          listin.pushBackVec(persona);
          break;
      }
      case 2:{
         listin.showInfo();
      }
      case 3:{
          string pos;
          cout<<"\nIntroduce el nombre que buscas.\n";
          cin>>pos;
          listin.showInfoPos(pos);
      }
      }


      }while(numPad!=4);
    return 0;
}


