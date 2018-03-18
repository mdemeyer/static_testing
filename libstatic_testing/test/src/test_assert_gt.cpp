#include "static_testing/static_testing.hpp"

namespace test_assert_gt
{

using namespace static_testing;
using test_case = void;

constexpr test_case assertGreater() {
    assert_gt<2, 1>();
}

constexpr test_case assertSortedGreaterToLesser() {
    assert_gt<3, 2, 1>();
    assert_gt<3, 2, 1, 0>();
    assert_gt<1337, 666, 13>();
}

}
