/**
 * @file  FindActorDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FindActorDefinition.
 *
 */
class FindActorDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDACTORDEFINITION
public:
    class FindActorDefinition& operator=(class FindActorDefinition const &) = delete;
    FindActorDefinition(class FindActorDefinition const &) = delete;
    FindActorDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   617608701
     */
    virtual ~FindActorDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@FindActorDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   644232261
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};