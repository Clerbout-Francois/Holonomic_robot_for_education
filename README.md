# Holonomic robot for education (french and english versions...because it is for education)

<a name="top_"/>

Pour le moment, vous pouvez retrouver ce petit robot au sein du Fablab de JUNIA ISEN Lille...et bien sûr chez moi !! :monocle_face:

**VERSION FRANCAISE :** vous pouvez retrouver toutes les explications en français [ici](#french_version_) pour réaliser ce projet. Amusez-vous bien !! :partying_face: Vous pouvez trouver les composants et leurs références en [bas](#liste_) de cette page.

**ENGLISH VERSION :** you can have all the details and explanation [here](#english_version_) if you want to realize this project. Enjoy !! :partying_face: You can find all the components and their references at the [end](#liste_) of this page.


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

Le but premier de ce robot est de permettre aux personnes intéressées par la robotique de pouvoir y toucher en construisant un robot holonome et peu coûteux (prix inférieur à 200 euros). Le second but est de permettre à des étudiants suivant des cours de protypage rapide de vite se plonger dans la conception d'un robot en ayant chaque pièce déjà dessinée, un code fonctionnel ainsi qu'un schéma électrique déjà réalisé. Vous trouverez donc dans ce dépôt GitHub un manuel afin de concevoir ce robot du début à la fin.

Les robots holonomes sont des robots, utilisant des roues omnidirectionnelles, qui peuvent se déplacer dans toutes les directions de l'espace plan, sans contrainte de trajectoires. Les robots de cette catégorie ont donc une liberté de mouvement totale et peuvent se déplacer dans des espaces exigus. Ils représentent l'avenir de la robotique mobile même s'ils sont plus coûteux à la production et à l'entretien.


<a name="instructions_f"/>

## Instructions

Si vous n'avez jamais utilisé de microcontrôleur ESP32 sur l'IDE Arduino, suivez ce [tutoriel](https://github.com/Clerbout-Francois/Use_ESP32_on_ArduinoIDE).

Selon votre préférence, vous avez le choix de contrôler ce robot depuis votre téléphone ou depuis un serveur local.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Interface_Blynk.jpg?raw=true)

_Figure 1 : Visualisation des deux modes de contrôle du robot holonome (haut : serveur local, bas : application sur téléphone)._


Les instructions ne sont pas les mêmes selon que vous controlliez le robot depuis votre téléphone ou depuis un serveur local. Dans un premier temps je vous conseille de suivre la méthode du serveur local qui ne nécessite aucun paramètrage, il vous suffit juste de travailler avec le dossier data et de téléverser le code sur l'ESP32.

A vous de choisir maintenant : rendez-vous [ici](#telephone_) pour le contrôle par téléphone et si vous préférez le serveur local alors rendez-vous [ici](#serveur_).


<a name="telephone_"/>

### Téléphone

Afin de contrôler votre robot, vous aurez besoin de télécharger l'application Blynk sur l'App Store ou Google Play Store selon que vous soyez sous iOs (iPhone) ou Androïd.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Blynk.jpg?raw=true)

_Figure 2 : Application Blynk à télécharger._

Il vous faudra ensuite créer un projet **(/!\ PARTIE TRES IMPORTANTE : il vous faudra noter certaines variables lors de la création du projet sur Blynk afin de venir les renseigner dans le fichier robot_holonome_telephone.ino et de lier l'application et le logiciel)**.

Pour cela, suivez les étapes suivantes :

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

(Si cette erreur se produit lors d'une tentative de téléchargement (téléversement) : "A fatal error occurred: Failed to connect to ESP32: Timed out waiting for packet header", Appuyez sur le bouton BOOT tout au long du téléchargement jusqu'à ce que "Connecting" disparaisse de l'écran de l'IDE Arduino pour laisser place au téléchargement).

Le programme une fois téléversé, l'ESP32 va se connecter au réseau internet renseigné et vous verrez apparaître l'écran suivant sur votre moniteur série qui vous indiquera l'adresse IP de votre serveur local :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Connection_Wi-Fi.png?raw=true)

_Figure 5 : Moniteur série indiquant que l'ESP32 a réussi à se connecter au réseau internet._

Vous pouvez observer les différents fichiers contenus dans la mémoire flash de l'ESP32 (/index.html, /script.js et /w3.css).

**/!\ Equipement (ordinateur, tablette, téléphone, télé...) connecté sur le même réseau internet que l'ESP32 pour avoir accès au serveur local !**
Vous n'avez plus qu'à saisir l'adresse IP indiquée précédemment dans votre navigateur de la manière suivante :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/IP_Address.png?raw=true)

_Figure 6 : Adresse IP à saisir dans le navigateur._

Une fois tout ceci effectué vous verrez apparaître l'écran de contrôle du robot où les boutons verts permettent de lancer le mouvement du robot. Le programme est écrit de manière à ce qu'un seul mouvement ne soit réalisable à la fois (exemple : si vous cliquez sur une rotation horaire et que juste après vous cliquez sur le bouton permettant la marche avant du robot, celui-ci ne combinera pas les deux mouvements...il ne réalisera que la ligne droite).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)

_Figure 7 : Ecran de contrôle du robot et animations (interactions) possibles._

[Sommaire](#sommaire_)
<a name="developpement_f"/>

## Développement

Un robot holonome possède 4 roues indépendantes les unes des autres, il faut donc contrôler 4 moteurs indépendamment les uns des autres. Pour savoir quel moteur activer et comment l'activer vous pouvez vous pencher sur ce [projet](https://github.com/Clerbout-Francois/Kinematics_holonomic_robot_MATLAB) durant lequel j'ai simulé une vue de haut d'un robot holonome et ses déplacements en fonctions des entrées sur chaque moteur. Cela peut vous permettre de comprendre les instructions contenues dans mes différents codes (/!\ l'orientation des galets n'est pas la même mais la cinématique est très proche de ce robot).

Dans ce README, je ne présenterai que le fonctionnement du programme permettant le développement du serveur local et du code C++ de contrôle du robot (du début du code à la fin) et le contrôle du robot depuis un équipement connecté sur le même réseau que le robot. Pour information, la fonction **ledcWrite** du programme robot_holonome_telephone.ino est équivalente à la fonction **digitalWrite** du programme main.cpp. Si besoin d'aide ou d'explications, n'hésitez pas à m'écrire, je serai ravi de vous aider et/ou d'échanger avec vous.

#### Fichier main.cpp

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_1.png?raw=true)

_Figure 8 : Capture d'écran de l'initialisation des variables d'état du serveur local._

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

_Figure 17 : Définitons des fonctions onButton._

[Sommaire](#sommaire_)
<a name="conclusion_f"/>

## Conclusion

Ce projet a pour but de faire découvrir le prototypage rapide : la modélisation de pièces 3D avec des logiciels de CAO comme SOLIDWORKS pour l'impression ou la découpe laser, l'utilisation des logiciels d'impression 3D et de la découpeuse laser, la programmation C++ ainsi que la programmation WEB (HTML, JavaScript et CSS) et le contenu des requêtes d'une page WEB. 

J'espère avoir pu vous guider pas à pas vers la réalisation de ce projet de découverte. Il en existe de nombreuses amélioriations et j'en suis conscient, dès que j'ai du temps je viendrai ajouter de nouveaux programmes dans ce dépôt GitHub. 

N'hésitez pas à me contacter pour toute intervention auprès d'étudiants (plus ou moins jeunes !) ou pour tout retour concernant ce projet éducatif.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Robot.png?raw=true)

_Figure 18 : Photographie du robot._

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

Le but premier de ce robot est de permettre aux personnes intéressées par la robotique de pouvoir y toucher en construisant un robot holonome et peu coûteux (prix inférieur à 200 euros). Le second but est de permettre à des étudiants suivant des cours de protypage rapide de vite se plonger dans la conception d'un robot en ayant chaque pièce déjà dessinée, un code fonctionnel ainsi qu'un schéma électrique déjà réalisé. Vous trouverez donc dans ce dépôt GitHub un manuel afin de concevoir ce robot du début à la fin.

Les robots holonomes sont des robots, utilisant des roues omnidirectionnelles, qui peuvent se déplacer dans toutes les directions de l'espace plan, sans contrainte de trajectoires. Les robots de cette catégorie ont donc une liberté de mouvement totale et peuvent se déplacer dans des espaces exigus. Ils représentent l'avenir de la robotique mobile même s'ils sont plus coûteux à la production et à l'entretien.


<a name="instructions_"/>

## Instructions

Si vous n'avez jamais utilisé de microcontrôleur ESP32 sur l'IDE Arduino, suivez ce [tutoriel](https://github.com/Clerbout-Francois/Use_ESP32_on_ArduinoIDE).

Selon votre préférence, vous avez le choix de contrôler ce robot depuis votre téléphone ou depuis un serveur local.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Interface_Blynk.jpg?raw=true)

_Figure 19 : Visualisation des deux modes de contrôle du robot holonome (haut : serveur local, bas : application sur téléphone)._


Les instructions ne sont pas les mêmes selon que vous controlliez le robot depuis votre téléphone ou depuis un serveur local. Dans un premier temps je vous conseille de suivre la méthode du serveur local qui ne nécessite aucun paramètrage, il vous suffit juste de travailler avec le dossier data et de téléverser le code sur l'ESP32.

A vous de choisir maintenant : rendez-vous [ici](#phone_) pour le contrôle par téléphone et si vous préférez le serveur local alors rendez-vous [ici](#server_).


<a name="phone_"/>

### Phone

Afin de contrôler votre robot, vous aurez besoin de télécharger l'application Blynk sur l'App Store ou Google Play Store selon que vous soyez sous iOs (iPhone) ou Androïd.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Blynk.jpg?raw=true)

_Figure 20 : Application Blynk à télécharger._

Il vous faudra ensuite créer un projet **(/!\ PARTIE TRES IMPORTANTE : il vous faudra noter certaines variables lors de la création du projet sur Blynk afin de venir les renseigner dans le fichier robot_holonome_telephone.ino et de lier l'application et le logiciel)**.

Pour cela, suivez les étapes suivantes :

#### Creation of a project

Rendez vous sur le [site de Blynk](https://blynk.io/en/getting-started) et suivez les différentes instructions. Il vous faudra noter les valeurs suivantes pour les renseigner dans votre code Arduino (sur la photo ce sont les valeurs de mon projet, les vôtres différeront) : 

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Connection_Blynk.png?raw=true)

_Figure 21 : Informations à renseigner afin de permettre à l'ESP32 de se connecter avec Blynk._

<a name="server_"/>

### Local server

Dans ce mode de contrôle, seul le dossier data et le fichier main.cpp sont utiles. Vous n'avez pas besoin de plus, l'amusement est très proche.

Il vous faut télécharger ce dossier et le téléverser sur l'ESP32. 

Veillez à ce que votre ESP32 se connecte à un réseau internet (partage de connexion, Wi-Fi...), pour cela il vous faut renseigner le nom de votre réseau ainsi que le mot de passe de votre réseau en début de programme...ne vous inquiétez pas car le code est suffisamment bien expliqué (enfin...je l'espère :sweat_smile:).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Network_credentials.png?raw=true)

_Figure 22 : Informations à renseigner afin de permettre à l'ESP32 de se connecter sur le réseau internet._

Une fois ces informations saisies, vous pouvez téléverser le programme sur l'ESP32.

(Si cette erreur se produit lors d'une tentative de téléchargement (téléversement) : "A fatal error occurred: Failed to connect to ESP32: Timed out waiting for packet header", Appuyez sur le bouton BOOT tout au long du téléchargement jusqu'à ce que "Connecting" disparaisse de l'écran de l'IDE Arduino pour laisser place au téléchargement).

Le programme une fois téléversé, l'ESP32 va se connecter au réseau internet renseigné et vous verrez apparaître l'écran suivant sur votre moniteur série qui vous indiquera l'adresse IP de votre serveur local :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Connection_Wi-Fi.png?raw=true)

_Figure 23 : Moniteur série indiquant que l'ESP32 a réussi à se connecter au réseau internet._

Vous pouvez observer les différents fichiers contenus dans la mémoire flash de l'ESP32 (/index.html, /script.js et /w3.css).

**/!\ Equipement (ordinateur, tablette, téléphone, télé...) connecté sur le même réseau internet que l'ESP32 pour avoir accès au serveur local !**
Vous n'avez plus qu'à saisir l'adresse IP indiquée précédemment dans votre navigateur de la manière suivante :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/IP_Address.png?raw=true)

_Figure 24 : Adresse IP à saisir dans le navigateur._

Une fois tout ceci effectué vous verrez apparaître l'écran de contrôle du robot où les boutons verts permettent de lancer le mouvement du robot. Le programme est écrit de manière à ce qu'un seul mouvement ne soit réalisable à la fois (exemple : si vous cliquez sur une rotation horaire et que juste après vous cliquez sur le bouton permettant la marche avant du robot, celui-ci ne combinera pas les deux mouvements...il ne réalisera que la ligne droite).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)

_Figure 25 : Ecran de contrôle du robot et animations (interactions) possibles._

[Sommaire](#table_of_contents)
<a name="development_"/>

## Development

Un robot holonome possède 4 roues indépendantes les unes des autres, il faut donc contrôler 4 moteurs indépendamment les uns des autres. Pour savoir quel moteur activer et comment l'activer vous pouvez vous pencher sur ce [projet](https://github.com/Clerbout-Francois/Kinematics_holonomic_robot_MATLAB) durant lequel j'ai simulé une vue de haut d'un robot holonome et ses déplacements en fonctions des entrées sur chaque moteur. Cela peut vous permettre de comprendre les instructions contenues dans mes différents codes (/!\ l'orientation des galets n'est pas la même mais la cinématique est très proche de ce robot).

Dans ce README, je ne présenterai que le fonctionnement du programme permettant le développement du serveur local et du code C++ de contrôle du robot (du début du code à la fin) et le contrôle du robot depuis un équipement connecté sur le même réseau que le robot. Pour information, la fonction **ledcWrite** du programme robot_holonome_telephone.ino est équivalente à la fonction **digitalWrite** du programme main.cpp. Si besoin d'aide ou d'explications, n'hésitez pas à m'écrire, je serai ravi de vous aider et/ou d'échanger avec vous.

#### Fichier main.cpp

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_1.png?raw=true)

_Figure 26 : Capture d'écran de l'initialisation des variables d'état du serveur local._

Ici, on initialise des variables de type int qui nous serviront par la suite afin de donner des consignes à chaque moteur. Vous pouvez observer que l'on envoie deux consignes à chaque moteur : une pour le sens de rotation (pins 32, 0, 26 et 2) et une pour la valeur de rotation du moteur (33, 4, 27 et 15). C'est pourquoi nous devons déclarer 8 pins en tant que sorties (OUTPUT), 2 par moteur, ce qui signifie que l'on va "écrire" des valeurs sur ces pins.

La commande ````AsyncWebServer server(80);```` permet d'indiquer que le serveur local sera développé sur le port 80.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_2.png?raw=true)

_Figure 27 : Initialisation de la vitesse du moniteur série et définitions des pins de l'ESP32 en tant que sorties._

On immobilise le robot en début de programme, d'où la valeur LOW pour chaque valeur de rotation de moteur.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_3.png?raw=true)

_Figure 28 : Initialisation de la valeur des différentes pins de l'ESP32._

On démarre le protocole [SPIFFS](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/storage/spiffs.html) et ensuite on ouvre tous les fichiers présents afin de vérifier leur présence dans la mémoire flash.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_4.png?raw=true)

_Figure 29 : Démarrage du protocole SPIFFS et ouverture des fichiers existants (puis affichage)._

Dans le premier bloc, on écrit sur le moniteur série que l'on se connecte au SSID (nom de votre réseau internet) et ensuite par la commande ```WiFi.begin(ssid, password);``` on tente de se connecter avec les informations renseignées. Dans le second bloc, on vérifie si la connexion est opérationnelle et tant qu'elle ne l'est pas on affiche des "." toutes les 500 ms sur le moniteur série afin de montrer que la connexion est en train d'être réalisée. Dans le dernier bloc, on affiche l'adresse IP qui sera utile pour se connecter depuis le navigateur.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_5.png?raw=true)

_Figure 30 : Commandes pour connecter l'ESP32 au réseau internet._

On crée maintenant les requêtes asynchrones permettant au serveur d'envoyer des commandes au robot.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_6.png?raw=true)

_Figure 31 : Requêtes asynchrones pour les fichiers html, css et js._

On crée la requête pour une rotation horaire, toutes les autres requêtes auront la même structure ce n'est que leur contenu qui différera. 

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_7.png?raw=true)

_Figure 32 : Requête asynchrone pour une rotation horaire._

Par étude de la cinématique, on sait que si tous les moteurs tournent dans le sens des aiguilles d'une montre et à la même valeur alors le robot tourne sur lui-même dans le sens des aiguilles d'une montre (et inversement).

On procède de la même manière (étude de la cinématique puis définition du sens et de la valeur de rotation de chaque moteur) pour tous les mouvements du robot.

#### Fichier index.html

Sur cette capture d'écran, vous pouvez retrouver le début du fichier html, le nom de la page html ainsi que le bandeau du serveur local et la définiton des boutons de rotation.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8.png?raw=true)

_Figure 33 : Capture d'écran de l'affichage du titre de la page web et de l'affichage du bouton pour les différentes rotations._

On fonctionne de la même manière pour les 8 autres boutons, on ajoute juste des id qui permettent de placer les boutons sur la page.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8bis.png?raw=true)

