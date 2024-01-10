#include <iostream>
#include <string>

using namespace std;
int main() {
	string message;
	string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz "};
	string key {"IHDRFTGBNPOLMNQWERTSFGIQWXabshirgdtjqmxrifklompirtsc "};

	cout << "Enter a message: ";
	getline(cin, message);
	string newMessage(message.length(), ' ');

	int iterator = 0;
	for(char n: message) {
		int index = alphabet.find(n);
		newMessage.at(iterator) = key.at(index);
		iterator++;
	}

	cout << "Your message was: " << message << endl; 
	cout << "The encryption is: " << newMessage << endl;
	

	iterator = 0;
	for(char n: newMessage) {
		int index = key.find(n);
		newMessage.at(iterator) = alphabet.at(index);
		iterator++;
	}
	cout << "Your now unencrypted message is: " << newMessage << endl; 

	return 0;
}
