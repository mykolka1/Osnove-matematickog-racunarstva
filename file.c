
    #include <stdio.h>
    #include <math.h>
    
    int main()
    {
        // simple kalkulator zad1

        int x, y, z, r, u;
        
        printf("Unesi prvi broj.");
        printf("\na=");
        scanf("%d" , &x);
        
        printf("Unesi drugi broj.");
        printf("\nb=");
        scanf("%d" , &y);
        
        z=x+y;
        r=x-y;
        u=x*y;
        
        printf("\nZbroj je %d", z);
        printf("\nRazlika je %d", r);
        printf("\nUmnozak je %d", u);

        // Povrsina i opseg trokuta zad2

        float a, b, c, p, o, s;
        
        printf("Unesi prvi broj.");
        printf("\na=");
        scanf("%f" , &a);
        
        printf("Unesi drugi broj.");
        printf("\nb=");
        scanf("%f" , &b);
        
        printf("Unesi treci broj.");
        printf("\nc=");
        scanf("%f" , &c);
        
        o=a+b+c;
        s=o/2;
        p=sqrt(s*(s-a)*(s-b)*(s-c));
        
        printf("\nOpseg je %f", o);
        printf("\nS je %f", s);
        printf("\nPovrsina je %f", p);

        // BMI zad3

        float v, t, i;
        
        printf("Unesi visinu.");
        printf("\nv=");
        scanf("%f" , &v);
        
        printf("Unesi masu.");
        printf("\nt=");
        scanf("%f" , &t);
        
        
        i=(t/pow(v,2));
        
        if (i < 18.5) printf("mrsav si");
        if (i > 18.5 && i < 24.9) printf("idealan si");
        if (i > 25 && i < 29.9) printf("umjeren si");
        if (i > 30 && i < 39.9) printf("debel si");
        if (i > 40) printf("coocked");
        
    }
