#ifdef __cpp_hex_float
// __cpp_hex_float is defined as a feature-test macro; store its value
constexpr long cpp_hex_float_value = __cpp_hex_float;
#else
// Not defined; set to 0
constexpr long cpp_hex_float_value = 0;
#endif

int main() {
	(void)cpp_hex_float_value;
	return 0;
}