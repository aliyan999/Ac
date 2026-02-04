#include <stdio.h>

int main()
{
    int buffer[10], bufsize = 10;
    int in = 0, out = 0;
    int produce, consume, choice = 0;

    while (choice != 3)
    {
        printf("\n1. Producer\t2. Consumer\t3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if ((in + 1) % bufsize == out)
            {
                printf("\nBuffer is full");
            }
            else
            {
                printf("\nEnter the value: ");
                scanf("%d", &produce);
                buffer[in] = produce;
                in = (in + 1) % bufsize;
            }
            break;

        case 2:
            if (in == out)
            {
                printf("\nBuffer is empty");
            }
            else
            {
                consume = buffer[out];
                printf("\nThe consumed value is %d", consume);
                out = (out + 1) % bufsize;
            }
            break;

        case 3:
            printf("\nExiting...");
            break;

        default:
            printf("\nInvalid choice! Please enter a valid option");
        }
    }
    return 0;
}
