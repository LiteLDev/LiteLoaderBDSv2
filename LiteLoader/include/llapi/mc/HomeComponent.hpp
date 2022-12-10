/**
 * @file  HomeComponent.hpp
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
 * @brief MC class HomeComponent.
 *
 */
class HomeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOMECOMPONENT
public:
    class HomeComponent& operator=(class HomeComponent const &) = delete;
    HomeComponent(class HomeComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0HomeComponent@@QEAA@XZ
     * @hash   968130778
     */
    MCAPI HomeComponent();
    /**
     * @symbol ?addAdditionalSaveData@HomeComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   148176488
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?getHomeDimension@HomeComponent@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
     * @hash   1150429778
     */
    MCAPI class AutomaticID<class Dimension, int> getHomeDimension() const;
    /**
     * @symbol ?getHomePos@HomeComponent@@QEBA?AVBlockPos@@XZ
     * @hash   1856483230
     */
    MCAPI class BlockPos getHomePos() const;
    /**
     * @symbol ?getRestrictionRadius@HomeComponent@@QEBAHXZ
     * @hash   -1670921770
     */
    MCAPI int getRestrictionRadius() const;
    /**
     * @symbol ?hasRestriction@HomeComponent@@QEBA_NXZ
     * @hash   563029604
     */
    MCAPI bool hasRestriction() const;
    /**
     * @symbol ?hasValidHomePos@HomeComponent@@QEBA_NXZ
     * @hash   984892274
     */
    MCAPI bool hasValidHomePos() const;
    /**
     * @symbol ?isWithinRestriction@HomeComponent@@QEBA_NAEBVBlockPos@@@Z
     * @hash   702716179
     */
    MCAPI bool isWithinRestriction(class BlockPos const &) const;
    /**
     * @symbol ??4HomeComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -2127301568
     */
    MCAPI class HomeComponent & operator=(class HomeComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@HomeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -306366260
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setHome@HomeComponent@@QEAAXAEBVBlockPos@@AEBV?$AutomaticID@VDimension@@H@@@Z
     * @hash   590805841
     */
    MCAPI void setHome(class BlockPos const &, class AutomaticID<class Dimension, int> const &);
    /**
     * @symbol ?tick@HomeComponent@@QEAAXAEAVActor@@@Z
     * @hash   1903680530
     */
    MCAPI void tick(class Actor &);

};