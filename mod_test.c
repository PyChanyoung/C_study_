/*
표준 입력으로 만 단위의 정수 하나가 입력됩니다. 입력된 정수의 각 자릿수를 역순으로 출력하는 프로그램을 만드세요(scanf 함수 전에 문자열을 출력하면 안 됩니다). 예를 들어 43561이라면 1 6 5 3 4를 출력하면 됩니다. 각 자릿수는 공백으로 띄우세요.

정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다. */

#include <stdio.h>

int main()
{
    int n1;
    
    scanf("%d", &n1);
    
    printf("%d ", n1%10);
    n1 = n1 /10;
    printf("%d ", n1%10);
    n1 = n1 /10;
    printf("%d ", n1%10);
    n1 = n1 /10;
    printf("%d ", n1%10);
    n1 = n1 /10;
    printf("%d ", n1%10);

    return 0;
}

/*
만 단위의 정수 43561에서 각 자릿수를 역순으로 출력해서 1 6 5 3 4가 되어야 합니다. 먼저 43561에서 10으로 나눈 나머지를 구하면 1이 나옵니다. 
그리고 43561을 10으로 나누면 4356이 되고 10으로 나눈 나머지는 6이 나옵니다.

43561 % 10 = 1
4356 % 10 = 6
435 % 10 = 5
43 % 10 = 3
4 % 10 = 4
즉, 10으로 나눈 나머지를 구해서 printf로 출력한 뒤 원래 값을 10으로 나눠서 다시 저장합니다. 
이런 과정으로 5번을 반복하면 각 자릿수를 역순으로 출력할 수 있습니다.

표준 입력으로 정수 하나가 입력된다고 했으므로 scanf로 정수를 변수에 저장해줍니다. 
그리고 각 자릿수는 공백으로 띄우라고 했으므로 printf에 서식 지정자를 "%d "와 같이 지정하면 됩니다. */