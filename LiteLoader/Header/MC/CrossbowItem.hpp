// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CrossbowItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROSSBOWITEM
public:
    class CrossbowItem& operator=(class CrossbowItem const &) = delete;
    CrossbowItem(class CrossbowItem const &) = delete;
    CrossbowItem() = delete;
#endif

public:
    /*0*/ virtual ~CrossbowItem();
    /*4*/ virtual int getMaxUseDuration(class ItemStack const *) const;
    /*5*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*58*/ virtual int getEnchantSlot() const;
    /*62*/ virtual void __unk_vfn_62();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*71*/ virtual void __unk_vfn_71();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*82*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*83*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /*111*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*114*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*116*/ virtual class Item & setIcon(std::string const &, int);
    /*119*/ virtual bool canBeCharged() const;
    /*121*/ virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    MCAPI CrossbowItem(std::string const &, int);

protected:

private:
    MCAPI class Vec3 _getShootDir(class Player const &, float) const;
    MCAPI void _shootArrow(class ItemInstance const &, class ItemInstance const &, class Player &) const;
    MCAPI void _shootFirework(class ItemInstance const &, class Player &) const;
    MCAPI static int const DEFAULT_USE_DURATION;

};