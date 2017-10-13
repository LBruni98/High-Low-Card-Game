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
	//srand(time(NULL)); //Randomizer for both
	int card;
	
  // Randomized cards
  card = rand() % 13 + 1; // 
  //enum faces {Ace, Jack, Queen, King};
  return card;
}

// User's input here
Player Guesser(Player player, int card1, int bet) {
	int card2 = pickCard();
  string guess; // User's guess is not strewn out into individual characters as in the char function
  
  cout << "Right, Is the next card higher or lower?"; // Displays the messge
  cin >> guess; // The user types in the guess
  
  cout <<"================="<< endl; // A E S T H E T I C S
  cout <<"Your 2nd card: " << card2 << endl; // Second card is printed here
  cout <<"================="<< endl; // A E S T H E T I C S
  
  /* THE PLAYER IS RIGHT OR WRONG*/
  if (guess == "higher" || guess == "Higher") { // The answer is now not case sensitive
	   if(card2 > card1){ // This means that the card you're guessing is higher that the first
	   	cout << "That's right! 'Ave yer bet!" << endl; // If the card value is higher, then the user is right
	   	player.buyin = player.buyin + bet; //Also, he wins the bet! The lucky bastard!
	   }else{
	   	    cout << "Sorry, mate! That's wrong!" << endl; // Otherwise, if the card is NOT higher, he loses  
	   	    player.buyin = player.buyin - bet; // And his bet is deducted! What a loser
	   }
	// Vice Versa
  } else if (guess == "lower" || guess == "Lower") { // See the first if statement
      if(card2 < card1){
	   	cout << "That's right! 'Ave yer bet!" << endl;
	   	player.buyin = player.buyin + bet;
	   }else{
	   	    cout << "Sorry, mate! That's wrong!" << endl;
	   	    player.buyin = player.buyin - bet;
	   }
  } else {
    cout << "Be clear, mate! I don't understand that!" << endl; // The player inputs anything other that "higher" or "lower"
  }
  
  return player;
}

int main () {
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
    
    do {
      cout << "Now, how much do you want to bet?";
      cin >> bet;
      
      if (bet > player.buyin) {
        cout << "Hey, I'm not a bank! I can't loan you money! Bet within limits!\n";
      }else{
      	  cout << endl;
      }
    }while (bet == 0 || bet  > player.buyin);
    
  int card1 = pickCard(); // Card1 is gathered from the pickCard function
  
  cout << "Cash: £" << player.buyin; // Cash is displayed at the top
  if (player.buyin <= 200) { // The critical amount
    cout << " Watch it! You're almost out of money!"<< endl; // Sends a message if the user has a gambling problem
  } else {
    cout << endl; // Keeps the space clear and the user carries on as normal
  }
  cout <<"================="<< endl; // A E S T H E T I C S
  cout <<"Your 1st card: " << card1 << endl; // Where the card value will be displayed
  cout <<"================="<< endl; // A E S T H E T I C S

  player = Guesser(player, card1, bet);
  
  }
  return 0;
}
