#pragma once


template<typename T1, typename T2, typename... Args>
void I(T1* target, T1& value, T2& next, Args&... args);

template<typename T1, typename... Args>
void I(T1* target, T1& value, Args&... args);

template<typename O, typename T1, typename... Args>
O* I(Args&... args);

template<typename O>
void I(O* final);


template<typename T1, typename T2, typename... Args>
void I(T1* target, T1& value, T2& next, Args&... args) {
	*target = value;

	I(
		(T2*)(target + 1),
		next,
		args...
		);

	return;
}

template<typename T1, typename... Args>
void I(T1* target, T1& value, Args&...args) {
	*target = value;

	return;
}

template<typename O, typename T1, typename... Args>
O* I(T1& first, Args&... args) {
	O* result = new O();
	I((T1*)result, first, args...);

	return result;
}

template<typename O>
O* I(O& first) {
	O* result = new O();
	I((O*)result, first);

	return result;
}

template<typename O>
void I(O* final) {
	return;
}
