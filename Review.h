/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Review.h
 * Author: sai2468
 *
 * Created on January 28, 2019, 9:13 AM
 */
#include <iostream>
using namespace std;
#ifndef REVIEW_H
#define REVIEW_H

class Review {
public:
    Review();
    Review(string reviewerName1,string restarauntName1,string visitDate1,int foodRating1,int serviceRating1,int valueRating,int atmosphereRating1,string comments1);
    Review(const Review& orig);
    virtual ~Review();
    void setReviewerName(string reviewerName1);
    void setRestarauntName(string restarauntName1);
    void setVisitDate(string visitDate1);
    void setFoodRating(int foodRating1);
    void setServiceRating(int serviceRating1);
    void setValueRating(int valueRating1);
    void setAtmoshphereRating(int atmosphereRating1);
    void setComments(string comments1);
    string getReviewerName();
    string getRestaurantName();
    string getVisitDate();
    int getFoodRating();
    int getServiceRating();
    int getValueRating();
    int getAtmoshphereRating();
    int getOverallRating();
    string getComments();
    void print();
    
private:
     string reviewerName;
     string restarauntName;
     string visitDate;
     int foodRating;
     int serviceRating;
     int atmosphereRating;
     int valueRating;
     int overallRating;
     string comments;
};

#endif /* REVIEW_H */

