/**
 * @file  NetworkHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkHandler.
 *
 */
class NetworkHandler {

#define AFTER_EXTRA
// Add Member There
public:
class Connection {
public:
    Connection() = delete;
    Connection(Connection const&) = delete;
    Connection(Connection const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKHANDLER
public:
    class NetworkHandler& operator=(class NetworkHandler const &) = delete;
    NetworkHandler(class NetworkHandler const &) = delete;
    NetworkHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKHANDLER
    /**
     * @symbol ?_onDisable@NetworkHandler@@EEAAXXZ
     * @hash   1601263751
     */
    MCVAPI void _onDisable();
    /**
     * @symbol ?_onEnable@NetworkHandler@@EEAAXXZ
     * @hash   -1287465074
     */
    MCVAPI void _onEnable();
    /**
     * @symbol ?getConnectionInfo@NetworkHandler@@UEBAAEBVGameConnectionInfo@Social@@XZ
     * @hash   483718464
     */
    MCVAPI class Social::GameConnectionInfo const & getConnectionInfo() const;
    /**
     * @symbol ?getDefaultGamePort@NetworkHandler@@UEBAGXZ
     * @hash   2021401659
     */
    MCVAPI unsigned short getDefaultGamePort() const;
    /**
     * @symbol ?getDefaultGamePortv6@NetworkHandler@@UEBAGXZ
     * @hash   963616587
     */
    MCVAPI unsigned short getDefaultGamePortv6() const;
    /**
     * @symbol ?onAllConnectionsClosed@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1583575812
     */
    MCVAPI void onAllConnectionsClosed(std::string const &, bool);
    /**
     * @symbol ?onAllRemoteConnectionsClosed@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1889254250
     */
    MCVAPI void onAllRemoteConnectionsClosed(std::string const &, bool);
    /**
     * @symbol ?onConnectionClosed@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -378940164
     */
    MCVAPI void onConnectionClosed(class NetworkIdentifier const &, std::string const &, bool);
    /**
     * @symbol ?onNewIncomingConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@$$QEAV?$shared_ptr@VNetworkPeer@@@std@@@Z
     * @hash   -89138579
     */
    MCVAPI void onNewIncomingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer> &&);
    /**
     * @symbol ?onNewOutgoingConnection@NetworkHandler@@EEAAXAEBVNetworkIdentifier@@$$QEAV?$shared_ptr@VNetworkPeer@@@std@@@Z
     * @hash   715664531
     */
    MCVAPI void onNewOutgoingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer> &&);
    /**
     * @symbol ?onOutgoingConnectionFailed@NetworkHandler@@EEAAXXZ
     * @hash   89546051
     */
    MCVAPI void onOutgoingConnectionFailed();
    /**
     * @symbol ?onWebsocketRequest@NetworkHandler@@EEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
     * @hash   1262335017
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @symbol ?useIPv4Only@NetworkHandler@@UEBA_NXZ
     * @hash   -791848556
     */
    MCVAPI bool useIPv4Only() const;
    /**
     * @symbol ?useIPv6Only@NetworkHandler@@UEBA_NXZ
     * @hash   145099206
     */
    MCVAPI bool useIPv6Only() const;
    /**
     * @symbol ??1NetworkHandler@@UEAA@XZ
     * @hash   1445872116
     */
    MCVAPI ~NetworkHandler();
#endif
    /**
     * @symbol ??0NetworkHandler@@QEAA@AEAVScheduler@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UNetworkHandlerToggles@@AEBV?$NonOwnerPointer@VNetworkDebugManager@@@Bedrock@@V?$ServiceReference@VServicesManager@@@@@Z
     * @hash   1664778652
     */
    MCAPI NetworkHandler(class Scheduler &, std::vector<std::string> const &, struct NetworkHandlerToggles, class Bedrock::NonOwnerPointer<class NetworkDebugManager> const &, class ServiceReference<class ServicesManager>);
    /**
     * @symbol ?disconnect@NetworkHandler@@QEAAXXZ
     * @hash   -341681563
     */
    MCAPI void disconnect();
    /**
     * @symbol ?enableAsyncFlush@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@@Z
     * @hash   -929745838
     */
    MCAPI void enableAsyncFlush(class NetworkIdentifier const &);
    /**
     * @symbol ?flush@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@$$QEAV?$function@$$A6AXXZ@std@@@Z
     * @hash   370899557
     */
    MCAPI void flush(class NetworkIdentifier const &, class std::function<void (void)> &&);
    /**
     * @symbol ?getCompressedPeerForUser@NetworkHandler@@QEAA?AV?$weak_ptr@VCompressedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
     * @hash   289681458
     */
    MCAPI class std::weak_ptr<class CompressedNetworkPeer> getCompressedPeerForUser(class NetworkIdentifier const &);
    /**
     * @symbol ?getConnections@NetworkHandler@@QEBAAEBV?$vector@V?$unique_ptr@VNetworkConnection@@U?$default_delete@VNetworkConnection@@@std@@@std@@V?$allocator@V?$unique_ptr@VNetworkConnection@@U?$default_delete@VNetworkConnection@@@std@@@std@@@2@@std@@XZ
     * @hash   -1505362665
     */
    MCAPI std::vector<std::unique_ptr<class NetworkConnection>> const & getConnections() const;
    /**
     * @symbol ?getConnector@NetworkHandler@@QEAAAEAVConnector@@XZ
     * @hash   1197828606
     */
    MCAPI class Connector & getConnector();
    /**
     * @symbol ?getEncryptedPeerForUser@NetworkHandler@@QEAA?AV?$weak_ptr@VEncryptedNetworkPeer@@@std@@AEBVNetworkIdentifier@@@Z
     * @hash   1711676832
     */
    MCAPI class std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const &);
    /**
     * @symbol ?getLocalNetworkId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     * @hash   -565490060
     */
    MCAPI class NetworkIdentifier getLocalNetworkId() const;
    /**
     * @symbol ?getNetworkStatistics@NetworkHandler@@QEBAPEBVNetworkStatistics@@XZ
     * @hash   1758882669
     */
    MCAPI class NetworkStatistics const * getNetworkStatistics() const;
    /**
     * @symbol ?getPeerForUser@NetworkHandler@@QEAAPEAVNetworkPeer@@AEBVNetworkIdentifier@@@Z
     * @hash   -1609743310
     */
    MCAPI class NetworkPeer * getPeerForUser(class NetworkIdentifier const &);
    /**
     * @symbol ?getPrimaryNetworkId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     * @hash   289292566
     */
    MCAPI class NetworkIdentifier getPrimaryNetworkId() const;
    /**
     * @symbol ?getResourcePackUploadManager@NetworkHandler@@QEAAAEAVResourcePackFileUploadManager@@AEAVPacketSender@@AEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -500220299
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @symbol ?getServerId@NetworkHandler@@QEBA?AVNetworkIdentifier@@XZ
     * @hash   -867035660
     */
    MCAPI class NetworkIdentifier getServerId() const;
    /**
     * @symbol ?getServerLocatorComposite@NetworkHandler@@QEAAAEAVServerLocatorComposite@@XZ
     * @hash   472451490
     */
    MCAPI class ServerLocatorComposite & getServerLocatorComposite();
    /**
     * @symbol ?host@NetworkHandler@@QEAA_NAEBUConnectionDefinition@@@Z
     * @hash   -145691957
     */
    MCAPI bool host(struct ConnectionDefinition const &);
    /**
     * @symbol ?isHostingPlayer@NetworkHandler@@QEBA_NAEBVNetworkIdentifier@@AEBW4SubClientId@@@Z
     * @hash   -552824248
     */
    MCAPI bool isHostingPlayer(class NetworkIdentifier const &, enum class SubClientId const &) const;
    /**
     * @symbol ?isServer@NetworkHandler@@QEBA_NXZ
     * @hash   1323270480
     */
    MCAPI bool isServer() const;
    /**
     * @symbol ?registerServerInstance@NetworkHandler@@QEAAXAEAVNetEventCallback@@@Z
     * @hash   1216373738
     */
    MCAPI void registerServerInstance(class NetEventCallback &);
    /**
     * @symbol ?runEvents@NetworkHandler@@QEAAX_N@Z
     * @hash   -822217124
     */
    MCAPI void runEvents(bool);
    /**
     * @symbol ?send@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
     * @hash   1981236220
     */
    MCAPI void send(class NetworkIdentifier const &, class Packet const &, enum class SubClientId);
    /**
     * @symbol ?sendToMultiple@NetworkHandler@@QEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z
     * @hash   -665119267
     */
    MCAPI void sendToMultiple(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &);
    /**
     * @symbol ?setCloseConnection@NetworkHandler@@QEAAXAEBVNetworkIdentifier@@@Z
     * @hash   -1094832270
     */
    MCAPI void setCloseConnection(class NetworkIdentifier const &);
    /**
     * @symbol ?unregisterClientOrServerInstance@NetworkHandler@@QEAAXAEBW4SubClientId@@@Z
     * @hash   -1548615684
     */
    MCAPI void unregisterClientOrServerInstance(enum class SubClientId const &);
    /**
     * @symbol ?update@NetworkHandler@@QEAAXPEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@@Z
     * @hash   -595710597
     */
    MCAPI void update(std::vector<class WeakEntityRef> const *);