_Figure 34 : Création des différents boutons._

#### Fichier script.js

Les différentes fonctions onButton sont définies dans le fichier .js de la manière suivante : on crée la requête Http et on la définit de manière asynchrone afin de pouvoir l'envoyer à tout moment.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8bis.png?raw=true)

_Figure 35 : Définitons des fonctions onButton._

[Sommaire](#table_of_contents)
<a name="conclusion_"/>

## Conclusion

Ce projet a pour but de faire découvrir le prototypage rapide : la modélisation de pièces 3D avec des logiciels de CAO comme SOLIDWORKS pour l'impression ou la découpe laser, l'utilisation des logiciels d'impression 3D et de la découpeuse laser, la programmation C++ ainsi que la programmation WEB (HTML, JavaScript et CSS) et le contenu des requêtes d'une page WEB. 

J'espère avoir pu vous guider pas à pas vers la réalisation de ce projet de découverte. Il en existe de nombreuses amélioriations et j'en suis conscient, dès que j'ai du temps je viendrai ajouter de nouveaux programmes dans ce dépôt GitHub. 

N'hésitez pas à me contacter pour toute intervention auprès d'étudiants (plus ou moins jeunes !) ou pour tout retour concernant ce projet éducatif.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Robot.png?raw=true)

_Figure 36 : Photographie du robot._



[Table of Contents](#table_of_contents)
<a name="license_"/>

## License

Please do not forget that this project is under [MIT license](https://choosealicense.com/licenses/mit/).



[Top](#top_)
<a name="liste_"/>

# 
