#include <iostream>
#include <string>

struct Questions
{
    std::string question;
    std::string Option[3];
    int correctOption;
};

void printQuestions(Questions *questions, int numQuestions)
{
    int choice;
    for (int i = 0; i < numQuestions; i++)
    {
        std::cout << "Question " << (i + 1) << " -> " << questions[i].question << std::endl;
        std::cout << "1. " << questions[i].Option[0] << std::endl;
        std::cout << "2. " << questions[i].Option[1] << std::endl;
        std::cout << "3. " << questions[i].Option[2] << std::endl;

        bool validOption = false;
        while (!validOption)
        {
            std::cout << "Choose an option (1-3):" << std::endl;
            std::cin >> choice;

            if (choice < 1 || choice > 3)
            {
                std::cout << "Invalid Entry !!! please enter a valid onle...";
            }
            else
            {
                validOption = true;
            }
        }

        if (choice == questions[i].correctOption)
        {
            std::cout << "Correct option!!" << std::endl;
        }
        else
        {
            std::cout << "Incorrect option." << std::endl;
        }
    }
}

int main()
{
    const int numQuestions = 5;
    Questions quiz[numQuestions];

    quiz[0].question = "Which planet is known as the Red Planet?";
    quiz[0].Option[0] = "Venus";
    quiz[0].Option[1] = "Mars";
    quiz[0].Option[2] = "Jupiter";
    quiz[0].correctOption = 2;

    quiz[1].question = "Who painted the Mona Lisa?";
    quiz[1].Option[0] = "Vincent van Gogh";
    quiz[1].Option[1] = "Leonardo da Vinci";
    quiz[1].Option[2] = "Pablo Picasso";
    quiz[1].correctOption = 2;

    quiz[2].question = "What is the capital of Australia?";
    quiz[2].Option[0] = "Melbourne";
    quiz[2].Option[1] = "Sydney";
    quiz[2].Option[2] = "Canberra";
    quiz[2].correctOption = 3;

    quiz[3].question = "Which country is home to the tallest mountain in the world, Mount Everest?";
    quiz[3].Option[0] = "India";
    quiz[3].Option[1] = "Nepal";
    quiz[3].Option[2] = "China";
    quiz[3].correctOption = 2;

    quiz[4].question = "Who wrote the play Romeo and Juliet?";
    quiz[4].Option[0] = "William Shakespeare";
    quiz[4].Option[1] = "Oscar Wilde";
    quiz[4].Option[2] = "Jane Austen";
    quiz[4].correctOption = 1;

    printQuestions(quiz, numQuestions);

    return 0;
}
