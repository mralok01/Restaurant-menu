#include <stdio.h>
int main()
{
    int value, variety;
    printf("====MENU OF RESTAURANT====\n");
    printf("1 for BURGER\n");
    printf("2 for CHIKEN \n");
    printf("3 for CHAUMIN\n");
    printf("4 for MANCHOORIAN\n");
    printf("5 for PIZZA\n");
    printf("=================================\n");
    printf("enter your choosing which you want to eat= ");
    scanf("%d", &value);
    switch (value)
    {
    case 1:
    {
        printf("-------BURGER MENU--------\n");
        printf("=================================\n");
        printf("1.> simple burger = RS-60\n");
        printf("2.> cheese burger RS-120\n");
        printf("3.> gold cheese burger RS-180\n");
         printf("=================================\n");
        printf("chose your burger variety = ");
        scanf("%d", &variety);

        switch (variety)
        {
        case 1:
        printf("=================================\n");
            printf("your order simple burger\n");
            printf("RS: 60\n");
            break;

        case 2:
        printf("=================================\n");
            printf("your order is cheese burger\n");
            printf("RS: 120\n");
            break;

        case 3:
        printf("=================================\n");
            printf("your order is gold cheese burger\n");
            printf("RS: 180\n");
            break;

        default:
        printf("=================================\n");
            printf("wrong choose variety of burger");
        }
        break;
    }

    case 2:
    {
        printf("---------CHICKEN MENU---------\n");
        printf("=================================\n");
        printf("1.> simple chicken = RS-140\n");
        printf("2.> roasted chicken RS-190\n");
        printf("3.> chicken kawab RS-180\n");
        printf("=================================\n");
        printf("chose your chicken variety = ");
        scanf("%d", &variety);

        switch (variety)
        {
        case 1:
        printf("=================================\n");
            printf("your order simple chicken\n");
            printf("RS: 140\n ");
            break;

        case 2:
        printf("=================================\n");
            printf("your order is roasted chicken\n");
            printf("RS: 190\n");
            break;

        case 3:
        printf("=================================\n");
            printf("your order is chiecken kawab\n");
            printf("RS: 180\n");
            break;

        default:
        printf("=================================\n");
            printf("wrong choose variety of chicken");
        }
        break;
    }
    case 3:

    {
        printf("---------CHAUMIN MENU---------\n");
        printf("=================================\n");
        printf("1.> simple chaumin = RS-40\n");
        printf("2.> cheese chaumin RS-70\n");
        printf("3.> gold cheese chaumin RS-110\n");
        printf("=================================\n");
        printf("chose your chaumin variety = ");
        scanf("%d", &variety);

        switch (variety)
        {
        case 1:
        printf("=================================\n");
            printf("your order simple chaumin\n");
            printf("RS: 40\n");
            break;

        case 2:
        printf("=================================\n");
            printf("your order is cheese chaumin\n");
            printf("RS: 70\n");
            break;

        case 3:
        printf("=================================\n");
            printf("your order is gold cheese chaumin\n");
            printf("RS: 110\n");
            break;

        default:
        printf("=================================\n");
            printf("wrong choose variety of chaumin");
        }
        break;
    }

    case 4:

    {
        printf("---------MANCHOORIAN MENU---------\n");
        printf("=================================\n");
        printf("1.> simple manchoorian = RS-30\n");
        printf("2.> cheese manchoorian RS-50\n");
        printf("3.> gold cheese burger RS-90\n");
        printf("=================================\n");
        printf("chose your burger variety = ");
        scanf("%d", &variety);

        switch (variety)
        {
        case 1:
        printf("=================================\n");
            printf("your order simple manchoorian \n");
            printf("RS: 30\n");
            break;

        case 2:
        printf("=================================\n");
            printf("your order is cheese manchoorian\n");
            printf("RS: 50\n");
            break;

        case 3:
        printf("=================================\n");
            printf("your order is gold cheese manchoorian\n");
            printf("RS: 90\n");
            break;

        default:
        printf("=================================\n");
            printf("wrong choose variety of manchoorian");
        }
        break;
    }

    case 5:

       {
         printf("---------PIZZA MENU---------\n");
         printf("=================================\n");
        printf("1.> onion pizza = RS-110\n");
        printf("2.> cheese burger RS-170\n");
        printf("3.> corn-cheese burger RS-220\n");
        printf("=================================\n");
        printf("chose your pizza variety = ");
        scanf("%d", &variety);

        switch (variety)
        {
        case 1:
        printf("=================================\n");
            printf("your order onion pizza\n");
            printf("RS: 110\n");
            break;

        case 2:
        printf("=================================\n");
            printf("your order is cheese pizza\n");
            printf("RS: 170\n");
            break;

        case 3:
        printf("=================================\n");
            printf("your order is corn-cheese burger\n");
            printf("RS: 220\n");
            break;

        default:
        printf("=================================\n");
            printf("wrong choose variety of pizza");
        }
        break;
       }

    default:

        printf("oops!! you are enter invalid input");
    }

    printf("thank you for your order!\n");
    printf("pls visit again\n");
    printf("=================================\n");
    return 0;
}