#include <iostream>

class Paciente
{
private:
    std::string nombre;
    std::string condicion;
    int sesiones_completadas;

public:
    Paciente(std::string _nombre, std::string _condicion, int sesiones) : // Constructor parametrizado
                                                                          nombre(_nombre), condicion(_condicion), sesiones_completadas(sesiones)
    {
    }

    // Metodos getter
    std::string getNombre()
    {
        return this->nombre;
    }
    std::string getCondicion()
    {
        return this->condicion;
    }
    int getSesiones()
    {
        return this->sesiones_completadas;
    }
    // Metodos setter
    void setSesiones(int sesion)
    {
        this->sesiones_completadas = sesion;
    }
};

int main(int argc, char const *argv[])
{
    /* Introduzca su código */
    return 0;
}
