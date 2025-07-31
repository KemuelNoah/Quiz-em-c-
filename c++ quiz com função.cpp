#include <iostream>
#include <locale.h>
using namespace std;

//variaveis globais basec
int arte_acerto = 0, arte_erro = 0;
int biologia_acerto = 0, biologia_erro = 0;
int fisica_acerto = 0, fisica_erro = 0;
int filosofia_acerto = 0, filosofia_erro = 0;
int historia_acerto = 0, historia_erro = 0;
int ingles_acerto = 0, ingles_erro = 0;
int portugues_acerto = 0, portugues_erro = 0;
int matematica_acerto = 0, matematica_erro = 0;
int quimica_acerto = 0, quimica_erro = 0;

//variaveis da basee
int tpa_acerto = 0, tpa_erro = 0;
int dd_acerto = 0, dd_erro = 0;
int pw_acerto = 0, pw_erro = 0;
int fi_acerto = 0, fi_erro = 0;


int lerresposta()
{//função de verificar a resposta
    int resposta;
    while (true) {
        cout << "Resposta (1 a 4): ";
        cin >> resposta;

        if (cin.fail() || resposta < 1 || resposta > 4)//verifica ser a resposta e de 1 a 4
        {
            cout << "\nEntrada inválida! Digite um número de 1 a 4.\n\n";
            cin.clear();//limpa os erros
            cin.ignore(1000, '\n');//descarta 100 caracteres e ate o final da linha
        } else
        {
            break;
        }
    }
    return resposta;
}


void resultadoBasec()
{// Função para exibir o resultado da base comum
    int Acertosbc = portugues_acerto + ingles_acerto + historia_acerto + filosofia_acerto +
                       arte_acerto + matematica_acerto + biologia_acerto + quimica_acerto + fisica_acerto;

    int Errosbc = portugues_erro + ingles_erro + historia_erro + filosofia_erro +
                     arte_erro + matematica_erro + biologia_erro + quimica_erro + fisica_erro;

    int total = Acertosbc + Errosbc;

    cout << "\n===== RESULTADO FINAL - BASE COMUM =====\n";
    cout << "Total de Acertos: " << Acertosbc << "\n";
    cout << "Total de Erros: " << Errosbc << "\n";

    if (total > 0)
    {
        float porcentAcertosbc = (Acertosbc * 100.0) / total;
        float porcentErrosbc = (Errosbc * 100.0) / total;

        cout << "Porcentagem de Acertos: " << porcentAcertosbc << "%\n";
        cout << "Porcentagem de Erros: " << porcentErrosbc << "%\n";
    } else
    {
        cout << "Nenhuma questão respondida.\n";
    }
}

void resultadoBasee()
{// Função para exibir o resultado da base especifica
    int Acertosbe = tpa_acerto + dd_acerto + pw_acerto +
                       fi_acerto;

    int Errosbe = tpa_erro + dd_erro + pw_erro +
                     fi_erro;

    int total = Acertosbe + Errosbe;

    cout << "\n===== RESULTADO FINAL - BASE ESPECÍFICA =====\n";
    cout << "Total de Acertos: " << Acertosbe << "\n";
    cout << "Total de Erros: " << Errosbe << "\n";

    if (total > 0)
        {
        float porcentAcertosbe = (Acertosbe * 100.0) / total;
        float porcentErrosbe = (Errosbe * 100.0) / total;

        cout << "Porcentagem de Acertos: " << porcentAcertosbe << "%\n";
        cout << "Porcentagem de Erros: " << porcentErrosbe << "%\n";
    } else
    {
        cout << "Nenhuma questão respondida.\n";
    }
}




