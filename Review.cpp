/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Review.cpp
 * Author: sai2468
 * 
 * Created on January 28, 2019, 9:13 AM
 */

#include "Review.h"

Review::Review() {
     reviewerName;
     restarauntName;
     visitDate;
     foodRating;
     serviceRating;
     atmosphereRating;
     valueRating;
     overallRating;
     comments;
}

Review::Review(const Review& orig) {
    //cout << "In copy constructor\n";
    reviewerName = orig.reviewerName;
     restarauntName = orig.restarauntName;
     visitDate = orig.visitDate;
     foodRating = orig.foodRating;
     serviceRating = orig.serviceRating;
     atmosphereRating = orig.atmosphereRating;
     valueRating = orig.valueRating;
     overallRating = static_cast<int>(((foodRating + serviceRating + valueRating + atmosphereRating)/4.0)+0.5);
     comments = orig.comments;
}
Review::Review(string reviewerName1,string restarauntName1,string visitDate1,int foodRating1,int serviceRating1,int valueRating1,int atmosphereRating1,string comments1){
     reviewerName = reviewerName1;
     restarauntName = restarauntName1;
     visitDate = visitDate1;
     foodRating = foodRating1;
     serviceRating = serviceRating1;
     atmosphereRating = atmosphereRating1;
     valueRating = valueRating1;
     overallRating = getOverallRating();
     comments = comments1;
}
Review::~Review() {
    //cout << "In destructor\n";
}
void Review::setReviewerName(string reviewerName1){
    reviewerName = reviewerName1;
}
void Review::setRestarauntName(string restarauntName1){
    restarauntName = restarauntName1;
}
void Review::setVisitDate(string visitDate1){
        visitDate = visitDate1;
}
void Review::setFoodRating(int foodRating1){
    foodRating = foodRating1;
}
void Review::setServiceRating(int serviceRating1){
    serviceRating = serviceRating1;
}
void Review::setValueRating(int valueRating1){
    valueRating = valueRating1;
}
void Review::setAtmoshphereRating(int atmosphereRating1){
    atmosphereRating = atmosphereRating1;
}
void Review::setComments(string comments1){
    comments = comments1;
}
string Review::getReviewerName(){
    return reviewerName;
}
string Review::getRestaurantName(){
    return restarauntName;
}
string Review::getVisitDate(){
    return visitDate;
}
int Review::getFoodRating(){
    return foodRating;
}
int Review::getServiceRating(){
    return serviceRating;
}
int Review::getValueRating(){
    return valueRating;
}
int Review::getAtmoshphereRating(){
    return atmosphereRating;
}
int Review::getOverallRating(){
    return overallRating = static_cast<int>(((foodRating + serviceRating + valueRating + atmosphereRating)/4.0)+0.5);
}
string Review::getComments(){
    return comments;
}
void Review::print(){
    cout << "Reviewer name: " << this->getReviewerName() << endl;
    cout << "Restaurant name: " << this->getRestaurantName() << endl;
    cout << "Visit Date: " << this->getVisitDate() << endl;
    cout << "Food Rating: " << this->getFoodRating() << endl;
    cout << "Service rating: " << this->getServiceRating() << endl;
    cout << "Value rating: " << this->getValueRating() << endl;
    cout << "Atmosphere rating: " << this->getAtmoshphereRating() << endl;
    cout << "Overall rating: " << this->getOverallRating() << endl;
    cout << "Comments: " << this->getComments() << endl;
    cout << "" << endl;
}

     string reviewerName;
     string restarauntName;
     string visitDate;
     int foodRating;
     int serviceRating;
     int atmosphereRating;
     int valueRating;
     int overallRating;
     string comments;
