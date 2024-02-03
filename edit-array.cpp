/*
Author: Zuhayer Tashin
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2C

Write a program edit-array.cpp that creates an array of 10 integers, 
and provides the user with an interface to edit any of its elements. 
Specifically, it should work as follows:

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, 
and go back to the step 3. Otherwise, if index i is out of range, the program exits
*/

#include <iostream>
using namespace std;

int main(){
    int array_1[10]; // Declared an array with 10 integers

    int array_size = sizeof(array_1) / sizeof(array_1[0]); // The size of the array

    for (int i = 0; i < array_size; i++) {
        array_1[i] = 1;
        cout << array_1[i] << " " ; //Prints out 1 for each element in array
    }

    int index_1; // Declared index variable
    cout << "\n" << "\n" <<  "\n" <<"Input Index: ";
    cin >> index_1; // User inputs the index

    int value_1; // Declared value variable
    cout << "Input Value: ";
    cin >> value_1; // User inputs a value



   

        while (index_1 < 10 ) {
            if(index_1 > 10 || index_1 < 0){
             
             break; 
              
            } else {

              array_1[index_1] = value_1;

              cout << endl;
              cout << endl;

              for (int i = 0; i < array_size; i++) {
                       cout << array_1[i] << " " ; //Prints out 1 for each element in array
              }   

                cout << endl;
                cout << endl;

                cout << "\n" << "\n" <<  "\n" <<"Input Index: ";
                cin >> index_1; // User inputs the index

                cout << "Input Value: ";
                cin >> value_1; // User inputs a value          

            }
          
          
 }  

  cout << endl;
  cout << endl;
  cout << "Index out of range. Exit." << endl;// prints if index out of range
  
 return 0; 

}





