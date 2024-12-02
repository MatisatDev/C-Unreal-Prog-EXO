# AIX_GD3_FilRouge

Mini jeu memory :
J'ai fait en sorte que chaque qu'une paire est faite. Une valeur augmente de 1.

Une fois la valeur arrivée à 4, une variable bool se met en true.

Ce qui déclenche l'augmentation du score te la fin du mini jeu.

(équivalent cpp notée dans "GM_Memory"->"On Card Clicked").

Mini jeu platform :
J'ai fait deux pièce (une pièce d'argent et une pièce d'or) qui on une variable score différente.

J'ai donc crée une variable "Platform_Mini_Game_Score" dans le GameMode, qui augmente à partir de la valeur des variables score des pièces lorsqu'on les ramasses.

Lorsque toutes les pièces on été récupérer la variable "Platform_Mini_Game_Score" est utilisé pour augmenter le score du joueur.

(équivalant cpp notée dans "BP_Custom_Coin")

Ensuite j'ai également fait une IA capable de réaliser le même parcourt que le joueur.

Le but pour le joueur est donc de battre l'IA en étant plus rapide qu'elle, si ce n'est pas le cas le mini jeu s'arrête et le joueur ne reçoit aucun points.

Changement général :
J'ai fait un menu de démarrage dans lequel on peut choisir le nombres de joueurs désirer.

Une fois en jeu cela vas changer l'affichage du HUD, la logique des tours de jeu ainsi que le nombre de joueur requis sur la dernière case pour afficher le vainqueur.