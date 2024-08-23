// 열거형의 장점 //

// 상수(const) 변수와 마찬가지로 열거형은 디버거에 표시되므로 #define보다 유용하다.
// 또한, 열거형은 정수 자료형의 일부로 간주하므로 열거형 변수에 할당할 메모리 크기는 
// 컴파일러에 따라 결정된다. C++ 표준에 따르면 열거형 크기는 모든 열거형 값을 나타낼 만큼 커야 한다. 
// 대부분 열거형 변수는 표준 int와 같은 크기다.

// 1. 일반적으로 코드 오류를 나타내기 위한 방식 :: 가독성이 떨어진다.
int readFileContents()
{
    if (!openFile())
        return -1;
    if (!readFile())
        return -2;
    if (!parseFile())
        return -3;

    return 0; // success
}

enum ParseResult
{
    SUCCESS = 0,
    ERROR_OPENING_FILE = -1,
    ERROR_READING_FILE = -2,
    ERROR_PARSING_FILE = -3
};

ParseResult readFileContents()
{
    if (!openFile())
        return ERROR_OPENING_FILE;
    if (!readFile())
        return ERROR_READING_FILE;
    if (!parsefile())
        return ERROR_PARSING_FILE;

    return SUCCESS;
}

