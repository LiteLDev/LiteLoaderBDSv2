/**
 * @file  MovementInterpolatorComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MovementInterpolatorComponent.
 *
 */
struct MovementInterpolatorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORCOMPONENT
public:
    struct MovementInterpolatorComponent& operator=(struct MovementInterpolatorComponent const &) = delete;
    MovementInterpolatorComponent(struct MovementInterpolatorComponent const &) = delete;
    MovementInterpolatorComponent() = delete;
#endif

public:
    /**
     * @symbol ?isActive@MovementInterpolatorComponent@@QEBA_NXZ
     * @hash   1580709522
     */
    MCAPI bool isActive() const;
    /**
     * @symbol ?lerpTo@MovementInterpolatorComponent@@QEAAXAEBVVec3@@AEBVVec2@@H@Z
     * @hash   -533446176
     */
    MCAPI void lerpTo(class Vec3 const &, class Vec2 const &, int);
    /**
     * @symbol ?lerpToRotation@MovementInterpolatorComponent@@QEAAXAEBVVec2@@H@Z
     * @hash   -1758129527
     */
    MCAPI void lerpToRotation(class Vec2 const &, int);
    /**
     * @symbol ?reset@MovementInterpolatorComponent@@QEAAXXZ
     * @hash   1455612099
     */
    MCAPI void reset();
    /**
     * @symbol ?setHeadYawLerpTarget@MovementInterpolatorComponent@@QEAAXMH@Z
     * @hash   -396745993
     */
    MCAPI void setHeadYawLerpTarget(float, int);
    /**
     * @symbol ?start@MovementInterpolatorComponent@@QEAAXXZ
     * @hash   -1489168759
     */
    MCAPI void start();
    /**
     * @symbol ?stop@MovementInterpolatorComponent@@QEAAXXZ
     * @hash   2005462391
     */
    MCAPI void stop();

};