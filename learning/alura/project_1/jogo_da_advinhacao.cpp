#include <iostream>

int main(){
	const int NUMERO_SECRETO = 42;
	std::cout << "*************************************" << std::endl;
	std::cout << "* Bem-vindos ao jogo da adivinhação *" << std::endl;
	std::cout << "*************************************" << std::endl;


	bool nao_acertou = true;
	int chute;
	int tentativas = 0;

	double pontos = 1000.0;

	while (nao_acertou)
	{
		tentativas++;

		std::cout << "	[TENTATIVA " << tentativas << "]"<< std::endl;
		std::cout << "Chute um numero:";
		std::cin >> chute;

		double pontos_perdido = abs(chute - NUMERO_SECRETO)/2;
		pontos -= pontos_perdido;

		bool acertou = (chute == NUMERO_SECRETO);
		bool chute_maior = (chute > NUMERO_SECRETO);


		if(acertou){
			nao_acertou = false;
		}
		else if(chute_maior){
			std::cout << "Chute maior que o numero secreto." << std::endl;
		}
		else{
			std::cout << "Chute menor que o numero secreto." << std::endl;
		}
	}
	std::cout << "	!!FIM DE JOGO!!" << std::endl;
	std::cout << "Você acertou o numero secreto em " << tentativas << " tentativas." << std::endl;
	std::cout << "	[PONTOS]{" << pontos << "}" << std::endl;

}