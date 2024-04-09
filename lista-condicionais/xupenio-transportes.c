//https://www.thehuxley.com/problem/4416?quizId=9155

#include <stdio.h>
int main () {
    int veloc, dist; 
    float a, b, c, va, vb, vc, vmin;
    scanf("%d %d", &veloc, &dist);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    va = dist/a;
    vb = dist/b;
    vc = dist/c;
    vmin = veloc/2;
    
    //se os 3 tiverem ok
    if ((va <= veloc && va >= vmin) && (vb <= veloc && vb >= vmin) && (vc <= veloc && vc >= vmin)){
        
        //se o K > T = G ou K > T > G ou K = T > G
        if ((vb == vc && va > vb && va > vc) || (va > vb && va > vc && vb > vc) || (va == vb && va > vc)) {
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
        }
            
        //se o K > G > T  ou K = G > T
        else if ((va > vc && va > vb && vc > vb) || (va == vc && va > vb))  {
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
        }
        
        //se o T > K = G ou T > K > G
        else if ((va == vc && vb > va && vb > vc) || (va > vb && va > vc && vb > vc)) {
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
        }
       
        //se o T > G > K ou T = G > K
        else if ((vb > vc && vb > va && vc > va) || (va == vc && va > vb)) {
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
        }
        
        
        //se o G > K = T ou G > K > T
        else if ((va == vc && vc > va && vc > vb) || (vc > vb && vc > va && va > vb)) {
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
        }
            
        //se o G > T > K  
       else if (vc > vb && vb > va && vc > va) {
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
        }
       
    }
    
    //se K e T estiverem ok
    else if ((va <= veloc && va >= vmin) && (vb <= veloc && vb >= vmin) && (vc > veloc || vc < vmin)) {
        //se K >= T
        if (va >= vb) {
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
         }
        //se T > K
        else if (vb > va) {
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
        }
    }

    //se K e G estiverem ok
    else if ((va <= veloc && va >= vmin) && (vb > veloc || vb < vmin) && (vc <= veloc && vc >= vmin)) {
        //se K >= G
        if (va >= vc) {
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
         }
        //se T > K
        else if (vc > va) {
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
            printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
        }
    }

    //se T e G estiverem ok
    else if ((va > veloc && va < vmin) && (vb <= veloc && vb >= vmin) && (vc <= veloc && vc >= vmin)) {
        //se T >= G
        if (vb >= vc) {
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
         }
        //se G > T
        else if (vc > vb) {
            printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
            printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
        }
    }

    //Se apenas K estiver ok
    else if ((va <= veloc && va >= vmin) && (vb > veloc || vb < vmin) && (vc > veloc || vc < vmin)) {
        printf("Xupenio pode utilizar o carro Kwid Laranja, cuja velocidade no percurso eh %.2f\n", va);
    }
    
    // Se apenas T estiver ok
    else if ((va > veloc || va < vmin) && (vb <= veloc && vb >= vmin) && (vc > veloc || vc < vmin)) {
        printf("Xupenio pode utilizar o carro Tesla Branco, cuja velocidade no percurso eh %.2f\n", vb);
    }
    
    //Se apenas G estiver ok
    else if ((va > veloc || va < vmin) && (vb > veloc || vb < vmin) && (vc <= veloc && vc >= vmin)) {
         printf("Xupenio pode utilizar o carro Gol Bolinha, cuja velocidade no percurso eh %.2f\n", vc);
    }
    
    //Se nenhum estiver ok
    else if ((va > veloc || va < vmin) && (vb > veloc || vb < vmin) && (vc > veloc || vc < vmin))  {
        printf("Infelizmente Xupenio nao podera ir ao evento mais importante do ano\n");
    }

    return 0;
}
