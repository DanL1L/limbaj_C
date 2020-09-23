    #include<stdio.h>
    #include<math.h>

    int main(){

        double ZZ,first,second,third,first_second,M,fourth,fifth,sixth,N,L,x,y,a,b,c,xpow,ypow,cpow,yp2,putereaB,putereaX,numitor_third,numitor_fifth,putereaY,X_fifth, fourth_div_fifth,
                numitor,numarator;
                printf("\n");
            printf("\tIntroduceti X:");
        scanf("%lf",&x);
            printf("\tIntroduceti Y:");
        scanf("%lf",&y);
            printf("\tIntroduceti A:");
        scanf("%lf",&a);
            printf("\tIntroduceti B:");
        scanf("%lf",&b);
            printf("\tIntroduceti C:");
        scanf("%lf",&c);

                xpow=pow(x,2+a);
                ypow=pow(y,3);
                cpow=pow(c,2);
        first=pow(M_E,-M_PI+xpow+ypow+cpow);
            printf("\t********************\n");
            printf("\t-Prima operatie:%2.lf\n",first);
            //y partea 2
                yp2=(pow(a,2)-b)/pow(c,2+cos(pow(a,2)));
        second=sqrt(pow(x,2+a)+pow(y,2+b-yp2));
                printf("\t-A 2 operatie:%2.2lf\n",second);
        first_second=first+second;
             //partea 3
             putereaX=-2*a+cos(pow(x,2));
             putereaB=2-pow(x,2+b);
             numitor_third=pow(x,2)+2*pow(y,2);
             third=sqrt(pow(x,putereaX)+pow(b,putereaB))/numitor_third;
                 printf("\t-A 3 operatie:%2.2lf\n",third);
              //partea 4
             fourth=x-y+pow(c,2);
                 printf("\t-A 4 operatie:%2.2lf\n",fourth);
             //partea 5
             putereaY=a+cos(x-pow(y,2))+2;
             X_fifth=2+pow(cos(x),2);
             numitor_fifth=2-pow(x,X_fifth)*pow(y,3);
             fifth=sqrt(x+pow(y,putereaY)+tan(x)/numitor_fifth);
                 printf("\t-A 5 operatie:%2.lf\n",fifth);
            //partea 4/5
            fourth_div_fifth=fourth/fifth;
                 printf("\t4/5:%4.lf\n",fourth_div_fifth);
            //partea 6
            sixth=(a+b)/(-pow(x,2)+pow(b,y));
                 printf("\t-A 6 operatie:%2.lf\n",sixth);
              numarator=first_second/third;
                 printf("\tNumarator:%2.lf\n",numarator);
            numitor=fourth_div_fifth+sixth;
                 printf("\tNumitor:%2.lf\n",numitor);
            ZZ=numarator/numitor;
                printf("\tRezultatul final:%2.f\n",ZZ);
                printf("\n");
                printf("\t********************\n");
        return 0;

    }

