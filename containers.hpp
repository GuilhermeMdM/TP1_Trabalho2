#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "biblioteca_de_classes/dominios.hpp"
#include "biblioteca_de_classes/entidades.hpp"

#include <iostream>

#include <map>

using namespace std;

//Autor: 221006431
class ContainerConta{
private:
    map<Email, Conta> container;
public:
    bool incluir(Conta);
    bool remover(Email);
    bool pesquisar(Conta*);
    bool pesquisar(Email*, Conta* = nullptr);
    bool atualizar(Conta);
};

//Autor: 221006431
class ContainerQuadro{
private:
    map<Codigo, Quadro> container;
public:
    bool incluir(Quadro);
    bool remover(Codigo);
    bool pesquisar(Quadro*);
    bool atualizar(Quadro);
};

//Autor: 221006431
class ContainerCartao{
private:
    map<Codigo, Cartao> container;
public:
    bool incluir(Cartao);
    bool remover(Codigo);
    bool pesquisar(Cartao*);
    bool atualizar(Cartao);
};




#endif //CONTAINERS_H_INCLUDED