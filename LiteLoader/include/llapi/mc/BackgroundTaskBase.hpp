/**
 * @file  BackgroundTaskBase.hpp
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
 * @brief MC class BackgroundTaskBase.
 *
 */
class BackgroundTaskBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKBASE
public:
    class BackgroundTaskBase& operator=(class BackgroundTaskBase const &) = delete;
    BackgroundTaskBase(class BackgroundTaskBase const &) = delete;
    BackgroundTaskBase() = delete;
#endif

public:
    /**
     * @symbol ??0BackgroundTaskBase@@QEAA@V?$not_null@PEAVIBackgroundTaskOwner@@@gsl@@AEBUTaskStartInfoBase@@_N@Z
     * @hash   1125483838
     */
    MCAPI BackgroundTaskBase(class gsl::not_null<class IBackgroundTaskOwner *>, struct TaskStartInfoBase const &, bool);
    /**
     * @symbol ?_makeOrphan@BackgroundTaskBase@@QEAAXXZ
     * @hash   -1741714477
     */
    MCAPI void _makeOrphan();
    /**
     * @symbol ?canBeRunBy@BackgroundTaskBase@@QEBA_NVid@thread@std@@@Z
     * @hash   590830141
     */
    MCAPI bool canBeRunBy(class std::thread::id) const;
    /**
     * @symbol ?getGroup@BackgroundTaskBase@@QEAAPEAVIBackgroundTaskOwner@@XZ
     * @hash   -1483697869
     */
    MCAPI class IBackgroundTaskOwner * getGroup();
    /**
     * @symbol ?getGroupState@BackgroundTaskBase@@QEBA?AW4TaskGroupState@@XZ
     * @hash   1388458770
     */
    MCAPI enum class TaskGroupState getGroupState() const;
    /**
     * @symbol ?getNext@BackgroundTaskBase@@QEAA?AV?$shared_ptr@VBackgroundTaskBase@@@std@@XZ
     * @hash   1960821613
     */
    MCAPI class std::shared_ptr<class BackgroundTaskBase> getNext();
    /**
     * @symbol ?getPrev@BackgroundTaskBase@@QEAAPEAV1@XZ
     * @hash   1032180928
     */
    MCAPI class BackgroundTaskBase * getPrev();
    /**
     * @symbol ?getPriority@BackgroundTaskBase@@QEBAHXZ
     * @hash   -1289515290
     */
    MCAPI int getPriority() const;
    /**
     * @symbol ?getStartAfterTime@BackgroundTaskBase@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ
     * @hash   -1463139139
     */
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getStartAfterTime() const;
    /**
     * @symbol ?hasAffinity@BackgroundTaskBase@@QEBA_NXZ
     * @hash   263394764
     */
    MCAPI bool hasAffinity() const;
    /**
     * @symbol ?isAsync@BackgroundTaskBase@@QEBA_NXZ
     * @hash   -1705992356
     */
    MCAPI bool isAsync() const;
    /**
     * @symbol ?isOrphaned@BackgroundTaskBase@@QEBA_NXZ
     * @hash   233314840
     */
    MCAPI bool isOrphaned() const;
    /**
     * @symbol ?isReadyToStart@BackgroundTaskBase@@QEBA_NV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     * @hash   -1792313904
     */
    MCAPI bool isReadyToStart(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const;
    /**
     * @symbol ?setNext@BackgroundTaskBase@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     * @hash   1030121291
     */
    MCAPI void setNext(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?setPrev@BackgroundTaskBase@@QEAAXPEAV1@@Z
     * @hash   -2135980416
     */
    MCAPI void setPrev(class BackgroundTaskBase *);
    /**
     * @symbol ?setStartAfterTime@BackgroundTaskBase@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     * @hash   163595343
     */
    MCAPI void setStartAfterTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ?setSyncPriority@BackgroundTaskBase@@QEAAXXZ
     * @hash   -2091583501
     */
    MCAPI void setSyncPriority();
    /**
     * @symbol ?getCurrent@BackgroundTaskBase@@SAPEAV1@XZ
     * @hash   -711706676
     */
    MCAPI static class BackgroundTaskBase * getCurrent();

//protected:
    /**
     * @symbol ?backDownPriority@BackgroundTaskBase@@IEAAXXZ
     * @hash   -1079275140
     */
    MCAPI void backDownPriority();
    /**
     * @symbol ?taskComplete@BackgroundTaskBase@@IEAAXXZ
     * @hash   592906285
     */
    MCAPI void taskComplete();

//private:

protected:

private:
    /**
     * @symbol ?gCurrentTask@BackgroundTaskBase@@0PEAV1@EA
     * @hash   700224099
     */
    MCAPI static class BackgroundTaskBase * gCurrentTask;

};