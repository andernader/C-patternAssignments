#include <stdio.h>
#include <ctype.h>

int fac(int a){
    int result = 1;
    for(int i = a; i != 0; i--)
        result = result * i;
    return result;
}

int pat27fun(int n){
    int result = 0;
    while(n != 0){
        result += n;
        n--;
    }
    return result;
}

int min(int a, int b){
    int result = a < b ? a : b;
    return result;
}

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);
void pattern11(int n);
void pattern12(int n);
void pattern13(int n);
void pattern14(int n);
void pattern15(int n);
void pattern16(int n);
void pattern17(int n);
void pattern18(int n);
void pattern19(int n);
void pattern20(int n);
void pattern21(int n);
void pattern22(int n);
void pattern23(int n);
void pattern24(int n);
void pattern25(int n);
void pattern26(int n);
void pattern27(int n);
void pattern28(int n);
void pattern29(int n);
void pattern30(int n);
void pattern31(int n);
void pattern32(int n);
void pattern33(int n);
void pattern34(int n);
void pattern35(int n);

int main(){
    int line = printf("These are the implementations of \"DSA BOOTCAMP JAVA\" Course by Kunal Kushwaha in C Language.\n");
    printf("https://github.com/kunal-kushwaha/DSA-Bootcamp-Java/blob/main/assignments/09-patterns.md\n");
    printf("\n                          %s - %s\n\n","Ammar Mullaoglu" ,__DATE__);
    for(int i = 1; i <= line-1; i++)
        printf("_");
    printf("\n\n\nP.S: The assignments goes from 1 to 35.");
    printf("\nAssignment no : ");
    int temp;
    scanf("%d%*[^\n]", &temp);
    int n;
    printf("\nn = ");
    scanf("%d%*[^\n]", &n);
    switch(temp){
        case 1  : pattern1(n); break;
        case 2  : pattern2(n); break;
        case 3  : pattern3(n); break;
        case 4  : pattern4(n); break;
        case 5  : pattern5(n); break;
        case 6  : pattern6(n); break;
        case 7  : pattern7(n); break;
        case 8  : pattern8(n); break;
        case 9  : pattern9(n); break;
        case 10 : pattern10(n);break;
        case 11 : pattern11(n);break;
        case 12 : pattern12(n);break;
        case 13 : pattern13(n);break;
        case 14 : pattern14(n);break;
        case 15 : pattern15(n);break;
        case 16 : pattern16(n);break;
        case 17 : pattern17(n);break;
        case 18 : pattern18(n);break;
        case 19 : pattern19(n);break;
        case 20 : pattern20(n);break;
        case 21 : pattern21(n);break;
        case 22 : pattern22(n);break;
        case 23 : pattern23(n);break;
        case 24 : pattern24(n);break;
        case 25 : pattern25(n);break;
        case 26 : pattern26(n);break;
        case 27 : pattern27(n);break;
        case 28 : pattern28(n);break;
        case 29 : pattern29(n);break;
        case 30 : pattern30(n);break;
        case 31 : pattern31(n);break;
        case 32 : pattern32(n);break;
        case 33 : pattern33(n);break;
        case 34 : pattern34(n);break;
        case 35 : pattern35(n);break;
    }

}

