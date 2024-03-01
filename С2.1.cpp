#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a 6-digit number: ";
    cin >> num;

    if (num >= 100000 && num <= 999999)
    {
        int digit1 = num / 100000 % 10;
        int digit2 = num / 10000 % 10;
        int digit3 = num / 1000 % 10;
        int digit4 = num / 100 % 10;
        int digit5 = num / 10 % 10;
        int digit6 = num % 10;

        if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6)
        {
            cout << "The number is lucky!" << endl;
        }
        else
        {
            cout << "The number is not lucky." << endl;
        }
    }
    else
    {
        cout << "Error! Please enter a 6-digit number." << endl;
        return 1;
    }


    /*2*/
    int num1;
    cout << "Enter a 4-digit number: ";
    cin >> num1;

    if (num <= 1000 && num >= 9999)
    {
        std::cout << "Error! Please enter a 4-digit number." << std::endl;
        return 1; 
    }

    int digit1 = num / 1000 % 10; 
    int digit2 = num / 100 % 10;  
    int digit3 = num / 10 % 10;   
    int digit4 = num % 10;  

    digit1 = (digit1 + 1) % 10; 
    digit2 = (digit2 - 1) % 10; 
    digit3 = (digit3 + 2) % 10; 
    digit4 = (digit4 - 2) % 10; 

    int new_num = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;

    cout << "New number: " << new_num << endl;

    /*3*/
    int max_num, num2;

    cout << "Enter number 1: ";
    cin >> max_num;

    
    for (int i = 2; i <= 7; ++i)
    {
        cout << "Enter number " << i << ": ";
        cin >> num2;
        if (num2 > max_num)
        {
            max_num = num2;
        }
    }

    cout << "The maximum number is: " << max_num << endl;

    /*4*/
    const int MAX_WEIGHT = 2000;
    const int FUEL_CAPACITY = 300;

    double distance_AB, distance_BC, cargo_weight;
    double fuel_consumption = 0, fuel_needed = 0;

    cout << "Enter the distance from point A to point B (in km): ";
    cin >> distance_AB;

    cout << "Enter the distance from point B to point C (in km): ";
    cin >> distance_BC;

    cout << "Enter the weight of the cargo (in kg): ";
    cin >> cargo_weight;


    if (cargo_weight <= 500)
    {
        fuel_consumption = 1;
    }
    else if (cargo_weight <= 1000)
    {
        fuel_consumption = 4; 
    }
    else if (cargo_weight <= 1500)
    {
        fuel_consumption = 7; 
    }
    else if (cargo_weight <= 2000)
    {
        fuel_consumption = 9; 
    }

    fuel_needed = (distance_AB + distance_BC) * fuel_consumption;

    if (fuel_needed <= FUEL_CAPACITY)
    {
        cout << "The plane can fly from point A to point C with one refueling at point B." << endl;
        cout << "Fuel needed for refueling at point B: " << FUEL_CAPACITY - fuel_needed << " l" << endl;
    }
    else
    {
        cout << "The plane cannot fly from point A to point C with the given cargo weight." << endl;
    }

}
