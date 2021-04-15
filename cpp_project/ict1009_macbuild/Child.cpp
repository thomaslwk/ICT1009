#ifndef CHILD_CPP
#define CHILD_CPP

// Declaration
#include "Child.h"
#include "X_MEN.h"
#include <time.h>

Child::Child(Male father, Female mother){
    /* ************************************** */
    /* ****** Normal Child Constructor ****** */
    /* ************************************** */

    /**********************************************************
     * Random Number function to randomize feature inheritance
     * to either be from father or mother
    ************************************************************/
    srand(time(NULL));
    int e = rand() % 2;
    if (e == 0) {
        Eyes::setPart(father.getEye());
        this->speak_eye = "\nI have my father's eyes.";
    }
    else {
        Eyes::setPart(mother.getEye());
        this->speak_eye = "\nI have my mother's eyes.";
    }
    int n = rand() % 2;
    if (n == 0) {
        Nose::setPart(father.getNose());
        this->speak_nose = "\nI have my father's nose.";
    }
    else {
        Nose::setPart(mother.getNose());
        this->speak_nose = "\nI have my mother's nose.";
    }
    int m = rand() % 2;
    if (m == 0) {
        Mouth::setPart(father.getMouth());
        this->speak_mouth = "\nI have my father's mouth.";
    }
    else {
        Mouth::setPart(mother.getMouth());
        this->speak_mouth = "\nI have my mother's mouth.";
    }
};

Child::Child(Male father, Female mother, X_MEN x){
    /* ************************************** */
    /* ****** Normal Child Constructor ****** */
    /* ************************************** */
    // Set child to have mutant gene
    this->Mutation_file = x.getX_Gene();

    /**********************************************************
     * Random Number function to randomize feature inheritance
     * to either be from father or mother
    ************************************************************/
    srand(time(NULL));
    int e = rand() % 2;
    if (e == 0) {
        Eyes::setPart(father.getEye());
        this->speak_eye = "\nI have my father's eyes.";
    }
    else {
        Eyes::setPart(mother.getEye());
        this->speak_eye = "\nI have my mother's eyes.";
    }
    int n = rand() % 2;
    if (n == 0) {
        Nose::setPart(father.getNose());
        this->speak_nose = "\nI have my father's nose.";
    }
    else {
        Nose::setPart(mother.getNose());
        this->speak_nose = "\nI have my mother's nose.";
    }
    int m = rand() % 2;
    if (m == 0) {
        Mouth::setPart(father.getMouth());
        this->speak_mouth = "\nI have my father's mouth.";
    }
    else {
        Mouth::setPart(mother.getMouth());
        this->speak_mouth = "\nI have my mother's mouth.";
    }
}

/* ********************************************* */
/* ****** Getter Methods for child object ****** */
/* ********************************************* */
// Return eyes
std::string Child::getEye(){
    return Eyes::getPart();
}
// Return nose
std::string Child::getNose(){
    return Nose::getPart();
}
// Return mouth
std::string Child::getMouth(){
    return Mouth::getPart();
}
// Return speach
std::string Child::talk(){
    speak_file += speak_eye + speak_nose + speak_mouth;
    return speak_file;
}

#endif
