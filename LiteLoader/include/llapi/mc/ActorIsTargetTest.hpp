/**
 * @file  ActorIsTargetTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorIsTargetTest.
 *
 */
class ActorIsTargetTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISTARGETTEST
public:
    class ActorIsTargetTest& operator=(class ActorIsTargetTest const &) = delete;
    ActorIsTargetTest(class ActorIsTargetTest const &) = delete;
    ActorIsTargetTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1078465552
     */
    virtual ~ActorIsTargetTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorIsTargetTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -1135321180
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorIsTargetTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   1772615278
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};