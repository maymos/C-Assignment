#include <iostream>
#include <time.h>
using namespace std;

int main()
{
  srand (time(NULL));

  bool ships[4][4] =
  {
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }
  };
  for (int m=0; m<4; m++)
  {
      int lis[4] = {0,1,2,3};
      int RanIndex = rand()% 4;
      int RanIndexc = rand()% 4;
      int x = lis[RanIndex];
      int y = lis[RanIndexc];
      ships[x][y]=1;
  }
  int s = 0;
  for (int i= 0; i<4; i++)
    {
        for(int j= 0; j<4; j++)
            {
                //count for total no of '1' if it is up to 4
                if (ships[i][j]==1 &&s<4)
                {
                    s++;
                    //cout<<"ships["<<i<<"]["<<j<<"]= "<<ships[i][j]<<endl;
                }
                else
                {
                   continue;
                }

            }
    }
    //if the numbers of "1" are less than 4 redo the random setting of four element to four
    if (s<4)
    {
      int mylis[4] = {0,1,2,3};
      int NRanIndex = rand()% 4;
      int NRanIndexc = rand()% 4;
      int x = mylis[NRanIndex];
      int y = mylis[NRanIndexc];
      ships[x][y]=1;
      //cout<<"ships["<<x<<"]["<<y<<"]= "<<ships[x][y]<<endl;
    }


    // Keep track of how many hits the player has and how many turns they have played in these variables
  int hits = 0;
  int numberOfTurns = 0;

  // Allow the player to keep going until they have hit all four ships
  while (hits < 4) {
    int row, column;

    cout << "Selecting coordinates\n";

    // Ask the player for a row
    cout << "Choose a row number between 0 and 3: ";
    cin >> row;

    // Ask the player for a column
    cout << "Choose a column number between 0 and 3: ";
    cin >> column;

    // Check if a ship exists in those coordinates
    if (ships[row][column]) {
      // If the player hit a ship, remove it by setting the value to zero.
      ships[row][column] = 0;

      // Increase the hit counter
      hits++;

      // Tell the player that they have hit a ship and how many ships are left
      cout << "Hit! " << (4-hits) << " left.\n\n";
    } else {
      // Tell the player that they missed
      cout << "Miss\n\n";
    }

    // Count how many turns the player has taken
    numberOfTurns++;
  }

  cout << "Victory!\n";
  cout << "You won in " << numberOfTurns << " turns";

  return 0;
}

