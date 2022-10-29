/**
 * @file  ClipParameters.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ClipParameters.
 *
 */
struct ClipParameters {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIPPARAMETERS
public:
    struct ClipParameters& operator=(struct ClipParameters const &) = delete;
    ClipParameters(struct ClipParameters const &) = delete;
    ClipParameters() = delete;
#endif

public:
    /**
     * @symbol ??0ClipParameters@@QEAA@AEBVVec3@@0AEBV?$function@$$A6A_NAEBVBlockSource@@AEBVBlock@@_N@Z@std@@@Z
     * @hash   -1672142810
     */
    MCAPI ClipParameters(class Vec3 const &, class Vec3 const &, class std::function<bool (class BlockSource const &, class Block const &, bool)> const &);
    /**
     * @symbol ??1ClipParameters@@QEAA@XZ
     * @hash   -530768812
     */
    MCAPI ~ClipParameters();

};