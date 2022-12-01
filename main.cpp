#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    stack<int> pilha;
    scanf("%d", &T);

    while (T--)
    {
        int x;
        scanf("%d", &x);
        if (x == 1)
        {
            int valor;
            scanf("%d", &valor);
            pilha.push(valor);
        }
        else if (x == 2 && pilha.empty() == 0)
        {
            pilha.pop();
        }
        else if (x == 3)
        {
            if(pilha.empty())printf("Empty!\n");
            else printf("%d\n",pilha.top());
        }
    }
    return 0;
}