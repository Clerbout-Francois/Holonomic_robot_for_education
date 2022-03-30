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

_Figure 1: Captures d'écran des deux modes de contrôle du robot holonome (gauche : serveur local, droite : application sur téléphone)._


Les instructions ne sont pas les mêmes selon que vous controlliez le robot depuis votre téléphone ou depuis un serveur local. Dans un premier temps je vous conseille de suivre la méthode du serveur local qui ne nécessite aucun paramètrage, il vous suffit juste de téléverser le programme robot_holonome_serveur_local.ino sur l'ESP32.

A vous de choisir maintenant : rendez-vous [ici](#telephone_) pour le contrôle par téléphone et si vous préférez le serveur local alors rendez-vous [ici](#serveur_).


<a name="telephone_"/>

### Téléphone

Afin de contrôler votre robot, vous aurez besoin de télécharger l'application Blynk sur l'App Store ou Google Play Store selon que vous soyez sous iOs (iPhone) ou Androïd.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Blynk.jpg?raw=true)

_Figure 2: Capture d'écran de l'application Blynk à télécharger._

Il vous faudra ensuite créer un projet **(/!\ PARTIE TRES IMPORTANTE : il vous faudra noter certaines variables lors de la création du projet sur Blynk afin de venir les renseigner dans le fichier robot_holonome_telephone.ino et de lier l'application et le logiciel)**.

Pour cela, suivez les étapes suivantes :

#### Création d'un projet



A COMPLETER !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

<a name="serveur_"/>

### Serveur local

Dans ce mode de contrôle, seul le programme robot_holonome_serveur_local.ino est nécessaire. Vous n'avez pas besoin de plus, l'amusement est très proche.

Il vous faut télécharger ce programme et le téléverser sur l'ESP32. 

Veillez à ce que votre ESP32 se connecte à un réseau internet (partage de connexion, Wi-Fi...), pour cela il vous faut renseigner le nom de votre réseau ainsi que le mot de passe de votre réseau en début de programme...ne vous inquiétez pas car le code est suffisamment bien expliqué (enfin...je l'espère :sweat_smile:).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Infos_réseau.png?raw=true)

_Figure 2: Informations à renseigner afin de permettre à l'ESP32 de se connecter sur le réseau internet._

Une fois ces informations saisies, vous pouvez téléverser le programme sur l'ESP32.

(Si cette erreur se produit lors d'une tentative de téléchargement (téléversement) : "A fatal error occurred: Failed to connect to ESP32: Timed out waiting for packet header", Appuyez sur le bouton BOOT tout au long du téléchargement jusqu'à ce que "Connecting" disparaisse de l'écran de l'IDE Arduino pour laisser place au téléchargement).

Le programme une fois téléversé, l'ESP32 va se connecter au réseau internet renseigné et vous verrez apparaître l'écran suivant sur votre moniteur série qui vous indiquera l'adresse IP de votre serveur local :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Connexion_Wi-Fi.png?raw=true)

_Figure 2: Moniteur série indiquant que l'ESP32 a réussi à se connecter au réseau internet._

**/!\ Equipement (ordinateur, tablette, téléphone, télé...) connecté sur le même réseau internet que l'ESP32 pour avoir accès au serveur local !**
Vous n'avez plus qu'à saisir l'adresse IP indiquée précédemment dans votre navigateur de la manière suivante :

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Adresse_IP.png?raw=true)

_Figure 2: Adresse IP à saisir dans le navigateur._

Une fois tout ceci effectué, vous verrez apparaître l'écran de contrôle du robot, les boutons sont surlignés (colorés) en rouge quand vous passez la souris dessus, de couleur verte quand vous pouvez activer un mouvement et de couleur grise quand votre clic entraînera l'arrêt d'un mouvement. Le programme est écrit de manière à ce qu'un seul mouvement ne soit réalisable à la fois.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server1_robot.png?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server2_robot.png?raw=true)
![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Server3_robot.png?raw=true)
_Figure 2: Ecran de contrôle du robot et animations (interactions) possibles._

