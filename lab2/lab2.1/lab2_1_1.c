#include <stdio.h>
int x=5;
int main() {
    {
        int x=10, y=20;
        {
            printf("x = %d, y = %d\n",x,y);  // 10 20
            {
                int y = 40;
                x++;
                y++;
                printf("x = %d, y = %d\n",x,y);  // 11 41
            }
            printf("x = %d, y = %d\n",x,y); // 11 20
        }
    }   
        printf("x = %d",x); // 5

    return 0;
}