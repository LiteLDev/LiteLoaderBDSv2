// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum PlayerRespawnState :char {
    SERVER_SEARCHING = 0,
    SERVER_READY,
    CLIENT_READY,
};
#undef BEFORE_EXTRA

class RespawnPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    Vec3 respawnPosition;
    PlayerRespawnState respawnState;
    ActorRuntimeID runtimeId;
    inline static std::string getStateString(PlayerRespawnState state) {
#define CASE_ENUM(var) case PlayerRespawnState::var:\
return #var;
        switch (state)
        {
            CASE_ENUM(SERVER_SEARCHING);
            CASE_ENUM(SERVER_READY);
            CASE_ENUM(CLIENT_READY);
        default:
            break;
        }
        return fmt::format("Unknown({})",(int)state);
#undef CASE_ENUM
    }
    inline std::string toDebugString() {
        return fmt::format("{}: position: ({}), state: {}, runtimeId: {}",
            __super::toDebugString(),
            respawnPosition.toString(), getStateString(respawnState), runtimeId.id);
    }
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESPAWNPACKET
public:
    class RespawnPacket& operator=(class RespawnPacket const &) = delete;
    RespawnPacket(class RespawnPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~RespawnPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    MCAPI RespawnPacket(class Vec3 const &, enum PlayerRespawnState const &);
    MCAPI RespawnPacket();

protected:

private:

};