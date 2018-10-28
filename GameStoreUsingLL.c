#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

struct product
{
    int product_id;
    char product_name[100];
    int product_price;
    struct product *next;
};
struct Bill
{
    int probill_id;
    char probill_name[100];
    int probill_price;
    struct Bill *nextt;
};
struct product *start=NULL;
struct Bill *startt=NULL;

void main()
{
    long long card_number;
    int i,m,choice,month_number,year_number,cvv,method,device;
	printf("\n\n\n\n\n\n\n\n\n\t          ******************************************************************");
	printf("\n\t\t  ----------------WELCOME TO THE GAMING DUNGEON!--------------------");
	printf("\n\t\t  THE GAMING DUNGEON HAS THE BEST DEALS AND DISCOUNTS TO BUY GAMES!");
	printf("\n\t\t  YOUR ONE STOP DESTINATION GAMING THAT LETS YOU PREORDER GAMES ONLINE!");
	printf("\n\t\t\t\t\t  LETS GET GAMING!!");
	printf("\n\t\t  *******************************************************************");
	printf("\n\t\t\t\t  ENTER PASSWORD TO ENTER THIS MAGICAL PLACE:");
	scanf("%d",&m);
    if(m==0000)
    {
        printf("\n\t\t\t\t\t  CORRECT PASSWORD!");
        getch();
        system("cls");
        struct product *product1,*product2,*product3,*product4,*product5,*product6,*product7,*product8,*product9,*product10,*product11,*product12,*ptr;
        struct Bill *ptr1;
        int total;
        product1=(struct product*)malloc(sizeof(struct product));
        product1->product_id=1;
        strcpy(product1->product_name,"FIFA 19   ");
        product1->product_price=4299;
        start=product1;
        product2=(struct product*)malloc(sizeof(struct product));
        product1->next=product2;
        product2->product_id=2;
        strcpy(product2->product_name,"WWE 2K19                ");
        product2->product_price=3499;
        product3=(struct product*)malloc(sizeof(struct product));
        product2->next=product3;
        product3->product_id=3;
        strcpy(product3->product_name,"Assassin's creed:Odyssey Omega Edition           ");
        product3->product_price=3499;
        product4=(struct product*)malloc(sizeof(struct product));
        product3->next=product4;
        product4->product_id=4;
        strcpy(product4->product_name,"God of War                ");
        product4->product_price=2799;
        product5=(struct product*)malloc(sizeof(struct product));
        product4->next=product5;
        product5->product_id=5;
        strcpy(product5->product_name,"The Legend Of Zelda          ");
        product5->product_price=4499;
        product6=(struct product*)malloc(sizeof(struct product));
        product5->next=product6;
        product6->product_id=6;
        strcpy(product6->product_name,"Shadow of the Colossus");
        product6->product_price=1499;
        product7=(struct product*)malloc(sizeof(struct product));
        product6->next=product7;
        product7->product_id=7;
        strcpy(product7->product_name,"Mortal Combat X           ");
        product7->product_price=999;
        product8=(struct product*)malloc(sizeof(struct product));
        product8->product_id=8;
        product7->next=product8;
        strcpy(product8->product_name,"Tomb Raider             ");
        product8->product_price=1299;
        product8->next=product9;


        product9=(struct product*)malloc(sizeof(struct product));
        product8->next=product9;
        product9->product_id=9;
        strcpy(product9->product_name,"Red Dead Redemption II                 ");
        product9->product_price=3999;

        product10=(struct product*)malloc(sizeof(struct product));
        product9->next=product10;
        product10->product_id=10;
        strcpy(product10->product_name,"Fallout 76                 ");
        product10->product_price=3999;

        product11=(struct product*)malloc(sizeof(struct product));
        product10->next=product11;
        product11->product_id=11;
        strcpy(product11->product_name,"Call Of Duty:Black Ops 4                 ");
        product11->product_price=4699;

        product12=(struct product*)malloc(sizeof(struct product));
        product11->next=product12;
        product12->product_id=12;
        strcpy(product12->product_name,"NBA 2k Playground                 ");
        product12->product_price=2099;
        product12->next=NULL;


        int ch;

        printf("\n\n\n\n\t\t     AT THE GAMING DUNGEON, WE HAVE GAMES RANGING FOR VARIOUS DEVICES");
        printf("\n\n\t\t     1.PS4");
        printf("\n\n\t\t     2.PS3");
        printf("\n\n\t\t     3.XBOX ONE");
        printf("\n\n\t\t     4.XBO 360");
        printf("\n\n\t\t     5.PC");
        printf("\n\n\t\t     6.PSP");
        printf("\n\n\t\t     7.OTHERS");
        printf("\n\n\t\t     CHOOSE YOURS:");
        scanf("%d",&device);


        system("cls");
        printf("\t\t\tHERE'S A LIST OF THE LATEST AND THE TRENDIEST GAMES AT AMAZING RATES\n");
        printf("**********************************************************************************************************************");

        printf("\n\t1.FIFA 19\t\t         \t\t\t2.WWE 2K19\n");
        printf("\t Rs.4299\t\t\t\t\t\tRs.3499\n\n\n");


        printf("\t3.Assassin's creed:Odyssey Omega Edition\t\t4.God of War\n");
        printf("\t Rs.3499\t\t\t\t\t\tRs.2799\n\n\n");

        printf("\t5.The Legend Of Zelda\t\t\t\t\t6.Shadow of the Colossus\n");
        printf("\t Rs.4499\t\t\t\t\t\tRs.1499\n\n\n");

        printf("\t7.Mortal Combat X\t\t\t\t\t8.Tomb Raider\n");
        printf("\t Rs.999\t\t\t\t\t\t\tRs.1299\n\n");

        printf("\t9.Red Dead Redemption II\t\t\t\t10.Fallout 76\n");
        printf("\t Rs.3999\t\t\t\t\t\tRs.3999\n\n\n");

        printf("\t11.Call Of Duty:Black Ops 4\t\t\t\t12.NBA 2k Playground\n");
        printf("\t Rs.4699\t\t\t\t\t\tRs.2099\n\n");

        int procode;
        printf("***********************************************************************************************************************\n");
        printf("ENTER GAME CODE TO ADD TO THE CART\nPRESS -1 TO CHECKOUT:\n");
        scanf("%d",&procode);
        while(procode!=-1)
        {
            ptr=start;
            while(ptr->product_id!=procode)
            {
                ptr=ptr->next;
            }
            struct Bill *newnode;
            newnode=(struct Bill*)malloc(sizeof(struct Bill));
            newnode->probill_id=ptr->product_id;
            strcpy(newnode->probill_name,ptr->product_name);
            newnode->probill_price=ptr->product_price;
            if(startt==NULL)
            {
                startt=newnode;
                newnode->nextt=NULL;
                total=startt->probill_price;
                ptr1=startt;
            }
            else
            {
                ptr1=startt;
                while(ptr1->nextt!=NULL)
                {
                    ptr1=ptr1->nextt;

                }
                ptr1->nextt=newnode;
                newnode->nextt=NULL;
                total=total+newnode->probill_price;
                ptr1=newnode;
            }
            scanf("%d",&procode);
        }



        system("cls");
        printf("\n\n******************************************************************************************************\n");
        printf("\tID\t\tName\t\t\t\t\t\t\tPrice\n");
        printf("******************************************************************************************************\n");
        ptr1=startt;
        while(ptr1!=NULL)
        {
        printf("\t%d",ptr1->probill_id);
        printf("\t%s",ptr1->probill_name);
        printf("\n\t\t\t\t\t\t\t\t\t\t%d\n",ptr1->probill_price);



        ptr1=ptr1->nextt;
        }
        printf("******************************************************************************************************\n");
        printf("\t\t\t\t\t\t     \t\t\tTotal- Rs %d/-",total);

        printf("\n\tPick one method of delivery:\n\t1.Pick-Up\n\t2.Home-Delivery\n\tEnter your choice:");
        scanf("%d",&method);
        if(method==1)
        {
        printf("\t\t\t\t\t\t      \t\t\tTotal- Rs %d/-",total);
        }
        else
        {
            printf("\n\tHome Delivery charges:RS 100/-\n");
            total+=100;
            printf("\t\t\t\t\t\t \t\t\t0New Total- Rs %d/-",total);
        }

        printf("\n\n\tWhich payment would you like?\n\t1.DEBTI CARD\n\t2.CREDIT CARD\n\t3.CASH\n\tEnter your choice(1/2/3):");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:printf("\tPlease enter your CARD NUMBER:");
                scanf("%lld",&card_number);
                if(card_number<=9999999999999999)
                {
                printf("\tTransacting.....");
                printf("\tEnter your CARD EXPIRY DATE(MM/YY):");
                scanf("%d%d",&month_number,&year_number);
                printf("\tEnter your CVV:");
                scanf("%d",&cvv);
                if(cvv<=999)
                {
                    printf("\tTransacting....\n\tAnd everything is DONE!\n\tTHANKS FOR SHOPPING WITH US!DO VISIT AGAIN!");
                }
                else
                {
                    printf("\tINCORRECT CVV!TRY AGAIN LATER!");
                }
                }
                else
                    {
                    printf("\tINCORRECT CARD NUMBER!TRY AGAIN LATER");
                }

                break;
        case 2:printf("\tPlease enter your CARD NUMBER:");
                scanf("%lld",&card_number);
                if(card_number<=9999999999999999)
                {
                printf("\tTransacting.....");
                printf("\n\tEnter your CARD EXPIRY DATE(MM/YY):");
                scanf("%d%d",&month_number,&year_number);
                printf("\tEnter your CVV:");
                scanf("%d",&cvv);
                if(cvv<=999)
                {
                    printf("\tTransacting....\n\tAnd everything is DONE!\n\tTHANKS FOR SHOPPING WITH US!DO VISIT AGAIN!");
                }
                else
                {
                    printf("\tINCORRECT CVV!TRY AGAIN LATER!");
                }
                }

                else
                {
                    printf("\tINCORRECT CARD NUMBER !TRY AGAIN LATER!");
                }
                break;
        case 3:printf("\tThanks!And everything is DONE!\n\tTHANKS FOR SHOPPING WITH US!DO VISIT AGAIN!");
                break;

        }
        printf("\n\n\n\t\t\t\t\t\tPROGRAM DEVELOPED BY\n\t\t\t\tABHISHEK MOGAVEERA\t\tDEVIKA OLKAR");
        printf("\n\t\t\t\tSE-A-37 \t\t\tSE-A-47");
    }
    else
    {
        printf("\n\t\t\t\t     INCORRECT PASSWORD! TRY AGAIN LATER");
    }


}
