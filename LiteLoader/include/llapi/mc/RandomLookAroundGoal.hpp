/**
 * @file  RandomLookAroundGoal.hpp
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
 * @brief MC class RandomLookAroundGoal.
 *
 */
class RandomLookAroundGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMLOOKAROUNDGOAL
public:
    class RandomLookAroundGoal& operator=(class RandomLookAroundGoal const &) = delete;
    RandomLookAroundGoal(class RandomLookAroundGoal const &) = delete;
    RandomLookAroundGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   712995180
     */
    virtual ~RandomLookAroundGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RandomLookAroundGoal@@UEAA_NXZ
     * @hash   1375247230
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@RandomLookAroundGoal@@UEAA_NXZ
     * @hash   474423244
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@RandomLookAroundGoal@@UEAAXXZ
     * @hash   979318631
     */
    virtual void start();
    /**
     * @vftbl  5
     * @hash   -1401863067
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@RandomLookAroundGoal@@UEAAXXZ
     * @hash   828858130
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomLookAroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1286874466
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0RandomLookAroundGoal@@QEAA@AEAVMob@@HHM@Z
     * @hash   -2088478074
     */
    MCAPI RandomLookAroundGoal(class Mob &, int, int, float);

};