//Funções da base comum
void arte()
{//questão de artes
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) Quem pintou a obra 'A Última Ceia'?                              *\n";
    cout << "* 1) Vincent van Gogh                                                 *\n";
    cout << "* 2) Leonardo da Vinci                                                *\n";
    cout << "* 3) Pablo Picasso                                                    *\n";
    cout << "* 4) Claude Monet                                                     *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        arte_acerto++;
    else
        arte_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) Qual técnica artística usa gesso úmido como base?                *\n";
    cout << "* 1) Aquarela                                                         *\n";
    cout << "* 2) Têmpera                                                          *\n";
    cout << "* 3) Afresco                                                          *\n";
    cout << "* 4) Grafite                                                          *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        arte_acerto++;
    else
        arte_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) Qual o movimento artístico de Salvador Dalí?                     *\n";
    cout << "* 1) Cubismo                                                          *\n";
    cout << "* 2) Realismo                                                         *\n";
    cout << "* 3) Surrealismo                                                      *\n";
    cout << "* 4) Modernismo                                                       *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        arte_acerto++;
    else
        arte_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual destes é um artista do Renascimento?                        *\n";
    cout << "* 1) Michelangelo                                                     *\n";
    cout << "* 2) Edgar Degas                                                      *\n";
    cout << "* 3) Jackson Pollock                                                  *\n";
    cout << "* 4) Andy Warhol                                                      *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        arte_acerto++;
    else
        arte_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) O que caracteriza a arte barroca?                                *\n";
    cout << "* 1) Geometria e repetição                                            *\n";
    cout << "* 2) Emoção, movimento e contraste                                    *\n";
    cout << "* 3) Simplicidade e clareza                                           *\n";
    cout << "* 4) Minimalismo                                                      *\n";
    cout << "***********************************************************************\n";
     resp = lerresposta();
    if (resp == 2)
        arte_acerto++;
    else
        arte_erro++;

    cout << "\n*********************************************************************\n";
    cout << "* RESULTADO - ARTES:                                                  *\n";
    cout << "* Acertos: " << arte_acerto << "                                      *\n";
    cout << "* Erros:   " << arte_erro << "                                        *\n";
    cout << "***********************************************************************\n";


}

void biologia()
{//questão de biologia
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "**********************************************************************\n";
    cout << "* 1) Qual organela é responsável pela produção de energia?           *\n";
    cout << "* 1) Lisossomo                                                       *\n";
    cout << "* 2) Ribossomo                                                       *\n";
    cout << "* 3) Mitocôndria                                                     *\n";
    cout << "* 4) Complexo Golgiense                                              *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        biologia_acerto++;
    else
        biologia_erro++;

    cout << "**********************************************************************\n";
    cout << "* 2) O que é fotossíntese?                                           *\n";
    cout << "* 1) Digestão celular                                                *\n";
    cout << "* 2) Respiração anaeróbica                                           *\n";
    cout << "* 3) Formação do DNA                                                 *\n";
    cout << "* 4) Produção de glicose pela planta                                 *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 4)
        biologia_acerto++;
    else
        biologia_erro++;

    cout << "**********************************************************************\n";
    cout << "* 3) Qual é o principal componente do núcleo celular?                *\n";
    cout << "* 1) Citoplasma                                                      *\n";
    cout << "* 2) Carioteca                                                       *\n";
    cout << "* 3) DNA                                                             *\n";
    cout << "* 4) Ribossomo                                                       *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        biologia_acerto++;
    else
        biologia_erro++;

    cout << "**********************************************************************\n";
    cout << "* 4) Qual grupo representa apenas vertebrados?                       *\n";
    cout << "* 1) Aves, peixes, répteis                                           *\n";
    cout << "* 2) Insetos, anfíbios, moluscos                                     *\n";
    cout << "* 3) Mamíferos, crustáceos, aracnídeos                               *\n";
    cout << "* 4) Anelídeos, répteis, aves                                        *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        biologia_acerto++;
    else
        biologia_erro++;

    cout << "**********************************************************************\n";
    cout << "* 5) Qual doença é causada por um vírus?                             *\n";
    cout << "* 1) Tuberculose                                                     *\n";
    cout << "* 2) Caxumba                                                         *\n";
    cout << "* 3) Hanseníase                                                      *\n";
    cout << "* 4) Malária                                                         *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        biologia_acerto++;
    else
        biologia_erro++;

    cout << "\n*********************************************************************\n";
    cout << "* RESULTADO - BIOLOGIA:                                               *\n";
    cout << "* Acertos: " << biologia_acerto << "                                  *\n";
    cout << "* Erros:   " << biologia_erro << "                                    *\n";
    cout << "***********************************************************************\n";

}

