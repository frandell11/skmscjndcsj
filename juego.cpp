#include <iostream>
#include "juego.h"
#include "funciones.h"

using namespace std;

void modo1jugador()
{

//variables de tiradas y ciclos//

int dado[6]; int x; int y; int puntajeJuego = 0;

//variables de usuario//
string nombre;
int edad;

//Variable de contador de rondas//
 int conrondas = 0;

//--------------------------------------------------------------------//
system("pause");
system("cls");

cout << "BIENVENIDO JUGADOR!! " << endl;

system("pause");
system("cls");

cout << "LE VAMOS A PEDIR LOS DATOS... " << endl;
system("pause");
system("cls");

//Solicitud de datos del usuario//
cout << "INGRESE SU EDAD: ";
cin >> edad;

cout << "INGRESE SU NOMBRE: ";
cin.ignore();
getline(cin, nombre);

system("pause");
system("cls");

cout << "NOMBRE: " << nombre << " TIENE " << edad << " ANOS DE EDAD " << endl;

system("pause");
system("cls");

cout << "BIENVENIDO " << nombre << "!!" << endl;
cout << endl;

system("pause");
system("cls");

//--------------------------------------------------------------------//

while(puntajeJuego < 100){

//variables de tirada//
int tirada1 = 0; int tirada2 = 0; int tirada3 = 0;

//-------------------------------------------------------------------/

//numero de rondas//
conrondas++;
cout << "RONDA Nº: " << conrondas << endl;
cout << "TIRADA Nº 1 " << nombre << endl;
cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
cout << endl;

system("pause");

//tirada 1//
hacerTirada(dado);

//mostrar tirada 1//

mostrarTirada(dado);


/////////////////////////////////////////Sexteto A/////////////////////////////////
int numeroSexteto;

numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
    cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tirada1 = numeroSexteto * 10;
}


/////////////////////////////////////Escalera A///////////////////////////////////////
        bool valorEscalera1;

        valorEscalera1 = escalera(dado);

        if(valorEscalera1 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }
       else
        {
            valorEscalera1 = false;
        }


 tirada1 = SumarDados (dado);

cout << endl;
cout << "EL JUGADOR " << nombre << " OBTUVO " << tirada1 << " PUNTOS." << endl;

system("pause");
system("cls");

//////////////////////////////////////////////////////////////////////////////////

cout << "TIRADA Nº 2 " << nombre << endl;
cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
cout << endl;

system("pause");

//tirada 2//
hacerTirada(dado);

//mostrar tirada 2//
mostrarTirada(dado);

/////////////////////////////////////////Sexteto B/////////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
    cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tirada2 = numeroSexteto * 10;
}


/////////////////////////////////////Escalera B///////////////////////////////////////
        bool valorEscalera2;

        valorEscalera2 = escalera(dado);

        if(valorEscalera2 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }
        else
        {
            valorEscalera2 = false;
        }

tirada2 = SumarDados(dado);

cout << endl;
cout << "EL JUGADOR " << nombre << " OBTUVO " << tirada2 << " PUNTOS." << endl;

system("pause");
system("cls");

//////////////////////////////////////////////////////////////////////////////////

cout << "TIRADA Nº 3 " << nombre << endl;
cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
cout << endl;

system("pause");

//tirada 3//
hacerTirada(dado);

//mostrar tirada 3//
mostrarTirada(dado);

/////////////////////////////////////////Sexteto C/////////////////////////////////
numeroSexteto = sexteto(dado);

if(numeroSexteto == 6)
{
    puntajeJuego = 0;
    cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
}
else if(numeroSexteto > 0)
{
    tirada3 = numeroSexteto * 10;
}


/////////////////////////////////////Escalera C///////////////////////////////////////
        bool valorEscalera3;

        valorEscalera3 = escalera(dado);

        if(valorEscalera3 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }
        else
        {
            valorEscalera3 = false;
        }

        tirada3 = SumarDados(dado);
cout << endl;
cout << "EL JUGADOR " << nombre << " OBTUVO " << tirada3 << " PUNTOS." << endl;

system("pause");
system("cls");

//////////////////////////////////////////////////////////////////////////////////


//Puntaje de la ronda//
int puntajeronda = 0;

puntajeronda = PuntajeMaxRonda(tirada1, tirada2, tirada3);


