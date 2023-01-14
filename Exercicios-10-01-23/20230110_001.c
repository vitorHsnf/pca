/*Faça uma função que dados um inteiro n e um inteiro d, 0 < d < 9, 
  devolve quantas vezes o dígito d aparece em n. 
  (dica: utilizar o operador % na solução )*/

int contar(int n, int d){
    int cont = 0;

    while (n > 0){

        if(n % 10 == d)
            cont++;
        n = n/10;
    }
    return cont;
}

