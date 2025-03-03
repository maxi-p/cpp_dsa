void foo() noexcept {
    // function guarantees not to throw exceptions
}

void bar() {
    // may throw exception
}

int main() {
    return 0;
}