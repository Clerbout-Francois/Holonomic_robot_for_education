# Holonomic robot for education

<a name="top_"/>

Pour le moment, vous pouvez retrouver ce petit robot au sein du Fablab de JUNIA ISEN Lille et bien sûr chez moi !! :monocle_face:

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

Le but premier de ce robot est de permettre aux personnes intéressées par la robotique de pouvoir y toucher en construisant un robot holonome et peu coûteux (prix inférieur à 200 euros). Le second but est de permettre à des étudiants suivant des cours de protypage rapide de vite se plonger dans la conception d'un robot en ayant chaque pièce déjà dessinée, un code fonctionnel ainsi qu'un schéma électrique déjà réalisé. Vous trouverez donc sur cette page un manuel afin de concevoir ce robot du début à la fin.

Les robots holonomes sont des robots, utilisant des roues omnidirectionnelles, qui peuvent se déplacer dans toutes les directions de l'espace plan, sans contrainte de trajectoires. Les robots de cette catégorie ont donc une liberté de mouvement totale et peuvent se déplacer dans des espaces exigus. Ils représentent l'avenir de la robotique mobile même s'ils sont plus coûteux à la production et à l'entretien.


<a name="instructions_f"/>

## Instructions

Selon votre préférence, vous avez le choix de contrôler ce robot depuis votre téléphone ou depuis un serveur local.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/Server1_robot.png?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/Interface_Blynk.PNG?raw=true)

_Figure 1: Captures d'écran des deux modes de contrôle du robot holonome (gauche : serveur local, droite : application sur téléphone)._


Les instructions ne sont pas les mêmes selon que vous controlliez le robot depuis votre téléphone ou depuis un serveur local. Dans un premier temps je vous conseille de suivre la méthode du serveur local qui ne nécessite aucun paramètrage, il vous suffit juste de téléverser le programme robot_holonome_serveur_local.ino sur l'ESP32.

A vous de choisir maintenant : rendez-vous [ici](#telephone_) pour le contrôle par téléphone et si vous préférez le serveur local alors rendez-vous [ici](#serveur_).


<a name="telephone_"/>

### Téléphone

Afin de contrôler votre robot, vous aurez besoin de télécharger l'application Blynk sur l'App Store ou Google Play Store selon que vous soyez sous iOs (iPhone) ou Androïd.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/Blynk.PNG?raw=true)

_Figure 2: Capture d'écran de l'application Blynk à télécharger._

Il vous faudra ensuite créer un projet **(/!\ PARTIE TRES IMPORTANTE : il vous faudra noter certaines variables lors de la création du projet sur Blynk afin de venir les renseigner dans le fichier robot_holonome_telephone.ino et de lier l'application et le logiciel)**.

Pour cela, suivez les étapes suivantes :

#### Création d'un projet





<a name="serveur_"/>

### Serveur local

Dans ce mode de contrôle, seul le programme robot_holonome_serveur_local.ino est nécessaire. Vous n'avez pas besoin de plus, l'amusement est très proche.

Il vous faut télécharger ce programme et le téléverser sur l'ESP32. 

Veillez à ce que votre ESP32 se connecte à un réseau internet (partage de connexion, Wi-Fi...), pour cela il vous faut renseigner le nom de votre réseau ainsi que le mot de passe de votre réseau en début de programme...ne vous inquiétez pas car le code est suffisamment bien expliqué (enfin...je l'espère :sweat_smile:).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/Infos_réseau.png?raw=true)

_Figure 2: Informations à renseigner afin de permettre à l'ESP32 de se connecter sur le réseau internet._

Une fois ces informations saisies, vous pouvez téléverser le programme sur l'ESP32.

(Si cette erreur se produit lors d'une tentative de téléchargement (téléversement) : "A fatal error occurred: Failed to connect to ESP32: Timed out waiting for packet header", Appuyez sur le bouton BOOT tout au long du téléchargement jusqu'à ce que "Connecting" disparaisse pour laisser place au téléchargement).

Le programme une fois téléversé, l'ESP32 va se connecter au réseau internet renseigné et vous verrez apparaître l'écran suivant sur votre moniteur série qui vous indiquera l'adresse IP de votre serveur local :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/Connexion_Wi-Fi.png?raw=true)

_Figure 2: Moniteur série indiquant que l'ESP32 a réussi à se connecter au réseau internet._

Vous n'avez plus qu'à saisir l'adresse IP indiquée dans votre navigateur de la manière suivante :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/Adresse_IP.png?raw=true)

_Figure 2: Adresse IP précédente à rentrer dans le navigateur._

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



[Table of Contents](#table_of_contents)
<a name="license_"/>

## License

Please do not forget that this project is under [MIT license](https://choosealicense.com/licenses/mit/).



[Table of Contents](#table_of_contents)
