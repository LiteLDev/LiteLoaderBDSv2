/**
 * @file  SwimWithEntityGoal.hpp
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
 * @brief MC class SwimWithEntityGoal.
 *
 */
class SwimWithEntityGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWITHENTITYGOAL
public:
    class SwimWithEntityGoal& operator=(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -530716306
     */
    virtual ~SwimWithEntityGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SwimWithEntityGoal@@UEAA_NXZ
     * @hash   2023056092
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SwimWithEntityGoal@@UEAA_NXZ
     * @hash   5280186
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol ?canBeInterrupted@SwimWithEntityGoal@@UEAA_NXZ
     * @hash   1032024724
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol ?start@SwimWithEntityGoal@@UEAAXXZ
     * @hash   1042235205
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@SwimWithEntityGoal@@UEAAXXZ
     * @hash   1668528565
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@SwimWithEntityGoal@@UEAAXXZ
     * @hash   120774192
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SwimWithEntityGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   968727988
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SwimWithEntityGoal@@QEAA@AEAVMob@@@Z
     * @hash   2056788841
     */
    MCAPI SwimWithEntityGoal(class Mob &);

//private:
    /**
     * @symbol ?_setWantedMob@SwimWithEntityGoal@@AEAA_NXZ
     * @hash   2100378832
     */
    MCAPI bool _setWantedMob();

private:

};