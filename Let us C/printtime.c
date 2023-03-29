#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int hr, i;
    for(hr=1; hr<=12; hr++){
        if(hr>=1 && hr<12){
            printf("\n%d AM", hr);    
        }
        else if(hr=12){
            printf("\n%d Noon", hr);
        } 
    }
    for(hr=1; hr<=12; hr++){
        if(hr>=1 && hr<12){
            printf("\n%d PM", hr);    
        }
        else if(hr=12){
            printf("\n%d Midnight", hr);
        } 
    }
    
    return 0;
}
