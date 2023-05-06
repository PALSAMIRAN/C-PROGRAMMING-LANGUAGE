 #include<stdio.h>

// Worst Case = n (n - 1) / 2
// Best Case = n

// int * arr =int arr[]

void bubble(int *arr,int size) {

    int comp = 0;
    // i -> 4, 3, 2, 1 
    // for size 1
    for (int i = size - 1; i > 0; i--) { // to decrease size of array

        int descending = 0; // false 

        // j -> 0, 1, 2, 3

        // for size 1 : 0, 1
        for(int j = 0; j < i; j++) { // to compair adjacent elements in array
            //comparition -> (0, 1), (1, 2), (2, 3), (3, 4)

            // 0, 1
            comp++;
            if (arr[j] > arr[j + 1]) { // check for descending pair and swap
                descending = 1; // true
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }

        if (!descending) { // if no descending adjacent pairs exists
            break;
        }

    }

    printf("\n Checks : %d" , comp);
}

int maximum(int arr[], int end) // Time Complexitity = n
{
    int max = 0; // 1, 5 ,2, 3
    for (int i = 1; i <= end; i++)
    {
        if (arr[i] > arr[max]) // 5 > 1
        {
            max = i; // max = index of 5
        }
    }
    return max;
}

void maxselectionSort(int arr[], int size) // Time Complexity 
{
    // size 5: 4, 3, 2, 1
    for (int i = size - 1; i > 0; i--) { // Complex = n
        int temp = maximum(arr, i); // complex = n
        
        // 1, 4, 3, 2, 5 maxIndex = 4, i = 4
        if (i != temp) { 
            int store = arr[temp];
            arr[temp] = arr[i];
            arr[i] = store;
        }
    }
}

int minimum(int arr[],int start,int size)
{
    int min =start;
    for(int i = start+1; i<size;i++){
        if(arr[i]<arr[min]){
            min = i;
        }
    }
    return min;
}

void minselectionSort(int arr[], int size) // Time Complexity 
{
    // size 5: 4, 3, 2, 1
    for (int i = 0; i < size-1; i++) { // Complex = n
        int temp = minimum(arr, i,size); // complex = n
        
        // 1, 4, 3, 2, 5 maxIndex = 4, i = 4
        if (i != temp) { 
            int store = arr[temp];
            arr[temp] = arr[i];
            arr[i] = store;
        }
    }
}


void display (int * arr, int size) {
    printf("\n [ ");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d ] \n", arr[size - 1]);
}

int main(){
    
    int arr[]={1, 2, 3, 4, 5}; // best case
    // int arr[] = {5, 4, 3, 2, 1}; // worst case 

    // check for all asending 
    // if no descending pairs then the array is already sorted

    int size = sizeof(arr)/sizeof(arr[0]);

    bubble(arr, size);

    display(arr, size);

    return 0;
}