[Sommaire](#sommaire_)
<a name="developpement_f"/>

## Développement

Un robot holonome possède 4 roues indépendantes les unes des autres, il faut donc contrôler 4 moteurs indépendamments les uns des autres. Pour savoir quel moteur activer et comment l'activer vous pouvez vous pencher sur ce [projet](https://github.com/Clerbout-Francois/Kinematics_holonomic_robot_MATLAB) durant lequel j'ai simulé une vue de haut d'un robot holonome et ses déplacements en fonctions des entrées sur chaque moteur. Cela peut vous permettre de comprendre les instructions contenues dans mes différents codes.

Dans ce README, je ne présenterai que le fonctionnement du programme robot_holonome_serveur_local.ino (du début du code à la fin). Pour information, la fonction **ledcWrite** du programme robot_holonome_telephone.ino est équivalente à la fonction **digitalWrite** du programme robot_holonome_serveur_local.ino. Si besoin d'aide ou d'explications, n'hésitez pas à m'écrire, je serai ravi de vous aider et/ou d'échanger avec vous.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_1.png?raw=true)

_Figure 2: Capture d'écran de l'initialisation des variables d'état du serveur local._

Ici, on initialise des variables de type String qui nous serviront par la suite lorsqu'on voudra connaître la valeur actuelle du serveur local (c'est-à-dire dans quel déplacement nous sommes actuellement).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_2.png?raw=true)

_Figure 2: Capture d'écran de la définiton du délai après lequel la connexion est coupée._

On définit un délai de 200 000 ms, soit 200 secondes (bien trop important, on pourrait le réduire à 30 000 ms = 30 secondes ce qui serait déjà suffisant) afin d'avoir le temps de pouvoir expliquer les déplacements du robot entre chaque clic de souris.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_3.png?raw=true)

_Figure 2: Capture d'écran du paramétrage des pins de l'ESP32._

Pour chaque moteur nous devons lui donner une consigne de sens de rotation ainsi qu'une valeur de rotation. C'est pourquoi nous devons déclarer 8 pins en tant que sorties (OUTPUT), 2 par moteur, ce qui signifie que l'on va "écrire" des valeurs sur ces pins.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_4.png?raw=true)

_Figure 2: Capture d'écran des commandes pour connecter l'ESP32 au réseau internet._

Dans le premier bloc, on écrit sur le moniteur série de l'IDE Arduino que l'on se connecte au SSID (nom de votre réseau internet) et ensuite par la commande WiFi.begin(ssid, password) on tente de se connecter avec les informations renseignées. Dans le second bloc, on vérifie si la connexion est opérationnelle et tant qu'elle ne l'est pas on affiche des "." sur le moniteur série afin de montrer que la connexion est en train d'être réalisée. Dans le dernier bloc, on affiche l'adresse IP qui sera utile pour se connecter depuis le navigateur.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_5.png?raw=true)

_Figure 2: Capture d'écran des consignes pour une rotation dans le sens des aiguilles d'une montre du robot._

