// Smart Pointer

// 똑똑한 포인터, 보이는 그대로다.
// 이 포인터들은 스마트하게 포인터를 관리하기 위함이다
// 만약에 우리가 특정 객체를 가리키는 포인터를 가지고 있다고 가정하자
// 만약 해당 객체를 가리키는 포인터가 더이상 없다면 그 객체는 new로 생성해줬다면 delete로 해제해 줘야한다
// 만약 그러한 과정을 거치지 않는다면 메모리 누수가 발생할 것이다
// 스마트 포인터는 이러한 메모리 누수를 막는다

// 종류는 아래와 같다
// unique_ptr
// shared_ptr
// weak_ptr

#include <memory>

auto main() -> int {
    // unique_ptr
    // 이름에서 느껴지듯이 한 객체를 한 포인터만이 가리킬 수 있게 하는
    // 소유권을 주장(?) 할 수 있는 포인터이다

    std::unique_ptr<int> uptr = std::make_unique<int>(2);

    // 아래의 코드는 실행 될 수 없다 (복사 불허)
    // std::unique_ptr<int> uptr_r = uptr;

    // 하지만 이동은 된다
    auto uptr_new = std::move(uptr);

    // 이러한 방식으로 한 객체를 한 포인터 만이 가리킬 수 있게 하는 듯 하다

    // shared_ptr
    // 얘도 이름에서 느껴지듯이 한 객체를 여러 객체가 공유해서 사용한다
    // 참조 횟수라는 값을 가지고 있어 참조하고 있는 포인터들의 갯수를 감시하고
    // 만약 그 값이 0이 되면 수명이 다 된 것이므로 메모리를 해제한다!

    std::shared_ptr<int> sptr = std::make_shared<int>(3);
    sptr.reset(); // reset을 통해서 해당 포인터의 수명을 끝낼수 있다

    // weak_ptr
    // shared_ptr이 참조하고 있는 객체에 접근하지만
    // 참조횟수에 포함되지 않는다
    // 순환참조를 막기 위해 사용된다(shared_ptr이 서로를 물고 있어 계속 사라지지 않는 것)



    return 0;
}