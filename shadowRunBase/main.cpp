#include "utils.h"
#include "players.h"

void writeNewPlayer(const std::string & fileName, const Player & player){
	std::ofstream newPlayer;
	newPlayer.open(fileName);
	newPlayer << player.toString() << std::endl;
	newPlayer.close();
}

std::string loadPlayerFromTxt(const std::string & fileName){
	std::string line;
	std::stringstream ss;
	std::ifstream myFile(fileName);
	if(myFile.is_open()){
		while(getline(myFile, line)){
			ss << line << "\n";
		}
	myFile.close();
	}
	else{
		ss << "unable to open file" << std::endl;
	}
	return ss.str();
}

int main(){
	Player dante("Dante");
	//std::cout << "Player:\t" << dante.toString() << std::endl;


	std::cout << loadPlayerFromTxt("/home/keith/Desktop/shadowrunstuff/shadowRun/player_init/Chalk.txt") << std::endl;
	//writeNewPlayer("player_init//dante.txt", dante);

	return 0;
}
