/**
 * @file  DesertWellFeature.hpp
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
 * @brief MC class DesertWellFeature.
 *
 */
class DesertWellFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESERTWELLFEATURE
public:
    class DesertWellFeature& operator=(class DesertWellFeature const &) = delete;
    DesertWellFeature(class DesertWellFeature const &) = delete;
    DesertWellFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1871544641
     */
    virtual ~DesertWellFeature();
    /**
     * @vftbl  3
     * @symbol ?place@DesertWellFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -2058479315
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};