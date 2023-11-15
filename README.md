# AMPERO-II-STOMP-CTRL
PILOTAGE AMPERO II STOMP AVEC 2 CTRL PAR PATCH
Version 1.00

Cette application pour ESP32 permet de piloter l'AMPERO II STOMP seul à l'aide de 128 banques de 4 sons + 2 CTRL par son!

Pour cela, j'utilise 6 commutateur au pied, les 4 premiers pour choisir mes 4 PATCHs à piloter sur l'AMPERO et les 2 derniers, pour piloter les CTRl 1 et CTRL 2 par PATCH.

J'ai aussi ajouté 8 écrans OLED pour parfaire la lecture de l'outil.

Donc, les 12 STOMPs A1 -> A6 et B1 -> B6 sont pilotables à souhait grâce aux 2 boutons CTRL 1 et CTRL 2! Seuls les STOMPS différents sont piloté! Ce la fonctionne aussi inter-PATCHs. Si sur les boutons 1 et 2 je commande le même patch sur l'AMPERO, alors ce PATCH n'est pas rechargé inutiliment, seuls les STOMPs le sont!

J'ai aussi mis la possibilité, par PATCH/CTRL1/CTRL2 de pouvoir piloter le volume et l'état de la pédale d'EXPression. 3 paramètres pour chacune des configuration sont disponibles!

Il y a juste une option pour piloter l'état des pistes de ma console WING pour créer une ambiance "Stéréoisée" à partir d'un même signal ou stéréo standard!

