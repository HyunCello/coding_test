## 수 자료형

### 정수

### 실수

### 지수 표현

### 수  자료형 연산

나머지 연산자 -> %

몫 연산자 -> //

거듭제곱 연산자 -> **


## 리스트 자료형

### 선언

[]로 선언

### 인덱싱

: 쓰기

### 리스트 컴프리헨션

`array = [i for i in range(10)]`

2차원 리스트 초기화

`array = [[0] * m for _ in range(n)]` -> N x M 크기의 2차원 리스트 초기화

- append()
- sort()
- sort(reverse = True)
- insert()
- count()
- remove()


## 문자열, 튜플 자료형

### 문자열 선언

"" ''

### 문자열 연산

더하기(+) 사용

### 튜풀 선언

( )

- 서로 다른 성질의 데이터를 묶어서 관리해야 할 때
- 데이터의 나열을 해싱(Hashing)의 키 값으로 사용해야 할 때
- 리스트보다 메모리를 효율적으로 사용해야 할 때


## 사전, 집합 자료형

### 사전 자료형
- 키와 값의 쌍을 데이터로 가지는 자료형

dict()

키(keys) / 값(Value)

### 집합 자료형

{}

연산 가능 (교집합, 차집합 등)


## 기본 입출력

### 입력받기

-> list(map(int, input().split()))

-> a, b, c = map(int, input().split())

### 빠르게 입력받기

```
import sys

data = sys.stdin.readline().rstrip()
print(data)
```

### 출력

줄 바꿈을 원치 않을 경우 end


## 조건문

- X == Y
- X != Y
- X > Y
- X < Y
- X >= Y
- X <= Y

- X and Y
- X or Y
- not X

- x in 리스트 : 리스트 안에 x가 들어가 있을 때 참(True)이다
- x not in 문자열 : 문자열 안에 x가 들어가 있을 때 참(True)이다

- x > 0 and x < 20:
- 0 < x < 20:



## 반복문

- 차례로 순회 시 range() 사용
- range(시작 값, 끝 값 + 1) 형태로 사용
- 인자를 하나만 넣으면 자동으로 시작 값은 0이 됨

continue -> 이번 실행 건너뛰기


## 함수 & 람다 표현식

- global 사용 시

```python
a = 0

def func():
	global a
	a += 1

for i in range(10):
	func():

print(a)

```

### 여러 개의 반환 값

```
def operator(a, b):

	add_var = a + b
	subtract_var = a - b
	multiply_var = a * b
	divide_var = a / b

	return aa, aa, aa, aa

a, b, c, d = operator(7, 3)

print(a, b, c, d)
```




## 자주 사용되는 표준 라이브러리
- 내장함수
- itertools
- heapq
- biselect
- collections
- math
