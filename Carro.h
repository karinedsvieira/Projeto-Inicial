//
// Created by Karine Vieira on 03/10/17.
//

#ifndef PROJETOINICIAL_CARRO_H
#define PROJETOINICIAL_CARRO_H

#include <string>

using namespace std;

class Carro{
private:
    string placa;
    string cor;
    string marca;

public:
    Carro(string Placa, string Cor, string Marca) {
        Carro::placa = Placa;
        Carro::cor = Cor;
        Carro::marca = Marca;
    }

    const string getPlaca() const {
        return placa;
    }

    void setPlaca(const string placa) {
        Carro::placa = placa;
    }

    const string getCor() const {
        return cor;
    }

    void setCor(const string cor) {
        Carro::cor = cor;
    }

    const string getMarca() const {
        return marca;
    }

    void setMarca(const string marca) {
        Carro::marca = marca;
    }
};

#endif //PROJETOINICIAL_CARRO_H