//private:
    /**
     * @symbol ?_getConnectionFromId@NetworkHandler@@AEBAPEAVNetworkConnection@@AEBVNetworkIdentifier@@@Z
     * @hash   -1823354715
     */
    MCAPI class NetworkConnection * _getConnectionFromId(class NetworkIdentifier const &) const;
    /**
     * @symbol ?_handlePacketViolation@NetworkHandler@@AEAAXW4StreamReadResult@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBVNetworkIdentifier@@AEAVNetworkConnection@@W4SubClientId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2074725702
     */
    MCAPI void _handlePacketViolation(enum class StreamReadResult, enum class PacketViolationResponse, enum class MinecraftPacketIds, class NetworkIdentifier const &, class NetworkConnection &, enum class SubClientId, std::string const &);
    /**
     * @symbol ?_initializeRakNetTransportObjects@NetworkHandler@@AEAAXXZ
     * @hash   -547535861
     */
    MCAPI void _initializeRakNetTransportObjects();
    /**
     * @symbol ?_sendInternal@NetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVPacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1605321239
     */
    MCAPI void _sendInternal(class NetworkIdentifier const &, class Packet const &, std::string const &);
    /**
     * @symbol ?_setActiveTransportLayer@NetworkHandler@@AEAAXXZ
     * @hash   30982977
     */
    MCAPI void _setActiveTransportLayer();
    /**
     * @symbol ?_sortAndPacketizeEvents@NetworkHandler@@AEAA_NAEAVNetworkConnection@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     * @hash   839717862
     */
    MCAPI bool _sortAndPacketizeEvents(class NetworkConnection &, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

private:

};