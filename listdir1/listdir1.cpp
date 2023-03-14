#include <iostream>
#include <filesystem>
#include <fstream>
#include "json/json.h"

namespace fs = std::filesystem;

int main()
{
    std::cout << "Ingrese el directorio a leer: ";
    std::string dir_name;
    std::getline(std::cin, dir_name); //toma el directorio que ingrese y se lo asigna a dir_name
    std::cout << dir_name;
    // Crea un objeto JSON
    Json::Value files;
    // Itera sobre todos los archivos en el directorio
    for (const auto& file : fs::directory_iterator(dir_name))
    {
        // Obtiene el nombre y tamaño del archivo
        std::string file_name = file.path().filename().string();
        std::uintmax_t file_size = fs::file_size(file);

        // Crea un objeto JSON para el archivo y agrega el nombre y tamaño como miembros
        Json::Value file_obj;
        file_obj["name"] = file_name;
        file_obj["size"] = file_size;

        // Agrega el objeto JSON del archivo al objeto JSON de archivos
        files.append(file_obj);
    }

    // Crea un objeto JSON raíz y agrega el objeto JSON de archivos como un miembro
    Json::Value root;
    root["files"] = files;

    // Crea un archivo de salida y escribe el objeto JSON raíz en él
    std::ofstream out_file("file.json");
    out_file << root << std::endl;

    

    return 0;
}