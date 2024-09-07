#include "Farmacia.h"
Farmacia::Farmacia(/* args */)
{
    listProductosContador=0;
    listaDeProductos = new ProductoBase[10];


}

Farmacia::Farmacia(int numero_productos, int numeroClientes)
{
  numero_clietnets=numeroClientes;
  listProductosContador=0;

  listaDeProductos = new ProductoBase[100];
  listaClientes = new Cliente[numero_clietnets];



  contadorMayores=0;
  contadorHombres=0;
  contadorMujeres=0;
  contadorUsuarios=0;
  contadorMenores=0;

  contadorBarometro=0.0;
  contadorCepillo=0.0;
  contadorCuritas=0.0;
  contadorDesodorante=0.0;
  contadorJeringa=0.0;
  contadorPaniales=0.0;
  contadorSuero=0.0;
  contadorTermometro=0.0;
  contadorVendas=0.0;
  contadorVitaminas=0.0;
  totalBarometro=0.0;
  totalCepillo=0.0;
  totalCuritas=0.0;
  totalDesodorante=0.0;
  totalJeringa=0.0;
  totalPaniales=0.0;
  totalSuero=0.0;
  totalTermometro=0.0;
  totalVendas=0.0;
  totalVitaminas=0.0;
  ventasTotales=0;
  totalArticulos=0;
}

void Farmacia::agreagarProducto(double precio_user, std::string ID_user){

ProductoBase productoBaseTemporal(precio_user,ID_user);
listaDeProductos[listProductosContador++]=productoBaseTemporal;
std::cout << "Producto agregado" << std::endl;
};



