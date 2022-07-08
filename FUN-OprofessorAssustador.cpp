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

int main()
{

    int i;
    int nAlunos;
    int notas[100];
    float saida;

    cin >> nAlunos;

    for (i = 0; i < nAlunos; i++)
    {
        cin >> notas[i];
    }

    saida = media(notas, nAlunos);
    cout << setprecision(4) << "Media da turma = " <<saida << endl;

    return 0;
}