#include "containers.hpp"

//ContainerConta
//autor: 221006431
bool ContainerConta::incluir(Conta conta){
    return container.insert(make_pair(conta.getEmail().getValor(), conta)).second;
}

bool ContainerConta::remover(Email email){
    map<int, Conta>::iterator it = container.find(email.getValor());
    if(it != container.end()){
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerConta::pesquisar(Conta *conta){
    map<int, Conta>::iterator it = container.find(conta->getEmail().getValor());
    if(it != container.end()){
        *conta = it->second;
        return true;
    }
    return false;
}

bool ContainerConta::pesquisar(Email *email, Conta*conta = nullptr){
    map<int, Conta>::iterator it = container.find(email->getValor());
    if(it != container.end()){
        *conta = it->second;
        return true;
    }
    return false;
}

bool ContainerConta::atualizar(Conta conta){
    map<int, Conta>::iterator it = container.find(conta.getEmail().getValor());
    if(it != container.end()){
        it->second = conta;
        return true;
    }
    return false;
}


//ContainerQuadro
//autor: 221006431
bool ContainerQuadro::incluir(Quadro quadro){
    return container.insert(make_pair(quadro.getCodigo().getValor(), quadro)).second;
}

bool ContainerQuadro::remover(Codigo codigo){
    map<int, Quadro>::iterator it = container.find(codigo.getValor());
    if(it != container.end()){
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerQuadro::pesquisar(Quadro *quadro){
    map<int, Quadro>::iterator it = container.find(quadro->getCodigo().getValor());
    if(it != container.end()){
        *quadro = it->second;
        return true;
    }
    return false;
}

bool ContainerQuadro::atualizar(Quadro quadro){
    map<int, Quadro>::iterator it = container.find(quadro.getCodigo().getValor());
    if(it != container.end()){
        it->second = quadro;
        return true;
    }
    return false;
}


//ContainerCartao
//autor: 221006431
bool ContainerCartao::incluir(Cartao cartao){
    return container.insert(make_pair(cartao.getCodigo().getValor(), cartao)).second;
}

bool ContainerCartao::remover(Codigo codigo){
    map<int, Cartao>::iterator it = container.find(codigo.getValor());
    if(it != container.end()){
        container.erase(it);
        return true;
    }
    return false;
}

bool ContainerCartao::pesquisar(Cartao *cartao){
    map<int, Cartao>::iterator it = container.find(cartao->getCodigo().getValor());
    if(it != container.end()){
        *cartao = it->second;
        return true;
    }
    return false;
}

bool ContainerCartao::atualizar(Cartao cartao){
    map<int, Cartao>::iterator it = container.find(cartao.getCodigo().getValor());
    if(it != container.end()){
        it->second = cartao;
        return true;
    }
    return false;
}