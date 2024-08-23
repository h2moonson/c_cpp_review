/*
<<<Naming enums>>>
enum 식별자는 대문자로 시작하는 경우가 많고,
*enum자체는 자료형(변수)이고 Color와 같은 건 식별자(Identifier)
열거자 enumerator는 모두 대문자로 열거자는 열거와 같은 네임스페이스에 배치되므로,
열거자 이름은 같은 네임스페이스 내의 여러 열거(enum)에서 사용할 수 없다.
*/
#include <iostream>
enum Color
{
    RED,
    BLUE, // BLUE is put into the global namespace
    GREEN
};

// enum Feeling
// {
//     HAPPY,
//     TIRED,
//     BLUE // error, BLUE was already used in enum Color in the global namespace
// };

enum Animal
{
    ANIMAL_CAT     = -3,
    ANIMAL_DOG,    // assigned -2
    ANIMAL_PIG,    // assigned -1
    ANIMAL_HORSE   = 5,
    ANIMAL_GIRAFFE = 5, // shares same value as ANIMAL_HORSE
    ANIMAL_CHICKEN // assigned 6
};
/*
<<<Enum type evaluation and input/output>>>
열거형 값은 정수로 평가되므로 정수 변수에 할당할 수 있다. std:cout은 정수 출력 방법을 알고 있으므로 정수로 출력할 수도 있다.
*/
int main(){
int mypet = ANIMAL_PIG;
std::cout << ANIMAL_HORSE; // evaluates to integer before being passed to std::cout
// 5

// 컴파일러는 정수를 열거형 값으로 암시적으로 변환하지 않는다. 다음과 같은 경우 컴파일러 오류가 발생한다.
Animal animal = 5;  //will cause compiler error****
Color color = static_cast<Color>(5); //ugly
return 0;

}
