#include <stdio.h> //include standard input/output header file
#include <math.h> // include math function header file
#include<string.h> //include string manipulation header file

void Bin_to_Dec(long int); //1:BINARY TO DECIMAL
void Bin_to_Oct(long int); //2:BINARY TO OCTAL
void Bin_to_Hex(long int); //3:BINARY TO HEXA-DECIMAL
void Dec_to_Bin(long int); //4:DECIMAL TO BINARY
void Dec_to_Oct(long int); //5:DECIMAL TO OCTAL
void Dec_to_Hex(long int); //6:DECIMAL TO HEXA-DECIMAL
void Oct_to_Bin(long int); //7:OCTAL TO BINARY
void Oct_to_Dec(long int); //8:OCTAL TO DECIMAL
void Oct_to_Hex(long int); //9:OCTAL TO HEXA-DECIMAL
void Hex_to_Bin(char []); //10:HEXA-DECIMAL TO BINARY
void Hex_to_Dec(char []); //11:HEXA-DECIMAL TO DECIMAL
void Hex_to_Oct(char []); //12:HEXA-DECIMAL TO OCTAL
void Any_to_Any();//13:Any to Any


int main()
{
    int num=1,check ,number; //variable declaration
    int op;
    long int bin,oct,dec;
    char hex[100]; // character array
    int i;

    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while(num!=0 && num==1)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");

        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");

        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");

        printf("\n=> OCTAL <=\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");

        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");

        printf("\n=> ANY TO ANY <=\n");
        printf("13: Any to Any.");


        printf("\nENTER YOUR CHOICE (!!NUMBERS ONLY!!): ");

        // Input validation
        if (scanf("%d", &op) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue; // Skip to next iteration of the loop
        }

        switch(op) // start of switch case based on users choice
        {
            case 1:
                printf("\n*BINARY TO DECIMAL*\n");
                D: //label for goto statement
                printf("\nEnter the Number in Binary form (ONLY 0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("*TRY AGAIN\n");
                        goto D; // jump to label D to retry input
                    }
                    else
                    check=check/10; // move to next digit
                }

                Bin_to_Dec(bin); break;

            case 2:
                printf("\n*BINARY TO OCTAL*\n");
                E:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("*TRY AGAIN\n");
                        goto E;
                    }
                    else
                    check=check/10;
                }

                Bin_to_Oct(bin); break;

            case 3:
                printf("\n*BINARY TO HEXA-DECIMAL*\n");
                F:
                printf("\nEnter the Number in Binary form (ONLY 0s & 1s): ");
                scanf("%ld",&bin);
                // CHECKING INPUT IS IN BINARY FORM
                check=bin;

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",bin);
                        printf("*TRY AGAIN\n");
                        goto F;
                    }
                    else
                    check=check/10;
                }

                Bin_to_Hex(bin); break;

            case 4:
                printf("\n*DECIMAL TO BINARY*\n");
                printf("\nEnter the Number in Decimal form (ONLY 0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Bin(dec); break;

            case 5:
                printf("\n*DECIMAL TO OCTAL*\n");
                printf("\nEnter the Number in Decimal form (ONLY 0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Oct(dec); break;

            case 6:
                printf("\n*DECIMAL TO HEXA-DECIMAL*\n");
                printf("\nEnter the Number in Decimal form (ONLY 0 to 9): ");
                scanf("%ld",&dec);
                Dec_to_Hex(dec); break;

            case 7:
                printf("\n*OCTAL TO BINARY*\n");
                A:
                printf("\nEnter the Number in Octal form (ONLY 0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto A;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Bin(oct); break;

            case 8:
                printf("\n*OCTAL TO DECIMAL*\n");
                B:
                printf("\nEnter the Number in Octal form (ONLY 0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto B;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Dec(oct); break;

            case 9:
                printf("\n*OCTAL TO HEXA-DECIMAL*\n");
                C:
                printf("\nEnter the Number in Octal form (ONLY 0 to 7): ");
                scanf("%ld",&oct);
                // CHECKING INPUT IS IN OCTAL FORM
                check=oct;

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto C;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Oct_to_Hex(oct); break;
            case 10:
                printf("\n**HEXA-DECIMAL TO BINARY**\n");
                X:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto X;
                    }
                }
                Hex_to_Bin(hex); break;

            case 11:
                printf("\n**HEXA-DECIMAL TO DECIMAL**\n");
                Y:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Y;
                    }
                }
                Hex_to_Dec(hex); break;

            case 12:
                printf("\n**HEXA-DECIMAL TO OCTAL**\n");
                Z:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Z;
                    }
                }
                Hex_to_Oct(hex); break;

            case 13:
                 printf("\n**ANY TO ANY**\n");
                Any_to_Any(); break;


    default:    // Default case for invalid input
                printf("\n*INVALID NUMBER*\n"); //print error message
                break; // Exit switch case
        }
        printf("\n___Press 1 to continue_\n__Press 0 to exit_");
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");// prompt user to continue or exit

        // Input validation for continuation choice
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            num = 0; // Set num to 0 to exit the loop
        }
    }
        }

void Bin_to_Dec(long int bin)
{
    int rem,sum=0,i=0;
    printf("Conversion Steps:\n");

    while(bin!=0)
    {
        rem=bin%10;
        printf("%d * 2^%d",rem,i);
        if(bin/10!=0)
        {printf(" + ");
        }
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;

    }

    printf("\nEquivalent Decimal Number : %d",sum);
}

