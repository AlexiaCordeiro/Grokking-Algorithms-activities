#include <iostream>
#include <vector>
#include <algorithm>

int buscaMenor(const std::vector<int> &arr)
{
    int menor = arr[0];
    int indiceMenor = 0;

    for (size_t i = 1; i < arr.size(); ++i)
    {
        if (arr[i] < menor)
        {
            menor = arr[i];
            indiceMenor = i;
        }
    }
    return indiceMenor;
}

std::vector<int> ordenaSelecao(std::vector<int> arr)
{
    std::vector<int> novoArray;
    size_t tamanho = arr.size();

    for (size_t i = 0; i < tamanho; ++i)
    {
        int menor = buscaMenor(arr);
        novoArray.push_back(arr[menor]);
        arr.erase(arr.begin() + menor);
    }

    return novoArray;
}

int main()
{
    std::vector<int> dados = {5, 3, 2, 4, 7, 1, 0, 6, 9, 8};
    std::vector<int> ordenado = ordenaSelecao(dados);

    for (size_t i = 0; i < ordenado.size(); ++i)
    {
        std::cout << ordenado[i] << std::endl;
    }

    return 0;
}
