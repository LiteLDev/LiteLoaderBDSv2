/**
 * @file  ResetSlideOffSetSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResetSlideOffSetSystem.
 *
 */
class ResetSlideOffSetSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETSLIDEOFFSETSYSTEM
public:
    class ResetSlideOffSetSystem& operator=(class ResetSlideOffSetSystem const &) = delete;
    ResetSlideOffSetSystem(class ResetSlideOffSetSystem const &) = delete;
    ResetSlideOffSetSystem() = delete;
#endif

public:
    /**
     * @symbol ?createResetSlideOffSetSystem@ResetSlideOffSetSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1126891268
     */
    MCAPI static struct TickingSystemWithInfo createResetSlideOffSetSystem();

};