void fisica()
{//questão de fisica
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "**********************************************************************\n";
    cout << "* 1) Qual é a unidade de medida da força no SI?                      *\n";
    cout << "* 1) Pascal                                                          *\n";
    cout << "* 2) Joule                                                           *\n";
    cout << "* 3) Newton                                                          *\n";
    cout << "* 4) Watt                                                            *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        fisica_acerto++;
    else
        fisica_erro++;

    cout << "**********************************************************************\n";
    cout << "* 2) Qual dessas grandezas é vetorial?                               *\n";
    cout << "* 1) Temperatura                                                     *\n";
    cout << "* 2) Velocidade                                                      *\n";
    cout << "* 3) Massa                                                           *\n";
    cout << "* 4) Tempo                                                           *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        fisica_acerto++;
    else
        fisica_erro++;

    cout << "**********************************************************************\n";
    cout << "* 3) Qual a fórmula da segunda lei de Newton?                        *\n";
    cout << "* 1) F = m/a                                                         *\n";
    cout << "* 2) F = m.g                                                         *\n";
    cout << "* 3) F = m + a                                                       *\n";
    cout << "* 4) F = m × a                                                       *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 4)
        fisica_acerto++;
    else
        fisica_erro++;

    cout << "**********************************************************************\n";
    cout << "* 4) O que acontece com um corpo em queda livre?                     *\n";
    cout << "* 1) Ele para de acelerar                                            *\n";
    cout << "* 2) Ele acelera uniformemente                                       *\n";
    cout << "* 3) Ele desacelera lentamente                                       *\n";
    cout << "* 4) Ele se move com velocidade constante                            *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        fisica_acerto++;
    else
        fisica_erro++;

    cout << "**********************************************************************\n";
    cout << "* 5) Qual é a velocidade da luz no vácuo?                            *\n";
    cout << "* 1) 3 × 10^6 m/s                                                    *\n";
    cout << "* 2) 3 × 10^8 m/s                                                    *\n";
    cout << "* 3) 3 × 10^5 km/h                                                   *\n";
    cout << "* 4) 3 × 10^3 m/s                                                    *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        fisica_acerto++;
    else
        fisica_erro++;

    cout << "\n********************************************************************\n";
    cout << "* RESULTADO - FÍSICA:                                                *\n";
    cout << "* Acertos: " << fisica_acerto << "                                   *\n";
    cout << "* Erros:   " << fisica_erro << "                                     *\n";
    cout << "**********************************************************************\n";

}

void filosofia()
 {//questão de filosofia
     setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "**********************************************************************\n";
    cout << "* 1) Quem é considerado o pai da Filosofia?                          *\n";
    cout << "* 1) Aristóteles                                                     *\n";
    cout << "* 2) Sócrates                                                        *\n";
    cout << "* 3) Platão                                                          *\n";
    cout << "* 4) Tales de Mileto                                                 *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 4)
        filosofia_acerto++;
    else
        filosofia_erro++;

    cout << "**********************************************************************\n";
    cout << "* 2) O que é a maiêutica de Sócrates?                                *\n";
    cout << "* 1) Arte de convencer o outro                                       *\n";
    cout << "* 2) Técnica de argumentação escrita                                 *\n";
    cout << "* 3) Método de fazer o outro pensar e descobrir                      *\n";
    cout << "* 4) Um tratado político                                             *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        filosofia_acerto++;
    else
        filosofia_erro++;

    cout << "**********************************************************************\n";
    cout << "* 3) Qual filósofo escreveu 'A República'?                           *\n";
    cout << "* 1) Sócrates                                                        *\n";
    cout << "* 2) Platão                                                          *\n";
    cout << "* 3) Aristóteles                                                     *\n";
    cout << "* 4) Descartes                                                       *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        filosofia_acerto++;
    else
        filosofia_erro++;

    cout << "*********************************************************************\n";
    cout << "* 4) Qual a principal ideia do ceticismo filosófico?                *\n";
    cout << "* 1) Conhecimento é certeza absoluta                                *\n";
    cout << "* 2) Tudo pode ser conhecido                                        *\n";
    cout << "* 3) A dúvida é o caminho para o saber                              *\n";
    cout << "* 4) A fé supera a razão                                            *\n";
    cout << "*********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        filosofia_acerto++;
    else
        filosofia_erro++;

    cout << "**********************************************************************\n";
    cout << "* 5) Quem disse 'Penso, logo existo'?                                *\n";
    cout << "* 1) Kant                                                            *\n";
    cout << "* 2) Nietzsche                                                       *\n";
    cout << "* 3) Descartes                                                       *\n";
    cout << "* 4) Hegel                                                           *\n";
    cout << "**********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        filosofia_acerto++;
    else
        filosofia_erro++;

    cout << "\n*********************************************************************\n";
    cout << "* RESULTADO - FILOSOFIA:                                              *\n";
    cout << "* Acertos: " << filosofia_acerto << "                                 *\n";
    cout << "* Erros:   " << filosofia_erro << "                                   *\n";
    cout << "***********************************************************************\n";

}

