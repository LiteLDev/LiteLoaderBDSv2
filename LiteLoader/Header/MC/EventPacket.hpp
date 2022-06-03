// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MinecraftEventing.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Level.hpp"

enum EventType : int {
    ACHIEVEMENT_AWARDED,
    ENTITY_INTERACT,
    PORTAL_BUILT,
    PORTAL_USED,
    MOB_KILLED,
    CAULDRON_USED,
    PLAYER_DEATH,
    BOSS_KILLED,
    AGENT_COMMAND,
    AGENT_CREATED,
    PATTERN_REMOVED,
    SLASH_COMMAND_EXECUTED,
    FISH_BUCKETED,
    MOB_BORN,
    PET_DIED,
    CAULDRON_BLOCK_USED,
    COMPOSTER_BLOCK_USED,
    BELL_BLOCK_USED,
};

#undef BEFORE_EXTRA

class EventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    struct Data {
        EventType type;
        unsigned char usePlayerId; // whether uniqueId is set
        int int_8;//fromDimensionID in PORTAL_USED Event
        int int_12;//toDimensionID in PORTAL_USED Event
        char filler16[40 - 16];
        std::string unk40;
        std::string unk72;
        std::string unk104;
        std::string unk136;
        std::string unk168;
        std::string unk200;
        std::string unk232;
    };//size: 264
    enum AgentResult;

    ActorUniqueID uniqueId;
    Data data;

    inline std::string toDebugString() {
        std::string name = data.usePlayerId ? Level::getPlayer(uniqueId)->getNameTag() : "Null";
        std::string debugString = fmt::format("{}: type: {}, player: {}",
            __super::toDebugString(), (int)data.type, name);
        if (data.type == PORTAL_USED) {
            debugString.append(", dimension: {}->{}", data.int_8, data.int_12);
        }
        return debugString;
    }

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTPACKET
public:
    class EventPacket& operator=(class EventPacket const &) = delete;
    EventPacket(class EventPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~EventPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    MCAPI EventPacket(class Player const &, std::string const &);
    MCAPI EventPacket(class Player const &, std::string const &, int);
    MCAPI EventPacket(class Player const &, enum MovementEventType, float, float, float, float, float);
    MCAPI EventPacket(class Player const *, struct EventPacket::Data const &);
    MCAPI EventPacket(class Player const *, std::string const &, int, int, std::string const &);
    MCAPI EventPacket(class Player const *, class Raid const &, bool);
    MCAPI EventPacket(class Player const *, short, unsigned int, short);
    MCAPI EventPacket(class Player const *, int, int, int, int, int);
    MCAPI EventPacket(class Player const *, int, int, enum ActorDamageCause, bool);
    MCAPI EventPacket(class Player const *, int, class gsl::not_null<class Actor const *>);
    MCAPI EventPacket(class Player const *, class Actor const *, class gsl::not_null<class Mob const *>, enum ActorDamageCause, std::string, int, enum ActorType);
    MCAPI EventPacket(class Player const *, class Actor const *, class gsl::not_null<class Mob const *>, enum ActorDamageCause, enum ActorType);
    MCAPI EventPacket(class Player const *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    MCAPI EventPacket(class Player const *, class AutomaticID<class Dimension, int>);
    MCAPI EventPacket(class Player const *, class gsl::not_null<class Actor const *>, enum MinecraftEventing::InteractionType);
    MCAPI EventPacket(class Player const *, class gsl::not_null<class Mob const *>);
    MCAPI EventPacket(class Player const *, enum MinecraftEventing::AchievementIds, bool);
    MCAPI EventPacket(class Player const *, bool, class Actor const *, class gsl::not_null<class Mob const *>, enum ActorDamageCause);
    MCAPI EventPacket();
    MCAPI class EventPacket & operator=(class EventPacket &&);

protected:

private:

};