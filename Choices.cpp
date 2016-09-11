#include "Choices.h"

void Choices::add(string desc, function<void(int)> choiceCallback)
{
	allChoices.push_back({desc, choiceCallback});
}

Choice Choices::pop(int index)
{
	Choice poppedChoice = allChoices[index];
	allChoices.erase(allChoices.begin() + index);
	return poppedChoice;
}
//TODO manage input so we dont try to access unavailable indices
Choice Choices::getChoice(int index)
{
	if (size() < index)
	{
		//Invalid input
		cout << index << ": No viable action";
		index = 0; //This needs to be handled somehow, the player should only be able to use the speccefied actions(indices).
	}
	return allChoices[index];
}

void Choices::setChoice(int index, string desc, function<void(int)> choiceCallback)
{
	if (size() < index)
	{
		//Invalid input
		cout << index << ": No viable action";
		index = 0; //This needs to be handled somehow, the player should only be able to use the speccefied actions(indices).
	}
	allChoices[index].decsription = desc;
	allChoices[index].callback = choiceCallback;
}

int Choices::size()
{
	return (int)allChoices.size();
}

Choice* Choices::all()
{
	return &allChoices[0];
}
