/**
 * @file  EnchantingContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantingContainerManagerModel.
 *
 */
class EnchantingContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTINGCONTAINERMANAGERMODEL
public:
    class EnchantingContainerManagerModel& operator=(class EnchantingContainerManagerModel const &) = delete;
    EnchantingContainerManagerModel(class EnchantingContainerManagerModel const &) = delete;
    EnchantingContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   586290050
     */
    virtual ~EnchantingContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@EnchantingContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -633577285
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@EnchantingContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -1485197052
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@EnchantingContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   -50869171
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@EnchantingContainerManagerModel@@UEAAXHH@Z
     * @hash   -1266326017
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@EnchantingContainerManagerModel@@UEAAXXZ
     * @hash   -1861447947
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@EnchantingContainerManagerModel@@UEAA_NM@Z
     * @hash   -117328325
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@EnchantingContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   862973810
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0EnchantingContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   433449617
     */
    MCAPI EnchantingContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol ?getEnchantOptions@EnchantingContainerManagerModel@@QEBAAEBV?$vector@VItemEnchantOption@@V?$allocator@VItemEnchantOption@@@std@@@std@@XZ
     * @hash   -708668580
     */
    MCAPI std::vector<class ItemEnchantOption> const & getEnchantOptions() const;
    /**
     * @symbol ?recalculateOptions@EnchantingContainerManagerModel@@QEAAXXZ
     * @hash   -627260967
     */
    MCAPI void recalculateOptions();
    /**
     * @symbol ?NUM_OPTIONS@EnchantingContainerManagerModel@@2HB
     * @hash   -1702692661
     */
    MCAPI static int const NUM_OPTIONS;

};