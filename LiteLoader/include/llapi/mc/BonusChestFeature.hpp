/**
 * @file  BonusChestFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BonusChestFeature.
 *
 */
class BonusChestFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONUSCHESTFEATURE
public:
    class BonusChestFeature& operator=(class BonusChestFeature const &) = delete;
    BonusChestFeature(class BonusChestFeature const &) = delete;
    BonusChestFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2048197566
     */
    virtual ~BonusChestFeature();
    /**
     * @vftbl  3
     * @symbol ?place@BonusChestFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1837818050
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol ?_place@BonusChestFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1570669472
     */
    MCAPI bool _place(class BlockSource &, class BlockPos const &, class Random &) const;

private:

};