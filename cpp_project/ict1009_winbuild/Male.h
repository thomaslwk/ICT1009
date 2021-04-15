#ifndef MALE_H
#define MALE_H

// Declaration
#include <iostream>
#include "Face.h"

class Male : virtual public Face {
    public:
        Male(){
            /* ************************************** */
            /* ****** Default Male Constructor ****** */
            /* ************************************** */
            std::string endpath = ".jpg";     // Store end path of file to be appended

            /* ******************** */
            /* ***** Eye Path ***** */
            /* ******************** */
            // Get path for eyes
            std::string eyepath = "://Images/male/eye/male_eyes_";
            // File is selected at random using random function (from Face)
            eyepath += std::to_string(randFunction(1,5));
            // Append path
            eyepath += endpath;

            /* ********************* */
            /* ***** Nose Path ***** */
            /* ********************* */
            // Get path for nose
            std::string nosepath = "://Images/male/nose/male_nose_";
            // File is selected at random using random function (from Face)
            nosepath += std::to_string(randFunction(1,5));
            // Append path
            nosepath += endpath;

            /* ********************** */
            /* ***** Mouth Path ***** */
            /* ********************** */
            // Get path for mouth
            std::string mouthpath = "://Images/male/mouth/male_mouth_";
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

#endif // MALE_H