void historia()
{//questão de historia
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) Em que ano aconteceu a Proclamação da República no Brasil?       *\n";
    cout << "* 1) 1889                                                             *\n";
    cout << "* 2) 1822                                                             *\n";
    cout << "* 3) 1500                                                             *\n";
    cout << "* 4) 1945                                                             *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        historia_acerto++;
    else
        historia_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) Quem foi o líder da Revolução Francesa?                          *\n";
    cout << "* 1) Napoleão Bonaparte                                               *\n";
    cout << "* 2) Luís XVI                                                         *\n";
    cout << "* 3) Maximilien Robespierre                                           *\n";
    cout << "* 4) Carlos Magno                                                     *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        historia_acerto++;
    else
        historia_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) Qual foi o principal objetivo da Revolução Industrial?           *\n";
    cout << "* 1) Modernizar a agricultura                                         *\n";
    cout << "* 2) Aumentar a produção através das máquinas                         *\n";
    cout << "* 3) Revolucionar o sistema político                                  *\n";
    cout << "* 4) Expandir o comércio marítimo                                     *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        historia_acerto++;
    else
        historia_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual civilização construiu as pirâmides do Egito?                *\n";
    cout << "* 1) Mesopotâmia                                                      *\n";
    cout << "* 2) Gregos                                                           *\n";
    cout << "* 3) Egípcios                                                         *\n";
    cout << "* 4) Romanos                                                          *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        historia_acerto++;
    else
        historia_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) Quem foi o primeiro presidente dos Estados Unidos?               *\n";
    cout << "* 1) Abraham Lincoln                                                  *\n";
    cout << "* 2) George Washington                                                *\n";
    cout << "* 3) Thomas Jefferson                                                 *\n";
    cout << "* 4) John Adams                                                       *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        historia_acerto++;
    else
        historia_erro++;

    cout << "\n*********************************************************************\n";
    cout << "* RESULTADO - HISTÓRIA:                                               *\n";
    cout << "* Acertos: " << historia_acerto << "                                  *\n";
    cout << "* Erros:   " << historia_erro << "                                    *\n";
    cout << "***********************************************************************\n";

}

void ingles()
{//questão de ingles
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) What is the English word for 'Casa'?                             *\n";
    cout << "* 1) Car                                                              *\n";
    cout << "* 2) House                                                            *\n";
    cout << "* 3) Dog                                                              *\n";
    cout << "* 4) Tree                                                             *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        ingles_acerto++;
    else
        ingles_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) How do you say 'Obrigado' in English?                            *\n";
    cout << "* 1) Thank you                                                        *\n";
    cout << "* 2) Sorry                                                            *\n";
    cout << "* 3) Please                                                           *\n";
    cout << "* 4) Welcome                                                          *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        ingles_acerto++;
    else
        ingles_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) What is the past tense of 'go'?                                  *\n";
    cout << "* 1) Went                                                             *\n";
    cout << "* 2) Go                                                               *\n";
    cout << "* 3) Gone                                                             *\n";
    cout << "* 4) Going                                                            *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        ingles_acerto++;
    else
        ingles_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Choose the correct plural form of 'child'.                       *\n";
    cout << "* 1) Childs                                                           *\n";
    cout << "* 2) Children                                                         *\n";
    cout << "* 3) Childes                                                          *\n";
    cout << "* 4) Child                                                            *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        ingles_acerto++;
    else
        ingles_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) What does 'fast' mean?                                           *\n";
    cout << "* 1) Lento                                                            *\n";
    cout << "* 2) Rápido                                                           *\n";
    cout << "* 3) Forte                                                            *\n";
    cout << "* 4) Fraco                                                            *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        ingles_acerto++;
    else
        ingles_erro++;

    cout << "\n***********************************************************************\n";
    cout << "* RESULTADO - INGLÊS:                                                   *\n";
    cout << "* Acertos: " << ingles_acerto << "                                      *\n";
    cout << "* Erros:   " << ingles_erro << "                                        *\n";
    cout << "*************************************************************************\n";

}

