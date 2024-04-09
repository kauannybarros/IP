//https://www.thehuxley.com/problem/4154?locale=pt_BR

#include <stdio.h>
int main() {
    int adulto, crianca, limite, sobraadulto, sobracrianca, mesaadulto, mesacrianca, mesamista, mesaadulto1, mesacrianca1;
    scanf("%d %d %d",&adulto, &crianca, &limite);
    
    //calculo das mesas
    mesaadulto = adulto/limite; 
    mesacrianca = crianca/limite; 
    sobraadulto = adulto-mesaadulto*limite; 
    sobracrianca = crianca-mesacrianca*limite;
    mesamista=0;
  
    
    //se nao sobrar crianca ou adulto
    if( sobraadulto == 0 && sobracrianca == 0){
        printf("%d mesas com adultos: R$%d\n",mesaadulto, 3*adulto );
        printf("%d mesas com criancas: R$%d\n",mesacrianca, 2*crianca);
    }
    
    else if ((sobracrianca+sobraadulto== limite) || (sobracrianca%2 == 0 && sobraadulto%2 ==0 && sobracrianca+sobraadulto>limite) || (sobracrianca%2 == 0 && sobraadulto%2 ==0 && sobracrianca+sobraadulto<=limite)){
        if(sobracrianca+sobraadulto== limite)  {
            mesamista++;
            printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3);
            printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
            printf("%d mesas mistas: R$%d\n",mesamista, mesamista*limite*2);
        }
        else{
            if(sobracrianca % 2 == 0 && sobraadulto % 2 ==0 && sobracrianca+sobraadulto>limite){
                mesamista=2;
                printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3 );
                printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
                printf("%d mesas mistas: R$%d\n",mesamista, mesamista*limite*2);
            }
            if( sobracrianca % 2 == 0 && sobraadulto % 2 ==0 && sobracrianca+sobraadulto<=limite){
                mesamista++;
                printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3 );
                printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
                printf("%d mesas mistas: R$%d\n",mesamista, mesamista*limite*2);
            }
        }    
            
    }
    else {
        if((sobracrianca < 4 && sobraadulto<4) || (sobracrianca<4 && sobraadulto >=4) || (sobracrianca>=4 && sobraadulto <4) || (sobracrianca>=4 && sobraadulto>=4)){
            if(sobracrianca<4 && sobraadulto<4){
                mesaadulto1=sobraadulto; mesacrianca1=sobracrianca;
                mesaadulto=mesaadulto-mesaadulto1;mesacrianca=mesacrianca-mesacrianca1;
                if(adulto>=limite && crianca>=limite){
                    printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3 );
                    printf("%d mesas com adultos+1: R$%d\n",mesaadulto1, (limite+1)*4*mesaadulto1);
                    printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
                    printf("%d mesas com criancas+1: R$%d\n",mesacrianca1, (limite+1)*3*mesacrianca1);
                }
                if(adulto<limite && crianca>=limite){
                    printf("%d mesas com adultos+1: R$%d\n",mesaadulto1, (limite+1)*4*mesaadulto1);
                    printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
                    printf("%d mesas com criancas+1: R$%d\n",mesacrianca1, (limite+1)*3*mesacrianca1);
                }
                if(adulto>=limite && crianca<limite){
                    printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3 );
                    printf("%d mesas com adultos+1: R$%d\n",mesaadulto1, (limite+1)*4*mesaadulto1);
                    printf("%d mesas com criancas+1: R$%d\n",mesacrianca1, (limite+1)*3*mesacrianca1);
                }
                if(adulto<limite && crianca<limite){
                    printf("%d mesas com adultos+1: R$%d\n",mesaadulto1, (limite+1)*4*mesaadulto1);
                    printf("%d mesas com criancas+1: R$%d\n",mesacrianca1, (limite+1)*3*mesacrianca1);
                }
            }
            if(sobracrianca<4 && sobraadulto>=4){
                if((sobraadulto%limite)==0)
                    mesaadulto=mesaadulto+sobraadulto/limite;
                else
                    mesaadulto=mesaadulto+(sobraadulto/limite)+1;
                
                mesacrianca1=sobracrianca;
                mesacrianca=mesacrianca-mesacrianca1;
                if(crianca>=limite){
                    printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3);
                    printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
                    printf("%d mesas com criancas+1: R$%d\n",mesacrianca1, (limite+1)*3*mesacrianca1);
                }
                if(crianca<limite){
                    printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3);
                    printf("%d mesas com criancas+1: R$%d\n",mesacrianca1, (limite+1)*3*mesacrianca1);
                    
                }
            }
            if(sobracrianca>=4 && sobraadulto<4){
                if((sobracrianca%limite) == 0)
                    mesacrianca=mesacrianca+sobracrianca/limite;
                else
                    mesacrianca=mesacrianca+(sobracrianca/limite)+1;
                mesaadulto1=sobraadulto;
                mesaadulto=mesaadulto-mesaadulto1;
                if(adulto>=limite){
                    printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3 );
                    printf("%d mesas com adultos+1: R$%d\n",mesaadulto1, (limite+1)*4*mesaadulto1);
                    printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
                }
                if(adulto<limite){
                    printf("%d mesas com adultos+1: R$%d\n",mesaadulto1, (limite+1)*4*mesaadulto1);
                    printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
                }
            }
            if(sobracrianca>=4 && sobraadulto>=4){
                if((sobraadulto%limite)==0)
                    mesaadulto=mesaadulto+sobraadulto/limite;
                else
                    mesaadulto=mesaadulto+(sobraadulto/limite)+1;
                if((sobracrianca%limite) == 0)
                    mesacrianca=mesacrianca+sobracrianca/limite;
                else
                    mesacrianca=mesacrianca+(sobracrianca/limite)+1;
                printf("%d mesas com adultos: R$%d\n",mesaadulto, mesaadulto*limite*3);
                printf("%d mesas com criancas: R$%d\n",mesacrianca, mesacrianca*limite*2);
            }
        }
    }   
	return 0;
}