void pattern1(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern2(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern3(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern4(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void pattern5(int n){
    printf("\n");
    for(int i = 1; i <= 2*n-1; i++){
        int jValue = i > n ? 2*n-i : i;
        for(int j = 1; j <= jValue; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern6(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf("  ");
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern7(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= i-1; s++)
            printf("  ");
        for(int j = 1; j <= n-i+1; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern8(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf("  ");
        for(int j = 1; j <= 2*i-1; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern9(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= i-1; s++)
            printf("  ");
        for(int j = 1; j <= 2*(n-i)+1; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern10(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern11(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= i-1; s++)
            printf(" ");
        for(int j = 1; j <= n-i+1; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern12(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= i-1; s++)
            printf(" ");
        for(int j = 1; j <= n-i+1; j++)
            printf("* ");
        printf("\n");
    }
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern13(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf("  ");
        for(int j = 1; j <= 2*i-1; j++){
            if(j == 1 || i == n || j == 2*i-1)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}

void pattern14(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= i-1; s++)
            printf("  ");
        for(int j = 1; j <= 2*(n-i)+1; j++){
            if(i == 1 || j == 1 || j == 2*(n-i)+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern15(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf("  ");
        for(int j = 1; j <= 2*i-1; j++){
            if(j == 1 || j == 2*i-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    int nValue = n - 1;
    for(int i = 1; i <= nValue; i++){
        for(int s = 1; s <= i; s++)
            printf("  ");
        for(int j = 1; j <= 2*(nValue-i)+1; j++){
            if(j == 1 || j == 2*(nValue-i)+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern16(int n){
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int s = 0; s < n-i; s++)
            printf(" ");
        for(int j = 0; j <= i; j++){
            int x = fac(i)/(fac(j)*fac(i-j));
            printf("%d ", x);

        }
        printf("\n");
    }
}

void pattern17(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf("  ");
        for(int j = i; j >= 1; j--)
            printf("%d ", j);
        for(int z = 2; z <= i; z++)
            printf("%d ", z);
        printf("\n");
    }
    int nValue = n - 1;
    for(int i = 1; i <= nValue; i++){
        for(int s = 1; s <= i; s++)
            printf("  ");
        for(int j = nValue-i+1; j >= 1; j--)
            printf("%d ", j);
        for(int z = 2; z <= nValue-i+1; z++)
            printf("%d ", z);
        printf("\n");
    }
}

void pattern18(int n){
    printf("\n");
    for(int i = 0; i <= n; i++){
        for(int s1 = 1; s1 <= n+1-i; s1++)
            printf("*");
        for(int j = 1; j <= 2*i; j++){
            printf(" ");
        }
        for(int s1 = 1; s1 <= n+1-i; s1++)
            printf("*");
        printf("\n");
    }
    for(int i = 0; i <= n; i++){
        for(int s1 = 1; s1 <=i+1; s1++)
            printf("*");
        for(int j = 1; j <= 2*(n-i); j++){
            printf(" ");
        }
        for(int s2 = 1; s2 <=i+1; s2++)
            printf("*");
        printf("\n");
    }

}

void pattern19(int n){
    printf("\n");
    for(int i = 1; i <= 2*n-1; i++){
        int jValue = i > n ? 2*n-i : i;
        for(int j = 1; j <= jValue; j++)
            printf("*");
        for(int s1 = 1; s1 <= 2*(n-i); s1++)
            printf(" ");
        for(int s2 = 1; s2 <= (i-n)*2; s2++){
            if(i > n)
                printf(" ");
        }
        for(int j2 = 1; j2 <= jValue; j2++)
            printf("*");
        printf("\n");
    }
}

void pattern20(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n-1; j++){
            if(i==1 || j==1 || i==n || j==n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern21(int n){
    printf("\n");
    int x = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if (x < 10)
                printf("%d  ", x++);
            else
                printf("%2d ", x++);
        }
        printf("\n");
    }
}

void pattern22(int n){
    printf("\n");
    int x;
    for(int i = 1; i <= n; i++){
        if(i%2==0)
            x = 1;
        else if(i%2!=0)
            x = 0;
        for(int j = 1; j <= i; j++){
            printf("%d ", x^=1);
        }
        printf("\n");
    }
}

void pattern23(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i;s++)
            printf("  ");
        for(int j = 1; j <= 2*i-1; j++){
            if(j == 1 || j == 2*i-1){
                printf("* ");
            }else
                printf("  ");
        }
        for(int s2 = 1; s2 <= 2*(n-i)-1; s2++)
            printf("  ");
        for(int j = 1; j <= 2*i-1; j++){
            if(j == 1 || j == 2*i-1){
                if(!(i==n && j==1))
                    printf("* ");
            }else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern24(int n){
    printf("\n");
    for(int i = 1; i <= 2*n; i++){
        for(int j = 1; j <= 2*n; j++){
            if(j == 1 || j == 2*n || i == j || i+j == 2*n+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern25(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf(" ");
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern26(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++)
            printf("%d ", i);
        printf("\n");
    }
}

void pattern27(int n){
    printf("\n");
    int x = 1;
    int end = pat27fun(n) * 2;
    int temp = end;
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= i-1; s++)
            printf("   ");
        for(int j = 1; j <= n-i+1; j++){
            printf("%02d ", x++);
        }
        temp = temp - (n-i);
        end = temp;
        for(int k = 1; k <= n-i+1; k++){
            printf("%02d ", end++);
        }
        temp--;
        printf("\n");
    }
}

void pattern28(int n){
    printf("\n");
    for(int i = 1; i <= 2*n-1; i++){
        int jValue = i > n ? 2*n-i : i;
        int sValue = i > n ? n-jValue : n-i;
        for(int s = 1; s <= sValue; s++)
            printf(" ");
        for(int j = 1; j <= jValue; j++)
            printf("* ");
        printf("\n");
    }
}

void pattern29(int n){
    printf("\n");
    for(int i = 1; i <= 2*n-1; i++){
        int jValue = i > n ? 2*n-i : i;
        int sValue = i > n ? (i-n)*2 : 2*(n-i);
        for(int j = 1; j <= jValue; j++)
            printf("*");
        for(int s = 1; s <= sValue; s++)
            printf(" ");
        for(int j = 1; j <= jValue; j++)
            printf("*");
        printf("\n");
    }
}

void pattern30(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int s = 1; s <= n-i; s++)
            printf("  ");
        for(int j1 = i; j1 >= 1; j1--)
            printf("%d ", j1);
        for(int j2 = 2; j2 <= i; j2++)
            printf("%d ", j2);
        printf("\n");
    }
}

void pattern31(int n){
    printf("\n");
    for(int i = 1; i <= 2*n-1; i++){
        for(int j = 1; j <= 2*n-1; j++){
            int x = n - min(min(i, j), min(2*n-i, 2*n-j)) + 1;
            printf("%d ", x);
        }
        printf("\n");
    }
}

void pattern32(int n){
    printf("\n");
    char letters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

    for(int i = 1; i <= n; i++){
        for(int j = n-i+1; j <= n; j++){
            printf("%c ", letters[j-1]);
        }
        printf("\n");
    }
}

void pattern33(int n){
    printf("\n");
    char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                   'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int temp = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", (temp % 2 == 0) ? letters[temp++] : toupper(letters[temp++]));
        }
        printf("\n");
    }
}

void pattern34(int n){
    printf("\n");
    char letters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

    for(int i = 1; i <= n; i++){
        for(int j = n-i+1; j >= 1; j--)
            printf("%c ", letters[j-1]);
        printf("\n");
    }
}

void pattern35(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j1 = 1; j1 <= i; j1++)
            printf("%d ", j1);
        for(int s = 1; s <= 2*(n-i); s++)
            printf("  ");
        for(int j2 = i; j2 >= 1; j2--)
            printf("%d ", j2);
        printf("\n");
    }
}
