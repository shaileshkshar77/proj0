#include <windows.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    int w,f,i;
    float h=0,b=0;
    printf("Enter Weight in Kilogram\n");
    scanf("%d",&w);
    printf("Enter Height as Feet and then Inches separately\n");
    scanf("%d%d",&f,&i);
    h+=i*2.54;
    h+=f*30.48;
    h/=100;
    b=w/(h*h);
    if(b<18.5)
    MessageBox(NULL, "SORRY , You are Malnurished!", "BMI :", MB_OK);
    else if(b>25)
    MessageBox(NULL,"SORRY , You are OverWeight!", "BMI :", MB_OK);
    else
        MessageBox(NULL,"Congratulations !! You are healthy", "BMI :", MB_OK);


    return 0;
}
