// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorInWeatherTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINWEATHERTEST
public:
    class ActorInWeatherTest& operator=(class ActorInWeatherTest const &) = delete;
    ActorInWeatherTest(class ActorInWeatherTest const &) = delete;
    ActorInWeatherTest() = delete;
#endif

public:
    /*0*/ virtual ~ActorInWeatherTest();
    /*1*/ virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*6*/ virtual class Json::Value _serializeValue() const;

protected:

private:

};