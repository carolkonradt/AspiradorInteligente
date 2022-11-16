#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main(){
    int x=0, y=0, i=0; /*x e y são coordenadas do plano cartesiano*/
    char dir[2000];

    typedef struct{
        int xr, yr;
        char dirr;
    }Robo;

    Robo r1;

    /*seta robo*/
    r1.xr=0;
    r1.yr=0;
    r1.dirr='N';

    scanf("%d %d", &x, &y);
    fflush(stdin);
    fgets(dir, 2000, stdin);

    while(dir[i]!='\0'){
    /*testes para entrada F*/
        if(dir[i]=='F'){
            if(r1.dirr=='N'){
                if(r1.yr<y)
                    r1.yr++;
            }
            else{
                if(r1.dirr=='S'){
                    if(r1.yr>0)
                        r1.yr--;
                }
                else{
                   if(r1.dirr=='L'){
                        if(r1.xr<x)
                            r1.xr++;
                   }
                   else{
                        if(r1.xr>0)
                            r1.xr--;
                   }}}}
        else{
            /*testes para entrada T*/
            if(dir[i]=='T'){
                if(r1.dirr=='N'){
                    if(r1.yr>0)
                        r1.yr--;
                }
                else{
                    if(r1.dirr=='S'){
                        if(r1.yr<y)
                            r1.yr++;
                    }
                    else{
                       if(r1.dirr=='L'){
                            if(r1.xr>0)
                                r1.xr--;
                       }
                       else{
                            if(r1.xr<x)
                                r1.xr++;
                       }}}}
                else{
                /*testes para entrada E*/
                if(dir[i]=='E'){
                    if(r1.dirr=='N'){
                        r1.dirr='O';
                    }
                    else{
                        if(r1.dirr=='S'){
                            r1.dirr='L';
                        }
                        else{
                           if(r1.dirr=='L'){
                                r1.dirr='N';
                           }
                           else{
                                r1.dirr='S';
                           }
                        }}}
            else{
            /*testes entrada D*/
            if(dir[i]=='D'){
                if(r1.dirr=='N'){
                    r1.dirr='L';
                }
                else{
                    if(r1.dirr=='S'){
                        r1.dirr='O';
                    }
                    else{
                       if(r1.dirr=='L'){
                            r1.dirr='S';
                       }
                       else{
                            r1.dirr='N';
                       }
                    }}}}

    }

    }
        i++;
    }

    printf("%c %d %d", r1.dirr, r1.xr, r1.yr);
    return 0;
}
