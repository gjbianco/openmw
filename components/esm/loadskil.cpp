#include "loadskil.hpp"

namespace ESM
{
    const std::string Skill::sSkillNameIds[Length] = {
        "sSkillBlock",
        "sSkillArmorer",
        "sSkillMediumarmor",
        "sSkillHeavyarmor",
        "sSkillBluntweapon",
        "sSkillLongblade",
        "sSkillAxe",
        "sSkillSpear",
        "sSkillAthletics",
        "sSkillEnchant",
        "sSkillDestruction",
        "sSkillAlteration",
        "sSkillIllusion",
        "sSkillConjuration",
        "sSkillMysticism",
        "sSkillRestoration",
        "sSkillAlchemy",
        "sSkillUnarmored",
        "sSkillSecurity",
        "sSkillSneak",
        "sSkillAcrobatics",
        "sSkillLightarmor",
        "sSkillShortblade",
        "sSkillMarksman",
        "sSkillMercantile",
        "sSkillSpeechcraft",
        "sSkillHandtohand",
    };
    const boost::array<Skill::SkillEnum, Skill::Length> Skill::skillIds = {{
        Block,
        Armorer,
        MediumArmor,
        HeavyArmor,
        BluntWeapon,
        LongBlade,
        Axe,
        Spear,
        Athletics,
        Enchant,
        Destruction,
        Alteration,
        Illusion,
        Conjuration,
        Mysticism,
        Restoration,
        Alchemy,
        Unarmored,
        Security,
        Sneak,
        Acrobatics,
        LightArmor,
        ShortBlade,
        Marksman,
        Mercantile,
        Speechcraft,
        HandToHand
    }};

void Skill::load(ESMReader &esm)
{
    esm.getHNT(index, "INDX");
    esm.getHNT(data, "SKDT", 24);
    description = esm.getHNOString("DESC");
}
}
