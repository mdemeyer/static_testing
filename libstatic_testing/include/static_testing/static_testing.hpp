#ifndef STATIC_TESTING_HPP
#define STATIC_TESTING_HPP

#include <functional>

namespace static_testing
{

/**
 * @brief assert two or more values are equal.
 * @see assert_ne()
 */
template <auto val1, auto val2> constexpr void assert_eq() {
    static_assert (val1 == val2, "Values are not equal.");
};

template <auto val1, auto val2, auto ... n_vals>
typename std::enable_if<sizeof...(n_vals) != 0>::type constexpr assert_eq() {
    assert_eq<val1, val2>();
    assert_eq<val2, n_vals...>();
};


/**
 * @brief assert two or more values are not equal.
 * @see assert_eq()
 */
template <auto val1, auto val2> constexpr void assert_ne() {
    static_assert (val1 != val2, "Values are equal.");
};

template <auto val1, auto val2, auto ... n_vals>
typename std::enable_if<sizeof...(n_vals) != 0>::type constexpr assert_ne() {
    assert_ne<val1, val2>();
    assert_ne<val1, n_vals...>();
    assert_ne<val2, n_vals...>();
};


/**
 * @brief assert left values are smaller than right values.
 * @see assert_le()
 * @see assert_gt()
 */
template <auto val1, auto val2> constexpr void assert_lt() {
    static_assert (val1 < val2, "Value is not less.");
};

template <auto val1, auto val2, auto ... n_vals>
typename std::enable_if<sizeof...(n_vals) != 0>::type constexpr assert_lt() {
    assert_lt<val1, val2>();
    assert_lt<val2, n_vals...>();
};


/**
 * @brief assert left values are smaller or equal to right values.
 * @see assert_lt()
 * @see assert_ge()
 */
template <auto val1, auto val2> constexpr void assert_le() {
    static_assert (val1 <= val2, "Value is not less or equal.");
};

template <auto val1, auto val2, auto ... n_vals>
typename std::enable_if<sizeof...(n_vals) != 0>::type constexpr assert_le() {
    assert_le<val1, val2>();
    assert_le<val2, n_vals...>();
};


/**
 * @brief assert left values are greater than right values.
 * @see assert_ge()
 * @see assert_lt()
 */
template <auto val1, auto val2> constexpr void assert_gt() {
    static_assert (val1 > val2, "Value is not greater.");
};

template <auto val1, auto val2, auto ... n_vals>
typename std::enable_if<sizeof...(n_vals) != 0>::type constexpr assert_gt() {
    assert_gt<val1, val2>();
    assert_gt<val2, n_vals...>();
};


/**
 * @brief assert left values are greater or equal to right values.
 * @see assert_gt()
 * @see assert_le()
 */
template <auto val1, auto val2> constexpr void assert_ge() {
    static_assert (val1 >= val2, "Value is not greater or equal");
};

template <auto val1, auto val2, auto ... n_vals>
typename std::enable_if<sizeof...(n_vals) != 0>::type constexpr assert_ge() {
    assert_ge<val1, val2>();
    assert_ge<val2, n_vals...>();
};


/**
 * @brief assert value is true.
 * @see assert_false()
 */
template <auto val> constexpr void assert_true() {
    static_assert (val, "Condition is false. Expected true.");
};

template <auto val, auto ... n_vals>
typename std::enable_if<sizeof...(n_vals) != 0>::type constexpr assert_true() {
    assert_true<val>();
    assert_true<n_vals...>();
};


/**
 * @brief assert value is false.
 * @see assert_true()
 */
template <auto val> constexpr void assert_false() {
    static_assert (!val, "Condition is true. Expected false.");
};

template <auto val, auto ... n_vals>
typename std::enable_if<sizeof...(n_vals) != 0>::type constexpr assert_false() {
    assert_false<val>();
    assert_false<n_vals...>();
};

}

#endif // STATIC_TESTING_HPP
