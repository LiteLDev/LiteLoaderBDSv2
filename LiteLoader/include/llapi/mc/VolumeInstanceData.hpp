/**
 * @file  VolumeInstanceData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VolumeInstanceData.
 *
 */
namespace VolumeInstanceData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?bindVolumeStorageType@VolumeInstanceData@@YAXXZ
     * @hash   -1657050436
     */
    MCAPI void bindVolumeStorageType();
    /**
     * @symbol ?deserialize@VolumeInstanceData@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVEntityContext@@@Z
     * @hash   1696448755
     */
    MCAPI void deserialize(std::string const &, class CompoundTag const &, class EntityContext &);
    /**
     * @symbol ?getIdentifier@VolumeInstanceData@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
     * @hash   1647630500
     */
    MCAPI std::string const & getIdentifier(class CompoundTag const &);
    /**
     * @symbol ?serialize@VolumeInstanceData@@YA?AVCompoundTag@@AEBVEntityContext@@@Z
     * @hash   179062014
     */
    MCAPI class CompoundTag serialize(class EntityContext const &);

};