void portugues()
{//questão de ´portugues
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) Qual é a classe gramatical da palavra 'rápido' em:               *\n";
    cout << "*    \"O carro é rápido.\"                                            *\n";
    cout << "* 1) Substantivo                                                      *\n";
    cout << "* 2) Adjetivo                                                         *\n";
    cout << "* 3) Verbo                                                            *\n";
    cout << "* 4) Advérbio                                                         *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        portugues_acerto++;
    else
        portugues_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) Qual é o sujeito na frase: \"Maria comprou um livro.\"?          *\n";
    cout << "* 1) Maria                                                            *\n";
    cout << "* 2) Comprou                                                          *\n";
    cout << "* 3) Um livro                                                         *\n";
    cout << "* 4) Nenhum                                                           *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        portugues_acerto++;
    else
        portugues_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) Qual a forma correta do plural de 'cidadão'?                    *\n";
    cout << "* 1) Cidadãos                                                        *\n";
    cout << "* 2) Cidadões                                                        *\n";
    cout << "* 3) Cidadães                                                        *\n";
    cout << "* 4) Cidadãos                                                        *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        portugues_acerto++;
    else
        portugues_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual a função do verbo na frase: \"Eles correram rápido.\"?      *\n";
    cout << "* 1) Indicar ação                                                     *\n";
    cout << "* 2) Indicar estado                                                   *\n";
    cout << "* 3) Indicar característica                                           *\n";
    cout << "* 4) Indicar tempo                                                    *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        portugues_acerto++;
    else
        portugues_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) Qual a forma correta:                                            *\n";
    cout << "*    \"Eu não __ visto.\" (verbo 'ter' no passado)                    *\n";
    cout << "* 1) hei                                                              *\n";
    cout << "* 2) hei de                                                           *\n";
    cout << "* 3) hã                                                               *\n";
    cout << "* 4) hei de ter                                                       *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        portugues_acerto++;
    else
        portugues_erro++;

    cout << "\n***********************************************************************\n";
    cout << "* RESULTADO - LÍNGUA PORTUGUESA:                                        *\n";
    cout << "* Acertos: " << portugues_acerto << "                                   *\n";
    cout << "* Erros:   " << portugues_erro << "                                     *\n";
    cout << "*************************************************************************\n";

}

void matematica()
{//questão de matematica
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) Qual é o valor de π (pi) arredondado para duas casas decimais?   *\n";
    cout << "* 1) 3,12                                                             *\n";
    cout << "* 2) 3,14                                                             *\n";
    cout << "* 3) 3,15                                                             *\n";
    cout << "* 4) 3,16                                                             *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        matematica_acerto++;
    else
        matematica_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) Qual é a fórmula da área do círculo?                             *\n";
    cout << "* 1) π × r                                                            *\n";
    cout << "* 2) 2 × π × r                                                        *\n";
    cout << "* 3) π × r²                                                           *\n";
    cout << "* 4) π × d                                                            *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        matematica_acerto++;
    else
        matematica_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) Quanto é 7 × 8?                                                  *\n";
    cout << "* 1) 54                                                               *\n";
    cout << "* 2) 56                                                               *\n";
    cout << "* 3) 58                                                               *\n";
    cout << "* 4) 60                                                               *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        matematica_acerto++;
    else
        matematica_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual é o resultado da expressão (3 + 4) × 2?                     *\n";
    cout << "* 1) 14                                                               *\n";
    cout << "* 2) 10                                                               *\n";
    cout << "* 3) 7                                                                *\n";
    cout << "* 4) 21                                                               *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        matematica_acerto++;
    else
        matematica_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) Qual é a raiz quadrada de 81?                                    *\n";
    cout << "* 1) 7                                                                *\n";
    cout << "* 2) 8                                                                *\n";
    cout << "* 3) 9                                                                *\n";
    cout << "* 4) 10                                                               *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        matematica_acerto++;
    else
        matematica_erro++;

    cout << "\n***********************************************************************\n";
    cout << "* RESULTADO - MATEMÁTICA:                                               *\n";
    cout << "* Acertos: " << matematica_acerto << "                                  *\n";
    cout << "* Erros:   " << matematica_erro << "                                    *\n";
    cout << "*************************************************************************\n";

}

void quimica()
{//questão de quimica
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) Qual é o símbolo químico da água?                                *\n";
    cout << "* 1) H2O                                                              *\n";
    cout << "* 2) CO2                                                              *\n";
    cout << "* 3) O2                                                               *\n";
    cout << "* 4) NaCl                                                             *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        quimica_acerto++;
    else
        quimica_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) Qual é o número atômico do carbono?                              *\n";
    cout << "* 1) 6                                                                *\n";
    cout << "* 2) 12                                                               *\n";
    cout << "* 3) 8                                                                *\n";
    cout << "* 4) 14                                                               *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        quimica_acerto++;
    else
        quimica_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) O que é um íon?                                                  *\n";
    cout << "* 1) Átomo com carga elétrica                                         *\n";
    cout << "* 2) Molécula neutra                                                  *\n";
    cout << "* 3) Partícula sem carga                                              *\n";
    cout << "* 4) Núcleo atômico                                                   *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        quimica_acerto++;
    else
        quimica_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual gás é mais leve que o ar?                                   *\n";
    cout << "* 1) Nitrogênio                                                       *\n";
    cout << "* 2) Oxigênio                                                         *\n";
    cout << "* 3) Hidrogênio                                                       *\n";
    cout << "* 4) Dióxido de carbono                                               *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        quimica_acerto++;
    else
        quimica_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) Qual elemento tem símbolo Fe?                                    *\n";
    cout << "* 1) Ferro                                                            *\n";
    cout << "* 2) Flúor                                                            *\n";
    cout << "* 3) Fósforo                                                          *\n";
    cout << "* 4) Francium                                                         *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        quimica_acerto++;
    else
        quimica_erro++;

    cout << "\n***********************************************************************\n";
    cout << "* RESULTADO - QUÍMICA:                                                  *\n";
    cout << "* Acertos: " << quimica_acerto << "                                     *\n";
    cout << "* Erros:   " << quimica_erro << "                                       *\n";
    cout << "*************************************************************************\n";

}


