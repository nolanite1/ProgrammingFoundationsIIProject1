/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sai2468
 *
 * Created on January 28, 2019, 9:13 AM
 */
#include <iostream>
#include <cstdlib>
#include <vector>
#include "Review.h"
using namespace std;

/*
 * 
 */
    // format: vector<DataType> nameOfVector
    // myVector.push_back(value) --> adds a value to the end of a vector and also resizes it
    // myVector.at(index) --> return element at specified index number
    // myVector.size() --> returns an unsigned int equal top the number of elements
    // myVector.begin() --> reads vector from first element (index 0)
    // myVector.insert(myVector.begin() + integer, new value) --> adds element BEFORE specified index number
    // myVector.erase(myVector.begin() + integer) --> removes element at specified index number
    // myVector.clear() -->  removes all elements in vector
    // myVector.empty() --> returns boolean value if whether vector is empty


int main(int argc, char** argv) {
    string command;
    string revN;
    string resN;
    string date;
    int foodRating;
    int serviceRating;
    int valueRating;
    int atmosphereRating;
    string comments;
    //int count=0;
    //Review array[100];
    vector<Review> myVector;
    cout << "Welcome to Sai's Restaurant Review Database" << endl;
    cout << "" << endl;
    do{
        cout << "Enter a command (insert, print, quit): ";
        getline(cin,command);
        cout << "\n";
        if(command=="insert"){
            cout << "Enter a reviewer name: ";
            getline(cin,revN);
            cout << "Enter a restaurant name: ";
            getline(cin,resN);
            cout << "Enter visit date: ";
            getline(cin,date);
            do{cout << "Enter food rating [1..5]: ";
            cin >> foodRating;
            }while(foodRating<1||foodRating>5);
            do{cout << "Enter a service rating [1..5]: ";
            cin >> serviceRating;
            }while(serviceRating<1||serviceRating>5);
            do{cout << "Enter a value rating [1..5]: ";
            cin >> valueRating;
            }while(valueRating<1||valueRating>5);
            do{cout << "Enter atmosphere rating [1..5]: ";
            cin >> atmosphereRating;
            }while(atmosphereRating<1||atmosphereRating>5);
            cout << "Enter comments: ";
            cin.ignore();
            getline(cin,comments);
            cout << "\n";
            Review review1(revN,resN,date,foodRating,serviceRating,valueRating,atmosphereRating,comments);
            myVector.push_back(review1);
            //Review review1(revN,resN,date,foodRating,serviceRating,valueRating,atmosphereRating,comments);
            //array[count] = review1;
            
            //count++;
        }
//        if(command=="print"){
//            string response;
//            cout << "Enter a desired restaurant's name: ";
//            getline(cin,response);
//            cout << "" << endl;
//            for(int k=0;k<count;k++){
//                if(array[k].getRestaurantName()==response){
//                    array[k].print();
//                }
//            }
//        }
        if(command=="print"){
            string response;
            cout << "Enter a desired restaurant's name: ";
            getline(cin,response);
            cout << "" << endl;
            for(unsigned int k=0; k<myVector.size();k++){
                if((myVector.at(k)).getRestaurantName()==response){
                    (myVector.at(k)).print();
                }
            }
        }
    }while(command!="quit");
    cout << "See you later! " << endl;
    return 0;
    }
