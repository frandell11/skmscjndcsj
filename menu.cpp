#include <iostream>
#include "menu.h"
#include "juego.h"
#include "funciones.h"

using namespace std;

void menu()
{

    int seleccion;
    int PuntajeMax[0];
    std::string NombrePuntajeMax[0];
    do
    {

        system ("cls");
        cout << "---------------------" << endl;
        cout << "1. JUGAR MODO INDIVIDUAL " << endl;
        cout << "2. JUGAR MODO 2 JUGADORES " << endl;
        cout << "3. MODO SIMALCION " << endl;
        cout << "4. ESTADISTICAS " << endl;
        cout << "5. CREDITOS" << endl;
        cout << "---------------------" << endl;
        cout << "0. SALIR DEL JUEGO "<< endl;
        cout << "OPCION PARA SELECCIONAR: ";
        cin >> seleccion;

        switch (seleccion)
        {

        case 0:
            return;
            break;

        case 1:
            modo1jugador();

            break;

        case 2:
            modo2jugadores();

            break;

        case 3:
            modoPrueba1Jugador();

            break;

        case 4:
            estadisticas(PuntajeMax, NombrePuntajeMax);

            break;

        case 5:
            creditos();
            break;


        }


    }


    while(true);


}
