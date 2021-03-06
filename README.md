# Holonomic robot for education (french and english versions...because it is for education)

<a name="top_"/>

Pour le moment, vous pouvez retrouver ce petit robot au sein du Fablab de JUNIA ISEN Lille...et bien sûr chez moi !! :monocle_face:

**VERSION FRANCAISE :** vous pouvez retrouver toutes les explications en français [ici](#french_version_) pour réaliser ce projet. Amusez-vous bien !! :partying_face: Vous pouvez trouver les composants et leurs références dans le fichier components.xslx.

**ENGLISH VERSION :** you can have all the details and explanation [here](#english_version_) if you want to realize this project. Enjoy !! :partying_face: You can find all the components and their references in the components.xslx file.


<a name="french_version_"/>

## VERSION FRANCAISE

<a name="sommaire_"/>

## Sommaire
1. [Introduction](#introduction_f)
2. [Instructions](#instructions_f)
3. [Développement](#developpement_f)
4. [Conclusion](#conclusion_f)
5. [Licence](#licence_f)

<a name="introduction_f"/>

## Introduction

Le but premier de ce robot est de permettre aux personnes intéressées par la robotique de pouvoir s'y plonger en construisant un robot holonome et peu coûteux (prix inférieur à 200 euros). Le second but est de permettre à des étudiants suivant des cours de prototypage rapide de vite se plonger dans la conception d'un robot en ayant chaque pièce déjà dessinée, un code fonctionnel ainsi qu'un schéma électrique déjà réalisé. Vous trouverez donc dans ce dépôt GitHub un manuel afin de concevoir ce robot du début à la fin.

Les robots holonomes sont des robots, utilisant des roues omnidirectionnelles, qui peuvent se déplacer dans toutes les directions de l'espace plan, sans contrainte de trajectoires. Les robots de cette catégorie ont donc une liberté de mouvement totale et peuvent se déplacer dans des espaces exigus. Ils représentent l'avenir de la robotique mobile même s'ils sont plus coûteux à la production et à l'entretien.


<a name="instructions_f"/>

## Instructions

Si vous n'avez jamais utilisé de microcontrôleur ESP32 sur l'IDE Arduino, suivez ce [tutoriel](https://github.com/Clerbout-Francois/Use_ESP32_on_ArduinoIDE).

Selon votre préférence, vous avez le choix de contrôler ce robot depuis votre téléphone ou depuis un serveur local.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Interface_Blynk.jpg?raw=true)

_Figure 1 : Visualisation des deux modes de contrôle du robot holonome (haut : serveur local, bas : application sur téléphone)._


Les instructions ne sont pas les mêmes selon que vous contrôliez le robot depuis votre téléphone ou depuis un serveur local. Dans un premier temps, je vous conseille de suivre la méthode du serveur local qui ne nécessite aucun paramétrage, il vous suffit juste de travailler avec le dossier data et de téléverser le code sur l'ESP32.

A vous de choisir maintenant : rendez-vous [ici](#telephone_) pour le contrôle par téléphone et si vous préférez le serveur local alors rendez-vous [ici](#serveur_).


<a name="telephone_"/>

### Téléphone

Afin de contrôler votre robot, vous aurez besoin de télécharger l'application Blynk sur l'App Store ou Google Play Store selon que vous soyez sous iOs (iPhone) ou Androïd.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Blynk.jpg?raw=true)

_Figure 2 : Application Blynk à télécharger._

Il vous faudra ensuite créer un projet **(/!\ PARTIE TRES IMPORTANTE : il vous faudra noter certaines variables lors de la création du projet sur Blynk afin de venir les renseigner dans le fichier Robot_phone.ino et de lier l'application et le logiciel)**.

Pour cela, suivez l'étape suivante :

#### Création d'un projet

Rendez vous sur le [site de Blynk](https://blynk.io/en/getting-started) et suivez les différentes instructions. Il vous faudra noter les valeurs suivantes pour les renseigner dans votre code Arduino (sur la photo ce sont les valeurs de mon projet, les vôtres différeront) : 

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Connection_Blynk.png?raw=true)

_Figure 3 : Informations à renseigner afin de permettre à l'ESP32 de se connecter avec Blynk._

<a name="serveur_"/>

### Serveur local

Dans ce mode de contrôle, seul le dossier data et le fichier main.cpp sont utiles. Vous n'avez pas besoin de plus, l'amusement est très proche.

Il vous faut télécharger ce dossier et le téléverser sur l'ESP32. 

Veillez à ce que votre ESP32 se connecte à un réseau internet (partage de connexion, Wi-Fi...), pour cela il vous faut renseigner le nom de votre réseau ainsi que le mot de passe de votre réseau en début de programme...ne vous inquiétez pas car le code est suffisamment bien expliqué (enfin...je l'espère :sweat_smile:).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Network_credentials.png?raw=true)

_Figure 4 : Informations à renseigner afin de permettre à l'ESP32 de se connecter sur le réseau internet._

Une fois ces informations saisies, vous pouvez téléverser le programme sur l'ESP32.

(Si cette erreur se produit lors d'une tentative de téléchargement (téléversement) : "A fatal error occurred: Failed to connect to ESP32: Timed out waiting for packet header", Appuyez sur le bouton BOOT tout au long du téléchargement jusqu'à ce que "Connecting" disparaisse du moniteur série pour laisser place au téléchargement).

Le programme une fois téléversé, l'ESP32 va se connecter au réseau internet renseigné et vous verrez apparaître l'écran suivant sur votre moniteur série qui vous indiquera l'adresse IP de votre serveur local :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Connection_Wi-Fi.png?raw=true)

_Figure 5 : Moniteur série indiquant que l'ESP32 a réussi à se connecter au réseau internet._

Vous pouvez observer les différents fichiers contenus dans la mémoire flash de l'ESP32 (/index.html, /script.js et /w3.css).

**/!\ Equipement (ordinateur, tablette, téléphone, télé...) connecté sur le même réseau internet que l'ESP32 pour avoir accès au serveur local !**
Vous n'avez plus qu'à saisir l'adresse IP indiquée précédemment dans votre navigateur de la manière suivante :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/IP_Address.png?raw=true)

_Figure 6 : Adresse IP à saisir dans le navigateur._

Une fois tout ceci effectué, vous verrez apparaître l'écran de contrôle du robot où les boutons verts permettent de lancer le mouvement du robot. Le programme est écrit de manière à ce qu'un seul mouvement ne soit réalisable à la fois (exemple : si vous cliquez sur une rotation horaire et que juste après vous cliquez sur le bouton permettant la marche avant du robot, celui-ci ne combinera pas les deux mouvements...il ne réalisera que la ligne droite).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)

_Figure 7 : Ecran de contrôle du robot._

[Sommaire](#sommaire_)
<a name="developpement_f"/>

## Développement

Un robot holonome possède 4 roues indépendantes les unes des autres, il faut donc contrôler 4 moteurs indépendamment les uns des autres. Pour savoir quel moteur activer et comment l'activer vous pouvez vous pencher sur ce [projet](https://github.com/Clerbout-Francois/Kinematics_holonomic_robot_MATLAB) durant lequel j'ai simulé une vue de haut d'un robot holonome et ses déplacements en fonctions des entrées sur chaque moteur. Cela peut vous permettre de comprendre les instructions contenues dans mes différents codes (/!\ l'orientation des galets n'est pas la même mais la cinématique est très proche de ce robot).

Dans ce README, je ne présenterai que le fonctionnement des programmes permettant le développement du serveur local, du code C++ de contrôle du robot (du début du code à la fin) et le contrôle du robot depuis un équipement connecté sur le même réseau que le robot. Pour information, la fonction **ledcWrite** du programme Robot_phone.ino est équivalente à la fonction **digitalWrite** du programme main.cpp. Si besoin d'aide ou d'explications, n'hésitez pas à m'écrire, je serai ravi de vous aider et/ou d'échanger avec vous.

#### Fichier main.cpp

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_1.png?raw=true)

_Figure 8 : Initialisation des constantes._

Ici, on initialise des variables de type int qui nous serviront par la suite afin de donner des consignes à chaque moteur. Vous pouvez observer que l'on envoie deux consignes à chaque moteur : une pour le sens de rotation (pins 32, 0, 26 et 2) et une pour la valeur de rotation du moteur (33, 4, 27 et 15). C'est pourquoi nous devons déclarer 8 pins en tant que sorties (OUTPUT), 2 par moteur, ce qui signifie que l'on va "écrire" des valeurs sur ces pins.

La commande ````AsyncWebServer server(80);```` permet d'indiquer que le serveur local sera développé sur le port 80.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_2.png?raw=true)

_Figure 9 : Initialisation de la vitesse du moniteur série et définitions des pins de l'ESP32 en tant que sorties._

On immobilise le robot en début de programme, d'où la valeur LOW pour chaque valeur de rotation de moteur.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_3.png?raw=true)

_Figure 10 : Initialisation de la valeur des différentes pins de l'ESP32._

On démarre le protocole [SPIFFS](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/storage/spiffs.html) et ensuite on ouvre tous les fichiers présents afin de vérifier leur présence dans la mémoire flash.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_4.png?raw=true)

_Figure 11 : Démarrage du protocole SPIFFS et ouverture des fichiers existants (puis affichage)._

Dans le premier bloc, on écrit sur le moniteur série que l'on se connecte au SSID (nom de votre réseau internet) et ensuite par la commande ```WiFi.begin(ssid, password);``` on tente de se connecter avec les informations renseignées. Dans le second bloc, on vérifie si la connexion est opérationnelle et tant qu'elle ne l'est pas on affiche des "." toutes les 500 ms sur le moniteur série afin de montrer que la connexion est en train d'être réalisée. Dans le dernier bloc, on affiche l'adresse IP qui sera utile pour se connecter depuis le navigateur.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_5.png?raw=true)

_Figure 12 : Commandes pour connecter l'ESP32 au réseau internet._

On crée maintenant les requêtes asynchrones permettant au serveur d'envoyer des commandes au robot.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_6.png?raw=true)

_Figure 13 : Requêtes asynchrones pour les fichiers html, css et js._

On crée la requête pour une rotation horaire, toutes les autres requêtes auront la même structure ce n'est que leur contenu qui différera. 

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_7.png?raw=true)

_Figure 14 : Requête asynchrone pour une rotation horaire._

Par étude de la cinématique, on sait que si tous les moteurs tournent dans le sens des aiguilles d'une montre et à la même valeur alors le robot tourne sur lui-même dans le sens des aiguilles d'une montre (et inversement).

On procède de la même manière (étude de la cinématique puis définition du sens et de la valeur de rotation de chaque moteur) pour tous les mouvements du robot.

#### Fichier index.html

Sur cette capture d'écran, vous pouvez retrouver le début du fichier html, le nom de la page html ainsi que le bandeau du serveur local et la définiton des boutons de rotation.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8.png?raw=true)

_Figure 15 : Capture d'écran de l'affichage du titre de la page web et de l'affichage du bouton pour les différentes rotations._

On fonctionne de la même manière pour les 8 autres boutons, on ajoute juste des id qui permettent de placer les boutons sur la page.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8bis.png?raw=true)

_Figure 16 : Création des différents boutons._

#### Fichier script.js

Les différentes fonctions onButton sont définies dans le fichier .js de la manière suivante : on crée la requête Http et on la définit de manière asynchrone afin de pouvoir l'envoyer à tout moment.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8bis.png?raw=true)

_Figure 17 : Définitions des fonctions onButton._

[Sommaire](#sommaire_)
<a name="conclusion_f"/>

## Conclusion

Ce projet a pour but de faire découvrir le prototypage rapide : la modélisation de pièces 3D avec des logiciels de CAO comme SOLIDWORKS pour l'impression ou la découpe laser, l'utilisation des logiciels d'impression 3D et de la découpeuse laser, la programmation C++ ainsi que la programmation WEB (HTML, JavaScript et CSS) et le contenu des requêtes d'une page WEB. 

J'espère avoir pu vous guider pas à pas vers la réalisation de ce projet de découverte. Il en existe de nombreuses améliorations et j'en suis conscient, dès que j'ai du temps je viendrai ajouter de nouveaux programmes dans ce dépôt GitHub. 

N'hésitez pas à me contacter pour toute intervention auprès d'étudiants (plus ou moins jeunes !) ou pour tout retour concernant ce projet éducatif.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Robot_photo1.jpg?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Robot_photo2.jpg?raw=true)

_Figure 18 : Photographies du robot._

[Sommaire](#sommaire_)
<a name="licence_f"/>

## Licence

Merci de ne pas oublier que ce projet est sous [une licence MIT ](https://choosealicense.com/licenses/mit/).


***
<a name="english_version_"/>

## ENGLISH VERSION

<a name="table_of_contents"/>

## Table of Contents
1. [Introduction](#introduction_)
2. [Instructions](#instructions_)
3. [Development](#development_)
4. [Conclusion](#conclusion_)
5. [License](#license_)


<a name="introduction_"/>

## Introduction

The first goal of this robot is to allow people interested in robotics to be able to touch it by building a holonomous and inexpensive robot (price under 200 euros). The second goal is to allow students following rapid prototyping courses to quickly dive into the design of a robot by having each part already drawn, a functional code as well as an electrical diagram already made. You will find in this GitHub repository a manual to design this robot from start to finish.

Holonomic robots are robots, using omnidirectional wheels, that can move in all directions in planar space, without constraint of trajectories. Robots in this category therefore have complete freedom of movement and can move in tight spaces. They represent the future of mobile robotics even though they are more expensive to produce and maintain.


<a name="instructions_"/>

## Instructions

If you have never used an ESP32 microcontroller on the Arduino IDE, follow this [tutorial](https://github.com/Clerbout-Francois/Use_ESP32_on_ArduinoIDE).

Depending on your preference, you can control this robot from your phone or from a local server.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Interface_Blynk.jpg?raw=true)

_Figure 19 : Visualization of the two control modes of the holonomic robot (top : local server, bottom : application on phone)._


The instructions are not the same depending on whether you control the robot from your phone or from a local server. At first I advise you to follow the local server method which does not require any settings, you just have to work with the data folder and upload the code to the ESP32.

The choice is yours now : go [here](#phone_) for phone control and if you prefer the local server then go [here](#server_).


<a name="phone_"/>

### Phone

In order to control your robot, you will need to download the Blynk app from the App Store or Google Play Store depending on whether you are on iOs (iPhone) or Android.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Blynk.jpg?raw=true)

_Figure 20 : Blynk application to download._

You will then need to create a project **(/!\ VERY IMPORTANT PART : you will have to note some variables when creating the project on Blynk in order to enter them in the Robot_phone.ino file and to link the application and the software)**.

To do this, follow the step below :

#### Creation of a project

Go to the [Blynk website](https://blynk.io/en/getting-started) and follow the different instructions. You will have to note the following values to fill them in your Arduino code (on the picture these are the values of my project, yours will differ) : 

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Connection_Blynk.png?raw=true)

_Figure 21 : Information to be filled in to enable the ESP32 to connect with Blynk._

<a name="server_"/>

### Local server

In this control mode, only the data folder and the main.cpp file are useful. You don't need anything else, the fun is very close.

You need to download this file and upload it to the ESP32. 

Make sure that your ESP32 connects to an internet network (connection sharing, Wi-Fi...), for this you need to fill in the name of your network as well as the password of your network at the beginning of the program...don't worry because the code is well enough explained (well...I hope so :sweat_smile:).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Network_credentials.png?raw=true)

_Figure 22 : Information to be filled in to enable the ESP32 to connect to the Internet._

Once these informations have been entered, you can upload the programme to the ESP32.

(If this error occurs during an upload attempt : "A fatal error occurred : Failed to connect to ESP32 : Timed out waiting for packet header", press the BOOT button throughout the upload until "Connecting" disappears from the serial monitor to make way for the upload).

Once the program has been uploaded, the ESP32 will connect to the specified internet network and you will see the following screen on your serial monitor showing the IP address of your local server :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Connection_Wi-Fi.png?raw=true)

_Figure 23 : Serial monitor indicating that the ESP32 has successfully connected to the internet._

You can see the different files contained in the flash memory of the ESP32 (/index.html, /script.js et /w3.css).

**/!\ Equipment (computer, tablet, phone, TV...) connected to the same internet network as the ESP32 to access the local server !**
All you have to do is enter the IP address previously indicated in your browser in the following manner :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/IP_Address.png?raw=true)

_Figure 24 : IP address to be entered in the browser._

Once all this is done, you will see the robot control screen where the green buttons are used to start the robot movement. The program is written in such a way that only one movement can be made at a time (for example, if you click on a clockwise rotation and then click on the forward button, the robot will not combine the two movements...it will only make the straight line).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)

_Figure 25 : Robot control screen._

[Sommaire](#table_of_contents)
<a name="development_"/>

## Development

A holonomic robot has 4 independent wheels, so 4 motors must be controlled independently of each other. To know which motor to activate and how to activate it, you can look at this [project](https://github.com/Clerbout-Francois/Kinematics_holonomic_robot_MATLAB) in which I simulated a top view of a holonomic robot and its movements according to the inputs on each motor. This may allow you to understand the instructions contained in my different codes (/!\ the orientation of the rollers is not the same but the kinematics is very close to this robot).

In this README, I will only present the programs allowing the development of the local server, the C++ code controlling the robot (from the beginning of the code to the end) and the control of the robot from a device connected on the same network as the robot. For information, the **ledcWrite** function of the Robot_phone.ino program is equivalent to the **digitalWrite** function of the main.cpp program. If you need help or explanations, don't hesitate to write to me, I will be happy to help you and/or exchange with you.

#### main.cpp file

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_1.png?raw=true)

_Figure 26 : Initialization of constants._

Here, we initialise variables of type int which we will use later to give instructions to each motor. You can see that we send two instructions to each motor : one for the direction of rotation (pins 32, 0, 26 and 2) and one for the value of the motor rotation (33, 4, 27 and 15). This is why we have to declare 8 pins as outputs (OUTPUT), 2 per motor, which means that we will "write" values to these pins.

The command ```AsyncWebServer server(80);``` indicates that the local server will be expanded on port 80.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_2.png?raw=true)

_Figure 27 : Initialization of the serial monitor speed and definition of the ESP32 pins as outputs._

The robot is stopped at the beginning of the program, hence the value LOW for each motor rotation value.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_3.png?raw=true)

_Figure 28 : Initialization of the value of the different pins of the ESP32._

We start the [SPIFFS protocol](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/storage/spiffs.html) and then open all the files to check their presence in the flash memory of the ESP32.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_4.png?raw=true)

_Figure 29 : Start the SPIFFS protocol and open existing files (then display)._

In the first block, we write to the serial monitor that we are connecting to the SSID (name of your internet network) and then by the command ```WiFi.begin(ssid, password);``` we try to connect with the information given. In the second block, we check if the connection is operational and until it is, we display "." every 500 ms on the serial monitor to show that the connection is being made. In the last block, we display the IP address that will be useful to connect from the browser.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_5.png?raw=true)

_Figure 30 : Commands for connecting the ESP32 to the Internet._

We now create the asynchronous requests allowing the server to send commands to the robot.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_6.png?raw=true)

_Figure 31 : Asynchronous requests for html, css and js files._

We create the query for an hourly rotation, all other queries will have the same structure, only their content will differ. 

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_7.png?raw=true)

_Figure 32 : Asynchronous request for clockwise rotation._

By studying the kinematics, we know that if all the motors turn clockwise and at the same value, then the robot turns on itself clockwise (and vice versa).

We proceed in the same way (study the kinematics and then define the direction and value of rotation of each motor) for all the movements of the robot.

#### index.html file

In this screenshot, you can see the beginning of the html file, the name of the html page as well as the banner of the local server and the definition of the rotation buttons.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8.png?raw=true)

_Figure 33 : Display of the title of the web page and the display of the button for the different rotations._

We work in the same way for the other 8 buttons, we just add ids that allow us to place the buttons on the page.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8bis.png?raw=true)

_Figure 34 : Creation of the different buttons._

#### script.js file

The different onButton functions are defined in the .js file as follows: the Http request is created and defined asynchronously so that it can be sent at any time.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8bis.png?raw=true)

_Figure 35 : Definition of onButton functions._

[Sommaire](#table_of_contents)
<a name="conclusion_"/>

## Conclusion

The aim of this project is to discover rapid prototyping : modelling 3D parts with CAD software such as SOLIDWORKS for printing or laser cutting, the use of 3D printing software and the laser cutter, C++ programming as well as WEB programming (HTML, JavaScript and CSS) and the content of the requests of a WEB page.

I hope to have been able to guide you step by step towards the realization of this discovery project. There are many improvements and I am aware of this, as soon as I have time I will add new programs to this GitHub repository. 

Do not hesitate to contact me for any intervention with students (more or less young !) or for any feedback concerning this educational project.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Robot_photo1.jpg?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Robot_photo2.jpg?raw=true)

_Figure 36 : Robot photographs._



[Table of Contents](#table_of_contents)
<a name="license_"/>

## License

Please do not forget that this project is under [MIT license](https://choosealicense.com/licenses/mit/).
