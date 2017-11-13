// Lottey - pseudo-random numbers generator
// Um gerador der numeros aleatórios.

#include "iostream"

using namespace std;

// FUNCTIONS
void lottery(int, int);

int main(){

    /*
        Basicamente precisamos setar um
        numero diferente a baixo. Toda vez que compilarmos,
        Para isso precisamos usar uma outra função,
        chamada time.
    */
    // cout << time(NULL) << endl;

    /* srand(time(NULL)); // s é de seed

    int nr = rand();

    cout << nr << endl; */

    int total_balls, quat_namber;

    cout << "Qual o numero maximo de cada bola?" << endl;
    cin >> total_balls;

    cout << "Quantas bolas vão participar da loteria?" << endl;
    cin >> quat_namber;
    

    lottery(total_balls, quat_namber);

    return 0;
}

void lottery(int total_bolls, int bolls_to_draw){

    if(total_bolls < bolls_to_draw)
        return;
    
    srand(time(NULL));

    int *balls = new int[bolls_to_draw];

    for (int i = 0; i < bolls_to_draw; i++){
        /*
            Agora para ter um range apropiado, basta fazer uma,
            divisão do valor gerado randomicamente pelo total
            de bolas, e pegar o resto da divisão.
            Agora se quisermos um random de 1 - 49 por exemplo,
            devemos somar mais 1, sempre. Deste jeito nunca será
            0.
        */
        balls[i] = rand() % total_bolls + 1;

        /*
            Porem toda via, isso tem a chanse de ter numeros
            repetidos, temos que ter cuidado com isso, pois não,
            pode ter numeros repetidos. 
        */

        for(int j = 0; j < i + 1; j++){
            // Vamos percorrer cada item de i
            if (balls[i] == balls[j] && i != j) {
                i--;
                break;
            }else if(j == i){
                cout << balls[i] << endl;
            }
        }

        cout << balls[i] << endl;
    }

    delete []balls;
}