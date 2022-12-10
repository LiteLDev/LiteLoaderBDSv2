/**
 * @file  ActorInCloudsTest.hpp
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
 * @brief MC class ActorInCloudsTest.
 *
 */
class ActorInCloudsTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINCLOUDSTEST
public:
    class ActorInCloudsTest& operator=(class ActorInCloudsTest const &) = delete;
    ActorInCloudsTest(class ActorInCloudsTest const &) = delete;
    ActorInCloudsTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1019956488
     */
    virtual ~ActorInCloudsTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorInCloudsTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -1593126580
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorInCloudsTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -912969402
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};