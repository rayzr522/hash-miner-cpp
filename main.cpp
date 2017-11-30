#include <iostream>
#include "PicoSHA2/picosha2.h"

std::string sha256(std::string input) {
    std::string output = picosha2::hash256_hex_string(input);
    return std::string(output);
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " <input> <prefix>" << std::endl;
        return 1;
    }

    std::string input(argv[1]);
    std::string prefix(argv[2]);
    unsigned long nonce = 0;
    std::string hash = "";

    while (hash.compare(0, prefix.size(), prefix)) {
        nonce++;
        hash = sha256(std::to_string(nonce) + "-" + input);

        if (nonce % 1000000 == 0) {
            std::cout << nonce << " : " << hash << std::endl;
        }
    }

    std::cout << "Input: " << input << std::endl
        << "Prefix: " << prefix << std::endl
        << "Nonce: " << nonce << std::endl
        << "Hash: " << hash << std::endl;

    return 0;
}
