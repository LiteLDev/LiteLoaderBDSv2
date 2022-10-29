/**
 * @file  SpawnParticleEffectPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnParticleEffectPacket.
 *
 */
class SpawnParticleEffectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNPARTICLEEFFECTPACKET
public:
    class SpawnParticleEffectPacket& operator=(class SpawnParticleEffectPacket const &) = delete;
    SpawnParticleEffectPacket(class SpawnParticleEffectPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2016589832
     */
    virtual ~SpawnParticleEffectPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SpawnParticleEffectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1645725524
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SpawnParticleEffectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -764771839
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SpawnParticleEffectPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -972330010
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SpawnParticleEffectPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   612451622
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SpawnParticleEffectPacket@@QEAA@XZ
     * @hash   -1251323418
     */
    MCAPI SpawnParticleEffectPacket();
    /**
     * @symbol ??0SpawnParticleEffectPacket@@QEAA@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@EV?$optional@VMolangVariableMap@@@3@@Z
     * @hash   -1771209334
     */
    MCAPI SpawnParticleEffectPacket(class Vec3 const &, std::string const &, unsigned char, class std::optional<class MolangVariableMap>);

};