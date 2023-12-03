#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.hpp"
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
    //IApresentacaoProjetos      *cntrIApresentacaoProjetos;

    cntrApresentacaoInicializacao = new CntrApresentacaoInicializacao();
    cntrIApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrIApresentacaoControle     = new CntrApresentacaoControle();
    //cntrIApresentacaoProjetos     = new CntrApresentacaoProjetos();

    // -------------------------------------------------------------------------------------------
    // Declarar ponteiros e instanciar stubs.

    IServicoAutenticacao *stubIServicoAutenticacao;
    IServicoControle     *stubIServicoControle;
    //IServicoProjetos     *stubIServicoProjetos;

    stubIServicoAutenticacao = new StubIServicoAutenticacao();
    stubIServicoControle     = new StubIServicoControle();
    //stubIServicoProjetos     = new StubIServicoProjetos();

    // -------------------------------------------------------------------------------------------
    // Estabelecer relacionamentos entre instâncias de controladoras e instâncias de stubs.

    cntrApresentacaoInicializacao->setCntrIApresentacaoAutenticacao(cntrIApresentacaoAutenticacao);
    cntrApresentacaoInicializacao->setCntrIApresentacaoControle(cntrIApresentacaoControle);
    //cntrApresentacaoInicializacao->setCntrIApresentacaoProjetos(cntrIApresentacaoProjetos);

    cntrIApresentacaoAutenticacao->setCntrServicoAutenticacao(stubIServicoAutenticacao);
    cntrIApresentacaoControle->setCntrServicoControle(stubIServicoControle);
    //cntrIApresentacaoProjetos->setCntrServicoProjetos(stubIServicoProjetos);

    cntrApresentacaoInicializacao->executar();

    // Destruir instâncias criadas.

    delete cntrIApresentacaoAutenticacao;
    delete cntrIApresentacaoControle;
    //delete cntrIApresentacaoProjetos;
    delete cntrApresentacaoInicializacao;

    delete stubIServicoAutenticacao;
    delete stubIServicoControle;
    //delete stubIServicoProjetos;

    return 0;
}
