#include <iostream>
#include <cstring>
using namespace std;

/*void inv(char *pS){
    char *p1 = pS;
    char *p2 = pS +strlen(pS) -1;

    while (p1<p2)
    {
        swap(*p1,+p2);
    }

}
*/
void invertirRec(char *p1, char *p2){
    if(p1 >= p2) return;
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    invertirRec(p1 +1 , p2 -1);
}
//si estoy frente a un puntero ->
// si estoy frente a un objeto .
void invertir(char *pS){


    if(!pS) return;

    invertirRec(pS,pS+strlen(pS)-1);

    
}