#include <iostream>

using namespace std;

int main(){

string lett[2][2][3] =
    {

        {
          {"E","A","T"},
          {"H","C","K"}
        },
        {
          {"L","J","M"},
          {"I","O","X"}
        }

    };

for (int i = 0; i<2; i++)
    {
        for (int j=0; j<2; j++)
            {
                for (int k=0; k<3; k++)
                {
                    cout<<"Iteration "<<i<<j<<k<<" = "<<lett[i][j][k]<<endl;
                }
            }
    }

return 0;
}



