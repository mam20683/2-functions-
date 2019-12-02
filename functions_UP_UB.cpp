// Michael Matos, CSC 201, Nov. 21, 2019
#include <iostream>

using namespace std;

int main ()
{
    userInput();
    updateBoard();
    return 0;
}


void userInput() {
    // Takes the user's input
  cout << "Enter the input a location you think a ship is: "
    // tests for valid data and prints message if false test for sentinel value
        position_1 = 11; // sets position1 and position2 to 11
        position_2 = 11; // so that the while loop will initiate below

			while (position_1 > 9 || position_2 > 9) // loops while position1 is more than 9 OR position 2  is more than 9.
			{
				if (cpuFound == 10 || found == 10)
				{
					break;
				}
				cout << "Please input the location on the grid you think a battleship is: "; // prompts the user to enter co-ordinates.

				cin >> position1 >> position2; // takes the keyboard input and stores it in position

				while (cin.fail()) // this will inintiate if the user enters a non integer input.
				{
					cin.clear(); // clears the cin.
					cin.ignore(); // ignores so it does not go in to an infinite loop
					cout << "not it, try again: ";
					 cin >> position1 >> position2; // re prompts the user to enter their input
				}
			}

    // Test user input for ship
}

//Update/display function - (char[][], bool[][])
(pre: both [][] already declared; post: updates [][]s)
  void updateBoard(char[10][10], bool[10][10])
  for (int x = 0; x < 10; x++) // the 10 is represented as the maximum amount of rows 10 x 10
  {
      for (int i = 0; i < elements; i++)
      {
          cout << board [x][i] << " ";
      }
      {
          cout << endl;
      }
  }


