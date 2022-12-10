/**
 * @file  WitherBossPostAIStepSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WitherBossPostAIStepSystem.
 *
 */
class WitherBossPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERBOSSPOSTAISTEPSYSTEM
public:
    class WitherBossPostAIStepSystem& operator=(class WitherBossPostAIStepSystem const &) = delete;
    WitherBossPostAIStepSystem(class WitherBossPostAIStepSystem const &) = delete;
    WitherBossPostAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@WitherBossPostAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -385540644
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doWitherBossPostAIStepSystem@WitherBossPostAIStepSystem@@CAXAEBVStrictEntityContext@@AEBUWitherBossPreAIStepResultComponent@@AEAVActorOwnerComponent@@@Z
     * @hash   -1383501024
     */
    MCAPI static void _doWitherBossPostAIStepSystem(class StrictEntityContext const &, struct WitherBossPreAIStepResultComponent const &, class ActorOwnerComponent &);

private:

};