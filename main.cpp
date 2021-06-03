#include <iostream>
#include <ctime>

void PrintIntroduction()
{
    std::cout << "You are trying to break into FirstNumber secure server room." << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl << std::endl;
}

bool PlayGame(int Difficulty)
{
    std::cout << "The level difficulty is " << Difficulty << std::endl << std::endl;

    const int FirstNumber = rand() % (Difficulty + Difficulty);
    const int SecondNumber = rand() % (Difficulty + Difficulty);
    const int ThirdNumber = rand() % (Difficulty + Difficulty);

    const int Sum = FirstNumber + SecondNumber + ThirdNumber;
    const int Product = FirstNumber * SecondNumber * ThirdNumber;

    std::cout << "+ There are three numbers in the code" << std::endl;
    std::cout << "+ The codes multiply to give " << Product << std::endl;
    std::cout << "+ The codes add up to " << Sum << std::endl << std::endl;
    std::cout << "Enter the three code numbers followed by x" << std::endl;

    int PlayerGuess;
    int PlayerGuess2;
    int PlayerGuess3;

    std::cin >> PlayerGuess >> PlayerGuess2 >> PlayerGuess3;

    int GuessSum = PlayerGuess + PlayerGuess2 + PlayerGuess3;
    int GuessProduct = PlayerGuess * PlayerGuess2 * PlayerGuess3;

    if(GuessSum == Sum && GuessProduct == Product)
    {
        std::cout << "You have won this round!\n\n";
        return true;
    }
    else
    {
        std::cout << "You have lost... Try again.\n\n";
        return false;
    }
}

int main()
{
    srand(time(NULL));

    PrintIntroduction();
    int LevelDifficulty = 1;
    const int MaxLevel = 5;

    while(LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.clear(); // Discards the buffer

        if(bLevelComplete) {
            LevelDifficulty += 1;
        }
    }
    std::cout << "Congratulations on winning the game!\n\n";
    return 0;
}