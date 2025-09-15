#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "reverse.hpp"

TEST_CASE("reverse_array works for int arrays") {
    int ai[] = {1, 2, 3, 4};
    reverse_array<int>(ai, 4);
    REQUIRE(ai[0] == 4);
    REQUIRE(ai[1] == 3);
    REQUIRE(ai[2] == 2);
    REQUIRE(ai[3] == 1);
}

TEST_CASE("reverse_array works for double arrays") {
    double ad[] = {1.5, 2.5, 3.5, 4.5};
    reverse_array<double>(ad, 4);
    REQUIRE(ad[0] == 4.5);
    REQUIRE(ad[1] == 3.5);
    REQUIRE(ad[2] == 2.5);
    REQUIRE(ad[3] == 1.5);
}

TEST_CASE("reverse_array works for char arrays (not C-string)") {
    char letters[] = {'E','C','E','3','5', '1', '4'};
    reverse_array<char>(letters, 7);
    REQUIRE(letters[0] == '4');
    REQUIRE(letters[1] == '1');
    REQUIRE(letters[2] == '5');
    REQUIRE(letters[3] == '3');
    REQUIRE(letters[4] == 'E');
    REQUIRE(letters[5] == 'C');
    REQUIRE(letters[6] == 'E');
}

TEST_CASE("reverse_array works for C-strings") {
    char word[] = "hello";
    reverse_array<char>(word, sizeof(word)/sizeof(word[0]));
    REQUIRE(std::string(word) == "olleh");
}

TEST_CASE("reverse_array works for empty arrays") {
    int empty[] = {};
    reverse_array<int>(empty, 0); // Should not crash
    REQUIRE(true); // No crash means pass
}

TEST_CASE("reverse_array works for single element arrays") {
    int single[] = {42};
    reverse_array<int>(single, 1);
    REQUIRE(single[0] == 42);
}