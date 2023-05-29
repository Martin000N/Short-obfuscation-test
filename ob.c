#include<stdio.h>
#include<math.h>
#include<windows.h>
                                          int main(){int A=0x28;int B=0xC8;float Cx=
                                     0;float Cy=0;float Cz=0;printf("\033[1;1H\033[2J")
                                  ;int D=B*A+A;char E[D];float F=(B/0x2)/tan(0x2D);float 
                                 Gx=0x1;float Gz=0;float Hx=0;float Hz=0x1;float I=cos(0.02
                              );float J=sin(0.02);int K=0;while(0x1){if(GetAsyncKeyState(0x52
                            )){Hx=Hx*I+Hz*(-J);Hz=Hz*I-Hx*(-J);Gx=Gx*I+Gz*(-J);Gz=Gz*I-Gx*(-J)
                         ;}else if(GetAsyncKeyState(0x57)){Cx+=Hx;Cz+=Hz;}else if(GetAsyncKeyState(
                       0x53)){Cx-=Hx;Cz-=Hz;}else if(GetAsyncKeyState(0x44)){Cx+=Gx;Cz+=Gz;}else if(
                      GetAsyncKeyState(0x41)){Cx-=Gx ;Cz-=Gz;}else if(GetAsyncKeyState(0x54)){Hx=Hx*I+Hz
                    *J;Hz=Hz*I-Hx*J;Gx=Gx*I+Gz*J;Gz=Gz*I-Gx*J;}int M=0;for(int N=A/0x2;N>-A/0x2;N--){for(
                  int O=-B/0x2;O<=B/0x2;O++){if(O==B/0x2){E[M]='\n';}else{float Px=Hx*F+O*Gx;float Py=N;float
                 Pz=Hz*F+O*Gz;float Q=sqrt(pow(Px,0x2)+pow(Py,0x2)+pow(Pz,0x2));float Rx=Px/=Q;float Ry=Py/=Q;float
               Rz=Pz/=Q;float S=fmax(fabs(Rx),fmax(fabs(Ry),fabs(Rz)));int T=0;for(int U=0;U<0x64;U++){float V=Cx+U
              *S*Px;float W=Cy+U*S*Py;float X=Cz+U*S*Pz;if(V>-0xA&&V<0xA&&W>-0x5&&W<0xA&&X<0xA&&X>-0xA){T=round(U/0xA
            );char Y[]="@#$1[{!;:.";E[M]=Y[T];break;}else if(W<-0x5){E[M]='.';break;}else if(U==0x63){E[M]=' ';}}}M++;
                                                            }}puts(E
                                                            );Sleep(
                                                            0x1E);
                                                            printf(
                                                            "\x1b[d"
                                                            );}
                                                            return 
                                                              0;}
