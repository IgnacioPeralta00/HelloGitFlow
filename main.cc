#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Paciente
{
private:
    std::string nombre;
    std::string condicion;
    int sesiones_completadas;
    int id;

public:
    Paciente(std::string _nombre, std::string _condicion, int sesiones, int _id) : // Constructor parametrizado
                                                                                   nombre(_nombre), condicion(_condicion), sesiones_completadas(sesiones), id(_id)
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
    int getID()
    {
        return this->id;
    }
    // Metodos setter
    void setSesiones(int sesion)
    {
        this->sesiones_completadas = sesion;
    }
    void setID(int id) // Si se llega a necesitar un cambio de id, diferente al asignado inicialmente
    {
        this->id = id;
    }
};

class RegistroPacientes
{
private:
    std::vector<Paciente> lista_pacientes;

public:
    int GeneradorID()
    {
        return (rand() % 900 + 100);
    }

    void AgregarPaciente()
    {
        std::string nombre, condicion;
        int _id = 0;
        std::cout << "\n\t|NUEVO PACIENTE|" << std::endl;
        std::cout << "Nombre: ";
        std::getline(std::cin, nombre);
        std::cout << "Condicion: ";
        std::getline(std::cin, condicion);
        _id = GeneradorID();
        std::cout << "ID asignado: #" << _id;

        lista_pacientes.push_back(Paciente(nombre, condicion, 0, _id)); // Un nuevo paciente no posee sesiones completadas
    }

    void MostrarPacientes()
    {
        std::cout << "\n\t|INFO PACIENTES|" << std::endl;
        std::cout << "-------------------------\n";
        for (auto &p : lista_pacientes)
        {
            std::cout << "Nombre: " << p.getNombre() << std::endl;
            std::cout << "Condicion: " << p.getCondicion() << std::endl;
            std::cout << "Sesiones completadas: " << p.getSesiones() << std::endl;
            std::cout << "ID: #" << p.getID() << std::endl;
            std::cout << "-------------------------\n";
        }
    }
};

int main(int argc, char const *argv[])
{
    /* Introduzca su código */
    RegistroPacientes lista;
    lista.AgregarPaciente();
    lista.AgregarPaciente();
    lista.MostrarPacientes();

    return 0;
}
