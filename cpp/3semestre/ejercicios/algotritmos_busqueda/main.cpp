int busquedaSecuencial(int vector [], int N, int valor){
//en complejidad espacial como es un vector, entonces es n 
    int i = 0;
    int encontrado = -1; //-1 significa que aun no lo ha encontrado
    while (encontrado ==-1 && i<N)
    {
        if (valor == vector[i])
        {
            encontrado = i;
        }
        i++
    }
    return encontrado;


}