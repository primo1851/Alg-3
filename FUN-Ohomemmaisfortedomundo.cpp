#include <iostream>

using namespace std;

struct dados
{
    char nome[100];
    int n1;
    int n2;
    int n3;
    int n4;
};

int strongest(dados atletas[], int nAtletas)

{
    int maior, pos_maior;
    int soma;

    soma = atletas[nAtletas].n1 + atletas[nAtletas].n2 + atletas[nAtletas].n3 + atletas[nAtletas].n4;

    return soma;
}

int main()
{
    dados atletas[100];
    int nAtletas, i;
    int saida = 0;
    int pos;
    int soma;
    int maior = 0;

    cin >> nAtletas;

    for (int i = 0; i < nAtletas; i++)
    {
        cin.ignore();
        cin.getline(atletas[i].nome, 100);

        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;

        pos = i;

        soma = strongest(atletas, pos);

        if (soma > maior)
        {
            saida = pos;
            maior = soma;
        }
    }

    for (int i = 0; i < 1; i++)
    {
        cout << "Vencedor: " << atletas[saida].nome << endl;
    }
    return 0;
}