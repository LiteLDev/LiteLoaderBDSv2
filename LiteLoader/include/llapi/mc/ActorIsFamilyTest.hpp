/**
 * @file  ActorIsFamilyTest.hpp
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
 * @brief MC class ActorIsFamilyTest.
 *
 */
class ActorIsFamilyTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISFAMILYTEST
public:
    class ActorIsFamilyTest& operator=(class ActorIsFamilyTest const &) = delete;
    ActorIsFamilyTest(class ActorIsFamilyTest const &) = delete;
    ActorIsFamilyTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -62893373
     */
    virtual ~ActorIsFamilyTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorIsFamilyTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   789137127
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorIsFamilyTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -251381605
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};