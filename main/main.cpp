#include <iostream>

using namespace std;

//Variável utilizada para verificar se o jogo foi finalizado ou não
bool gameOver;

//Dimensões do mapa do jogo
const int largura = 20;
const int altura = 20;

//Posição da cabeça
int x, y;

//Posição da fruta
int frutaX, frutaY;

//Total de pontos
int score;

//Direções que podem ser tomadas pela cobra
enum eDirecao {
	PARADA = 0,
	ESQUERDA,
	DIREITA,
	CIMA,
	BAIXO
};

//Direção atual da cobra
eDirecao direcao;

//Função responsável pela inicialização do jogo
void Setup() {
	
	gameOver = false;
	
	direcao = PARADA;
	
	x = largura / 2;
	y = altura / 2;

	frutaX = rand() % largura;
	frutaY = rand() % altura;

	score = 0;
}

//Desenha as informações na tela
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
			//Quando passar pelo primeiro ponto da linha (que é uma parede), imprime "#"
			if ( j == 0 ) {
				cout << "#";
			} 

			//Se encontrar as coordenadas definidas para a cabeça, então a desenha no mapa
			if ( i == y && j == x ) {
				cout << "O";
			}  else if ( i == frutaX && j == frutaY ) {
				cout << "F";
			} else {
				cout << " ";
			}

			//Quando chegar no último ponto da linha (que é uma parede), imprime "#"
			if ( j == ( largura - 1 ) ) {
				cout << "#";
			}
		}

		//Começa a imprimir o restante na próxima linha
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