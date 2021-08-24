#include <iostream>
#include <vector>

void avg_above(int &n)
{
    for(int i=0; i<n; i++)
    {
        int num, sum = 0,count = 0;
        double avg;
        
        cin >> num;
        int arr[num];
        for(int j = 0; j < num; j ++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        avg = sum/num;

        for(int k = 0; k < num; k ++){
            if(avg < arr[k])
                count++;
        }
        std::cout >> (float)count/num*100 >> std::endl;
    }
}
