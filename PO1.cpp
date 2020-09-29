
#include <iostream>
#include <fstream>

using namespace std;

void cabe(){
    system("clear");
    cout << "================================" << endl;
    cout << "----ATIVIDADES AULA PO 29/09----" << endl;
    cout << "================================" << endl;
    cout << endl;
}

void atividade01(){
    cabe();
    cout << "Olá mundo!!" << endl;
}

void atividade02(){
    int vetor[10];

    for(int i = 0; i < 10; i++){
        cabe();
        cout << "Digite o " << (i+1) << "º numero: ";
        cin >> vetor[i];
    }
    for (int i = 0; i <10; i++){
        cout << vetor[i] << endl;
    }
}
void atividade03(){
    cabe();
    int tam;
    char sn, resp='1';
    cout << "Digite o tamanho da matriz quadrada  (questão pede 10x10 mas sugiro uma menor): ";
    cin >> tam;


        int matriz[tam][tam], linha=0, coluna=0;

        for (linha = 0; linha < tam; linha++){
            for (coluna = 0; coluna < tam; coluna++){
                cabe();
                cout << "Digite o " << (coluna+1) << "º numero da linha " << (linha+1) << ": ";
                cin >> matriz[linha][coluna];
            }
        }
        for (int l = 0; l < tam; l++){
            for (int c = 0; c < tam; c++){
                cout << matriz[l][c] << "    ";
            }
            cout << endl;
        }
}
void atividade04(){
    int tam=10;
    int vetor[tam], maior, menor;
    float media, total=0.0;

    for (int i = 0; i < tam; i++){
        cout << "Digite o " << (i+1) << "º numero: ";
        cin >> vetor[i];

        total += vetor[i];
        maior = vetor[i];
        menor = vetor[i];
    }
    for (int i = 0; i < tam; i++){
        if (maior < vetor[i]){
            maior = vetor[i];
        }
        if (menor > vetor[i]){
            menor = vetor[i];
        }
    }
    media = (total/tam);

    cout << "Maior número: " << maior << endl;
    cout << "Menor número: " << menor << endl;
    cout << "Media: " << media << endl;
}

void atividade05(){
    int lin=10, col=10;
    int Item[lin][col], Item2[lin][col], Result[lin][col];
    string nomeArq, nomeArq2;
    ifstream arquivoE, arquivoEE, meuArq, meuArq2;

    while (!arquivoE.is_open()){
        cout << "Nome do 1º arquivo: ";
        cin >> nomeArq;
        arquivoE.open(nomeArq);

        if (arquivoE.is_open()){
            cout << "Nome do 2º arquivo: ";
            cin >> nomeArq2;
            arquivoEE.open(nomeArq2);

            if (arquivoEE.is_open()){
                meuArq.open(nomeArq);
                meuArq2.open(nomeArq2);
                arquivoE.seekg(0);
                arquivoEE.seekg(0);

                for (int x = 0; x < lin; x++){
                    for (int y = 0; y < col; y++){
                    meuArq >> Item[x][y];
                    meuArq2 >> Item2[x][y];
                    }
                }
                for (int x = 0; x < lin; x++){
                    for (int y = 0; y < col; y++){
                        Result[x][y] = Item[x][y] + Item2[x][y];
                    }
                }
                for (int x = 0; x < lin; x++){
                    for (int y = 0; y < col; y++){
                        cout << Result[x][y] << " ";
                    }
                    cout << endl;
                }

            }
            else{
                cout << "Arquivo não encontrado" << endl;
            }
        }
        else{
            cout << "Arquivo não encontrado" << endl;
        }
    }
    arquivoE.close();
    meuArq.close();
    arquivoEE.close();
    meuArq2.close();

}

int main(int argc, char** argv) {

    int resp;

    cabe();
    while (resp){
        cout << "Deseja ver a resposta da atividade 1, 2, 3, 4 ou 5? (outra tecla para sair) ";
        cin >> resp;

        if (resp == 1){
            system ("clear");
            cabe();
            atividade01();
        }
        else if (resp == 2){
            atividade02();
        }
        else if (resp == 3){
            atividade03();
        }
        else if (resp == 4){
            atividade04();
        }
        else if (resp == 5){
            atividade05();
        }
        else{
            return 0;
        }
    }
}

