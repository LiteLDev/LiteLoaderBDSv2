/**
 * @file  HopperComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HopperComponent.
 *
 */
class HopperComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERCOMPONENT
public:
    class HopperComponent& operator=(class HopperComponent const &) = delete;
    HopperComponent(class HopperComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0HopperComponent@@QEAA@XZ
     * @hash   -1265533067
     */
    MCAPI HopperComponent();
    /**
     * @symbol ?getLastPosition@HopperComponent@@QEBA?AVBlockPos@@XZ
     * @hash   1672114044
     */
    MCAPI class BlockPos getLastPosition() const;
    /**
     * @symbol ?pullInItems@HopperComponent@@QEAA_NAEAVActor@@@Z
     * @hash   -168112445
     */
    MCAPI bool pullInItems(class Actor &);

};