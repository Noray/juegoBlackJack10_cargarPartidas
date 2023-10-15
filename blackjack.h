#ifndef __BLACKJACK__H__
#define __BLACKJACK__H__
#define MAX 100
#define MAX_JUGADORES 4

struct jugador
{
    char nombre[MAX];
    int puntos;
};

struct jugador jugadores[MAX_JUGADORES];

void menu();

void jugarPartida();

void cargarPartidas();


#endif  //!__BLACKJACK__H__