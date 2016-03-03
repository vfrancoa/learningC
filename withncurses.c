#include <ncurses.h>

int marco();

int main() {
	char nombre[30];
	char pass[30];

    initscr();
    if( has_colors() )
	{	
		start_color();
    	init_pair(1,COLOR_GREEN,COLOR_BLACK);
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
	int i;char c; 
	c=61;//caracter ascci horizontal 
   	for(i=1;i<=82;i++) 
   	{ 
      //linea horizontal superior 
      move(1,i);  
      printw("%c",c); 
      move(21,i);  
      printw("%c",c);  
   	} 
   c=58 ; //caracter ascci vertical 
   for(i=2;i<=20;i++) 
   { 
      //linea vertical izquierda 
      move(i,1); 
      printw("%c",c); 
      //linea vertical derecha 
      move(i,82); 
      printw("%c",c); 
   } 

   return 0;
}