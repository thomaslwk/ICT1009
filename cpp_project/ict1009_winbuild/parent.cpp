#include "parent.h"
#include "ui_parent.h"

// Declared elements for window
#include <iostream>
#include "Face.h"
#include "Male.h"
#include "Female.h"
#include "child.h"
#include "X_MEN.h"

Parent::Parent(QWidget *parent) : QDialog(parent), ui(new Ui::Parent){
    // Onload set UI elements to current window
    ui->setupUi(this);
    // Remove spacing in layout
    ui->verticalLayout->setSpacing(0);
    ui->verticalLayout->setContentsMargins(0,0,0,0);
    ui->verticalLayout_3->setSpacing(0);
    ui->verticalLayout_3->setContentsMargins(0,0,0,0);
    ui->verticalLayout_4->setSpacing(0);
    ui->verticalLayout_4->setContentsMargins(0,0,0,0);

    /* ********************************************************** */
    /* ******** Set UI to auto load one instance of each ******** */
    /* ********************************************************** */

    /* *********************** */
    /* ******* FATHER ******* */
    /* *********************** */
    // Create father object and set follow trait
    Male father;
    QPixmap eyemap2(father.getEye().c_str());
    QPixmap nosemap2(father.getNose().c_str());
    QPixmap mouthmap2(father.getMouth().c_str());

    /* *********************************************** */
    /* ********** Test Case for file path ************ */
    /****************************************************
     *  Use for testing purpose only.
     *  - uncomment test case section
     *  - comment eyemap, nosemap and mouthmap above
     ***************************************************/

    /* ************************************************ */
    /* ************ START OF TEST CASE **************** */
    /* ************************************************ */

//    std::string testpath_eye = "fail_path_eyes";
//    std::string testpath_nose = "fail_path_nose";
//    std::string testpath_mouth = "fail_path_mouth";
//    QPixmap eyemap2(testpath_eye.c_str());
//    QPixmap nosemap2(testpath_nose.c_str());
//    QPixmap mouthmap2(testpath_mouth.c_str());

    /* ************************************************ */
    /* *************** END OF TEST CASE *************** */
    /* ************************************************ */

    // Set elements with error handling for file paths
    if(eyemap2.isNull()){
            // Print error msg
            std::cout << "\nError in file path for eye, using default value for eye.";
            // Set default path to use file 1
            std::string eyepath = "://Images/male/eye/male_eyes_1.jpg";
            father.setEye(eyepath);
            QPixmap eyemap2(eyepath.c_str());
            ui->father_eye -> setPixmap(eyemap2.scaled(300,100, Qt::KeepAspectRatio));
        }
        else{
            // No error, use value from getter
            ui->father_eye -> setPixmap(eyemap2.scaled(300,100, Qt::KeepAspectRatio));
        }
    if(nosemap2.isNull()){
        // Print error msg
        std::cout << "\nError in file path for nose, using default value for nose.";
        // Set default path to use file 1
        std::string nosepath = "://Images/male/nose/male_nose_1.jpg";
        father.setEye(nosepath);
        QPixmap nosemap2(nosepath.c_str());
        ui->father_nose -> setPixmap(nosemap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->father_nose -> setPixmap(nosemap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    if(mouthmap2.isNull()){
        // Print error msg
        std::cout << "\nError in file path for mouth, using default value for mouth.";
        // Set default path to use file 1
        std::string mouthpath = "://Images/male/mouth/male_mouth_1.jpg";
        father.setEye(mouthpath);
        QPixmap mouthmap2(mouthpath.c_str());
        ui->father_mouth -> setPixmap(mouthmap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->father_mouth -> setPixmap(mouthmap2.scaled(300,100, Qt::KeepAspectRatio));
    }

    /* ********************** */
    /* ******* MOTHER ******* */
    /* ********************** */
    // Create mother object and set follow trait
    Female mother;
    QPixmap eyemap1(mother.getEye().c_str());
    QPixmap nosemap1(mother.getNose().c_str());
    QPixmap mouthmap1(mother.getMouth().c_str());

    // Set elements with error handling for file paths
    if(eyemap1.isNull()){
            // Print error msg
            std::cout << "\nError in file path for eye, using default value for eye.";
            // Set default path to use file 1
            std::string eyepath = "://Images/female/eyes/female_eyes_1.jpg";
            mother.setEye(eyepath);
            QPixmap eyemap1(eyepath.c_str());
            ui->mother_eye -> setPixmap(eyemap1.scaled(300,100, Qt::KeepAspectRatio));
        }
        else{
            // No error, use value from getter
            ui->mother_eye -> setPixmap(eyemap1.scaled(300,100, Qt::KeepAspectRatio));
        }
    if(nosemap1.isNull()){
        // Print error msg
        std::cout << "\nError in file path for nose, using default value for nose.";
        // Set default path to use file 1
        std::string nosepath = "://Images/female/nose/female_nose_1.jpg";
        mother.setEye(nosepath);
        QPixmap nosemap1(nosepath.c_str());
        ui->mother_nose -> setPixmap(nosemap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->mother_nose -> setPixmap(nosemap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    if(mouthmap1.isNull()){
        // Print error msg
        std::cout << "\nError in file path for mouth, using default value for mouth.";
        // Set default path to use file 1
        std::string mouthpath = "://Images/male/mouth/female_mouth_1.jpg";
        mother.setEye(mouthpath);
        QPixmap mouthmap1(mouthpath.c_str());
        ui->mother_mouth -> setPixmap(mouthmap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->mother_mouth -> setPixmap(mouthmap1.scaled(300,100, Qt::KeepAspectRatio));
    }

    /* ********************** */
    /* ******** CHILD ******* */
    /* ********************** */
    // Create child object and set follow trait
    Child child(father, mother);
    QPixmap eyemap(child.getEye().c_str());
    QPixmap nosemap(child.getNose().c_str());
    QPixmap mouthmap(child.getMouth().c_str());

    // Set elements
    ui->child_eye -> setPixmap(eyemap.scaled(300,100, Qt::KeepAspectRatio));
    ui->child_nose -> setPixmap(nosemap.scaled(300,100, Qt::KeepAspectRatio));
    ui->child_mouth -> setPixmap(mouthmap.scaled(300,100, Qt::KeepAspectRatio));

    // Speak element
    std::string speaktxt;
    speaktxt += father.talk() + mother.talk() + "\nChild says: I am child." + child.talk();
    ui->lbl_speak -> setText(speaktxt.c_str());
}

Parent::~Parent() {
    /* ************************** */
    /* **** Close window (x) **** */
    /* ************************** */
    delete ui;
}

void Parent::on_Close_clicked(){
    /* *************************** */
    /* **** Button close (x) **** */
    /* *************************** */
    this->close();
}


void Parent::on_New_face_clicked(){
    /* ********************************************************** */
    /* ***************** Generate normal child ****************** */
    /* ********************************************************** */

    /* *********************** */
    /* ******* FATHER ******* */
    /* *********************** */
    // Create father object and set follow trait
    Male father;
    QPixmap eyemap2(father.getEye().c_str());
    QPixmap nosemap2(father.getNose().c_str());
    QPixmap mouthmap2(father.getMouth().c_str());

    // Set elements with error handling for file paths
    if(eyemap2.isNull()){
            // Print error msg
            std::cout << "\nError in file path for eye, using default value for eye.";
            // Set default path to use file 1
            std::string eyepath = "://Images/male/eye/male_eyes_1.jpg";
            father.setEye(eyepath);
            QPixmap eyemap2(eyepath.c_str());
            ui->father_eye -> setPixmap(eyemap2.scaled(300,100, Qt::KeepAspectRatio));
        }
        else{
            // No error, use value from getter
            ui->father_eye -> setPixmap(eyemap2.scaled(300,100, Qt::KeepAspectRatio));
        }
    if(nosemap2.isNull()){
        // Print error msg
        std::cout << "\nError in file path for nose, using default value for nose.";
        // Set default path to use file 1
        std::string nosepath = "://Images/male/nose/male_nose_1.jpg";
        father.setEye(nosepath);
        QPixmap nosemap2(nosepath.c_str());
        ui->father_nose -> setPixmap(nosemap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->father_nose -> setPixmap(nosemap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    if(mouthmap2.isNull()){
        // Print error msg
        std::cout << "\nError in file path for mouth, using default value for mouth.";
        // Set default path to use file 1
        std::string mouthpath = "://Images/male/mouth/male_mouth_1.jpg";
        father.setEye(mouthpath);
        QPixmap mouthmap2(mouthpath.c_str());
        ui->father_mouth -> setPixmap(mouthmap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->father_mouth -> setPixmap(mouthmap2.scaled(300,100, Qt::KeepAspectRatio));
    }

    /* ********************** */
    /* ******* MOTHER ******* */
    /* ********************** */
    // Create mother object and set follow trait
    Female mother;
    QPixmap eyemap1(mother.getEye().c_str());
    QPixmap nosemap1(mother.getNose().c_str());
    QPixmap mouthmap1(mother.getMouth().c_str());

    // Set elements with error handling for file paths
    if(eyemap1.isNull()){
            // Print error msg
            std::cout << "\nError in file path for eye, using default value for eye.";
            // Set default path to use file 1
            std::string eyepath = "://Images/female/eyes/female_eyes_1.jpg";
            mother.setEye(eyepath);
            QPixmap eyemap1(eyepath.c_str());
            ui->mother_eye -> setPixmap(eyemap1.scaled(300,100, Qt::KeepAspectRatio));
        }
        else{
            // No error, use value from getter
            ui->mother_eye -> setPixmap(eyemap1.scaled(300,100, Qt::KeepAspectRatio));
        }
    if(nosemap1.isNull()){
        // Print error msg
        std::cout << "\nError in file path for nose, using default value for nose.";
        // Set default path to use file 1
        std::string nosepath = "://Images/female/nose/female_nose_1.jpg";
        mother.setEye(nosepath);
        QPixmap nosemap1(nosepath.c_str());
        ui->mother_nose -> setPixmap(nosemap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->mother_nose -> setPixmap(nosemap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    if(mouthmap1.isNull()){
        // Print error msg
        std::cout << "\nError in file path for mouth, using default value for mouth.";
        // Set default path to use file 1
        std::string mouthpath = "://Images/male/mouth/female_mouth_1.jpg";
        mother.setEye(mouthpath);
        QPixmap mouthmap1(mouthpath.c_str());
        ui->mother_mouth -> setPixmap(mouthmap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->mother_mouth -> setPixmap(mouthmap1.scaled(300,100, Qt::KeepAspectRatio));
    }

    /* ********************** */
    /* ******** CHILD ******* */
    /* ********************** */
    // Create child object and set follow trait
    Child child(father, mother);
    QPixmap eyemap(child.getEye().c_str());
    QPixmap nosemap(child.getNose().c_str());
    QPixmap mouthmap(child.getMouth().c_str());
    // Set elements
    ui->child_eye -> setPixmap(eyemap.scaled(300,100, Qt::KeepAspectRatio));
    ui->child_nose -> setPixmap(nosemap.scaled(300,100, Qt::KeepAspectRatio));
    ui->child_mouth -> setPixmap(mouthmap.scaled(300,100, Qt::KeepAspectRatio));

    // Speak element
    std::string speaktxt;
    speaktxt += father.talk() + mother.talk() + "\nChild says: I am child." + child.talk();
    ui->lbl_speak -> setText(speaktxt.c_str());
}

void Parent::on_New_face_2_clicked() {
    /* ********************************************************** */
    /* ***************** Generate mutant child ****************** */
    /* ********************************************************** */

    /* *********************** */
    /* ******* FATHER ******* */
    /* *********************** */
    // Create father object and set follow trait
    Male father;
    QPixmap eyemap2(father.getEye().c_str());
    QPixmap nosemap2(father.getNose().c_str());
    QPixmap mouthmap2(father.getMouth().c_str());

    /* *********************************************** */
    /* ********** Test Case for file path ************ */
    /****************************************************
     *  Use for testing purpose only.
     *  - uncomment test case section
     *  - comment eyemap, nosemap and mouthmap above
     ***************************************************/

    /* ************************************************ */
    /* ************ START OF TEST CASE **************** */
    /* ************************************************ */

//    std::string testpath_eye = "fail_path_eyes";
//    std::string testpath_nose = "fail_path_nose";
//    std::string testpath_mouth = "fail_path_mouth";
//    QPixmap eyemap2(testpath_eye.c_str());
//    QPixmap nosemap2(testpath_nose.c_str());
//    QPixmap mouthmap2(testpath_mouth.c_str());

    /* ************************************************ */
    /* *************** END OF TEST CASE *************** */
    /* ************************************************ */

    // Set elements with error handling for file paths
    // Set elements with error handling for file paths
    if(eyemap2.isNull()){
            // Print error msg
            std::cout << "\nError in file path for eye, using default value for eye.";
            // Set default path to use file 1
            std::string eyepath = "://Images/male/eye/male_eyes_1.jpg";
            father.setEye(eyepath);
            QPixmap eyemap2(eyepath.c_str());
            ui->father_eye -> setPixmap(eyemap2.scaled(300,100, Qt::KeepAspectRatio));
        }
        else{
            // No error, use value from getter
            ui->father_eye -> setPixmap(eyemap2.scaled(300,100, Qt::KeepAspectRatio));
        }
    if(nosemap2.isNull()){
        // Print error msg
        std::cout << "\nError in file path for nose, using default value for nose.";
        // Set default path to use file 1
        std::string nosepath = "://Images/male/nose/male_nose_1.jpg";
        father.setEye(nosepath);
        QPixmap nosemap2(nosepath.c_str());
        ui->father_nose -> setPixmap(nosemap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->father_nose -> setPixmap(nosemap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    if(mouthmap2.isNull()){
        // Print error msg
        std::cout << "\nError in file path for mouth, using default value for mouth.";
        // Set default path to use file 1
        std::string mouthpath = "://Images/male/mouth/male_mouth_1.jpg";
        father.setEye(mouthpath);
        QPixmap mouthmap2(mouthpath.c_str());
        ui->father_mouth -> setPixmap(mouthmap2.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->father_mouth -> setPixmap(mouthmap2.scaled(300,100, Qt::KeepAspectRatio));
    }

    /* ********************** */
    /* ******* MOTHER ******* */
    /* ********************** */
    // Create mother object and set follow trait
    Female mother;
    QPixmap eyemap1(mother.getEye().c_str());
    QPixmap nosemap1(mother.getNose().c_str());
    QPixmap mouthmap1(mother.getMouth().c_str());

    // Set elements with error handling for file paths
    if(eyemap1.isNull()){
            // Print error msg
            std::cout << "\nError in file path for eye, using default value for eye.";
            // Set default path to use file 1
            std::string eyepath = "://Images/female/eyes/female_eyes_1.jpg";
            mother.setEye(eyepath);
            QPixmap eyemap1(eyepath.c_str());
            ui->mother_eye -> setPixmap(eyemap1.scaled(300,100, Qt::KeepAspectRatio));
        }
        else{
            // No error, use value from getter
            ui->mother_eye -> setPixmap(eyemap1.scaled(300,100, Qt::KeepAspectRatio));
        }
    if(nosemap1.isNull()){
        // Print error msg
        std::cout << "\nError in file path for nose, using default value for nose.";
        // Set default path to use file 1
        std::string nosepath = "://Images/female/nose/female_nose_1.jpg";
        mother.setEye(nosepath);
        QPixmap nosemap1(nosepath.c_str());
        ui->mother_nose -> setPixmap(nosemap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->mother_nose -> setPixmap(nosemap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    if(mouthmap1.isNull()){
        // Print error msg
        std::cout << "\nError in file path for mouth, using default value for mouth.";
        // Set default path to use file 1
        std::string mouthpath = "://Images/male/mouth/female_mouth_1.jpg";
        mother.setEye(mouthpath);
        QPixmap mouthmap1(mouthpath.c_str());
        ui->mother_mouth -> setPixmap(mouthmap1.scaled(300,100, Qt::KeepAspectRatio));
    }
    else{
        // No error, use value from getter
        ui->mother_mouth -> setPixmap(mouthmap1.scaled(300,100, Qt::KeepAspectRatio));
    }

    /* ********************** */
    /* ******** CHILD ******* */
    /* ********************** */
    // Create mutant child object and set follow trait
    X_MEN gene;                                         // Child will have special X_men gene
    Child child(father, mother, gene);                  // Child use overload constructor to become X_men child
    QPixmap eyemap(child.getEye().c_str());
    QPixmap nosemap(child.getNose().c_str());
    QPixmap mouthmap(child.getMouth().c_str());
    QPixmap mutatemap(child.getX_Gene().c_str());
    // Set elements
    ui->child_eye -> setPixmap(eyemap.scaled(300,100, Qt::KeepAspectRatio));
    ui->child_nose-> setPixmap(nosemap.scaled(300,100, Qt::KeepAspectRatio));
    ui->child_mouth -> setPixmap(mouthmap.scaled(300,100, Qt::KeepAspectRatio));
    ui->child_mutate -> setPixmap(mutatemap.scaled(300,100, Qt::KeepAspectRatio));

    // Speak element
    std::string speaktxt;
    speaktxt += father.talk() + mother.talk() + "\nChild says: I am mutant." + child.talk();
    ui->lbl_speak -> setText(speaktxt.c_str());
}

void Parent::on_btn_close_clicked(){
    /* *************************** */
    /* **** Button close (x) **** */
    /* *************************** */
    this->close();
}
