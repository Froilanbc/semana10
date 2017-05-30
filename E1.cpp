#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

// Namespace
using namespace std;

// Crear clases

struct TLlanta
{
  string marca;
  string perfiles;
  float radio;
  float espesor;
};

struct TMotor;
{
    string marca;  
    string modelo;
    float cilindrada;
    float potencia;
    float rpms;
};

struct TTimon;
{
  string marca;
  float radio;
};

struct TAsiento;
{
    string material;
    string color;
    
};

class CAuto;
{
    TMotor motor;       // Relación con ocurrencia 1 a 1
    TTimon timon;       // Relación con ocurrencia 1 a 1
    vector <TLlanta> listaLlantas;      //Relación con concurrencia 1 a muchos
    vector <TAsiento> listaAsientos;    //Relación con concurrencia 1 a muchos
    
    public:
    CAuto()             //sin parametros
    {
        // Crea 4 llantas
        for (int i = 0; i < 4; i++) 
            listaLlantas.push_back({"Dunlop" , "60" , 17 , 10})
            
        // Crear 5 asientos
        for (int i = 0; i < 5; i++) 
            listaAsientos.push_back({"Cuero", "Negro"})
        
        // Definimos el timon
        timon.marca= "Mono";
        timon.modelo= "Deportivo";
        
        //Definimos el motor
        motor.marca= "Roll Royce";
        motor.modelo= "V8";
        motor.rpms= 6000;
        motor.potencia= 300;
        motor.cilindrada= 4000;
    }
    
    CAuto( int nLlantas, int nAsientos, TTimon timon, TMotor motor)  //con parametros
    {
        // Crea N llantas
        for (int i = 0; i < nLlantas; i++) 
            listaLlantas.push_back({"Dunlop" , "60" , 17 , 10})
            
        // Crear n asientos
        for (int i = 0; i < nAsientos; i++) 
            listaAsientos.push_back({"Cuero", "Negro"})
        
        // Definimos el timon
        this->timon= timon;
        
        //Definimos el motor
        this->motor= motor;
    }
};

// Programa principal
int main()
{
    CAuto estandar;    ///4 ruedas, 5 asientos , Timon , Motor
    
    TTimon timon;
    timon.marca= "Pegaso";
    timon.modelo= "Deportivo";
    
    TMotor motor;
        motor.marca= "Ferrari";
        motor.modelo= "V9";
        motor.rpms= 8000;
        motor.potencia= 500;
        motor.cilindrada= 6000;
        
    CAuto personalizado ( 4, 2, timon, motor );
    
    return 0;
}