#include "Cancion.h"
#include <iostream>
class Disco
{
private:

Cancion* disco_canciones;
int numero_canciones;
int contador;
std::string artista;
std::string nombre_disquera;
std::string pais_origen;
double duracion_disco;
public:

Disco();
Disco(int numero_canciones_user, std::string artista, std::string nombre_disquera, std::string pais_origen);

void agregar_cancion(Cancion cancion_agregar);

void calcular_duracion ();

void set_artista         (std::string valor);
void set_nombre_disquera (std::string valor);
void set_pais_origen     (std::string valor);
void set_duracion_disco  (double valor);

std::string get_artista         ();
std::string get_nombre_disquera ();
std::string get_pais_origen     ();
double      get_duracion_disco  ();


};

