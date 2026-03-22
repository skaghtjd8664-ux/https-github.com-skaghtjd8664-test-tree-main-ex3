# ex3

## ex3-1
정수형 분자와 분모로 이루어진 분수 자료형을 정의하고 기본적인 사칙연산을 수행할 수 있는 분수 추상 자료형(ADT)을 구현한다.
모든 연산 결과는 항상 기약분수 형태로 반환된다.

### 자료형 정의
    typedef struct 
    {
      int num;
      int den;
    }my_fraction;

num: 분자
den: 분모(0이 될 수 없음)

### 주요기능
#### 덧셈
my_fraction add(my_fraction a, my_fraction b);

두 분수 a, b를 더한 결과를 반환한다.

연산 방식: a/b + c/d = (ad + bc) / bd

#### 뺄셈
my_fraction minus(my_fraction a, my_fraction b);

두 분수의 차를 반환한다.

연산 방식: a/b + c/d = (ad - bc) / bd

#### 곱셈
my_fraction mult(my_fraction a, my_fraction b);

두 분수를 곱한 결과를 반환한다.

연산 방식: (a/b) × (c/d) = (ac) / (bd)

#### 나눗셈
my_fraction divide(my_fraction a, my_fraction b);

두 분수의 나눗셈 결과를 반환한다.

연산 방식: (a/b) ÷ (c/d) = (a/b) × (d/c)

### 기약분수
gcd() 함수를 이용하여 최대공약수를 구하고 연산한 값이 0이 될 때 까지 나눈다.
    int gcd(int a, int b)
    {
      if (b == 0) return a;
      return gcd(b, a % b);
    }

### 출력함수
void print_fraction(my_fraction r);

분모가 1이면 정수 형태로 출력 아니면 a/b 형태로 출력

### 예외처리
분모가 0인경우 -> 프로그램 종료

나눗셈에서 0으로 나누 경우 -> 프로그램 종료

## ex3-2

### GCD
    FUNCTION GCD(a, b)

        if(b == 0)

          return a
          
        else

        GCD(b, a%b)
  
    END

## LCM
    FUNCTION LCM(a, b)
    
        g <- GCD(a, b)
        
        return (a * b) / g

    END
  
## 전체 프로그램
    START

      input a, b


      gcd <- GCD(a, b)
      
      lcm <- (a * b) / gcd


      PRINT "GCD: ", gcd
      
      PRINT "LCM: ", lcm
      
    END
    
