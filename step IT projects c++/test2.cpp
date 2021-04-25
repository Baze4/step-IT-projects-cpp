#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()
{
	int choice;

do
{


cout << endl
<< " 1 - Start the game.\n"
<< " 2 - Story.\n"
<< " 4 - Help.\n"
<< " 5 - Exit.\n"
<< " Enter your choice and press return: ";
cin >> choice;

switch (choice)
{
case 1:
//code to start the game
break;
case 2:
//code to make score for this game to count how many times u win the game
break;
case 3:
//code to make option for the game
break;
case 4:
//code to help the user like give him
//extra information about the mode and the controller
break;
case 5:
cout << "End of Program.\n";
break;
default:
cout << "Not a Valid Choice. \n"
<< "Choose again.\n";
break;
}

}while (choice !=5);
return 0;
	
}
