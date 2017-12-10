# High Low
Project 002

## Table of Contents
1. Introduction
2. Development
3. Creation and Implementation
4. Research

## Introduction
This design document showcases the design, development and implementation of "High Low", along with the features and mechanics within the game.

#### Brief Description
It's a simple high stakes game that has you quickly betting against the dealer! Is the card higher or lower than yours? Bet the amount that you want and the game will change the intensity in how much you place on the table!

The cards are randomized and will come with different values, its up to you to guess whether it'll be higher or lower! Sounds easy? *Looks* easy? Looks can be very deceiving...

> Do you feel lucky?

#### High-Level Description
A player is shown a random playing card, then is asked to decide whether the next card will be 'higher' or 'lower'. If the guess is correct, the player is awarded with a 'cash' prize.

Required language: C++

## Development

#### User Stories
1. As a user, I would like to be able to play the game
2. As a user, I would like to enter my name
3. As a user, I would like to have a card dealt
4. As a user, I would like to be able to guess either high or low
5. As a user, I would like to be able to bet a specific amount
6. As a user, I would like to win or lose with notification
7. As a user, I would like to to be able to leave the game when I want

#### Development Timetable
| User Story | Task Description                             | Points | Due Date |
| ---------- |--------------------------------------------- | ------ | -------- |
| 1          | Starting the game                            | 1      | 09/10    |
| 2          | Name entry and storage                       | 1      | 09/10    |
| 3          | Drawing both cards                           | 2      | 10/10    |
| 4          | Guessing and outcomes                        | 3      | 10/10    |
| 5          | Implement Betting                            | 3      | 11/10    |
| 6          | Winning/Losing outcomes and game over screen | 3      | 12/10    |
| 7          | Boolean and options                          | 2      | 12/10    |

#### Use of Teamwork/Communication
Not too different from the first project, the task asked for the planning to be carried out in groups and work is to be completed individually. Again, I helped with the user stories to help out with creating the project in the form of small tasks.

I also helped out fellow members of 'Reboot games' when it came to some aspects of their versions of the product. The betting portion of the game and dealing the cards.

