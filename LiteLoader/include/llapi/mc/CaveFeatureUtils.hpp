/**
 * @file  CaveFeatureUtils.hpp
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
 * @brief MC namespace CaveFeatureUtils.
 *
 */
namespace CaveFeatureUtils {

#define AFTER_EXTRA
// Add Member There
struct CarverConfiguration {
    CarverConfiguration() = delete;
    CarverConfiguration(CarverConfiguration const&) = delete;
    CarverConfiguration(CarverConfiguration const&&) = delete;
};
struct CarvingParameters {
    CarvingParameters() = delete;
    CarvingParameters(CarvingParameters const&) = delete;
    CarvingParameters(CarvingParameters const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @symbol ?getCurrentConfiguration@CaveFeatureUtils@@YAAEBUCarverConfiguration@1@_N@Z
     * @hash   391390775
     */
    MCAPI struct CaveFeatureUtils::CarverConfiguration const & getCurrentConfiguration(bool);
    /**
     * @symbol ?getDistance_1_16@CaveFeatureUtils@@YAHAEAVRandom@@@Z
     * @hash   -507751930
     */
    MCAPI int getDistance_1_16(class Random &);
    /**
     * @symbol ?getDistance_1_18@CaveFeatureUtils@@YAHAEAVRandom@@@Z
     * @hash   -129117454
     */
    MCAPI int getDistance_1_18(class Random &);
    /**
     * @symbol ?getTunnelThickness_1_16@CaveFeatureUtils@@YAMAEAVRandom@@@Z
     * @hash   12054306
     */
    MCAPI float getTunnelThickness_1_16(class Random &);
    /**
     * @symbol ?getTunnelThickness_1_18@CaveFeatureUtils@@YAMAEAVRandom@@@Z
     * @hash   -959969810
     */
    MCAPI float getTunnelThickness_1_18(class Random &);
    /**
     * @symbol ?isDiggable_1_16@CaveFeatureUtils@@YA_NAEBVBlock@@0@Z
     * @hash   471050960
     */
    MCAPI bool isDiggable_1_16(class Block const &, class Block const &);
    /**
     * @symbol ?isDiggable_1_18@CaveFeatureUtils@@YA_NAEBVBlock@@0@Z
     * @hash   401060180
     */
    MCAPI bool isDiggable_1_18(class Block const &, class Block const &);
    /**
     * @symbol ?sampleFloatRange@CaveFeatureUtils@@YAMAEBUFloatRange@@AEAVRandom@@@Z
     * @hash   -1435885351
     */
    MCAPI float sampleFloatRange(struct FloatRange const &, class Random &);

};