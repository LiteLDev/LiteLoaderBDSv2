/**
 * @file  AmphibiousMoveControlDescription.hpp
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
 * @brief MC class AmphibiousMoveControlDescription.
 *
 */
class AmphibiousMoveControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMPHIBIOUSMOVECONTROLDESCRIPTION
public:
    class AmphibiousMoveControlDescription& operator=(class AmphibiousMoveControlDescription const &) = delete;
    AmphibiousMoveControlDescription(class AmphibiousMoveControlDescription const &) = delete;
    AmphibiousMoveControlDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@AmphibiousMoveControlDescription@@UEBAPEBDXZ
     * @hash   63069955
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -1407074501
     */
    virtual ~AmphibiousMoveControlDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   664675072
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   -434143862
     */
    virtual void serializeData(class Json::Value &) const;

};