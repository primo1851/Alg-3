#include <iostream>
#include <list>
using namespace std;
// Struct para armazenar os elementos de uma árvore binária
struct treenode
{
    int info;
    treenode *esq;
    treenode *dir;
};
typedef treenode *treenodeptr;
// Insere elementos em uma árvore binária
void tInsere(treenodeptr &p, int x)
{
    if (p == NULL) // raiz
    {
        p = new treenode;
        p->info = x;
        p->esq = NULL;
        p->dir = NULL;
    }
    else if (x < p->info) // subarvore esquerda
        tInsere(p->esq, x);
    else // subarvore direita
        tInsere(p->dir, x);
}
// Realiza um percurso em nível na árvore
void emNivel(treenodeptr t)
{
    treenodeptr n;
    list<treenodeptr> q;
    if (t != NULL)
    {
        q.push_back(t);
        while (!q.empty())
        {
            n = *q.begin();
            q.pop_front();
            if (n->esq != NULL)
                q.push_back(n->esq);
            if (n->dir != NULL)
                q.push_back(n->dir);
            cout << n->info << " ";
        }
        cout << endl;
    }
}
// Libera a memória utilizada pela árvore
void tDestruir(treenodeptr &arvore)
{
    if (arvore != NULL)
    {
        tDestruir(arvore->esq);
        tDestruir(arvore->dir);
        delete arvore;
    }
    arvore = NULL;
}
int main()
{
    int x;
    treenodeptr arvore = NULL;

    int cont= 0;
    

    do
    {
        cin >> x;
        if (x != -1)
        {
            tInsere(arvore, x);
            cont++;
        }
    } while (x != -1);
    emNivel(arvore);

    

    return 0;
}