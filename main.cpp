#include <stdexcept>
#include <iostream>
#include <string>

#include "biblioteca_de_classes/dominios.hpp"
#include "interfaces.hpp"
#include "cntrApresentacao.hpp"
#include "stubs.hpp"

using namespace std;

int main()
{
    // -------------------------------------------------------------------------------------------
    // Declarar ponteiros e instanciar controladoras.
    
    CntrApresentacaoInicializacao *cntrApresentacaoInicializacao;

    IApresentacaoAutenticacao  *cntrIApresentacaoAutenticacao;
    IApresentacaoControle      *cntrIApresentacaoControle;
    IApresentacaoProjetos      *cntrIApresentacaoProjetos;
    
    cntrApresentacaoInicializacao = new CntrApresentacaoInicializacao();
    cntrIApresentacaoAutenticacao = new CntrIApresentacaoAutenticacao();
    cntrIApresentacaoControle     = new CntrIApresentacaoControle();
    cntrIApresentacaoProjetos     = new CntrIApresentacaoProjetos();

    // -------------------------------------------------------------------------------------------
    // Declarar ponteiros e instanciar stubs.

    IServicoAutenticacao *stubIServicoAutenticacao;
    IServicoControle     *stubIServicoControle;
    IServicoProjetos     *stubIServicoProjetos;

    stubIServicoAutenticacao = new StubIServicoAutenticacao();
    stubIServicoControle     = new StubIServicoControle();
    stubIServicoProjetos     = new StubIServicoProjetos();

    // -------------------------------------------------------------------------------------------
    // Estabelecer relacionamentos entre instâncias de controladoras e instâncias de stubs.
    
    cntrApresentacaoInicializacao->setCntrIApresentacaoAutenticacao(cntrIApresentacaoAutenticacao);
    cntrApresentacaoInicializacao->setCntrApresentacaoPessoal(cntrIApresentacaoControle);
    cntrApresentacaoInicializacao->setCntrApresentacaoProdutosFinanceiros(cntrIApresentacaoProjetos);
    
    cntrIApresentacaoAutenticacao->setCntrIServicoAutenticacao(stubIServicoAutenticacao);
    cntrIApresentacaoControle->setCntrIServicoControle(stubIServicoControle);
    cntrIApresentacaoProjetos->setCntrIServicoProjetos(stubIServicoProjetos);
    
    cntrApresentacaoInicializacao->executar(); 
    
    // Destruir instâncias criadas.

    delete cntrIApresentacaoAutenticacao;
    delete cntrIApresentacaoControle;
    delete cntrIApresentacaoProjetos;
    delete cntrApresentacaoInicializacao;
    
    delete stubIServicoAutenticacao;
    delete stubIServicoControle;
    delete stubIServicoProjetos;
    
    return 0;
}