//getters contador


    int Farmacia::get_contadorBarometro  (){return contadorBarometro;};
    int Farmacia::get_contadorCepillo    (){return contadorCepillo;};
    int Farmacia::get_contadorCuritas    (){return contadorCuritas;};
    int Farmacia::get_contadorDesodorante(){return contadorDesodorante;};
    int Farmacia::get_contadorJeringa    (){return contadorJeringa;};    
    int Farmacia::get_contadorPaniales   (){return contadorPaniales;};    
    int Farmacia::get_contadorSuero      (){return contadorSuero;};
    int Farmacia::get_contadorTermometro (){return contadorTermometro;};
    int Farmacia::get_contadorVendas     (){return contadorVendas;};
    int Farmacia::get_contadorVitaminas  (){return contadorVitaminas;};

    double Farmacia::get_totalBarometro  (){return totalBarometro; };
    double Farmacia::get_totalCepillo    (){return totalCepillo; };
    double Farmacia::get_totalCuritas    (){return totalCuritas; };
    double Farmacia::get_totalDesodorante(){return totalDesodorante; };
    double Farmacia::get_totalJeringa    (){return totalJeringa; };    
    double Farmacia::get_totalPaniales   (){return totalPaniales; };    
    double Farmacia::get_totalSuero      (){return totalSuero; };
    double Farmacia::get_totalTermometro (){return totalTermometro; };
    double Farmacia::get_totalVendas     (){return totalVendas; };
    double Farmacia::get_totalVitaminas  (){return totalVitaminas; };


    bool Farmacia::verifiicarUsuario(std::string nombre_user){
      for (int i = 0; i < numero_clietnets; i++)
      {

        if (listaClientes[i].get_nombre() ==nombre_user)
        {

          return true;
        }
        
      }

      return false;

      

    };


    void Farmacia::ventaCliente(Cliente user, std::string ID_productoComprado, double precio_user){
        agreagarProducto(precio_user, ID_productoComprado);


        if (verifiicarUsuario(user.get_nombre()))
        {

        }else
        {
          
          if (contadorUsuarios<numero_clietnets)
          {
           
          listaClientes[ contadorUsuarios++] =user;
         
          if (user.get_mayorEdad()=="mayor")
          {
           contadorMayores++; 
          }else
          {
            contadorMenores++;
          }

          if (user.get_genero() =="H")
          {
            contadorHombres++;
          }else
          {
            contadorMujeres++;
          } 
            
          }else
          {
            std::cout << "Error no se puede agregar otro cliente nuevo" << std::endl;
          }
          
          
          
          
          
          
        }
        
    };



 void Farmacia::contadorDeProductos(){
    for (int i = 0; i < listProductosContador; i++)
    {
        if (listaDeProductos[i].getID() =="1")
        {
            contadorBarometro++;
            totalBarometro = totalBarometro +listaDeProductos[i].getPrecio();
        }
         if (listaDeProductos[i].getID() =="2")
        {
            contadorCepillo++;
            totalCepillo = totalCepillo +listaDeProductos[i].getPrecio();
            
        }
          if (listaDeProductos[i].getID() =="3")
        {
            contadorCuritas++;
            totalCuritas = totalCuritas +listaDeProductos[i].getPrecio();
            
        }
          if (listaDeProductos[i].getID() =="4")
        {
            contadorDesodorante++;
            totalDesodorante = totalDesodorante +listaDeProductos[i].getPrecio();
            
        }
          if (listaDeProductos[i].getID() =="5")
        {
            contadorJeringa++;
            totalJeringa = totalJeringa +listaDeProductos[i].getPrecio();
            
        }
          if (listaDeProductos[i].getID() =="6")
        {
            contadorPaniales++;
            totalPaniales = totalPaniales +listaDeProductos[i].getPrecio();

        }
          if (listaDeProductos[i].getID() =="7")
        {
            contadorSuero++;
            totalSuero = totalSuero +listaDeProductos[i].getPrecio();

        }
          if (listaDeProductos[i].getID() =="8")
        {
            contadorTermometro++;   
            totalTermometro = totalTermometro +listaDeProductos[i].getPrecio();
       
        }
          
          if (listaDeProductos[i].getID() =="9")
        {
            contadorVendas++;
            totalVendas = totalVendas +listaDeProductos[i].getPrecio();
           
        }
          if (listaDeProductos[i].getID() =="10")
        {
            contadorVitaminas++;
            totalVitaminas = totalVitaminas +listaDeProductos[i].getPrecio();
        }
        
        
    }

    totalArticulos=totalArticulos+contadorBarometro+contadorCepillo+contadorCuritas+contadorDesodorante+contadorJeringa+contadorPaniales+contadorSuero+contadorTermometro+contadorVendas+contadorVitaminas;
    ventasTotales=totalBarometro+totalCepillo+totalCuritas+totalDesodorante+totalJeringa+totalPaniales+totalSuero+totalTermometro+totalVendas+totalVitaminas;



    std::cout << "----------------------------------------" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Ventas totales:" << std::endl;
    std::cout << "" << std::endl;
    estadisticasProductos();
    std::cout << contadorBarometro <<" Barometros, dando un total de $"<< totalBarometro<<std::endl;
    std::cout << contadorCepillo <<" Cepillos, dando un total de $"<< totalCepillo<<std::endl;
    std::cout << contadorCuritas <<" Curitas, dando un total de $"<< totalCuritas<<std::endl;    
    std::cout << contadorDesodorante <<" Desodorantes, dando un total de $"<< totalDesodorante<<std::endl;      
    std::cout << contadorJeringa <<" Jeringas, dando un total de $"<< totalJeringa<<std::endl;   
    std::cout << contadorPaniales <<" Pañales, dando un total de $"<< totalPaniales<<std::endl;
    std::cout << contadorSuero <<" Sueros, dando un total de $"<< totalSuero<<std::endl;
    std::cout << contadorTermometro <<" Termometros, dando un total de $"<< totalTermometro<<std::endl;    
    std::cout << contadorVendas <<" Vendas, dando un total de $"<< totalVendas<<std::endl;      
    std::cout << contadorVitaminas <<" Vitaminas, dando un total de $"<< totalVitaminas<<std::endl;             
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Productos totales vendidos: " << totalArticulos<< std::endl;
    std::cout << "Suma de todos los artículos: $" << ventasTotales<< std::endl;  
    std::cout << "----------------------------------------" << std::endl;      
    std::cout << "" << std::endl; 
    std::cout << "----------------------------------------" << std::endl;      
    std::cout << "" << std::endl;
    std::cout << "Usuarios totales: " << contadorUsuarios<< std::endl;
    std::cout << "Usuarios mayores de edad: " << contadorMayores<< std::endl;
    std::cout << "Usuarios menores de edad: " << contadorMenores<< std::endl; 
    std::cout << "Usuarios hombres: " << contadorHombres<< std::endl;
    std::cout << "Usuarios mujeres: " << contadorMujeres<< std::endl; 
    std::cout << "" << std::endl; 
    std::cout << "----------------------------------------" << std::endl;              

 };


     void Farmacia::estadisticasProductos(){

      double masVen=0;
      double menosVen=0;
    
      if (masVen<=contadorBarometro)
      {
       masVen=contadorBarometro;
      }
         if (masVen<=contadorCepillo)
      {
       masVen=contadorCepillo;
      }
         if (masVen<=contadorCuritas)
      {
       masVen=contadorCuritas;
      }
         if (masVen<=contadorDesodorante)
      {
       masVen=contadorDesodorante;
      }
         if (masVen<=contadorJeringa)
      {
       masVen=contadorJeringa;
      }
         if (masVen<=contadorPaniales)
      {
       masVen=contadorPaniales;
      }
         if (masVen<=contadorSuero)
      {
       masVen=contadorSuero;
      }
         if (masVen<=contadorTermometro)
      {
       masVen=contadorTermometro;
      }
         if (masVen<=contadorVendas)
      {
       masVen=contadorVendas;
      }
         if (masVen<=contadorVitaminas)
      {
       masVen=contadorVitaminas;
      }


         if (menosVen>=contadorBarometro)
      {
       menosVen=contadorBarometro;
      }
        if (menosVen>=contadorCepillo)
      {
       menosVen=contadorCepillo;
      }
         if (menosVen>=contadorCuritas)
      {
       menosVen=contadorCuritas;
      }
         if (menosVen>=contadorDesodorante)
      {
       menosVen=contadorDesodorante;
      }
         if (menosVen>=contadorJeringa)
      {
       menosVen=contadorJeringa;
      }
         if (menosVen>=contadorPaniales)
      {
       menosVen=contadorPaniales;
      }
         if (menosVen>=contadorSuero)
      {
       menosVen=contadorSuero;
      }
         if (menosVen>=contadorTermometro)
      {
       menosVen=contadorTermometro;
      }
         if (menosVen>=contadorVendas)
      {
       menosVen=contadorVendas;
      }
         if (menosVen>=contadorVitaminas)
      {
       menosVen=contadorVitaminas;
      }
                         
      std::cout << "El artículo que más se vendio tiene: " << masVen<< " ventas"<<std::endl;

      std::cout << "El artículo que menos se vendio tiene: "  << menosVen<<" ventas"<< std::endl;
     };   