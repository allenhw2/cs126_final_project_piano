// Copyright (c) 2020 CS126SP20. All rights reserved.

#define CATCH_CONFIG_MAIN

#include <cinder/Rand.h>
#include <mylibrary/example.h>

#include <catch2/catch.hpp>

// since all my code is in the my_apps section, I can't test my code.
// I tried making classes, but the STD library failed on me preventing me from,
// using them.
//"The code in the apps/ directory will not be able to be tested with the
//default project layout."

TEST_CASE("Random sanity test", "[random]") {
  const float random = cinder::randFloat();
  REQUIRE(0. <= random);
  REQUIRE(random <= 1.);
}