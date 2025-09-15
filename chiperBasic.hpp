// FILE: chiperBasic.hpp
#ifndef CHIPERBASIC_HPP
#define CHIPERBASIC_HPP

#include <string>
#include <vector>

namespace basicChiper {

	/**
	 * XOR Encrypt/Decrypt
	 * Encripta o desencripta una cadena usando XOR con una clave simple.
	 */
	std::wstring xor_encrypt(const std::wstring& input, wchar_t key);
	std::wstring xor_decrypt(const std::wstring& input, wchar_t key);

	/**
	 * ROT13 Encrypt/Decrypt
	 * Aplica ROT13 a cada carácter de la cadena (solo letras ASCII para simplificar).
	 */
	std::wstring rot13_encrypt(const std::wstring& input);
	std::wstring rot13_decrypt(const std::wstring& input);

	/**
	 * Obfuscate
	 * Ofusca la cadena aplicando un desplazamiento a cada carácter.
	 */
	std::wstring obfuscate(const std::wstring& input, int shift);
	std::wstring deobfuscate(const std::wstring& input, int shift);

}

#endif // CHIPERBASIC_HPP
