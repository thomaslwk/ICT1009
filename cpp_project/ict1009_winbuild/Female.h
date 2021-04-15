#ifndef FEMALE_H
#define FEMALE_H

// Declaration
#include <iostream>
#include "Face.h"

class Female : virtual public Face {
    public:
        Female(){
            /* **************************************** */
            /* ****** Default Female Constructor ****** */
            /* **************************************** */
            std::string endpath = ".jpg";    // Store end path of file to be appended

            /* ******************** */
            /* ***** Eye Path ***** */
            /* ******************** */
            // Get path for eyes
            std::string eyepath = "://Images/female/eyes/female_eyes_";
            // File is selected at random using random function (from Face)
            eyepath += std::to_string(randFunction(1,5));
            // Append path
            eyepath += endpath;

            /* ********************* */
            /* ***** Nose Path ***** */
            /* ********************* */
            // Get path for nose
            std::string nosepath = "://Images/female/nose/female_nose_";
            // File is selected at random using random function (from Face)
            nosepath += std::to_string(randFunction(1,5));
            // Append path
            nosepath += endpath;

            /* ********************** */
            /* ***** Mouth Path ***** */
            /* ********************** */
            // Get path for mouth
            std::string mouthpath = "://Images/female/mouth/female_mouth_";
            // File is selected at random using random function (from Face)
            mouthpath += std::to_string(randFunction(1,5));
            // Append path
            mouthpath += endpath;

            /* ***************************** */
            /* ***** Set All File Path ***** */
            /* ***************************** */
            Eyes::setPart(eyepath);
            Nose::setPart(nosepath);
            Mouth::setPart(mouthpath);
        };
        // Getter methods
        std::string getEye();
        std::string getNose();
        std::string getMouth();
        // Setter methods 
        void setEye(std::string);
        void setNose(std::string);
        void setMouth(std::string);
        // Talk
        std::string talk();
};


#endif // FEMALE_H
