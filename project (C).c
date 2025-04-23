#include <stdio.h>
#include <stdlib.h>
void update_array(int a[],int size){
    int i, up_value;
    if(i>=0||i<5){
    printf("\n Enter the index (0-4) you want to change: ");
    scanf("%d", &i);
    printf("\n Enter value what you want to insted off index %dth :",i);
    scanf("%d", &up_value);
    a[i] = up_value;
    printf("\n After update value the array are: ");
    for(int j = 0; j < size; j++) {
        printf("%d ", a[j]);
    }
}
    else printf("\n Invalid index");
}
void delete_index(int a[],int size){
    int i;
    printf("\n Enter the index (0-4) Whice one deleted you want:");
    scanf("%d",&i);
    for(int j=i;j<size-1;j++){
        int temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
    }
    printf("After deleted value the current array are: ");
    int j;
    a[j]==0;
    for(int i=0;i<size-1;i++){
        if(a[i]!=0) printf("\t%d",a[i]);
        }

}
void sort_array(int a[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    printf("\n sorted result is:\t ");
    for(int  i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}
void search_avalue(int a[],int size){
   int n;
   printf("\n which value you search?:");
   scanf("%d",&n);
   for(int i=0;i<size;i++){
    if(a[i]==n){
         printf("\n yeeee Founded in %dth index",i);
         return 0;
    }
   }
   printf("\n Not found");
}
void display_array(int a[],int size){
   for(int i=0;i<size;i++){
    printf("%d\t",a[i]);
   }
}
int main()
{
    int size,i;
    printf("\n Enter the array size :");
    scanf("%d",&size);
    if(size<=0){
        printf("\n No space in array\n");
        printf("\n Enter again array size:\n");
        scanf("%d",&size);
    }
    int a[size];
    printf("\n Enter the elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("array elements are:");
    for(i=0;i<size;i++){
        printf("\t%d",a[i]);
    }

    while(1){
    printf("\nChoose an option:\n 1.update\n 2.Delete\n 3.Sort\n 4.Search\n 5.Display\n 6.Exit\n");
    int cho;
    printf("enter your choice:");
    scanf("%d",&cho);

    if(cho==1){
        update_array(a,size);

    }

    else if(cho==2){
        delete_index(a,size);

    }

    else if(cho==3){
        sort_array(a,size);

    }

    else if(cho==4){
        search_avalue(a,size);

    }

     else if(cho==5){
        display_array(a,size);

    }

    else if(cho==6){
        printf("tata bye bye ");
        break;
    }

    }
    return 0;
}



