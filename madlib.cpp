#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//vars
	string name;
	string adjective;
	string noun;
	string adjective1;
	string food_plural;
	string noun_plural;
	string verb_endedin_ed;
	string noun1;
	
	cout << "Welcome to my madlib\n";
	cout << "Please enter in some information below.\n";
	
	cout << "Enter a name\n";
	cin >> name;
	
	cout << "Enter an adjective\n";
	cin >> adjective;
	
	cout << "Enter a noun\n";
	cin >> noun;
	
	cout << "Enter another adjective\n";
	cin >> adjective1;
	
	cout << "Enter a plural food (eg apples)\n";
	cin >> food_plural;
	
	cout << "Enter a plural noun (eg boots)\n";
	cin >> noun_plural;
	
	cout << "Enter a verb ending in -ed (eg sipped)\n";
	cin >> verb_endedin_ed;
	
	cout << "Enter one more noun\n";
	cin >> noun1;
	
	cout << "Here is your MADLIB\n";
	
	cout << "=================================\n";
	
	cout << "Come on over to " + name + "'s Pizza Parlor ";
	cout << "where you can enjoy your favorite " + adjective;
	cout << "-dish pizzas.";
	cout << "You can try our famous " + noun + "-lovers pizza,";
	cout << "or select from our list of " + adjective1; 
	cout << " toppings, including delicious " + food_plural + " ";
	cout << noun_plural + ", and many more. ";
	cout << "Our crusts are hand-" + verb_endedin_ed + " and basted in ";
	cout << noun1 + " to make them seem more Hand-made.";
	

	
    
}