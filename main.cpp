// Group project 2 

// Programmers: Ethan Brown

// This program will convert inputted numbers from 1-10 into Roman Numerals 



#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>




using namespace std;
// Add any other header files here 



/////////////////////////////////////// 

int main()

{

    // Declaring Variables 
    
    // the cost everying
    double score = 0;

    // doesnt matter
    double num = 0;


    // where is it going aus usa can
    string loc;


    // is the item fragile yes or no 
    string frag;


    // item name can be anything 
    string item;


    // cost of the location 
    double ship = 0;


    // head
    cout << "**********************************************************************" << endl;

    cout << "ITCS 2530 - Programming Assignment for week # 3" << endl;

    cout << "**********************************************************************" << endl;

    // Getting Input 

    cout << "Please enter the item name (no space)......:", cin >> item;
    cout << "is the item fragile? (y=yes/n=no)..........:", cin >> frag;
    // if I add the number to score now it will just be changed later 
    // i collect it here to save the number so to speak
    if (frag == "y"|| frag == "Y")
    {
        num = num + 2;

    }
    else if (frag == "n"|| frag =="N")
    {
        num = num;
    }
    else
   {
       cout << "Invalid entry, exiting";

       return 0;
   }

    cout << "Please enter your order total..............:", cin >> score;

    
    cout << "Please Enter destination. (usa/can/aus)....:", cin >> loc;
    if (loc == "usa")
    {
        if (score < 50)
        {
            ship = ship + 6;
        }
        else if (score > 50 && score < 100)
        {
            ship = ship + 9;


        }
        else if (score > 100 && score < 150)
        {
            ship = ship + 12;

        }

        else if (score > 150)
        {
            ship == ship;

        }


       

    }

    else if (loc == "can")
    {
        if (score <= 50)
        {
            ship = ship + 8;
        }
        else if (score > 50 && score < 100)
        {
            ship = ship + 12;

        }
        else if (score > 100 && score < 150)
        {

            ship = ship + 15;

        }
        else if (score > 150)
        {
            ship == ship;

        }

    }
    else if (loc == "aus")
    {


        if (score <= 50)
        {
            ship = ship + 10;

        }


        else if (score > 50 && score < 100)
        {
            ship = ship + 14;
        }


        else if (score > 100 && score < 150)
        {
            ship = ship + 17;
        }


        else if (score > 150)
        {
            ship == ship;
        }


    }
    else
    {
        cout << "Invalid entry, exiting";

        return 0;

    }
    // end print statment


// math to calculatate the total cost 
    score = score + num;
    score = score + ship;

    
    cout << "       " << endl;
    cout << "       " << endl;
    cout << "       " << endl;
    cout << "Your item is......................." << item << endl;
    cout << "Your shipping cost is.............."<< ship << endl;
    cout << "You are shipping to................" << loc << endl;
    cout << "Your total shipping costs are......" << score << endl;
    cout << "       " << endl;
    cout << "...................................Thank You!"  << endl;






}



// Place any unused code here so that the instructor can follow your problem solving thoughts. 
   // if I add the number to score now it will just be changed later i collect it here to save the number so to speak
    // number was enterred so we can now add fragile cost
    //if (num == 2)
   // {
  //      score = score + 2;
  //  }
  //  else 
  //  {
  //      score = score;
//}