Dans la suite du programme, on compare le contenu du lien dans lequel j'ai choisi de mettre des informations sur l'état du robot (ATTENTION : on peut le faire car ce ne ce sont pas des informations sensibles mais pour le bon développement web d'un site cette pratique est à bannir absolument !!! :scream:).

Dans la condition (if (header.indexOf(......))), on lit les informations contenues dans le header de la requête HTML. Si celle-ci est de la forme "GET /rotation_horaire/on" alors on rentre dans cette boucle de commandes. En écrivant la valeur HIGH sur les pins concernant les consignes de sens de rotation (32, 0, 26 et 2) cela indique au moteur qu'il doit tourner dans le sens des aiguilles d'une montre (et inversement pour LOW). En écrivant la valeur HIGH sur les pins concernant la valeur de rotation des moteurs (33, 4, 27 et 15) on fait tourner le moteur au maximum de sa vitesse (et on met le moteur à l'arrêt en écrivant la valeur LOW).

Par étude de la cinématique, on sait que si tous les moteurs tournent dans le sens des aiguilles d'une montre et à la même valeur alors le robot tourne sur lui-même dans le sens des aiguilles d'une montre (et inversement).

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_6.png?raw=true)

_Figure 2: Capture d'écran des consignes pour la réalisation d'une diagonale vers l'avant et la droite du robot._

Après étude de la cinématique de ce robot holonome, on sait qu'il faut que les moteurs 1 et 4 tournent et que les moteurs 2 et 3 sont à l'arrêt (c'est pourquoi on écrit la valeur LOW sur les valeurs de rotation des moteurs 2 et 3 tandis qu'on écrit la valeur HIGH sur les moteurs 1 et 4). De plus, il faut que le moteur 1 tourne dans le sens des aiguilles d'une montre (d'où la valeur HIGH pour le sens de rotation du moteur 1) et dans le sens inverse des aiguilles d'une montre pour le moteur 4 (d'où la valeur LOW).

On procède de la même manière pour tous les mouvements du robot.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_7.png?raw=true)

_Figure 2: Capture d'écran de la création du HTML et du style CSS de la page web._

Sur cette capture d'écran, vous pouvez retrouver la définition des classes button et button2 (pour les boutons de couleur verte et les boutons de couleur grise) ainsi que le ":hover" qui permet à un bouton sur lequel on pointe la souris de changer de couleur (rouge dans notre cas). Les différents id permettent de fixer la position des différents boutons sur la page web.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_8.png?raw=true)

_Figure 2: Capture d'écran de l'affichage du titre de la page web et de l'affichage du bouton pour la rotation dans le sens des aiguilles d'une montre._

Sur cette capture d'écran vous pouvez retrouver l'affichage du titre de la page web (premier bloc) et l'affichage du bouton de la rotation dans le sens des aiguilles d'une montre. C'est ici que l'on étudie la valeur de rotation_horaire, si la rotation horaire n'est pas active alors on peut l'activer en cliquant sur le bouton qui est de couleur verte et si la rotation est active alors le bouton est gris et on peut arrêter de mouvement en cliquant sur le bouton.

On fonctionne de la même manière pour les 9 autres boutons.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Explanation_9.png?raw=true)

_Figure 2: Capture d'écran de la fermeture de la connexion._

Ici, on ferme la connexion et on l'indique sur le moniteur série de l'IDE Arduino.

[Sommaire](#sommaire_)
<a name="conclusion_f"/>

## Conclusion

Ce projet a pour but de faire découvrir le prototypage rapide : la modélisation de pièces 3D avec des logiciels de CAO comme SOLIDWORKS pour l'impression ou la découpe laser, l'utilisation des logiciels d'impression 3D et de la découpeuse laser, la programmation C++ ainsi que la programmation WEB (HTML et CSS) et le contenu des requêtes du page WEB. 

J'espère avoir pu vous guider pas à pas vers la réalisation de ce projet de découverte. Il en existe de nombreuses amélioriations et j'en suis conscient, dès que j'ai du temps je viendrai ajouter de nouveaux programmes dans ce dépôt GitHub. 

N'hésitez pas à me contacter pour toute intervention auprès d'étudiants (plus ou moins jeunes !) ou pour tout retour concernant ce projet éducatif.

![alt text](https://github.com/Clerbout-Francois/Holonomic_robot_for_education/blob/main/images_holonomic_robot_for_education/Robot.png?raw=true)

_Figure 2: Photographie du robot._

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





[Table of Contents](#table_of_contents)
<a name="license_"/>

## License

Please do not forget that this project is under [MIT license](https://choosealicense.com/licenses/mit/).



[Top](#top_)
<a name="liste_"/>

# 