//Funções da base especifica
void tpa()
{//questão de tpa
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) O que é um algoritmo?                                            *\n";
    cout << "* 1) Um programa de computador                                        *\n";
    cout << "* 2) Uma sequência de passos para resolver um problema                *\n";
    cout << "* 3) Um tipo de dado                                                  *\n";
    cout << "* 4) Um erro de lógica                                                *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        tpa_acerto++;
    else
        tpa_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) Qual estrutura de controle permite repetir um bloco de código?   *\n";
    cout << "* 1) Condicional if                                                   *\n";
    cout << "* 2) Loop ou laço (for, while)                                        *\n";
    cout << "* 3) Declaração de variável                                           *\n";
    cout << "* 4) Função                                                           *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        tpa_acerto++;
    else
        tpa_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) O que significa 'debugar' um programa?                           *\n";
    cout << "* 1) Escrever um código novo                                          *\n";
    cout << "* 2) Corrigir erros no código                                         *\n";
    cout << "* 3) Executar o programa                                              *\n";
    cout << "* 4) Compilar o código                                                *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        tpa_acerto++;
    else
        tpa_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual destes é um tipo de dado primitivo em C++?                  *\n";
    cout << "* 1) string                                                           *\n";
    cout << "* 2) float                                                            *\n";
    cout << "* 3) vetor                                                            *\n";
    cout << "* 4) função                                                           *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        tpa_acerto++;
    else
        tpa_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) O que é uma função em programação?                               *\n";
    cout << "* 1) Um bloco de código que pode ser reutilizado                      *\n";
    cout << "* 2) Um erro de sintaxe                                               *\n";
    cout << "* 3) Um tipo de variável                                              *\n";
    cout << "* 4) Um programa separado                                             *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        tpa_acerto++;
    else
        tpa_erro++;

    cout << "\n***********************************************************************\n";
    cout << "* RESULTADO - TÉCNICAS DE PROGRAMAÇÃO E ALGORITMO:                      *\n";
    cout << "* Acertos: " << tpa_acerto << "                                         *\n";
    cout << "* Erros:   " << tpa_erro << "                                           *\n";
    cout << "*************************************************************************\n";

};

void dd()
{//questão de dd
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) Qual é o software mais usado para edição vetorial?               *\n";
    cout << "* 1) Adobe Photoshop                                                  *\n";
    cout << "* 2) CorelDRAW                                                        *\n";
    cout << "* 3) Adobe Illustrator                                                *\n";
    cout << "* 4) GIMP                                                             *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        dd_acerto++;
    else
        dd_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) Qual esquema de cores é usado para telas digitais?               *\n";
    cout << "* 1) CMYK                                                             *\n";
    cout << "* 2) RGB                                                              *\n";
    cout << "* 3) Pantone                                                          *\n";
    cout << "* 4) HSL                                                              *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        dd_acerto++;
    else
        dd_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) O que é DPI em design digital?                                   *\n";
    cout << "* 1) Pixels por polegada                                              *\n";
    cout << "* 2) Tamanho da imagem em MB                                          *\n";
    cout << "* 3) Profundidade de cor                                              *\n";
    cout << "* 4) Tipo de arquivo                                                  *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        dd_acerto++;
    else
        dd_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual formato é mais indicado para imagens vetoriais?             *\n";
    cout << "* 1) JPEG                                                             *\n";
    cout << "* 2) PNG                                                              *\n";
    cout << "* 3) SVG                                                              *\n";
    cout << "* 4) BMP                                                              *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        dd_acerto++;
    else
        dd_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) O que significa UI em design digital?                            *\n";
    cout << "* 1) User Interaction                                                 *\n";
    cout << "* 2) User Interface                                                   *\n";
    cout << "* 3) User Integration                                                 *\n";
    cout << "* 4) User Instruction                                                 *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        dd_acerto++;
    else
        dd_erro++;

    cout << "\n***********************************************************************\n";
    cout << "* RESULTADO - DESIGN DIGITAL:                                           *\n";
    cout << "* Acertos: " << dd_acerto << "                                          *\n";
    cout << "* Erros:   " << dd_erro << "                                            *\n";
    cout << "*************************************************************************\n";

};