void Bin_to_Oct(long int bin)
{
    int i=0,rem,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%8;
        sum=sum/8;
        i++;
        len++;
    }
    printf("\nConvert every 3 binary digits to octal digit from the following table:\n");
    //logic for table of binary and octal table
    printf("Binary    Octal\n");
    printf("000       0\n");
    printf("001       1\n");
    printf("010       2\n");
    printf("011       3\n");
    printf("100       4\n");
    printf("101       5\n");
    printf("110       6\n");
    printf("111       7\n");

    printf("\nEquivalent Octal Number :");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",remain[i]);
    }
}

void Bin_to_Hex(long int bin)
{
    int rem,i=0,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    printf("\nBinary number grouped into four-bit sections\n");
    //table of binary into hexadecimal
    printf("Binary    hexadecimal\n");
    printf("0000       0\n");
    printf("0001       1\n");
    printf("0010       2\n");
    printf("0011       3\n");
    printf("0100       4\n");
    printf("0101       5\n");
    printf("0110       6\n");
    printf("0111       7\n");
    printf("1000       8\n");
    printf("1001       9\n");
    printf("1010       A\n");
    printf("1011       B\n");
    printf("1100       C\n");
    printf("1101       D\n");
    printf("1110       E\n");
    printf("1111       F\n");

    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",remain[i]);
        }

    }
}

void Dec_to_Bin(long int dec)
{
    int rem[50],i,len=0;
    printf("Conversion Steps:\n");
    printf("Step 1: Divide the decimal number %d by 2.\n", dec);
    do
    {
        rem[i]=dec%2;
        dec=dec/2;
        i++;
        len++;
        printf("Step %d: Remainder = %d, Quotient = %d\n", i + 1, rem[i - 1], dec);
    }
    while(dec!=0);

    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}

void Dec_to_Oct(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%8;
        dec=dec/8;
        i++;
        len++;
        printf("Step %d: Remainder = %d, Quotient = %d\n", i + 1, rem[i - 1], dec);
    }
    while(dec!=0);

    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}

void Dec_to_Hex(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%16;
        dec=dec/16;
        i++;
        len++;
        printf("Step %d: Remainder = %d, Quotient = %d\n", i + 1, rem[i - 1], dec);
    }
    while(dec!=0);

    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",rem[i]);
        }

    }
}

void Oct_to_Bin(long int oct)
{
    int rem[50],len=0,decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    i=0;
    do
    {
        rem[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }
    while(decimal!=0);
    printf("step :convert octal number into three bit binary number\n");
    printf("Binary    Octal\n");
    printf("000       0\n");
    printf("001       1\n");
    printf("010       2\n");
    printf("011       3\n");
    printf("100       4\n");
    printf("101       5\n");
    printf("110       6\n");
    printf("111       7\n");

    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}

void Oct_to_Dec(long int oct)
{
    int decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        printf("%d * 8^%d",ans,i);
        if(oct/10!=0)
        {printf(" + ");
        }
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);
}

void Oct_to_Hex(long int oct)
{
    int rem[50],len=0,decimal=0,i=0,num,ans=0;
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }
    printf("convert octal number into three bit binary number\n");
    printf("grouping binary number into four bit");
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",rem[i]);
        }

    }
}
void Hex_to_Bin(char hex[])
{
    int i=0;
    //table of binary into hexadecimal
    printf("Binary    hexadecimal\n");
    printf("0000       0\n");
    printf("0001       1\n");
    printf("0010       2\n");
    printf("0011       3\n");
    printf("0100       4\n");
    printf("0101       5\n");
    printf("0110       6\n");
    printf("0111       7\n");
    printf("1000       8\n");
    printf("1001       9\n");
    printf("1010       A\n");
    printf("1011       B\n");
    printf("1100       C\n");
    printf("1101       D\n");
    printf("1110       E\n");
    printf("1111       F\n");

    printf("\nEquivalent Binary Number : ");
    for(i=0;i<strlen(hex);i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;

        default:
            printf("\n Invalid hexa digit %c ", hex[i]);
        }
    }

}

void Hex_to_Dec(char hex[])
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }
        printf("%d * 16^%d",num,power);
        if(hex[i]/10!=0)
        {printf(" + ");
        }
        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);

}

void Hex_to_Oct(char hex[])
{
    int i,len,num=0,power=0,decimal=0,rem[100];

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }

    i=0,len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }
      printf("convert hexadecimal number into four bit binary number\n");
    printf("grouping binary number into three bit");
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }

}

void Any_to_Any()
{

int rem[50],len=0,decimal=0,i=0,ans=0,number,Frombase,Tobase,check,num;

        printf("Enter the base of the number(2 onwards): ");
        scanf("%d", &Frombase);
        printf("Enter the base to convert to(2 onwards): ");
        scanf("%d", &Tobase);
       P: printf("Enter the number to convert: ");
        scanf("%d",&number);

        check=number;

            if(Frombase==2)
            {

                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",number);
                        printf("*TRY AGAIN\n");
                        goto P;
                    }
                    else
                    check=check/10;
                }

            }

            if(Frombase==8)
            {

                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",number);
                        printf("*TRY AGAIN\n");
                        goto P;
                    }
                    else
                    check=check/10;
                }

            }



    while(number!=0)
    {
        ans=number % 10;
        printf("%d * %d^%d +",ans,Frombase,i);
        decimal = decimal + ans * pow(Frombase,i);

        i++;
        number = number/10;
    }
    printf("\nEquivalent Decimal Number : %d\n",decimal);

    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%Tobase;
        decimal=decimal/Tobase;
        i++;
        len++;
        printf("Step %d: Remainder = %d, Quotient = %d\n", i + 1, rem[i - 1], decimal);
    }

    printf("\nResult number:");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }

}

