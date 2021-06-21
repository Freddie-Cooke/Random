#include <iostream>
#include <vector>

//Tic tac toe req
//Game board
//X and O Placements
//Win / Tie conditions

class Board {

public:

	void renderBoard() {
		std::cout << boardVector[0] << "|" << boardVector[1] << "|" << boardVector[2] << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << boardVector[3] << "|" << boardVector[4] << "|" << boardVector[5] << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << boardVector[6] << "|" << boardVector[7] << "|" << boardVector[8] << std::endl;
		std::cout << std::endl;
	}

	void changeSquare(int pos, char character) {
		if (boardVector[pos] == ' ') {
			boardVector[pos] = character;
		}
		else {
			std::cout << "\nSquare taken" << std::endl;
		}
	}

	std::string checkWin(char character) {
		
		if (boardVector[0] == character && boardVector[1] == character && boardVector[2] == character) { return "Win"; }
		if (boardVector[3] == character && boardVector[4] == character && boardVector[5] == character) { return "Win"; }
		if (boardVector[6] == character && boardVector[7] == character && boardVector[8] == character) { return "Win"; }

		if (boardVector[0] == character && boardVector[3] == character && boardVector[6] == character) { return "Win"; }
		if (boardVector[1] == character && boardVector[4] == character && boardVector[7] == character) { return "Win"; }
		if (boardVector[2] == character && boardVector[5] == character && boardVector[8] == character) { return "Win"; }

		if (boardVector[0] == character && boardVector[4] == character && boardVector[8] == character) { return "Win"; }
		if (boardVector[2] == character && boardVector[4] == character && boardVector[6] == character) { return "Win"; }
		
		int count = 0;
		for (int i = 0; i < boardVector.size(); i++) { if (boardVector[i] == ' '){ count++; } }
		if (count < 1) { 
			return "Tie";
		}
		else {
			return "Continue";
		}
	}

private:
	std::vector<char> boardVector = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
};

int main() {

	Board b;
	b.renderBoard();

	while (true) {
		char inputChar;
		int inputPos;
		std::cout << "Enter char: ";
		std::cin >> inputChar;
		std::cout << "Enter pos: ";
		std::cin >> inputPos;
		std::cout << std::endl;s
		b.changeSquare(inputPos, inputChar);
		b.renderBoard();
		if (b.checkWin('X') != "Continue") { std::cout << b.checkWin('X'); break; }
	}

	return 0;
}