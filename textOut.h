#include <chrono>
#include <thread>

using namespace std;

void wait(int t)
{
	//sleeps for t seconds
	std::this_thread::sleep_for(std::chrono::milliseconds(t));
}

void textOut(char text[])
{
	//Iterating variable
	int i = 0;
	//Loops untill \0 is hit
	while (text[i] != '\0')
	{
		//Print a letter
		cout << text[i];
		i++;
		//pause
		wait(50);
	}
}