void pw()
{//questão de pw
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) Qual linguagem é usada para estruturar páginas na web?           *\n";
    cout << "* 1) CSS                                                              *\n";
    cout << "* 2) HTML                                                             *\n";
    cout << "* 3) JavaScript                                                       *\n";
    cout << "* 4) PHP                                                              *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        pw_acerto++;
    else
        pw_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) Qual linguagem é usada para estilizar páginas web?               *\n";
    cout << "* 1) HTML                                                             *\n";
    cout << "* 2) PHP                                                              *\n";
    cout << "* 3) CSS                                                              *\n";
    cout << "* 4) SQL                                                              *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        pw_acerto++;
    else
        pw_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) Qual linguagem é usada para programação dinâmica no cliente?     *\n";
    cout << "* 1) JavaScript                                                       *\n";
    cout << "* 2) HTML                                                             *\n";
    cout << "* 3) CSS                                                              *\n";
    cout << "* 4) SQL                                                              *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        pw_acerto++;
    else
        pw_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual dessas não é uma linguagem de marcação web?                 *\n";
    cout << "* 1) Python                                                           *\n";
    cout << "* 2) JavaScript                                                       *\n";
    cout << "* 3) HTML                                                             *\n";
    cout << "* 4) PHP                                                              *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        pw_erro++;
    else
        pw_acerto++;

    cout << "***********************************************************************\n";
    cout << "* 5) O que significa CSS?                                             *\n";
    cout << "* 1) Cascading Style Sheets                                           *\n";
    cout << "* 2) Computer Style Sheets                                            *\n";
    cout << "* 3) Creative Style Scripts                                           *\n";
    cout << "* 4) Cascading Script Sheets                                          *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        pw_acerto++;
    else
        pw_erro++;

    cout << "\n***********************************************************************\n";
    cout << "* RESULTADO - PROGRAMAÇÃO WEB:                                          *\n";
    cout << "* Acertos: " << pw_acerto << "                                          *\n";
    cout << "* Erros:   " << pw_erro << "                                            *\n";
    cout << "*************************************************************************\n";

};

void fi()
{//questão de fi
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resp;

    cout << "***********************************************************************\n";
    cout << "* 1) Qual componente é considerado o 'cérebro' do computador?         *\n";
    cout << "* 1) Memória RAM                                                      *\n";
    cout << "* 2) Disco rígido                                                     *\n";
    cout << "* 3) CPU (Unidade Central de Processamento)                           *\n";
    cout << "* 4) Placa-mãe                                                        *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        fi_acerto++;
    else
        fi_erro++;

    cout << "***********************************************************************\n";
    cout << "* 2) O que significa USB?                                             *\n";
    cout << "* 1) Universal Serial Bus                                             *\n";
    cout << "* 2) Universal System Bus                                             *\n";
    cout << "* 3) United Serial Bus                                                *\n";
    cout << "* 4) Unified Serial Bus                                               *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 1)
        fi_acerto++;
    else
        fi_erro++;

    cout << "***********************************************************************\n";
    cout << "* 3) O que é software?                                                *\n";
    cout << "* 1) Parte física do computador                                       *\n";
    cout << "* 2) Programas e dados armazenados no computador                      *\n";
    cout << "* 3) Placa de vídeo                                                   *\n";
    cout << "* 4) Memória RAM                                                      *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        fi_acerto++;
    else
        fi_erro++;

    cout << "***********************************************************************\n";
    cout << "* 4) Qual sistema operacional é da Microsoft?                         *\n";
    cout << "* 1) Linux                                                            *\n";
    cout << "* 2) macOS                                                            *\n";
    cout << "* 3) Windows                                                          *\n";
    cout << "* 4) Android                                                          *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 3)
        fi_acerto++;
    else
        fi_erro++;

    cout << "***********************************************************************\n";
    cout << "* 5) O que é um arquivo executável?                                   *\n";
    cout << "* 1) Um arquivo de texto                                              *\n";
    cout << "* 2) Um arquivo que pode ser executado pelo computador                *\n";
    cout << "* 3) Um arquivo de imagem                                             *\n";
    cout << "* 4) Um arquivo compactado                                            *\n";
    cout << "***********************************************************************\n";
    resp = lerresposta();
    if (resp == 2)
        fi_acerto++;
    else
        fi_erro++;

    cout << "\n***********************************************************************\n";
    cout << "* RESULTADO - FUNDAMENTOS DE INFORMÁTICA:                               *\n";
    cout << "* Acertos: " << fi_acerto << "                                          *\n";
    cout << "* Erros:   " << fi_erro << "                                            *\n";
    cout << "*************************************************************************\n";

};

