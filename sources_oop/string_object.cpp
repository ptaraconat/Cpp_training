#include <iostream>
#include <string>

using namespace std; 

int main()
{
    // Déclarer des chaine de charactères 
    string maChaine("hello");
    cout << maChaine << endl;
    maChaine = "nouvelle phrase";
    cout << maChaine << endl;

    // assembler des chaines de charactères 
    string chaine1("Bonjour !");
    string chaine2("Comment allez-vous ?");
    string chaine3;
 
    chaine3 = chaine1 + chaine2; // 3... 2... 1... Concaténatioooooon
    cout << chaine3 << endl;

    // Comparer des chaines de charactère 
    string chaine4("Bonjour !");
    string chaine5("Comment allez-vous ?");
 
    if (chaine2 == chaine5) // Faux
    {
        cout << "Les chaines sont identiques." << endl;
    }
    else
    {
        cout << "Les chaines sont differentes." << endl;
    }

    // utiliser la methode size 
    cout << "Longueur de la chaine : " << maChaine.size() << endl;
    // methode substr 
    cout << chaine5.substr(3, 4) << endl;


    return 0;
}