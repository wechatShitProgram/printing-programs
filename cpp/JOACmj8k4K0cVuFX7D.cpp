#include <iostream>
int main() {
    const auto msgCnt = 55;
    const std::string msg = "JOACmj8k4K0cVuFX7D";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