#### Flowchart
![Flowchart](https://github.com/LBruni98/High-Low-Card-Game/blob/master/Untitled%20Diagram.jpg)

Here the flowchart displays what the project should do, as well as what happens when the player is right or wrong with guessing the dealt cards. It shows the betting portion and if the player's money equates to zero, the game is over and the player can choose whether to start again or end the game.

## Creation and Implementation
#### Process of Implementation
The way to successfully implement this algorithm is to go at the tasks individually and that way, the whole process is ordered and each task can be fully realized. Much of this is derived from the first project and will be basis for future projects as well as this.

The first step to creating the program is to plan out what the initial steps for development; outlining the user stories and creating flowcharts and pseudo-code of the program, generally to understand how it will work and its layout.

Next is to find the IDE and programming language applicable for the program; what will help with the development and what would best suit the program. The IDE chosen was [repl.it](https://repl.it/) being a simple IDE that has the capabilites of a common IDE.

Then would be to take the stories and create the program in accordance to the user stories laid out in planning. The program takes shape here as individual tasks, rather than approaching the program in a huge epic. Along with easier development through individual tasks, the user can also test every individual part for easier testing and can easily understand the structure of the code.

Finally comes to the execution. For this project, the chosen language for the product would be in C++ as it being a program and the IDE being able to help out with building the program.

Overall, the implementation of the code would be considered adequete compared to the first project, where this time I was able to learn more of the features and functions included in C++ to help build my program and interpret the tasks into actual code better. References down below helped with my understanding of the language, as it was also the first time learning said language and using a proper IDE.

#### IDE
![IDE](https://github.com/LBruni98/High-Low-Card-Game/blob/master/Project%202%20-%20Proof%201.PNG)

The IDE used was [repl.it](https://repl.it/) which is an online IDE that covers numerous programming languages other than C++ and can help out immensely, such as the ability to create webpages with HTML. It was used for this task and helped with the development of the program, because it had the fundamentals of a common IDE such as syntax highlighting and is a code interpreter and can also the code can be directly link to the github account. Though the downsides were that this is more or less a simple IDE and some errors were hard to solve without the help of the internet, something that could've been easier with a proper IDE.

#### Coding Standards
Coding Standards are a set of guidelines for a developer to follow in order to create high quality code. These guidelines help a developer write in a specific way that best suits that language. It works because developers would have written in their own style when others would write their code in a different style; different indentation, naming of functions and commenting. If in a workplace environment, setting a standard for coders would help, so to improve readability of the code and helps with editing and modifying.

##### Evaluation
The coding standards in my project almost match what was stated above. I used this in order to make the code readable, not just to me, but also to other who want to read the lines of code, structuring the code in a way to show what does what and what is what. For instance, the start of functions would usually have the "{" symbol by the function to help the user and I to determine the beginning of the function rather than placing said symbol either underneath or positioning the part of the code all on one line. Comments are also a factor in the standards that I've used to give the user a clear idea of what each function or line in the code does. Whenever, I head back into this for reference, the standards that I have adopted will help with distinguishing the code to all people; members of the team, other programmers or myself.

#### Debugging
As Repl is considered an IDE, syntax errors are given out should the code terminate not as a zero or it crashes and the line number is given along with the description of the error, which helps out with rectifying the code. This helped me solve most of the errors that came up during development which is a step up considering the last project was created in notepad, a basic text editor which doesn't really qualify as an IDE. The only issue with Repl was that not all the errors were realized and solved because it lacked features and debugging tools seen in most IDEs, so the only way to solve the problem was to look it up via the internet or just rewrite portions of the code.

#### Development of Code
##### Randomly dealt cards
In order to have the sense of luck and keep the player thinking, the cards would need to be randomized. This way the cards dealt won't be in order and the player would just have to guess precisely if the next card is higher or lower.

```cpp
int pickCard() {
	//srand(time(NULL)); //Randomizer for both
	int card;
	
  // Randomized cards
  card = rand() % 13 + 1; // Randomizes numbers between 13 and 1
  //enum faces {Ace, Jack, Queen, King};
  //switch (card){
  return card; // Return the card face
}
```

Here the cards are randomized between a number of 1 to 13 and then it returns that card. The cards aren't pesudo-random but rather actually random with each hand being dealt. This is where the `srand(time(NULL))` function comes in but called to both card variables each.

![Randomized Cards](https://github.com/LBruni98/High-Low-Card-Game/blob/master/Project%202%20-%20Proof%203.PNG)

The card number is randomized each time.

##### Betting
The game also has money involved where the player inputs their chosen amount and bets certain values each time. The player should then either have the bet rewarded if that player is correct or have it deducted from the overall amount if the player is wrong.

```cpp
do { //a do loop for the betting
      	cout << "Now, how much do you want to bet?";
      	cin >> bet; // Player inputs their bet
      
      	if (bet > player.buyin) { // If the bet is over their starting limit...
        	cout << "Hey, I'm not a bank! I can't loan you money! Bet within limits!\n"; // This message shows and the user must bet appropriately
      	}else{
      	  cout << endl; // Otherwise, it ends the line and the user carries on.
      	}
    	}
    	while (bet == 0 || bet > player.buyin); // while loop for the game to play after a bet has been made
```
This function makes the user input a bet and stores it for the round. If the player inputs a value higher than their chosen amount, the game declines to and the player has to make a more reasonable bet.

```cpp
/* THE PLAYER IS RIGHT OR WRONG*/
  if (guess == "higher" || guess == "Higher") { // The answer is now not case sensitive
	   if(card2 > card1){ // This means that the card you're guessing is higher that the first
	   	cout << "That's right! 'Ave yer bet!" << endl; // If the card value is higher, then the user is right
	   	player.buyin = player.buyin + bet; //Also, the user wins the bet! The lucky devil!
	   }else{
	   	    cout << "Sorry, mate! That's wrong!" << endl; // Otherwise, if the card is NOT higher, the user loses...  
	   	    player.buyin = player.buyin - bet; // ...and his bet is deducted! What a loser!
	   }
```
```cpp
// Vice Versa
  } else if (guess == "lower" || guess == "Lower") { // See the first if statement
      if(card2 < card1){
	   	cout << "That's right! 'Ave yer bet!" << endl;
	   	player.buyin = player.buyin + bet;
	   }else{
	   	    cout << "Sorry, mate! That's wrong!" << endl;
	   	    player.buyin = player.buyin - bet;
	   }
```
These two functions are for when the player guesses the value of their card. The parameters are the same and are called whether the player is right or wrong.

![Betting in Action](https://github.com/LBruni98/High-Low-Card-Game/blob/master/Project%202%20-%20Proof%205.PNG)
The player inputs their bet.

![Correct!](https://github.com/LBruni98/High-Low-Card-Game/blob/master/Project%202%20-%20Proof%206.PNG)
![Wrong](https://github.com/LBruni98/High-Low-Card-Game/blob/master/Project%202%20-%20Proof%207.PNG)
When the player is right or wrong.

## Research
* http://www.cplusplus.com
* https://www.tutorialspoint.com/cplusplus/
