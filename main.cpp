#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Player.h"

using namespace std;

/* USER STORIES */
/*As a user, I would like to be able to play the game
  As a user, I would like to enter my name
  As a user, I would like to have a card dealt
  As a user, I would like to be able to guess either high or low
  As a user, I would like to be able to bet a specific amount
  As a user, I would like to win or lose with notification
  As a user, I would like to to be able to leave the game when I want*/
  
int cash;

int pickCard() {
  int card;
  // srand(time(NULL));
  
  // Randomized cards
  card = rand() % 13 + 1;
  enum faces {Ace, Jack, Queen, King};
}

// User's input here
int Guesser() {
  string guess; // User's guess is not strewn out into individual characters as in the char function
  
  cout << "Right, Is the next card higher or lower?"; // Displays the messge
  cin >> guess; //The user types in the guess
  
  /* THESE IF STATEMENTS WILL BE REDONE SHORTLY */
  if (guess == "higher" || guess == "Higher") { // The answer is now not case sensitive
    cout << "That's right! 'Ave a grand!" << endl;
  } else if (guess == "lower" || guess == "Lower") { // See the first if statement
    cout << "Sorry, mate! That's wrong!" << endl;
  } else {
    cout << "Be clear, mate! I don't understand that!" << endl;
  }
  return 0;
}

int main () {
  srand(time(NULL)); //Randomizer for both
  int card1 = pickCard(); // Card1 is gathered from the pickCard function
  // int card2 = pickCard(); // Leaving out command until I can get the base game working
  double bet; //Betting variable, allows the player to bet
  Player player = Player(); // Player's cash
  
  // Some artwork
  cout << "Hi! Welcome to..." << endl;
  cout << ".------..------..------..------..------..------..------..------." << endl;
  cout << "|H.--. ||I.--. ||G.--. ||H.--. ||-.--. ||L.--. ||O.--. ||W.--. |" << endl;
  cout << "| ://: || (//) || ://: || ://: || (//) || ://: || ://: || ://: |" << endl;
  cout << "| (__) || ://: || ://: || (__) || ://: || (__) || ://: || ://: |" << endl;
  cout << "| '--'H|| '--'I|| '--'G|| '--'H|| '--'-|| '--'L|| '--'O|| '--'W|" << endl;
  cout << "`------'`------'`------'`------'`------'`------'`------'`------'" << endl;
  cout << endl;
  
  cout << "Right, mate! What's yer name?";
  cin >> player.name; //Player enters their name
  
  cout << "Great, " << player.name << ". But before we can start you need some greens" << endl;
  cout << "How much you want to start with?";
  cin >> player.starting_buyin; // Player inputs how much they want to start with
  
  player.buyin = player.starting_buyin; // Once the player inputs their amount, that's the balance throughout
  
  while (player.buyin > 0) {
    cout << "Right, " << player.name << "! You 'ave £" << player.buyin << "." << endl;
    
    while (bet == 0 || bet < player.buyin) {
      cout << "Now, how much do you want to bet?";
      cin >> bet;
      
      if (bet > player.buyin) {
        cout << "Hey, I'm not a bank! I can't loan you money! Bet within limits!\n";
      }
    }
    
  cout << "Cash: £" << player.buyin; // Cash is displayed at the top
  if (player.buyin <= 200) { // The critical amount
    cout << " Watch it! You're almost out of money!"<< endl; // Sends a message if the user has a gambling problem
  } else {
    cout << endl; // Keeps the space clear and the user carries on as normal
  }
  cout <<"================="<< endl; // A E S T H E T I C S
  cout <<"Your 1st card: " << card1 << endl; // Where the card value will be displayed
  // cout <<"Your 2nd card: " << card2 << endl; // Leaving out command until I can get the base game working
  cout <<"================="<< endl; // A E S T H E T I C S

  Guesser();
  }
  return 0;
}
