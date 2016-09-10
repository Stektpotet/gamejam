#pragma once
#include <iostream>
#include <string>
#include <functional>
using namespace std;




struct Choice
{	
	string decsription;
	function<void> callback;
};
void initOslo()
{
	cout << "traveling to oslo!";
}
void initBergen()
{

}

