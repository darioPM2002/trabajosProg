#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>
using namespace std;

void leerArchivo(vector<string>& fechas, vector<string>& horas, 
                 vector<string>& ipsOrigen, vector<string>& puertosOrigen, 
                 vector<string>& nombresOrigen, vector<string>& puertosDestino) 
{
    ifstream archivo("equipo2.csv");

    string linea;

    while (getline(archivo, linea)) 
    {
        stringstream ss(linea);

        string fecha, hora, ipOrigen, puertoOrigen, nombreOrigen, ipDestino, puertoDestino, nombreDestino;

        getline(ss, fecha, ',');
        getline(ss, hora, ',');
        getline(ss, ipOrigen, ',');
        getline(ss, puertoOrigen, ',');
        getline(ss, nombreOrigen, ',');
        getline(ss, ipDestino, ',');
        getline(ss, puertoDestino, ',');
        getline(ss, nombreDestino, ',');

        fechas.push_back(fecha);
        horas.push_back(hora);
        ipsOrigen.push_back(ipOrigen);
        puertosOrigen.push_back(puertoOrigen);
        nombresOrigen.push_back(nombreOrigen);
        puertosDestino.push_back(puertoDestino);
    }

    archivo.close();
}

int contarTotalRegistros(vector<string>& fechas) 
{
    return fechas.size(); 
}

void buscarNombreSegundoDia(vector<string>& fechas, vector<string>& nombres, 
                            string nombreBuscado, vector<int>& posiciones) 
{
    if (fechas.size() < 2) 
    {
        cout << "Aún no tenemos suficientes días registrados para buscar en el segundo." << endl;
        return; 
    }

    string segundoDia = fechas[1];

    for (size_t i = 0; i < nombres.size(); i++) 
    {
        if (fechas[i] == segundoDia && nombres[i].find(nombreBuscado) != string::npos) 
        {
            posiciones.push_back(i); 
        }
    }
}

void buscarPuertosMenores1000(vector<string>& puertos, set<string>& puertosUnicos) 
{
    for (size_t i = 0; i < puertos.size(); i++) 
    {
        try 
        {
            int numeroPuerto = stoi(puertos[i]);

            if (numeroPuerto < 1000) 
            {
                puertosUnicos.insert(puertos[i]); 
            }
        } 
        catch (const invalid_argument&) 
        {
            continue; 
        }
    }
}

void mostrarRegistros(vector<int>& posiciones, vector<string>& fechas, vector<string>& horas, 
                      vector<string>& ipsOrigen, vector<string>& puertosOrigen, 
                      vector<string>& nombresOrigen, int maximo) 
{
    for (int i = 0; i < maximo; i++) 
    {
        int pos = posiciones[i];

        cout << "Posición en archivo: " << pos << ", Fecha: " << fechas[pos]
             << ", Hora: " << horas[pos] << ", IP Origen: " << ipsOrigen[pos]
             << ", Puerto Origen: " << puertosOrigen[pos] << ", Nombre Origen: " << nombresOrigen[pos] << endl;
    }
}

int main() 
{
    vector<string> fechas, horas, ipsOrigen, puertosOrigen, nombresOrigen, puertosDestino;

    leerArchivo(fechas, horas, ipsOrigen, puertosOrigen, nombresOrigen, puertosDestino);

    int totalRegistros = contarTotalRegistros(fechas);
    cout << "El archivo tiene un total de " << totalRegistros << " registros." << endl;

    string nombreBuscado;
    cout << "Ingresa el nombre que quieres buscar: ";
    cin >> nombreBuscado;

    if (nombreBuscado.find(".reto.com") != string::npos) 
    {
        nombreBuscado = nombreBuscado.substr(0, nombreBuscado.find(".reto.com")); 
    }

    vector<int> posicionesNombre;
    buscarNombreSegundoDia(fechas, nombresOrigen, nombreBuscado, posicionesNombre);

    int totalNombres = posicionesNombre.size();
    cout << "Encontramos el nombre '" << nombreBuscado << "' " << totalNombres 
         << " veces en el segundo día registrado." << endl;

    int maximoAMostrar = (totalNombres > 10) ? 10 : totalNombres;

    if (maximoAMostrar > 0) 
    {
        cout << "Mostrando los primeros " << maximoAMostrar << " registros con el nombre '" 
             << nombreBuscado << "' en el segundo día:" << endl;
        mostrarRegistros(posicionesNombre, fechas, horas, ipsOrigen, puertosOrigen, nombresOrigen, maximoAMostrar);
    } 
    else 
    {
        cout << "No encontramos ningún registro con el nombre '" << nombreBuscado 
             << "' en el segundo día registrado." << endl;
    }

    set<string> puertosUnicos;
    buscarPuertosMenores1000(puertosDestino, puertosUnicos);
    cout << "Estos son los puertos menores a 1000 que encontramos: " << endl;
    for (const auto& puerto : puertosUnicos) 
    {
        cout << "Puerto: " << puerto << endl;
    }

    return 0;
}