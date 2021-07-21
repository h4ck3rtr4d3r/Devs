// Aplicativo para alunos de Kabalah 2021!

#include<iostream>
int main()
{
	char name[8];

	int option;

	int spiritual_option, finance_option, relationship_option, health_option;

	std::cout << "Welcome! what is your name?"<<std::endl;
	std::cin  >> name;
	std::cout << "\nHello, "<< name <<" welcome to the Kabbalah Online connection program. \n" << std::endl;
	std::cout << "To begin, which area of your life do you wish to receive more Light??\n";
	std::cout << '\n';

	std::cout << "[1] Spirituality\n[2] Finance\n[3] Relationship\n[4] Health";
	std::cout << "\n";
	std::cout << "Enter your option: ";
	std::cin >> option;
	std::cout << '\n';

	switch (option) {

	case 1:
		std::cout << "Based on the options below, how would you rate your current level of spirituality?\n";
		std::cout << "[1]Bad\n[2]Good\n[3]Excelent\n";
		std::cout << "Enter your option: ";
		std::cin >> spiritual_option;
		std::cout << '\n';
		switch (spiritual_option) {
		case 1:
			std::cout << "The first step is not to jump to conclusions, our 5 senses only perceive 1% of reality" << std::endl;
			break;
		case 2:
			std::cout << "Kabbalists teach us that we can always receive more Light, today try to share even more outside your comfort zone" << std::endl;
			break;
		case 3:
			std::cout << "How wonderful, the mission now is to inspire more and more people to choose the path of Light" << std::endl;
			break;
		default:
			std::cout << "You entered a wrong option - please restart the program." << std::endl;
		}
		break;
	case 2:
		std::cout << "Based on the options below, how do you rate your current level of prosperity?\n";
		std::cout << "[1]Bad\n[2]Good\n[3]Excelent\n";
		std::cout << "Enter your option: ";
		std::cin >> finance_option;
		std::cout << '\n';
		switch (finance_option) {
		case 1:
			std::cout << "The first step is to make restriction, if things get worse it means you are on the right path. Do a tzedaka so that the connection with Yesod is established" << std::endl;
			break;
		case 2:
			std::cout << "Okay, let's go to our next level. Consider committing to making Maaser, you will see that the gates of plenty will open." << std::endl;
			break;
		case 3:
			std::cout << "How fantastic! The mission from now on is to inspire other people to also do tsedaka and maaser." << std::endl;
			break;
		default:
			std::cout << "You entered a wrong option - please restart the program." << std::endl;
		}
		break;
	case 3:
		std::cout << "Based on the options below, how do you qualify your current level in the relationship area?\n";
		std::cout << "[1]Bad\n[2]Good\n[3]Excelent\n";
		std::cout << "Enter your option: ";
		std::cin >> relationship_option;
		std::cout << '\n';
		switch (relationship_option) {
		case 1:
			std::cout << "Make a list of everything you expect from people and start behaving exactly that way. like attracts like." << std::endl;
			break;
		case 2:
			std::cout << "To further strengthen our bonds it is necessary to share with those we love with the simple intention of being one with the Creator" << std::endl;
			break;
		case 3:
			std::cout << "B'H you are amazing. To keep this wonderful energy with you always remember to appreciate the people you love." << std::endl;
			break;
		default:
			std::cout << "You entered a wrong option - please restart the program." << std::endl;
		}
		break;
	case 4:
		std::cout << "Based on the options below, how do you qualify your current health level??\n";
		std::cout << "[1]Bad\n[2]Good\n[3]Excelent\n";
		std::cout << "Enter your option: ";
		std::cin >> health_option;
		std::cout << '\n';
		switch (health_option) {
		case 1:
			std::cout << "The Light is the cause and therefore the cure was created even before the illness. Strengthen your certainty in this concept that healing will begin to manifest in your life." << std::endl;
			break;
		case 2:
			std::cout << "The next level is to reach immortality, meditate for all the people you know who need health and healing." << std::endl;
			break;
		case 3:
			std::cout << "The light of health flows through you, be sure to share this with everyone." << std::endl;
			break;
		default:
			std::cout << "You entered a wrong option - please restart the program." << std::endl;
		}
		break;
	default:
		std::cout << "You entered a wrong option - please restart the program." << std::endl;

		system("pause>0");
		return 0;
	}
}