
#include <iostream>
#include <cmath>
#define PI 3.14159 

int main(){
    int choix;
    std::cout << "Choisissez une forme pour calculer l'aire et le perimetre" << std::endl;
    std::cout << "1. Triangle\n2. Carre\n3 Rectangle\n4. Cercle\n";
    std::cin >> choix; 

        switch (choix) {
        case 1: {
            double cote;
            std::cout << "Entrez la longueur du cote du triangle" << std::endl;
            std::cin >> cote;

            double perimetre = 3 * cote;
            double aire = (sqrt(3) / 4) * cote * cote;
            std::cout << "Perimetre du triangle : " << perimetre << std::endl;
            std::cout << "Aire du triangle : " << aire << std::endl;
            break;
            }
        case 2: {
            double cote;
            std::cout << "Entrez la longueur du cote du carre : " << std::endl;
            std::cin >> cote;

            double perimetre = 4 * cote;
            double aire = cote * cote;
            std::cout << "Perimetre du carre : " << perimetre << std::endl;
            std::cout << "Aire du carre : " << aire  << std::endl;
            break;

        }
        case 3: {
            double longueur, largeur;
            std::cout << "Entrez la longueur du rectangle : " << std::endl;
            std::cin >> longueur;
            std::cout << "Entrez la largeur du rectangle : " << std::endl;
            std::cin >> largeur;

            double perimetre = (longueur + largeur) * 2;
            double aire = longueur * largeur; 
            std::cout << "Perimetre du rectangle : " << perimetre << std::endl;
            std::cout << "Aire du rectangle : " << aire << std::endl;
            break;

        }
        case 4: {
            double rayon;
            std::cout << "Entrez le rayon du cercle : " << std::endl;
            std::cin >> rayon;

            double perimetre = 2 * PI * rayon;
            double aire = PI * rayon * rayon;
            std::cout << "Le perimetre du cercle est : " << perimetre << std::endl;
            std::cout << "L'aire du cercle est : " << aire << std::endl;

        }
            

            
    }

    return 0;
}
