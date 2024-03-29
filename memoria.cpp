#include <iostream>
using namespace std;

    class Personaje
    {
    private:

    public:
        Personaje(/* args */);
        ~Personaje();
        void Hablar(){
            cout<<"Hola enanx"<<endl;
        }
    };
    

    class Enano: public Personaje {
        private:
        float altura;
        int edad;
        int vida;
    public:
            Enano() {}
            ~Enano() {}
            void Inicializar(){
                    this->altura=2;
                    this->edad=150;
                    this->vida=10;
            }

            void Comer(){
                this->vida+=1;
            }
    };

        class Duende : public Personaje
        {
        private:
        int salud;
        public:
            Duende() {};
            ~Duende() {};
        };

int main(int argc, char const *argv[])
{
    int i = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e; 


    cout<<"Tamaño tipos de datos nativos:"<<endl;
    cout<<"Tamaño int: "<<sizeof(int)<<" bites."<<endl;
    cout<<"Tamaño bool: "<<sizeof(bool)<<" bites."<<endl;
    cout<<"Tamaño float: "<<sizeof(float)<<" bites."<<endl;
    cout<<"Tamaño double: "<<sizeof(double)<<" bites."<<endl;
    cout<<"Tamaño char: "<<sizeof(char)<<" bites."<<endl;
    cout<<"Tamaño enano: "<<sizeof(Enano)<<" bites."<<endl;
    
    cout<<"Direcciones de memoria:"<<endl;
    cout<<"Direcciones de int:"<<&i<<endl;
    cout<<"Direcciones de bool:"<<&b<<endl;
    cout<<"Direcciones de float:"<<&f<<endl;
    cout<<"Direcciones de double:"<<&d<<endl;
    cout<<"Direcciones de char:"<<static_cast<void*>(&c)<<endl;
    cout<<"Direcciones de enano:"<<&e<<endl;

    cout<<endl;
    cout<<"Memoria dinamica:"<<endl;
    cout<<"Direccion dinamica:"<<malloc(2)<<endl;
    cout<<"Direcion dinamica:"<<malloc(sizeof(int))<<endl;

    //casteo de Punteros C 
    Enano* direccion =(Enano*) malloc(sizeof(Enano));
    direccion->Inicializar();

    //Punteros en C++
    Enano* instancia= new Enano;

    //Operador
    instancia->Comer();
    instancia->Hablar();

    //Polimorfismo
    Personaje* p= new Duende();
    Personaje* q= new Enano();

    p->Hablar();
    q->Hablar();

    cout<<"Direccion de p:"<<p<<endl;

    //arreglos
    Duende duendes [10];
    cout<<endl;
    cout<<&duendes[0]<<endl;
    cout<<&duendes[1]<<endl;
    cout<<&duendes[2]<<endl;
    cout<<&duendes[3]<<endl;
    cout<<&duendes[4]<<endl; 

    // conversion a direccion
    cout<<endl;
    cout<<&duendes[0]+0<<endl;
    cout<<&duendes[0]+1<<endl;
    cout<<&duendes[0]+2<<endl;
    cout<<&duendes[0]+3<<endl;  
    cout<<&duendes[0]+4<<endl;

    return 0;
}
