/**
 * @file  BeaconBlockActor.hpp
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
 * @brief MC class BeaconBlockActor.
 *
 */
class BeaconBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEACONBLOCKACTOR
public:
    class BeaconBlockActor& operator=(class BeaconBlockActor const &) = delete;
    BeaconBlockActor(class BeaconBlockActor const &) = delete;
    BeaconBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEACONBLOCKACTOR
    /**
     * @symbol ?_getUpdatePacket@BeaconBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -2008257467
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol ?_onUpdatePacket@BeaconBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -770085379
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ?getContainer@BeaconBlockActor@@UEAAPEAVContainer@@XZ
     * @hash   -1461448573
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol ?getContainer@BeaconBlockActor@@UEBAPEBVContainer@@XZ
     * @hash   -1889170433
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol ?getContainerSize@BeaconBlockActor@@UEBAHXZ
     * @hash   1841619915
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol ?getItem@BeaconBlockActor@@UEBAAEBVItemStack@@H@Z
     * @hash   -505347792
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getMaxStackSize@BeaconBlockActor@@UEBAHXZ
     * @hash   2084564250
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?getName@BeaconBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -763685185
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?hasAlphaLayer@BeaconBlockActor@@UEBA_NXZ
     * @hash   387479977
     */
    MCVAPI bool hasAlphaLayer() const;
    /**
     * @symbol ?load@BeaconBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   230541459
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?removeItem@BeaconBlockActor@@UEAAXHH@Z
     * @hash   -776162190
     */
    MCVAPI void removeItem(int, int);
    /**
     * @symbol ?save@BeaconBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -2067481614
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?serverInitItemStackIds@BeaconBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   -1978627531
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setItem@BeaconBlockActor@@UEAAXHAEBVItemStack@@@Z
     * @hash   1629352661
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol ?startOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   -454232948
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol ?stopOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   569228460
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol ?tick@BeaconBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1938880604
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol ??0BeaconBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -353484321
     */
    MCAPI BeaconBlockActor(class BlockPos const &);
    /**
     * @symbol ?checkShapeAndAchievement@BeaconBlockActor@@QEAAXAEAVBlockSource@@@Z
     * @hash   779841604
     */
    MCAPI void checkShapeAndAchievement(class BlockSource &);
    /**
     * @symbol ?getBeaconData@BeaconBlockActor@@QEAA?AVCompoundTag@@XZ
     * @hash   -31166060
     */
    MCAPI class CompoundTag getBeaconData();
    /**
     * @symbol ?isEffectAvailable@BeaconBlockActor@@QEBA_NH@Z
     * @hash   1251563269
     */
    MCAPI bool isEffectAvailable(int) const;
    /**
     * @symbol ?isSecondaryAvailable@BeaconBlockActor@@QEBA_NXZ
     * @hash   1938795316
     */
    MCAPI bool isSecondaryAvailable() const;
    /**
     * @symbol ?setPrimaryEffect@BeaconBlockActor@@QEAA_NH@Z
     * @hash   -1299101101
     */
    MCAPI bool setPrimaryEffect(int);
    /**
     * @symbol ?setSecondaryEffect@BeaconBlockActor@@QEAA_NH@Z
     * @hash   984184335
     */
    MCAPI bool setSecondaryEffect(int);
    /**
     * @symbol ?isPaymentItem@BeaconBlockActor@@SA_NAEBVItemDescriptor@@@Z
     * @hash   -1172977469
     */
    MCAPI static bool isPaymentItem(class ItemDescriptor const &);

//private:
    /**
     * @symbol ?_applyEffects@BeaconBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   1323093377
     */
    MCAPI void _applyEffects(class BlockSource &);
    /**
     * @symbol ?_getEffectTier@BeaconBlockActor@@AEBAHH@Z
     * @hash   -1989524497
     */
    MCAPI int _getEffectTier(int) const;
    /**
     * @symbol ?_isEffectValid@BeaconBlockActor@@AEBA_NH@Z
     * @hash   568234210
     */
    MCAPI bool _isEffectValid(int) const;
    /**
     * @symbol ?_isSecondaryEffectValid@BeaconBlockActor@@AEBA_NH@Z
     * @hash   -79562380
     */
    MCAPI bool _isSecondaryEffectValid(int) const;
    /**
     * @symbol ?_loadClientSideState@BeaconBlockActor@@AEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -2051294590
     */
    MCAPI void _loadClientSideState(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?_saveClientSideState@BeaconBlockActor@@AEBA_NAEAVCompoundTag@@@Z
     * @hash   -2104285809
     */
    MCAPI bool _saveClientSideState(class CompoundTag &) const;

private:

};