void basec()
{//menu da base comum
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int basec=1;
    while (basec !=0)
    {
    cout<<"************************************\n";
    cout<<"*       QUIZTEC 2025               *\n";
    cout<<"*                                  *\n";
    cout<<"*      Ecolha a Opção:             *\n";
    cout<<"*                                  *\n";
    cout<<"*      1 - Arte                    *\n";
    cout<<"*      2 - Biologia                *\n";
    cout<<"*      3 - Fisica                  *\n";
    cout<<"*      4 - FIlosofia               *\n";
    cout<<"*      5 - Historia                *\n";
    cout<<"*      6 - Ingles                  *\n";
    cout<<"*      7 - Lingua Portuguesa       *\n";
    cout<<"*      8 - Matematica              *\n";
    cout<<"*      9 - Quimica                 *\n";
    cout<<"*      0 - sair                    *\n";
    cout<<"*                                  *\n";
    cout<<"************************************\n";
    cin>>basec;
    system("cls");
    switch (basec)
    {
    case 1:
    {//Artes
        cout<<"Questões de Artes!";
        arte();
        break;
    }
    case 2:
    {//Biologia
        cout<<"Questões de Biologia!";
        biologia();
        break;
    }
    case 3:
    {//Fisica
        cout<<"Questões de Fisica!";
        fisica();
        break;
    }
    case 4:
    {//Filosofia
        cout<<"Questões de Filosofia!";
        filosofia();
        break;
    }
    case 5:
    {//Historia
        cout<<"Questões de Historia!";
        historia();
        break;
    }
    case 6:
    {//Inglês
        cout<<"Questões de Inglês!";
        ingles();
        break;
    }
    case 7:
    {//Língua Portuguesa
        cout<<"Questões de Língua Portuguesa!";
        portugues();
        break;
    }
    case 8:
    {//Matematica
        cout<<"Questões de Matematica!";
        matematica();
        break;
    }
    case 9:
    {//Quimica
        cout<<"Questões de Quimica!";
        quimica();
        break;
    }
    }
    }
}
void basee()
{//menu da base especifica
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int basee = 2;

    while (basee != 0)
    {
        cout << "*********************************\n";
        cout << "*         QUIZTEC 2025          *\n";
        cout << "*       Base Específica         *\n";
        cout << "*     Escolha a Opção           *\n";
        cout << "*                               *\n";
        cout << "*     1 - TPA                   *\n";
        cout << "*     2 - DD                    *\n";
        cout << "*     3 - PW                    *\n";
        cout << "*     4 - FI                    *\n";
        cout << "*     0 - Voltar                *\n";
        cout << "*********************************\n";
        cin >> basee;
        system("cls");

        if (basee == 1)
        {//TPA
            cout << "Questões de TPA!\n";
            tpa();
        }
        else if (basee == 2)
        {//DD
            cout << "Questões de Design Digital!\n";
            dd();
        }
        else if (basee == 3)
        {//PW
            cout << "Questões de Programação Web!\n";
            pw();
        }
        else if (basee == 4)
        {//FI
            cout << "Questões de Fundamentos de Informática!\n";
            fi();
        }
        else if (basee == 0)
        {
            cout << "Retornando ao menu principal...\n";
        }
        else
        {
            cout << "Opção inválida! Tente novamente.\n";
        }
    }


}


int main()
{//menu principal
    setlocale(LC_ALL, "pt_BR.UTF-8");


    int opcao;
    cout<<"****************************\n";
    cout<<"*       QUIZTEC 2025       *\n";
    cout<<"*                          *\n";
    cout<<"*      Ecolha a Opção:     *\n";
    cout<<"*                          *\n";
    cout<<"*      1 - Base Comum      *\n";
    cout<<"*      2 - Base Especifica *\n";
    cout<<"*      0 - Sair            *\n";
    cout<<"*                          *\n";
    cout<<"****************************\n";
    cin>>opcao;
    switch(opcao)
    {
        case 1:
            basec();
            resultadoBasec();
            break;
        case 2:
            basee();
            resultadoBasee();
            break;
        case 0:
            cout << "Saindo do programa...\n";
            break;
        default:
        cout << "Opção inválida!\n";
        break;

    }
}

