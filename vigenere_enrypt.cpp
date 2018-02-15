#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string input, key;
	string in_key, out;
	
	cout << "Input: ";
	cin >> input;
	transform(input.begin(), input.end(), input.begin(), ::toupper);
	cout << "Key: ";
	cin >> key;
	transform(key.begin(), key.end(), key.begin(), ::toupper);
	
	int j=0;
	for(int i=0; i<input.size(); i++){
		if(j > key.size()-1) j=0;
		in_key += key[j++];
		out += (((input[i]-65) + (in_key[i]-65)) % 26) + 65;
	}
	cout << "Plain text: " << input << endl;
	cout << "Key: " << in_key << endl;

	cout << "Chiper: " << out << endl;
}
