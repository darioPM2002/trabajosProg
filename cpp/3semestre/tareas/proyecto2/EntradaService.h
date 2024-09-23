#include <iostream>
#include <vector>
#include <fstream>  // Para manejo de archivos
#include <sstream> 
#include "Entrada.h"
#include <string>
template <class T>
class EntradaService
{
private:
    /* data */
public:
    
   static std::vector<T> ObtenerDB(const std::string&);


};



template <class T>
inline std::vector<T> EntradaService<T>::ObtenerDB(const std::string& nombreArchivo)
{
    
   std::ifstream archivo(nombreArchivo); 
   std::vector<T> db;
       if (!archivo.is_open()) {
        std::cerr << "Error al abrir" << std::endl;
        return db;
    } 
    std::string linea; 
      while (std::getline(archivo, linea)) { 

      std::stringstream ss(linea);       // Crear un stringstream de la línea
      std::string valor;
      std::string fecha, hora, ipOrigen, puertoOrigenSt, nombreOrigen, ipDestino, puertoDestinoSt, nombreDestino, puertoOrigen, puertoDestino;
      
      std::getline(ss, fecha, ',');        // Leer el nombre
      std::getline(ss, hora, ',');       // Leer la edad como string
      std::getline(ss, ipOrigen, ',');   
      std::getline(ss, puertoOrigenSt, ',');        // Leer el nombre
      std::getline(ss, nombreOrigen, ',');       // Leer la edad como string
      std::getline(ss, ipDestino, ',');  
      std::getline(ss, puertoDestinoSt, ',');        // Leer el nombre
      std::getline(ss, nombreDestino, ',');       // Leer la edad como string

      puertoOrigen =  std::stoi(puertoOrigenSt);
      puertoDestino = std::stoi(puertoDestinoSt); 
    
db.emplace_back(Entrada("", "", "", 132, "", "",321, ""));

      }
      archivo.close();

      return db;


}


