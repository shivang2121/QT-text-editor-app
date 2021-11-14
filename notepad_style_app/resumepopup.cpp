#include "resumepopup.h"
#include "ui_resumepopup.h"

resumePopup::resumePopup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::resumePopup)
{
    ui->setupUi(this);

    ui->textEdit->setHtml("<!DOCTYPE html>"
                    "<html>"
                    "<body style = \"background-color:powderblue;\">"
                    "<h1>Resume< / h1>"
                    "<p><strong> ACADEMIC STATUS AND EDUCATION Academic Program</strong></p>"
                    "<p><strong>&bull;  BASC Integrated Engineering (Electronics + Mechanical Engineering) from University of British Columbia; </strong></p>"
                    "<p><strong>&bull; Graduated with Good standing in May 2021</strong></p>"
                    "<p>SKILLS</p>"
                    "<p>&bull;Python, R, Java, C, C++</p>"
                    "<p>&bull; Deep-learning, ML, AI</p>"
                    "<p>&bull; Sklearn, pandas, numpy</p>"
                    "<p>&bull; Tensorflow, Pytorch, seaborn</p>"
                    "<p>&bull; Spark, Tableau, PowerBI</p>"
                    "<p>&bull; MySQL, PostgreSQL</p>"
                    "<p>&bull; Tensorflow, PyTorch</p>"
                    "<p>&bull; openCV, graphical Statistics</p>"
                    "<p>&bull; AndroidStudio</p>"
                    "<p>&bull; Altium Circuit Designer</p>"
                    "<p>&bull; COMSOL Multiphysics</p>"
                    "<p>&bull; Microsoft Office- all</p>"
                    "<p>&bull; Ethical Hacking</p>"
                    "<p>&bull; 8051 Assembly, ARM</p>"
                    "<p>&bull; HTML, CSS , Javascript</p>"
                    "<p>&bull; MySQL,Postgre SQL</p>"
                    "<p>&bull; Matlab, Solidworks</p>"
                    "<p>&bull; Greenfoot, Netbeans</p>"
                    "<p>&bull; Datalogging (Offline)</p>"
                    "<p>&bull; PID control</p>"
                    "<p>&bull; VREP simulation, ROS, Circuitmaker, VERILOG, Multisim</p>"
                    "<p>Research Assistant at UBC with HONDA Vancouver, Canada May 2021 - August 2021</p>"
                    "<p>&bull; Use deep learning and classical Machine Learning to improve system efficiency to remove Tilt error on Characterization setup. Used Deep learning in Tensorflow to solve the problem.</p>"
                    "<p>&bull; Fabrication and Characterization of Self Capacitance based Artificial muscle sensors.</p>"
                    "<p>&bull; PCB Design of latest 1X4 circuit using Altium Designer</p>"
                    "<p>&bull; Improvement of Multiphysics Simulation using COMSOL to create a realistic model.</p>"
                    "<p>&bull; Setting up Abrasion testing and setting up samples for testing. Investigation into puncture and Hardness test</p>"
                    "<p>MEMS Research Intern Co-op at Robert Bosch, Stuttgart, Germany May 2019 - December 2019</p>"
                    "<p>&bull; Used Machine Learning and Deep Learning to identify incorrect sensors for checking equipment accuracy and to predict spatial parameters of MEMS Gyroscopes in Wafer Level testing. "
                    "<p>&bull;Created fully connected Neural networks and employed various Machine learning tools like Decision trees, Logistic Regression, Gradient boosting.</p>"
                    "<p>&bull; Developed a Python based precise optical detection algorithm for needle height compensation for measurement safety using Graphical statistics and Computer vision.</p>"
                    "<p>&bull; Performed experiments handling Analog and Signal Integrated System. Setup was designed to capture the peaks in Frequency on MEMS sensors.</p>"
                    "<p>Autonomous Self driving Waste Segregator Robot, Vancouver, Canada September 2020- Present</p>"
                    "<p>&bull; Team of 5 people successfully created a fully functional prototype of a self-driving car that tracks garbage, picks it up and sorts it in the right category.</p>"
                    "<p>&bull; Designed an object tracking and object identification control system using time of flight sensors, Lidar and Cameras. Performed image detection using OpenCV.</p>"
                    "<p>&bull; Worked on the Solidworks CAD sketch to build the Chases.</p>"
                    "<p>Exoskeleton robot Vancouver, Canada September 2018 &ndash; May 2019</p>"
                    "<p>&bull; Built and coded a fully functional prototype of a lower leg Exoskeleton to assist in mobility of children suffering from Muscular Atrophy.</p>"
                    "<p>&bull; Implemented Robot Actuation Algorithm with Feedback Control and gait analysis.</p>"
                    "<p>&bull; Executed Mechanical building, sensor Integration and circuit building with actuators, Gyroscopes and Brushless DC Motors.</p>"
                    "<p>&bull; Implemented cost effective innovative design, costing 500$ as opposed to market exoskeletons :20000$+</p>"
                    "<p>Software Engineer Intern IT Source Technologies Limited, Mumbai, India May 2020- August 2020</p>"
                    "<p>&bull; Performed data analysis and implemented Machine Learning tools to help automate Customer query to necessary team.</p>"
                    "<p>&bull; Performed SQL tasks for customers in PostgreSQL.</p>"
                    "<p>&bull; Collaborated with interdisciplinary teams to help decide upcoming tasks for the company</p>"
                    "<p>3D Limb Scanner Vancouver, Canada October 2017- Apr 2018</p>"
                    "<p>&bull; Designed, build and coded a fully functional prototype of 3D Limb Scanner based on Photogrammetry.</p>"
                    "<p>&bull; Designed a precise linear actuator with steppers, along with a fully automated rotating setup, compatible with any mobile phone.</p>"
                    "<p>&bull; Performed mechanical building, and electronic/Software Integration.</p>"
                    "<p>&bull; Was made for UBC Best to facilitate them in research on broken limbs and creation of an autonomous 3D Printed Cast to revolutionize me Modern medicine. Product can be sold for $250</p>"
                    "<p>ENGINEERING STUDENT TEAMS<br />UBC Voyage, Vanouver, Canada January 2018-May 2020 Position: Lead of Autonomous Control and Communications Team</p>"
                    "<p>&bull; Description: Working as a software lead on designing an autonomous Boat that would cross the Atlantic Ocean. The prototype was successfully publically launched.</p>"
                    "<p>&bull; Executed top level functions for autonomous navigation in C++</p>"
                    "<p>&bull; Involved in coding self-navigation algorithm for a boat on ARM (Raspberry Pi)</p>"
                    "<p>&bull; Managed a team of 7 and collaborated with various Interdisciplinary teams.</p>"
                    "< / body>"
                    "< / html>");
    ui->textEdit->setFontFamily("Courier");
    ui->textEdit->setFontPointSize(10);
}

resumePopup::~resumePopup()
{
    delete ui;
}
