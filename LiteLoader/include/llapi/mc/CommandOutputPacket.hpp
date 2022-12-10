/**
 * @file  CommandOutputPacket.hpp
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
 * @brief MC class CommandOutputPacket.
 *
 */
class CommandOutputPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUTPACKET
public:
    class CommandOutputPacket& operator=(class CommandOutputPacket const &) = delete;
    CommandOutputPacket(class CommandOutputPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   546307362
     */
    virtual ~CommandOutputPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@CommandOutputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1064806218
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@CommandOutputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -997809673
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@CommandOutputPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -2053942576
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@CommandOutputPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1776678640
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0CommandOutputPacket@@QEAA@XZ
     * @hash   -218312032
     */
    MCAPI CommandOutputPacket();
    /**
     * @symbol ??0CommandOutputPacket@@QEAA@AEBVCommandOrigin@@AEBVCommandOutput@@@Z
     * @hash   -793666510
     */
    MCAPI CommandOutputPacket(class CommandOrigin const &, class CommandOutput const &);

};