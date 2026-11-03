#include <stdio.h>

void Bubble(int a[], int n);
void Selection(int a[], int n);
void Insertion(int a[], int n);
void display(int a[], int n);

int main()
{
    int a[100], n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n--- SORTING MENU ---\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                Bubble(a, n);
                printf("Array after Bubble Sort:\n");
                display(a, n);
                break;

            case 2:
                Selection(a, n);
                printf("Array after Selection Sort:\n");
                display(a, n);
                break;

            case 3:
                Insertion(a, n);
                printf("Array after Insertion Sort:\n");
                display(a, n);
                break;

            case 4:
                printf("Array elements are:\n");
                display(a, n);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}


void Bubble(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


void Selection(int a[], int n)
{
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}


void Insertion(int a[], int n)
{
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}


void display(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}
