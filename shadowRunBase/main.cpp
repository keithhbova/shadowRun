#include "utils.h"
#include "players.h"

std::string GetCurrentWorkingDir( void ) {
  char buff[FILENAME_MAX];
  GetCurrentDir( buff, FILENAME_MAX );
  std::string current_working_dir(buff);
  return current_working_dir;
}

std::string getPathOfPlayerInitFile(const std::string & fileName){
	std::stringstream ss;
	std::string buildDirectory = GetCurrentWorkingDir();
	for(int i = 0; i < 5; i++){
		buildDirectory.pop_back();
	}
	ss << buildDirectory << "player_init/" << fileName;
	return ss.str();
}

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

	std::string chalkPath = getPathOfPlayerInitFile("Chalk.txt");
	std::cout << loadPlayerFromTxt(chalkPath) << std::endl;
	//writeNewPlayer("player_init//dante.txt", dante);

	return 0;
}