cout << "EL PUNTAJE MAXIMO DE LA RONDA " << conrondas << " PARA EL JUGADOR " << nombre << " ES: "  << puntajeronda << "." << endl;

cout << endl;
system("pause");
system("cls");

//--------------------------------------------------------------------/

//Suma de puntaje de Juego total//

puntajeJuego += puntajeronda;
cout << "PUNTAJE TOTAL DE JUEGO JUGADOR " << nombre << " ES: " << puntajeJuego << "." << endl;

//------------------------------------------------------------------/

//Ganador del juego//
system("pause");
system("cls");

if(puntajeJuego >=100)
{
cout << "FELICITACIONES " << nombre << " HAS GANADO LA PARTIDA!! " << endl;
cout << endl;

system("pause");
system("cls");
}

}



}


/// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////MODO 2 JUGADORES!!////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// /// /// /// /// /// /// /// /// /// /// /// ////////////////////////////////////////////////////////////////////////////////




void modo2jugadores()
{
//variables de tirada//

    int dado[6];
    int x;
    int y;
    int puntajeJuego = 0;
    int puntajeJuego2 = 0;
    int conTiradas1 = 0;
    int conTiradas2 = 0;

//variables de usuarios//
    string nombre;
    int edad;
    string nombre2;
    int edad2;

//Variable de contador de rondas//
    int conrondas = 0;

//--------------------------------------------------------------------//

    cout << "BIENVENIDOS JUGADORES!! " << endl;

    system("pause");
    system("cls");

    cout << "LES VAMOS A PEDIR LOS DATOS DE CADA UNO... " << endl;
    system("pause");
    system("cls");

//Solicitud de datos del usuario//
    cout << "INGRESE SU EDAD EL 1ER JUGADOR: ";
    cin >> edad;

    cout << "INGRESE SU NOMBRE EL 1ER JUGADOR: ";
    cin.ignore();
    getline(cin, nombre);

    system("pause");
    system("cls");

    cout << "INGRESE SU EDAD EL 2DO JUGADOR: ";
    cin >> edad2;

    cout << "INGRESE SU NOMBRE EL 2DO JUGADOR: ";
    cin.ignore();
    getline(cin, nombre2);

    cout << "NOMBRE: " << nombre << " TIENE " << edad << " ANOS DE EDAD " << endl;
    cout << "NOMBRE: " << nombre2 << " TIENE " << edad2 << " ANOS DE EDAD " << endl;

    system("pause");
    system("cls");

    cout << "BIENVENIDO " << nombre << " Y " << nombre2 << "!!" << endl;
    cout << endl;

    system("pause");
    system("cls");

//--------------------------------------------------------------------//
    while(puntajeJuego < 100 && puntajeJuego2 < 100)
    {

//variables de tirada JUGADOR 1//
        int tiradaA = 0;
        int tiradaB = 0;
        int tiradaC = 0;

//Variables de tirada JUGADOR 2//
        int tirada1 = 0;
        int tirada2 = 0;
        int tirada3 = 0;

//-------------------------------------------------------------------/

//numero de rondas//
        conrondas++;
        cout << "RONDA Nº: " << conrondas << endl;
        cout << endl;

        cout << "TIRADA Nº 1 " << endl;
        cout << endl;
        cout << "TURNO DE: " << nombre << endl;
        cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
        cout << endl;

        system("pause");

//tirada 1: Jugador 1//
        hacerTirada(dado);
        conTiradas1++;


//mostrar tirada 1: Jugador 1//
        mostrarTirada(dado);


/////////////////////////////////////////Sexteto A JUGADOR 1/////////////////////////////////
        int numeroSexteto;

        numeroSexteto = sexteto(dado);

        if(numeroSexteto == 6)
        {
            puntajeJuego = 0;
            cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
        }
        else if(numeroSexteto > 0)
        {
            tiradaA = numeroSexteto * 10;
        }


/////////////////////////////////////Escalera A JUGADOR 1///////////////////////////////////////
        bool valorEscalera1;

        valorEscalera1 = escalera(dado);

        if(valorEscalera1 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }
        else
        {
            valorEscalera1 = false;
        }


        tiradaA = SumarDados (dado);

        //LA TIRADA EN LA QUE LLEGA A 100//
        if(tiradaA + puntajeJuego >= 100)
        {
            conTiradas1 - 2;
        }

        cout << endl;
        cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaA << " PUNTOS." << endl;

        system("pause");
        system("cls");


        cout << "TIRADA Nº 1 " << endl;
        cout << endl;
        cout << "TURNO DE: " << nombre2 << endl;
        cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego2 << endl;
        cout << endl;

        system("pause");

//Tirada 1: JUGADOR 2//
        hacerTirada(dado);
        conTiradas2++;


//Mostrar tirada 1: JUGADOR 2//
        mostrarTirada(dado);


/////////////////////////////////////////Sexteto A JUGADOR 2///////////////////////////////
        numeroSexteto = sexteto(dado);

        if(numeroSexteto == 6)
        {
            puntajeJuego2 = 0;
            cout << "MALA SUERTE CHE... " << nombre2 << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
        }
        else if(numeroSexteto > 0)
        {
            tirada1 = numeroSexteto * 10;
        }


/////////////////////////////////////Escalera A JUGADOR 2///////////////////////////////////////
        bool valorEscaleraA;

        valorEscaleraA = escalera(dado);

        if(valorEscaleraA == true)
        {

            puntajeJuego2 >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre2 << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }
        else
        {
            valorEscaleraA = false;
        }

        tirada1 = SumarDados(dado);

        //LA TIRADA EN LA QUE LLEGA A 100//
        if(tirada1 + puntajeJuego2 >= 100)
        {
            conTiradas2 - 2;
        }

        cout << endl;
        cout << "EL JUGADOR " << nombre2 << " OBTUVO " << tirada1 << " PUNTOS. " << endl;

        system("pause");
        system("cls");

//////////////////////////////////////////////////////////////////////////////////

        cout << "TIRADA Nº 2 " << endl;
        cout << endl;
        cout << "TURNO DE: " << nombre << endl;
        cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
        cout << endl;

        system("pause");

//tirada 2 JUGADOR 1//
        hacerTirada(dado);
        conTiradas1++;


//mostrar tirada 2 JUGADOR 1//
        mostrarTirada(dado);

/////////////////////////////////////////Sexteto B JUGADOR 1/////////////////////////////////
        numeroSexteto = sexteto(dado);

        if(numeroSexteto == 6)
        {
            puntajeJuego = 0;
            cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
        }
        else if(numeroSexteto > 0)
        {
            tiradaB = numeroSexteto * 10;
        }


/////////////////////////////////////Escalera B JUGADOR 1///////////////////////////////////////
        bool valorEscalera2;

        valorEscalera2 = escalera(dado);

        if(valorEscalera2 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }
        else
        {
            valorEscalera2 = false;

        }

        tiradaB = SumarDados(dado);

        //TIARADA EN LA QUE LLEGA A 100//
        if(tiradaB + puntajeJuego >= 100)
        {
            conTiradas1 - 1;
        }

        cout << endl;
        cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaB << " PUNTOS." << endl;

        system("pause");
        system("cls");

        cout << "TIRADA Nº 2 " << endl;
        cout << endl;
        cout << "TURNO DE: " << nombre2 << endl;
        cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego2 << endl;
        cout << endl;

        system("pause");

//Tirada 2: JUGADOR 2//
        hacerTirada(dado);
        conTiradas2++;


//Mostrar tirada 2: JUGADOR 2//
        mostrarTirada(dado);

/////////////////////////////////////////Sexteto B JUGADOR 2/////////////////////////////////
        numeroSexteto = sexteto(dado);

        if(numeroSexteto == 6)
        {
            puntajeJuego2 = 0;
            cout << "MALA SUERTE CHE... " << nombre2 << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
        }
        else if(numeroSexteto > 0)
        {
            tirada2 = numeroSexteto * 10;
        }


/////////////////////////////////////Escalera B JUGADOR 2///////////////////////////////////////
        bool valorEscaleraB;

        valorEscaleraB = escalera(dado);

        if(valorEscaleraB == true)
        {

            puntajeJuego2 >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre2 << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }
        else
        {
            valorEscaleraB = false;
        }

        tirada2 = SumarDados(dado);

        //TIRADA EN LA QUE LLEGA A 100//
        if(tirada2 + puntajeJuego2 >= 100)
        {
            conTiradas2 - 1;
        }

        cout << endl;
        cout << "EL JUGADOR " << nombre2 << " OBTUVO " << tirada2 << " PUNTOS. " << endl;

        system("pause");
        system("cls");

//////////////////////////////////////////////////////////////////////////////////

        cout << "TIRADA Nº 3 " << endl;
        cout << endl;
        cout << "TURNO DE: " << nombre << endl;
        cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
        cout << endl;

        system("pause");

//tirada 3 JUGADOR 1//
        hacerTirada(dado);
        conTiradas1++;


//mostrar tirada 3 JUGADOR 1//
        mostrarTirada(dado);

/////////////////////////////////////////Sexteto C JUGADOR 1/////////////////////////////////
        numeroSexteto = sexteto(dado);

        if(numeroSexteto == 6)
        {
            puntajeJuego = 0;
            cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
        }
        else if(numeroSexteto > 0)
        {
            tiradaC = numeroSexteto * 10;
        }


/////////////////////////////////////Escalera C JUGADOR 1///////////////////////////////////////
        bool valorEscalera3;

        valorEscalera3 = escalera(dado);

        if(valorEscalera3 == true)
        {

            puntajeJuego >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }
        else
        {
            valorEscalera3 = false;
        }
        tiradaC = SumarDados(dado);

        //TIRADA EN LA QUE LLEGA A 100//
        if(tiradaC + puntajeJuego >= 100)
        {
            conTiradas1;
        }

        cout << endl;
        cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaC << " PUNTOS." << endl;

        system("pause");
        system("cls");

        cout << "TIRADA Nº 3 " << endl;
        cout << endl;
        cout << "TURNO DE: " << nombre2 << endl;
        cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego2 << endl;
        cout << endl;

        system("pause");

//Tirada 3: JUGADOR 2//
        hacerTirada(dado);
        conTiradas2++;


//Mostrar tirada 3: JUGADOR 2//
        mostrarTirada(dado);

/////////////////////////////////////////Sexteto C JUGADOR 2/////////////////////////////////
        numeroSexteto = sexteto(dado);

        if(numeroSexteto == 6)
        {
            puntajeJuego = 0;
            cout << "MALA SUERTE CHE... " << nombre2 << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
        }
        else if(numeroSexteto > 0)
        {
            tirada3 = numeroSexteto * 10;
        }

/////////////////////////////////////Escalera C JUGADOR 2///////////////////////////////////////
        bool valorEscaleraC;

        valorEscaleraC = escalera(dado);

        if(valorEscaleraC == true)
        {

            puntajeJuego2 >= 100;
            cout << "NO SE PUEDE CREER!!" << nombre2 << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
            cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
            system("pause");
            break;
        }

        else
        {
            valorEscaleraC = false;
        }

        tirada3 = SumarDados(dado);

        //TIRADA EN LA QUE LLEGA A 100//
        if(tirada3 + puntajeJuego2 >= 100)
        {
            conTiradas2;
        }

        cout << endl;
        cout << "EL JUGADOR " << nombre2 << " OBTUVO " << tirada3 << " PUNTOS. " << endl;

        system("pause");

//////////////////////////////////////////////////////////////////////////////////


//Puntaje de la ronda JUGADOR 1//
        int puntajeronda = 0;

        puntajeronda = PuntajeMaxRonda (tiradaA, tiradaB, tiradaC);

        cout << "EL PUNTAJE MAXIMO DE LA RONDA " << conrondas << " PARA EL JUGADOR " << nombre << " ES: "  << puntajeronda << "." << endl;
        cout << endl;
        system("pause");
        system("cls");
//---------------------------------------------------------------------//

//Puntaje de la ronda JUGADOR 2//
        int puntajeronda2 = 0;

        puntajeronda2 = PuntajeMaxRonda (tirada1, tirada2, tirada3);
        cout << "EL PUNTAJE MAXIMO DE LA RONDA " << conrondas << " PARA EL JUGADOR " << nombre2 << " ES: "  << puntajeronda2 << "." << endl;


        cout << endl;
        system("pause");
        system("cls");

//--------------------------------------------------------------------/

//Suma de puntaje de Juego total para JUGADOR 1//

        puntajeJuego += puntajeronda;
        cout << "PUNTAJE TOTAL DE JUEGO JUGADOR " << nombre << " ES: " << puntajeJuego << "." << endl;

//Suma de puntaje de Juego total para JUGADOR 2//
        puntajeJuego2 += puntajeronda2;
        cout << "PUNTAJE TOTAL DE JUEGO JUGADOR " << nombre2 << " ES: " << puntajeJuego2 << "." << endl;

//------------------------------------------------------------------/
        system("pause");
        system("cls");

    }

///FINALIZA EL JUEGO EN ESTA LLAVE///


//ESTADISTICAS Y GANADOR DEL JUEGO//
int puntajeMaximo[0];
std::string nombrePuntajeMaximo[0];

    if(puntajeJuego >= 100 && puntajeJuego2 < 100)
    {
        cout << "--------------------------------------------------------- " <<  endl;
        cout << "FELICITACIONES " << nombre << " HAS GANADO  LA PARTIDA!! " << endl;
        cout << "--------------------------------------------------------- " <<  endl;
        if(puntajeJuego > puntajeMaximo[0])
        {
            nombrePuntajeMaximo[0] = nombre;
            puntajeMaximo[0] = puntajeJuego;
        }
        system("pause");
    }
    else if(puntajeJuego2 >= 100 && puntajeJuego < 100)
    {
        cout << "--------------------------------------------------------- " <<  endl;
        cout << "FELICITACIONES " << nombre2 << " HAS GANADO LA PARTIDA!! " << endl;
        cout << "--------------------------------------------------------- " <<  endl;
        if(puntajeJuego2 > puntajeMaximo[0])
        {
            nombrePuntajeMaximo[0] = nombre2;
            puntajeMaximo[0] = puntajeJuego2;
        }
        system("pause");
    }



    //CASO DE EMPATES//

    while(puntajeJuego >= 100 && puntajeJuego2 >= 100)
    {
        if(puntajeJuego > puntajeJuego2)
        {
            cout << "GANADOR: " << nombre << " POR SACAR MAYOR CANTIDAD DE PUNTOS QUE " << nombre2 << endl;
            if(puntajeJuego > puntajeMaximo[0])
        {
            nombrePuntajeMaximo[0] = nombre;
            puntajeMaximo[0] = puntajeJuego;
        }
            system("pause");
            break;
        }
        else if(puntajeJuego2 > puntajeJuego)
        {
            cout << "GANADOR: " << nombre2 << " POR SACAR MAYOR CANTIDAD DE PUNTOS QUE " << nombre << endl;
            if(puntajeJuego2 > puntajeMaximo[0])
        {
            nombrePuntajeMaximo[0] = nombre2;
            puntajeMaximo[0] = puntajeJuego2;
        }
            system("pause");
            break;
        }
        else if(puntajeJuego == puntajeJuego2)
        {
            if(puntajeJuego > puntajeMaximo[0])
            {
                nombrePuntajeMaximo[0] = nombre;
                puntajeMaximo[0] = puntajeJuego;
            }
            else if(puntajeJuego2 > puntajeMaximo[0])
            {
                nombrePuntajeMaximo[0] = nombre2;
                puntajeMaximo[0] = puntajeJuego2;
            }
            cout << "AL TENER LOS DOS JUGADORES LA MISMA CANTIDAD DE PUNTOS VAMOS A CONTAR LAS TIRADAS PARA VER QUIEN LLEGO A 100 PTS EN MENOS TIRADAS. " << endl;

            system("pause");
            system("cls");

            cout << nombre << " LLEGO A 100 PTS O MAS EN " << conTiradas1 << " TIRADAS " << endl;
            cout << nombre2 << " LLEGO A 100 PTS O MAS EN " << conTiradas2 << " TIRADAS " << endl;

            system("pause");

            if(conTiradas1 < conTiradas2)
            {
                cout << " GANADOR: " << nombre << endl;
                system("pause");
                break;
            }
            else if(conTiradas2 < conTiradas1)
            {
                cout << " GANADOR: " << nombre2 << endl;
                system("pause");
                break;
            }
            else if(conTiradas1 == conTiradas2)
            {

            cout << "LLEGAMOS AL CASO DE QUE HAY EMPATE TANTO EN PTS COMO EN CANTIDAD DE TIRADAS. " << endl;
            cout << "POR LO QUE VAMOS A DESEMPATAR HACIENDO UNA TIRADA MAS, EL QUE MAS PTS SAQUE ES EL GANADOR. " << endl;



            ///TIRADA DE DESEMPATE///
            int tiradaDesempateJ1 = 0;
            int tiradaDesempateJ2 = 0;

            cout << "TURNO DE: " << nombre << endl;
            cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
            cout << endl;

            system("pause");

            //tirada: Jugador 1//
            hacerTirada(dado);

       //mostrar tirada: Jugador 1//
            mostrarTirada(dado);


/////////////////////////////////////////Sexteto JUGADOR 1//////////////////////////////
            int numeroSexteto;

            numeroSexteto = sexteto(dado);

            if(numeroSexteto == 6)
            {
                tiradaDesempateJ1 = 0;
                cout << "MALA SUERTE CHE... " << nombre << " SACASTE TODOS 6 Y NO SUMASTE NINGUN PUNTO! " << endl;
            }
            else if(numeroSexteto > 0)
            {
                tiradaDesempateJ1 = numeroSexteto * 10;
            }


/////////////////////////////////////Escalera JUGADOR 1///////////////////////////////////////
            bool esEscalera1;

            esEscalera1 = escalera(dado);

            if(esEscalera1 == true)
            {

                tiradaDesempateJ1 >= 100;
                cout << "NO SE PUEDE CREER!!" << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
                system("pause");
                break;
            }
            else
            {
                esEscalera1 = false;
            }


            tiradaDesempateJ1 = SumarDados (dado);

            cout << endl;
            cout << "EL JUGADOR " << nombre << " OBTUVO " << tiradaDesempateJ1 << " PUNTOS." << endl;

            system("pause");
            system("cls");


            //Tirada: JUGADOR 2//
            hacerTirada(dado);


//Mostrar tirada: JUGADOR 2//
            mostrarTirada(dado);


/////////////////////////////////////////Sexteto JUGADOR 2///////////////////////////////
            numeroSexteto = sexteto(dado);

            if(numeroSexteto == 6)
            {
                tiradaDesempateJ2 = 0;
                cout << "MALA SUERTE CHE... " << nombre2 << " SACASTE TODOS 6 Y NO SUMASTE NINGUN PUNTO! " << endl;
            }
            else if(numeroSexteto > 0)
            {
                tiradaDesempateJ2 = numeroSexteto * 10;
            }


/////////////////////////////////////Escalera JUGADOR 2///////////////////////////////////////
            bool esEscalera2;

           esEscalera2 = escalera(dado);

            if(esEscalera2 == true)
            {

                tiradaDesempateJ2 >= 100;
                cout << "NO SE PUEDE CREER!!" << nombre2 << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
                system("pause");
                break;
            }
            else
            {
                esEscalera2 = false;
            }

            tiradaDesempateJ2 = SumarDados(dado);

            cout << endl;
            cout << "EL JUGADOR " << nombre2 << " OBTUVO " << tiradaDesempateJ2 << " PUNTOS. " << endl;

            system("pause");
            system("cls");

            if(tiradaDesempateJ1 > tiradaDesempateJ2)
            {
            cout << "GANADOR: " << nombre << " CON " << tiradaDesempateJ1 << " PUNTOS " << endl;
            system("pause");
            break;
            }
            else if(tiradaDesempateJ2 > tiradaDesempateJ1)
            {
            cout << "GANADOR: " << nombre2 << " CON " << tiradaDesempateJ2 << " PUNTOS " << endl;
            system("pause");
            break;
            }
            else if(tiradaDesempateJ1 == tiradaDesempateJ2)
            {
            cout << "LA PARTIDA A FINALIZADO EN EMPATE! " << endl;
            }


        }

      }


    }

    estadisticas(puntajeMaximo, nombrePuntajeMaximo);


}


    //MODO SIMULACION//
    void modoPrueba1Jugador()
    {

        int dado[6];
        int puntajeJuego = 0;
        string nombre;
        int edad;
        int conrondas = 0;

        system("pause");
        system("cls");

        cout << "BIENVENIDO JUGADOR!! " << endl;
        system("pause");
        system("cls");

        cout << "LE VAMOS A PEDIR LOS DATOS... " << endl;
        system("pause");
        system("cls");

        cout << "INGRESE SU EDAD: ";
        cin >> edad;

        cout << "INGRESE SU NOMBRE: ";
        cin.ignore();
        getline(cin, nombre);

        system("pause");
        system("cls");

        cout << "NOMBRE: " << nombre << " TIENE " << edad << " ANOS DE EDAD " << endl;
        system("pause");
        system("cls");

        cout << "BIENVENIDO " << nombre << "!!" << endl;
        cout << endl;
        system("pause");
        system("cls");

        while(puntajeJuego < 100)
        {
            int tirada1 = 0;
            int tirada2 = 0;
            int tirada3 = 0;

            conrondas++;
            cout << "RONDA Nº: " << conrondas << endl;
            cout << "TIRADA Nº 1 " << nombre << endl;
            cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
            cout << endl;
            system("pause");

            cout << "Ingrese los valores de los dados para la tirada 1 (6 valores): ";
            for(int i = 0; i < 6; i++)
            {
                cin >> dado[i];
            }

            int numeroSexteto = sexteto(dado);
            if(numeroSexteto == 6)
            {
                puntajeJuego = 0;
                cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
            }
            else if(numeroSexteto > 0)
            {
                tirada1 = numeroSexteto * 10;
            }
            else if(escalera(dado))
            {
                puntajeJuego = 100;
                cout << "NO SE PUEDE CREER!! " << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
                cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
                system("pause");
                break;
            }
            else
            {
                tirada1 = SumarDados(dado);
            }

            cout << endl;
            cout << "EL JUGADOR " << nombre << " OBTUVO " << tirada1 << " PUNTOS." << endl;
            system("pause");
            system("cls");

            cout << "TIRADA Nº 2 " << nombre << endl;
            cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
            cout << endl;
            system("pause");

            cout << "Ingrese los valores de los dados para la tirada 2 (6 valores): ";
            for(int i = 0; i < 6; i++)
            {
                cin >> dado[i];
            }

            numeroSexteto = sexteto(dado);
            if(numeroSexteto == 6)
            {
                puntajeJuego = 0;
                cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
            }
            else if(numeroSexteto > 0)
            {
                tirada2 = numeroSexteto * 10;
            }
            else if(escalera(dado))
            {
                puntajeJuego = 100;
                cout << "NO SE PUEDE CREER!! " << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
                cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
                system("pause");
                break;
            }
            else
            {
                tirada2 = SumarDados(dado);
            }

            cout << endl;
            cout << "EL JUGADOR " << nombre << " OBTUVO " << tirada2 << " PUNTOS." << endl;
            system("pause");
            system("cls");

            cout << "TIRADA Nº 3 " << nombre << endl;
            cout << "PUNTAJE TOTAL DE JUEGO: " << puntajeJuego << endl;
            cout << endl;
            system("pause");

            cout << "Ingrese los valores de los dados para la tirada 3 (6 valores): ";
            for(int i = 0; i < 6; i++)
            {
                cin >> dado[i];
            }

            numeroSexteto = sexteto(dado);
            if(numeroSexteto == 6)
            {
                puntajeJuego = 0;
                cout << "MALA SUERTE CHE... " << nombre << " sacaste todos los dados en 6 y reseteaste el puntaje a 0! " << endl;
            }
            else if(numeroSexteto > 0)
            {
                tirada3 = numeroSexteto * 10;
            }
            else if(escalera(dado))
            {
                puntajeJuego = 100;
                cout << "NO SE PUEDE CREER!! " << nombre << " GANASTE LA PARTIDA AUTOMATICAMENTE, SALIO ESCALERA! " << endl;
                cout << "TE TOMO " << conrondas << " RONDAS GANAR LA PARTIDA. " << endl;
                system("pause");
                break;
            }
            else
            {
                tirada3 = SumarDados(dado);
            }

            cout << endl;
            cout << "EL JUGADOR " << nombre << " OBTUVO " << tirada3 << " PUNTOS." << endl;
            system("pause");
            system("cls");

            // Puntaje de la ronda
            int puntajeronda = PuntajeMaxRonda(tirada1, tirada2, tirada3);
            cout << "EL PUNTAJE MAXIMO DE LA RONDA " << conrondas << " PARA EL JUGADOR " << nombre << " ES: "  << puntajeronda << "." << endl;
            cout << endl;
            system("pause");
            system("cls");

            // Suma de puntaje de Juego total
            puntajeJuego += puntajeronda;
            cout << "PUNTAJE TOTAL DE JUEGO JUGADOR " << nombre << " ES: " << puntajeJuego << "." << endl;
            system("pause");
            system("cls");

            // Ganador del juego
            if(puntajeJuego >= 100)
            {
                cout << "FELICITACIONES " << nombre << " HAS GANADO LA PARTIDA!! " << endl;
                cout << endl;
                system("pause");
                system("cls");
            }
        }



}
