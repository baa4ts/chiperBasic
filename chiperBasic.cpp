// FILE: chiperBasic.cpp
#include "pch.h"
#include "framework.h"
#include "chiperBasic.hpp"

namespace basicChiper {

    std::wstring xor_encrypt(const std::wstring& input, wchar_t key) {
        std::wstring output = input;
        for (auto& ch : output) {
            ch ^= key;
        }
        return output;
    }

    std::wstring xor_decrypt(const std::wstring& input, wchar_t key) {
        return xor_encrypt(input, key);
    }

    std::wstring rot13_encrypt(const std::wstring& input) {
        std::wstring output = input;
        for (auto& ch : output) {
            if (ch >= L'A' && ch <= L'Z') {
                ch = ((ch - L'A' + 13) % 26) + L'A';
            }
            else if (ch >= L'a' && ch <= L'z') {
                ch = ((ch - L'a' + 13) % 26) + L'a';
            }
        }
        return output;
    }

    std::wstring rot13_decrypt(const std::wstring& input) {
        return rot13_encrypt(input);
    }

    std::wstring obfuscate(const std::wstring& input, int shift) {
        std::wstring output = input;
        for (auto& ch : output) {
            ch = ch + shift;
        }
        return output;
    }

    std::wstring deobfuscate(const std::wstring& input, int shift) {
        std::wstring output = input;
        for (auto& ch : output) {
            ch = ch - shift;
        }
        return output;
    }

}