namespace best
{
	void func();
}

namespace prog
{
	void func();
}

//cpp에서는 #ifndef 헤더구분자 / #define 헤더구분자 / ... / #endif를 생략하는 모양
//그 사이에는 다음과 같은 내용을 순서대로 넣는다.
//include 타헤더파일
//상수 및 매크로 정의
//type, struct 등 정의
//전역 변수 선언
//함수 선언

//위 헤더파일 같은 경우는 함수가 필요로 하는 요소가 없기 때문에 함수선언만 한다.