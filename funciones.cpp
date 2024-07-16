#include <iostream>
#include "funciones.h"

using namespace std;

int tirada(){
    return rand ()% 6+1;
}

void hacerTirada(int vecDado[6])
{
    int x;
for(x=0; x<6; x++)
{
vecDado[x] = tirada();
}
}

void mostrarTirada(int vecDado[6])
{
    int x;
    for(x=0; x<6; x++)
    {
        cout << vecDado[x] << endl;
    }
}

//funcion de sexteto//

int sexteto(int vecDado[])
{
    int x;
    int cont = 0;
    int numero = vecDado[0];
    for(x = 0; x < 6; x++)
    {
        if(numero == vecDado[x])
        {
            cont++;
        }
    }
    if(cont == 6)
    {
        return numero;
    }
    else
    {
        return 0;
    }
}

//funcion de escalera//

bool escalera(int vecDado[6])
{
    bool esEscalera;
    int cont = 0;
    int x;
    for(x = 0; x < 6; x++)
    {
        int y;
        for(y = x+1; y < 6; y++)
        {
            if(vecDado[x] == vecDado[y])
            {
                cont++;
            }
        }
    }
    if(cont == 0)
    {
        esEscalera = true;
    }
    else
    {
        esEscalera = false;
    }
    return esEscalera;
}


 //Puntaje de la ronda//
int PuntajeMaxRonda(int tiradaA, int tiradaB, int tiradaC)
{
    int puntajeRonda;

if(tiradaA > tiradaB && tiradaA > tiradaC){
    puntajeRonda = tiradaA;
}
else if(tiradaB > tiradaA && tiradaB > tiradaC){
    puntajeRonda = tiradaB;
}
else {
    puntajeRonda = tiradaC;
}

return puntajeRonda;

}

//suma total de dados//
int SumarDados (int vecDado[6])
{
int x;
int suma = 0;
for (x=0; x<6; x++)
    {
        suma += vecDado[x];
    }
return suma;
}


//ceditos//
void creditos()
{
 cout << "--------------------------------- " << endl;
 cout << "ESTE JUEGO HA SIDO REALIZADO POR: " << endl;
 cout << endl;
 cout << "EL JUGADOR: FRANCO DELL OLIO, SU  Nº DE LEGAJO ES 30307. " << endl;
 cout << "EL JUGADOR: AGUSTIN QUINONES, SU Nº DE LEGAJO ES 30544. " << endl;
 cout << "EL JUGADOR BRUNO GODOY, SU Nº DE LEGAJO ES 30365. " << endl;
 cout << "--------------------------------------------------------- " << endl;
 system("pause");
}

//ESTADISTICAS//
void estadisticas(int PuntajeMax[0], std::string NombrePuntajeMax[0])
{
cout << "ESTADISTICAS " << endl;
cout << endl;
cout << "MAYOR PUNTUACION: " << endl;
cout << endl;
cout << NombrePuntajeMax[0] << " / " << PuntajeMax[0] << endl;
cout << endl;
cout << "QUIERE VOLVER AL MENU PRINCIPAL? TOCA F PARA VOLVER. " << endl;
}

