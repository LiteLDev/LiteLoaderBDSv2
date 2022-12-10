/**
 * @file  DirectPlayerMovementProxy.hpp
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
 * @brief MC class DirectPlayerMovementProxy.
 *
 */
class DirectPlayerMovementProxy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTPLAYERMOVEMENTPROXY
public:
    class DirectPlayerMovementProxy& operator=(class DirectPlayerMovementProxy const &) = delete;
    DirectPlayerMovementProxy(class DirectPlayerMovementProxy const &) = delete;
    DirectPlayerMovementProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTPLAYERMOVEMENTPROXY
    /**
     * @symbol ?_applyStateToComponents@DirectPlayerMovementProxy@@MEAAXXZ
     * @hash   -1234431442
     */
    MCVAPI void _applyStateToComponents();
    /**
     * @symbol ?_extractStateFromComponents@DirectPlayerMovementProxy@@MEAAXXZ
     * @hash   1292354282
     */
    MCVAPI void _extractStateFromComponents();
    /**
     * @symbol ?_getPlayer@DirectPlayerMovementProxy@@UEAAPEAVPlayer@@XZ
     * @hash   -1828693441
     */
    MCVAPI class Player * _getPlayer();
    /**
     * @symbol ?_onMovePlayerPacketNormal@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@AEBVVec2@@M@Z
     * @hash   900281296
     */
    MCVAPI void _onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
    /**
     * @symbol ?_resetPos@DirectPlayerMovementProxy@@UEAAX_N@Z
     * @hash   1886990166
     */
    MCVAPI void _resetPos(bool);
    /**
     * @symbol ?_setPositionMode@DirectPlayerMovementProxy@@UEAAXH@Z
     * @hash   -2133475554
     */
    MCVAPI void _setPositionMode(int);
    /**
     * @symbol ?areHandsBusy@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   947416220
     */
    MCVAPI bool areHandsBusy() const;
    /**
     * @symbol ?checkMovementStats@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z
     * @hash   -121159960
     */
    MCVAPI void checkMovementStats(class Vec3 const &);
    /**
     * @symbol ?fireEventPersonaEmotePlayed@DirectPlayerMovementProxy@@UEAAX_N@Z
     * @hash   398519895
     */
    MCVAPI void fireEventPersonaEmotePlayed(bool);
    /**
     * @symbol ?getAbilities@DirectPlayerMovementProxy@@UEBAAEBVLayeredAbilities@@XZ
     * @hash   -1305400446
     */
    MCVAPI class LayeredAbilities const & getAbilities() const;
    /**
     * @symbol ?getAbilityBool@DirectPlayerMovementProxy@@UEBA_NW4AbilitiesIndex@@@Z
     * @hash   -1045241577
     */
    MCVAPI bool getAbilityBool(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getAbilityFloat@DirectPlayerMovementProxy@@UEBAMW4AbilitiesIndex@@@Z
     * @hash   1223267207
     */
    MCVAPI float getAbilityFloat(enum class AbilitiesIndex) const;
    /**
     * @symbol ?getBob@DirectPlayerMovementProxy@@UEBAMXZ
     * @hash   1529334312
     */
    MCVAPI float getBob() const;
    /**
     * @symbol ?getClientInstance@DirectPlayerMovementProxy@@UEAAPEAUIClientInstanceProxy@@XZ
     * @hash   1699369638
     */
    MCVAPI struct IClientInstanceProxy * getClientInstance();
    /**
     * @symbol ?getClientInstance@DirectPlayerMovementProxy@@UEBAPEBUIClientInstanceProxy@@XZ
     * @hash   431977186
     */
    MCVAPI struct IClientInstanceProxy const * getClientInstance() const;
    /**
     * @symbol ?getCurrentTick@DirectPlayerMovementProxy@@UEBAAEBUTick@@XZ
     * @hash   -703511576
     */
    MCVAPI struct Tick const & getCurrentTick() const;
    /**
     * @symbol ?getGlidingTicks@DirectPlayerMovementProxy@@UEBAHXZ
     * @hash   -2119465536
     */
    MCVAPI int getGlidingTicks() const;
    /**
     * @symbol ?getInputMode@DirectPlayerMovementProxy@@UEBA?AW4InputMode@@XZ
     * @hash   348036603
     */
    MCVAPI enum class InputMode getInputMode() const;
    /**
     * @symbol ?getItemUseMovementModifier@DirectPlayerMovementProxy@@UEBAMXZ
     * @hash   1033998893
     */
    MCVAPI float getItemUseMovementModifier() const;
    /**
     * @symbol ?getJumpRidingScale@DirectPlayerMovementProxy@@UEAAMXZ
     * @hash   1037537083
     */
    MCVAPI float getJumpRidingScale();
    /**
     * @symbol ?getLastBob@DirectPlayerMovementProxy@@UEBAMXZ
     * @hash   -383363774
     */
    MCVAPI float getLastBob() const;
    /**
     * @symbol ?getLastDelta@DirectPlayerMovementProxy@@UEBA?AVVec3@@XZ
     * @hash   563175255
     */
    MCVAPI class Vec3 getLastDelta() const;
    /**
     * @symbol ?getLastPos@DirectPlayerMovementProxy@@UEBA?AVVec3@@XZ
     * @hash   422187379
     */
    MCVAPI class Vec3 getLastPos() const;
    /**
     * @symbol ?getLoadingState@DirectPlayerMovementProxy@@UEBA?AW4LoadingState@@XZ
     * @hash   -645229023
     */
    MCVAPI enum class LoadingState getLoadingState() const;
    /**
     * @symbol ?getMoveInputHandler@DirectPlayerMovementProxy@@UEAAPEAVMoveInputHandler@@XZ
     * @hash   -1759539090
     */
    MCVAPI class MoveInputHandler * getMoveInputHandler();
    /**
     * @symbol ?getPlayMode@DirectPlayerMovementProxy@@UEBA?AW4ClientPlayMode@@XZ
     * @hash   -895671962
     */
    MCVAPI enum class ClientPlayMode getPlayMode() const;
    /**
     * @symbol ?getPlayerPaddleForce@DirectPlayerMovementProxy@@UEBAMW4Side@@@Z
     * @hash   545854632
     */
    MCVAPI float getPlayerPaddleForce(enum class Side) const;
    /**
     * @symbol ?getVRMoveAdjustAngle@DirectPlayerMovementProxy@@UEBAMXZ
     * @hash   -1902548182
     */
    MCVAPI float getVRMoveAdjustAngle() const;
    /**
     * @symbol ?hasMoveInput@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   -1346447182
     */
    MCVAPI bool hasMoveInput() const;
    /**
     * @symbol ?isAdventureSettingsAutoJump@DirectPlayerMovementProxy@@UEAA_NXZ
     * @hash   -307517190
     */
    MCVAPI bool isAdventureSettingsAutoJump();
    /**
     * @symbol ?isArmorFlyEnabled@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   -1879926506
     */
    MCVAPI bool isArmorFlyEnabled() const;
    /**
     * @symbol ?isAutoJumpEnabled@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   -1496639171
     */
    MCVAPI bool isAutoJumpEnabled() const;
    /**
     * @symbol ?isAutoJumping@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   332741182
     */
    MCVAPI bool isAutoJumping() const;
    /**
     * @symbol ?isEmoting@DirectPlayerMovementProxy@@UEAA_NXZ
     * @hash   943270607
     */
    MCVAPI bool isEmoting();
    /**
     * @symbol ?isFlying@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   53254812
     */
    MCVAPI bool isFlying() const;
    /**
     * @symbol ?isLocalPlayer@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   -330279515
     */
    MCVAPI bool isLocalPlayer() const;
    /**
     * @symbol ?isPaddling@DirectPlayerMovementProxy@@UEBA_NW4Side@@@Z
     * @hash   1318445783
     */
    MCVAPI bool isPaddling(enum class Side) const;
    /**
     * @symbol ?isServerAuthoritativeMovement@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   305454788
     */
    MCVAPI bool isServerAuthoritativeMovement() const;
    /**
     * @symbol ?isSleeping@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   1388323784
     */
    MCVAPI bool isSleeping() const;
    /**
     * @symbol ?isSlowedByItemUse@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   1754183270
     */
    MCVAPI bool isSlowedByItemUse() const;
    /**
     * @symbol ?isSpectator@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   1069380344
     */
    MCVAPI bool isSpectator() const;
    /**
     * @symbol ?isUsingItem@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   1864572416
     */
    MCVAPI bool isUsingItem() const;
    /**
     * @symbol ?registerFramewiseActionOrStop@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   -1909974629
     */
    MCVAPI void registerFramewiseActionOrStop();
    /**
     * @symbol ?sendClientAuthInput@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   518860545
     */
    MCVAPI void sendClientAuthInput();
    /**
     * @symbol ?sendInput@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   1491390836
     */
    MCVAPI void sendInput();
    /**
     * @symbol ?sendPacket@DirectPlayerMovementProxy@@UEAAXAEAVPlayerActionPacket@@@Z
     * @hash   -192531389
     */
    MCVAPI void sendPacket(class PlayerActionPacket &);
    /**
     * @symbol ?sendPacket@DirectPlayerMovementProxy@@UEAAXAEAVPassengerJumpPacket@@@Z
     * @hash   1195354474
     */
    MCVAPI void sendPacket(class PassengerJumpPacket &);
    /**
     * @symbol ?sendPlayerInput@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   1544621539
     */
    MCVAPI void sendPlayerInput();
    /**
     * @symbol ?sendPlayerMove@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   -1782831572
     */
    MCVAPI void sendPlayerMove();
    /**
     * @symbol ?sendPosition@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   897604611
     */
    MCVAPI void sendPosition();
    /**
     * @symbol ?sendRequestAbilityPacket@DirectPlayerMovementProxy@@UEAAXW4AbilitiesIndex@@_N@Z
     * @hash   -983050529
     */
    MCVAPI void sendRequestAbilityPacket(enum class AbilitiesIndex, bool);
    /**
     * @symbol ?setAbilityBool@DirectPlayerMovementProxy@@UEAAXW4AbilitiesIndex@@_N@Z
     * @hash   -613270762
     */
    MCVAPI void setAbilityBool(enum class AbilitiesIndex, bool);
    /**
     * @symbol ?setAbilityFloat@DirectPlayerMovementProxy@@UEAAXW4AbilitiesIndex@@M@Z
     * @hash   90673502
     */
    MCVAPI void setAbilityFloat(enum class AbilitiesIndex, float);
    /**
     * @symbol ?setAutoJumping@DirectPlayerMovementProxy@@UEAAX_N@Z
     * @hash   -592167913
     */
    MCVAPI void setAutoJumping(bool);
    /**
     * @symbol ?setBob@DirectPlayerMovementProxy@@UEAAXM@Z
     * @hash   -123148243
     */
    MCVAPI void setBob(float);
    /**
     * @symbol ?setCurrentLocalMoveVelocity@DirectPlayerMovementProxy@@UEAAXAEBVVec2@@@Z
     * @hash   -1954941761
     */
    MCVAPI void setCurrentLocalMoveVelocity(class Vec2 const &);
    /**
     * @symbol ?setEmotingStatus@DirectPlayerMovementProxy@@UEAAX_N@Z
     * @hash   1151591621
     */
    MCVAPI void setEmotingStatus(bool);
    /**
     * @symbol ?setHandsBusy@DirectPlayerMovementProxy@@UEAAX_N@Z
     * @hash   -2051855425
     */
    MCVAPI void setHandsBusy(bool);
    /**
     * @symbol ?setHasMoveInput@DirectPlayerMovementProxy@@UEAAX_N@Z
     * @hash   -173243095
     */
    MCVAPI void setHasMoveInput(bool);
    /**
     * @symbol ?setJumpRidingScale@DirectPlayerMovementProxy@@UEAAXM@Z
     * @hash   1733902187
     */
    MCVAPI void setJumpRidingScale(float);
    /**
     * @symbol ?setLastBob@DirectPlayerMovementProxy@@UEAAXM@Z
     * @hash   2077808707
     */
    MCVAPI void setLastBob(float);
    /**
     * @symbol ?setLastDelta@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z
     * @hash   -94601696
     */
    MCVAPI void setLastDelta(class Vec3 const &);
    /**
     * @symbol ?setLastPos@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z
     * @hash   -477947004
     */
    MCVAPI void setLastPos(class Vec3 const &);
    /**
     * @symbol ?setPlayerPaddleForce@DirectPlayerMovementProxy@@UEAAXW4Side@@M@Z
     * @hash   220084677
     */
    MCVAPI void setPlayerPaddleForce(enum class Side, float);
    /**
     * @symbol ?setWasAutoJumping@DirectPlayerMovementProxy@@UEAAX_N@Z
     * @hash   -1906896516
     */
    MCVAPI void setWasAutoJumping(bool);
    /**
     * @symbol ?shouldSendPosition@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   -986886457
     */
    MCVAPI bool shouldSendPosition() const;
    /**
     * @symbol ?startGliding@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   -646636942
     */
    MCVAPI void startGliding();
    /**
     * @symbol ?stopGliding@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   -1539536430
     */
    MCVAPI void stopGliding();
    /**
     * @symbol ?tryAsPlayer@DirectPlayerMovementProxy@@UEBAPEBUIPlayerMovementProxy@@XZ
     * @hash   842538810
     */
    MCVAPI struct IPlayerMovementProxy const * tryAsPlayer() const;
    /**
     * @symbol ?tryAsPlayer@DirectPlayerMovementProxy@@UEAAPEAUIPlayerMovementProxy@@XZ
     * @hash   -1802329346
     */
    MCVAPI struct IPlayerMovementProxy * tryAsPlayer();
    /**
     * @symbol ?tryGetPlayerActionComponent@DirectPlayerMovementProxy@@UEAAPEAUPlayerActionComponent@@XZ
     * @hash   -1161148536
     */
    MCVAPI struct PlayerActionComponent * tryGetPlayerActionComponent();
    /**
     * @symbol ?updateClientPlayerInputState@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   1538361102
     */
    MCVAPI void updateClientPlayerInputState();
    /**
     * @symbol ?updateTouch@DirectPlayerMovementProxy@@UEAAXXZ
     * @hash   1009106280
     */
    MCVAPI void updateTouch();
    /**
     * @symbol ?wasAutoJumping@DirectPlayerMovementProxy@@UEBA_NXZ
     * @hash   -705226945
     */
    MCVAPI bool wasAutoJumping() const;
#endif

};