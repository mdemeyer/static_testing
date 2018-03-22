# static_testing
[![Build Status](https://www.travis-ci.org/mdemeyer/static_testing.svg?branch=master)](https://www.travis-ci.org/mdemeyer/static_testing)

Single header template library with static_assertion helpers.

This is not inteded as a replacement for a normal unit testing framework.
Only as an add-on that can be used to create a compile time test suite.

## Limitations
* No pretty "expected: x / actual: y" output.
* Does not work with foating point types.
* No concept of fixtures or suites, only single test cases.
* requires C++17

