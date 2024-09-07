
#include "Disco.h"
#include <iostream>
Disco::Disco(){

numero_canciones=10;
contador =0;
artista ="no name";
nombre_disquera= "no name";
pais_origen = "no name";
duracion_disco =0;
};
Disco::Disco(int numero_canciones_user, std::string artista, std::string nombre_disquera, std::string pais_origen){

disco_canciones= new Cancion[5];
numero_canciones=numero_canciones_user;
contador =0;
artista = artista;
nombre_disquera= nombre_disquera;
pais_origen = pais_origen;
};

void Disco::agregar_cancion(Cancion cancion_agregar){
  
   
    

        if (contador<numero_canciones)
        {
            std::cout << "Cancion agregada"<< std::endl;
           disco_canciones[contador] = cancion_agregar;
           contador= contador+1;
        }else{
            std::cout << "No se pueden agregar más canciones" << std::endl;
        }
        
        
     };


void Disco::calcular_duracion(){

     double duracion=0;

  
        int i =0;
        while (i < numero_canciones)
        {
            double duracion_cancion= disco_canciones[i].getDuracion();
            
           duracion = duracion+ duracion_cancion;
           i =i+1;
        }
        
        std::cout << "duracion total " << duracion<<" segundos"<< std::endl;
   

    
};


 void Disco::set_artista         (std::string valor){artista=valor;};
 void Disco::set_nombre_disquera (std::string valor){nombre_disquera=valor;};
 void Disco::set_pais_origen     (std::string valor){pais_origen=valor;};
 void Disco::set_duracion_disco  (double valor)     {duracion_disco=valor;};

 
 std::string Disco::get_artista         (){return artista;};
 std::string Disco::get_nombre_disquera (){return nombre_disquera;};
 std::string Disco::get_pais_origen     (){return pais_origen;};
 double Disco::get_duracion_disco  (){return duracion_disco;};