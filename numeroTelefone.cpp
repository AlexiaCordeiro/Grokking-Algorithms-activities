#include <iostream>
#include <string>

int main()
{
    std::string nomes[] = {"Ana", "Bia", "Carla", "Duda", "Eva", "Fabi", "Gabi", "Helo", "Iara", "Jana"};
    int tamanho = sizeof(nomes) / sizeof(nomes[0]);
    int menor = 0;
    int maior = tamanho - 1;
    std::string nome = "Helo";

    while (menor <= maior)
    {
        int meio = (maior + menor) / 2;
        std::string chute = nomes[meio];

        if (chute == nome)
        {
            std::cout << "Índice do nome encontrado: " << nomes[meio] << std::endl;
            return 0;
        }
        if (chute < nome)
        {
            menor = meio + 1;
        }
        else
        {
            maior = meio - 1;
        }
    }

    std::cout << "Nome não encontrado." << std::endl;
    return 1; // Falha
}
