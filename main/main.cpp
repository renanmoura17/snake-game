#include <iostream>

using namespace std;

//Vari�vel utilizada para verificar se o jogo foi finalizado ou n�o
bool gameOver;

//Dimens�es do mapa do jogo
const int largura = 20;
const int altura = 20;

//Posi��o da cabe�a
int x, y;

//Posi��o da fruta
int frutaX, frutaY;

//Total de pontos
int score;

//Dire��es que podem ser tomadas pela cobra
enum eDirecao {
	PARADA = 0,
	ESQUERDA,
	DIREITA,
	CIMA,
	BAIXO
};

//Dire��o atual da cobra
eDirecao direcao;

//Fun��o respons�vel pela inicializa��o do jogo
void Setup() {
	
	gameOver = false;
	
	direcao = PARADA;
	
	x = largura / 2;
	y = altura / 2;

	frutaX = rand() % largura;
	frutaY = rand() % altura;

	score = 0;
}

//Desenha as informa��es na tela
void Draw () {
	
	system("cls");

	//Desenha a parede do topo
	for (int i = 0; i < largura + 2; i++) {
		cout << "#";
	}
	cout << endl;

	// Desenha o interior do mapa
	for (int i = 0; i < altura; i++) {
		
		for (int j = 0; j < largura; j++)
		{
			//Quando passar pelo primeiro ponto da linha (que � uma parede), imprime "#"
			if ( j == 0 ) {
				cout << "#";
			} 

			cout << " ";

			//Quando chegar no �ltimo ponto da linha (que � uma parede), imprime "#"
			if ( j == ( largura - 1 ) ) {
				cout << "#";
			}
		}

		//Come�a a imprimir o restante na pr�xima linha
		cout << endl;
	}

	//Desenha a parede debaixo
	for (int i = 0; i < largura + 2; i++) {
		cout << "#";
	}
	cout << endl;
}

void Input () {

}

void Logic () {

}

int main () {

	Setup();

	while (!gameOver) {
		Draw();
		Input();
		Logic();
	}

	return 0;
}