#include <stdio.h>
void create(int arr[], int n);
void display(int arr[], int n);
void search(int arr[], int n);
void binarySearch(int arr[], int n);
int main() 
{
 int arr[100], n; 
 printf("Enter the number of elements:");
 scanf("%d", &n); 
 create(arr, n);
 printf("\n Array elements are:\n");
 display(arr, n);
 int choice;
do
{
    printf("\n----MENU----");
    printf("\n1. Linear Search");
    printf("\n2. Binary Search");
    printf("\n3. Display Array");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            search(arr, n);
            break;
        case 2:
            binarySearch(arr, n);
            break;
        case 3:
            display(arr, n);
            break;
        case 4:
            printf("Exiting Program...\n");
            break;
        default:
            printf("Invalid Choice\n");
    }
} while(choice != 4);
    return 0;
}
void create(int arr[], int n)
{
    int i;
    printf("Enter %d elements\n", n);
   
    for (i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
}
void display(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
  printf("\n");
}
void search(int arr[], int n)
{
 int i, key, flag = 0;
 printf("\nEnter the elements to search: ");
 scanf("%d", &key);
 for(i = 0; i < n; i++)
 {
     if(arr[i] == key)
     {
         printf("Element found at position %d\n", i + 1); 
         flag=1;
         break;
     }
 }
 if(flag == 0)
 {
     printf("Element is not found\n");
 }
}
void binarySearch(int arr[], int n)
{
    int key, low, high, mid;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at position %d\n", mid + 1);
            return;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found\n");
}
