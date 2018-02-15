#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string input, key;
	string in_key, out;
	
	cout << "input: ";
	cin >> input;
	transform(input.begin(), input.end(), input.begin(), ::toupper);
	cout << "Key: ";
	cin >> key;
	transform(key.begin(), key.end(), key.begin(), ::toupper);
	
	int j=0;
	for(int i=0; i<input.size(); i++){
		if(j > key.size()-1) j=0;
		in_key += key[j++];
        
        int de = ((input[i]-65) - (in_key[i]-65)); 
		if(de>=0) out += (de % 26) + 65;
        else out += 26+(de % (-26)) + 65;
	}
	cout << "Chiper: " << input << endl;
	cout << "Key: " << in_key << endl;

	cout << "Plain text: " << out << endl;
}
