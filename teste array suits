#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){

int processos[5]={101, 202, 303, 404, 505};

printf("%d", processos[2]);

}
----------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main (){

int processos[5]={101, 202, 303, 404, 505};
int *ptr = processos;
printf("%d\n", processos[2]);
printf("%d\n", *(ptr + 1));
printf("%d\n", *(ptr + 0));
printf("%d\n", *(ptr + 4));

}

}
-------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main (){
int i;
int processos[5]={101, 202, 303, 404, 505};
int *ptr = processos;
printf("%d\n", processos[2]);
printf("%d\n", *(ptr + 1));

for(i=0; i<5; i++){
    printf("Processo %d: %d \n", i, *(ptr + i));
    }


}

---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main (){
int i;
int processos[5]={101, 202, 303, 404, 505};
int *ptr = processos;
printf("%d\n", processos[2]);
printf("%d\n", *(ptr + 1));

for(i=0; i<5; i++){
    printf("Processo %d: %d \n", i, *(ptr + i));
    }
*(ptr+0)=999;
printf("%d", processos[0]);
}
