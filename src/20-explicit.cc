class Product {
public:
    Product(int price) : m_price(price) {}

    inline int getPrice() {
        return m_price;
    }

private:
    int m_price;
};

class ExplicitProduct {
public:
    explicit ExplicitProduct(int price) : m_price(price) {}

    inline int getPrice() {
        return m_price;
    }

private:
    int m_price;
};

Product copyProduct(Product product) {
    return Product(product.getPrice());
}

ExplicitProduct copyExplicitProduct(ExplicitProduct product) {
    return ExplicitProduct(product.getPrice());
}

auto main() -> int {
    int price = 1;
    
    // 지금과 같은 경우에도 에러가 나지 않는다
    // 컴파일러가 int를 파라미터로 받는 Product의 적절한 생성자를 붙여주기 때문인데
    // 우리가 원하는 케이스가 아니므로 explicit 키워드를 사용하여 위와 같은 문제를 막도록 하자
    copyProduct(price);

    // 에러라고 컴파일러가 알려준다
    // error: could not convert 'price' from 'int' to 'ExplicitProduct'
    copyExplicitProduct(price);
    return 0;
}