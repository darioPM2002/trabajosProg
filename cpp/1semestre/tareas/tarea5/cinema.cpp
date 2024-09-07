  #include "cinema.h"
  cinema::cinema(){
    autos=10;
    clientes_cont=0;
  };
  cinema::cinema(int autos){
    std::cout << "Numero de autos:" <<autos<< std::endl;
    autos=autos;
    clientes_cont=0;
    clientes = new cliente[autos];
    boletos_contador_premiere=0;
    boletos_contador_vip=0;
    boletos_contador_normal=0;
  };
  void cinema::agregarClientes(cliente cliente_nuevo){
    autos=10;
    
   
    if (clientes_cont==0){
     std::cout << "Felicidades obtuviste un descuento del 10 por ciento" << std::endl; 
    }
    if (clientes_cont<autos or clientes_cont==0 )
    {
        if (cliente_nuevo.getTicket()=="normal"){

      boletos_contador_normal =boletos_contador_normal +1;
   
     }
    
      else if (cliente_nuevo.getTicket()=="vip"){
      
        boletos_contador_vip =boletos_contador_vip +1;
      }

      else if (cliente_nuevo.getTicket()=="premiere"){
      
        boletos_contador_premiere =boletos_contador_premiere +1;
      }

        std::cout << "agregado cliente numero:" << clientes_cont +1<< std::endl;
          clientes[clientes_cont++]=cliente_nuevo;
    }else{
     
       
        std::cout << "Error no puedes agregar más" << std::endl;
    }
    
    
  };


   int cinema::get_boletos_contador_vip(){
    return boletos_contador_vip;
   };
   int cinema::get_boletos_contador_noraml(){
    return boletos_contador_normal;
   };
   int cinema::get_boletos_contador_premiere(){
    return boletos_contador_premiere;
   };


  void cinema::contarBoletos(){

    for (size_t i = 0; i < 10; i++)
    {
      cliente cliente_nuevo= clientes[i];
      
      if (cliente_nuevo.getTicket()=="normal"){
      boletos_contador_normal =boletos_contador_normal +1;
      std::cout << "noraml" << std::endl;
    }
    
    else if (cliente_nuevo.getTicket()=="vip"){
      std::cout << "vip" << std::endl;
      boletos_contador_vip =boletos_contador_vip +1;
    }
    
    else if (cliente_nuevo.getTicket()=="premiere"){
      std::cout << "premiere" << std::endl;
      boletos_contador_premiere =boletos_contador_premiere +1;
    }
    }
    

  };