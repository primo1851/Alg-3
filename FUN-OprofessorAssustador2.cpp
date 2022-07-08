#include <iostream>
#include <iomanip>

using namespace std;
float media(int notas[], int nAlunos)
{
    float media;
    float total = 0;

    for (int i = 0; i < nAlunos; i++)
    {
        total += notas[i];
    }

    media = total / nAlunos;

    return media;
}

int nAbaixo(int notas[], int nAlunos, float media)
{
    int abaixo = 0;

    for (int i = 0; i < nAlunos; i++)
    {
        if (notas[i] < media)
        {
            abaixo++;
        }
    }
    return abaixo;
}
int nAcima(int notas[], int nAlunos, float media)
{
    int acima = 0;

    for (int i = 0; i < nAlunos; i++)
    {
        if (notas[i] < media)
        {
            acima++;
        }
    }
    return acima;
}

int main()
{

    int i;
    int nAlunos;
    int notas[100];
    float saida;
    int abaixo = 0, acima = 0;

    cin >> nAlunos;

    for (i = 0; i < nAlunos; i++)
    {
        cin >> notas[i];
    }

    saida = media(notas, nAlunos);
    cout << setprecision(4) << "Media da turma = " << saida << endl;

    abaixo = nAbaixo(notas, nAlunos, saida);
    acima = nAcima(notas, nAlunos, saida);

    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;
    return 0;
}