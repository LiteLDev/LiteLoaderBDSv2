/**
 * @file  SlimeMoveControlDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SlimeMoveControlDescription.
 *
 */
class SlimeMoveControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEMOVECONTROLDESCRIPTION
public:
    class SlimeMoveControlDescription& operator=(class SlimeMoveControlDescription const &) = delete;
    SlimeMoveControlDescription(class SlimeMoveControlDescription const &) = delete;
    SlimeMoveControlDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@SlimeMoveControlDescription@@UEBAPEBDXZ
     * @hash   1918590732
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   656901702
     */
    virtual ~SlimeMoveControlDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@SlimeMoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -839182329
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@SlimeMoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   882431473
     */
    virtual void serializeData(class Json::Value &) const;

};