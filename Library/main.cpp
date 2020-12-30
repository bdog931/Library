//A Simple Library Program Using Heap Allocated Arrays

#include <iostream>
#include <string>

void removeBook(std::string library[], int numberOfBooks) 
{

}
void addBook(std::string library[], int numberOfBooks)
{

}
void printBooks(std::string library[], int numberOfBooks) //The brackets ensure the compiler knows that this is indeed an array
{
	for (int i = 0; i < numberOfBooks; i++)
	{
		std::cout << library[i];
		std::cout << std::endl;
	}
}
int main()
{
	//heap alloacted 1d array
	std::string* library = nullptr;
	std::cout << "How many books would you like to have in your library?  ";
	int numberOfBooks = 0;
	std::cin >> numberOfBooks;
	//Now having our pointer to integers be pointing to an array of integers
	library = new std::string[numberOfBooks];
	std::cout << std::endl;
	for (int i = 0; i < numberOfBooks; i++)
	{
		std::cout << "What would you like for your " << i + 1 << "th book to be?  ";
		std::cin >> library[i];
		std::cout << std::endl;
	}
	bool usingApp = true;
	int userChoice = 0;
	do
	{
		std::cout << "Here is a list of your current library" << std::endl;
		printBooks(library, numberOfBooks);
		std::cout << "Would you like to:" << std::endl;
		std::cout << "1. Remove a book from your libary, or " << std::endl;
		std::cout << "2. Add a book to your library, or" << std::endl;
		std::cout << "3. Exit the program?";
		std::cin >> userChoice;
		if (userChoice == 1) 
		{
			removeBook(library, numberOfBooks);
		}
		if (userChoice == 2) 
		{
			addBook(library, numberOfBooks);
		}
		else 
		{
			std::cout << "Thanks for using the application" << std::endl;
			usingApp = false;
		}
	} while (usingApp == true);
	//remember to delete it
	//Of course if we want to re-size our array, then we can do that manually
}