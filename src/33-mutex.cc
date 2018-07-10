// mutex는 락을 걸 수 있는 기법이다
// 자세한 내용은 스핀락, 세마포어, 뮤텍스 같은 키워드를 검색해보면 될 것이다

// 락을 거는 이유는 간단하다
// 두 스레드, 혹은 두 프로세스가 한 메모리(파트)에 더 

#include <iostream>
#include <mutex> // 이 친구도 MinGW에서 지원을 안한다고.. 카드라..?

auto main() -> int {
    std::mutex mutex;

    mutex.lock(); // 락을 걸고
    mutex.unlock(); // 락을 풀고

    return 0;
}