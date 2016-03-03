/*
Uso de la libreria ncurses.h
como reemplazo de codio.h en turbo c
*/

#include <ncurses.h>

int marco();
<<<<<<< HEAD
=======

int main() 
{
  char nombre[30];
  char pass[30];

  initscr();
>>>>>>> efd0140704e5f8fbae24459f7ee9f52a79922c6f

  if( has_colors() )
  {	
  	start_color();
    init_pair(1,COLOR_RED,COLOR_BLACK);
    attron(COLOR_PAIR(1)); 
    marco();
    mvprintw(2,25, "Bienvenido - Inicio Session");
    mvprintw(4,5, "Nombre:");
    mvscanw(4,15, "%s", nombre);
    mvprintw(5,5, "Password:");
    noecho();
    mvscanw(5,15, "%s", pass);
    attroff(COLOR_PAIR(1)); 
    erase();
    mvprintw(2,10, "Hola, %s", nombre);
  }
  refresh();
  getch();
  endwin();
  return 0;
}

int marco()
{
	int i;char cy, cx; 
  int parent_x, parent_y;
	cx=61;//caracter ascci horizontal 
  
  //obtener dimensiones de la pantalla
  getmaxyx(stdscr, parent_y, parent_x);

  for(i=1;i<parent_x;i++) 
  { 
    //linea horizontal superior 
    move(1,i);  
    printw("%c",cx); 
    move( (parent_y-1),i);  
    printw("%c",cx);  
  } 
  cy=58 ; //caracter ascci vertical 
  for(i=2;i<parent_y;i++) 
  { 
    //linea vertical izquierda 
    move(i,1); 
    printw("%c",cy); 
    //linea vertical derecha 
    move(i,(parent_x-1) ); 
    printw("%c",cy); 
  } 

  return 0;
}