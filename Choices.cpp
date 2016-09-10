#include "Choices.h"

Choice Choices::getChoice(int index)
{
	return allChoices[index];
}

void Choices::setChoice(int index, string desc, function<void(int)> choiceCallback)
{
	allChoices[index].decsription = desc;
	allChoices[index].callback = choiceCallback;
}

Choice* Choices::all()
{
	return allChoices;
}
