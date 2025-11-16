// 函数: sub_6abed0
// 地址: 0x6abed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
HMENU hMenu = *(arg1 + 0x10)

if (hMenu != 0)
    int32_t i_7
    int32_t ecx
    i_7, ecx = GetMenuItemCount(hMenu)
    int32_t i_6 = i_7
    
    if (i_6 s> 0)
        int32_t i
        
        do
            RemoveMenu(*(arg1 + 0x10), 0, MF_BYPOSITION)
            i = i_6
            i_6 -= 1
        while (i != 1)

sub_69fb30(arg1 + 0x10, 0x1388)
HMENU hMenu_2 = *(arg1 + 8)

if (hMenu_2 != 0)
    int32_t eax_1 = *(data_bac4d0 + 0x10)
    int32_t eax_2 = neg.d(eax_1)
    CheckMenuItem(hMenu_2, 0x3ea, sbb.d(eax_2, eax_2, eax_1 != 0) & 8)

HMENU hMenu_3 = *(arg1 + 0x18)

if (hMenu_3 != 0)
    int32_t eax_6 = *(data_bac4d0 + 0x12508)
    int32_t eax_7 = neg.d(eax_6)
    CheckMenuItem(hMenu_3, 0x4b0, sbb.d(eax_7, eax_7, eax_6 != 0) & 8)

HMENU hMenu_4 = *(arg1 + 0x18)

if (hMenu_4 != 0)
    int32_t eax_11 = *(data_bac4d0 + 0x13f44)
    int32_t eax_12 = neg.d(eax_11)
    CheckMenuItem(hMenu_4, 0x4b1, sbb.d(eax_12, eax_12, eax_11 != 0) & 8)

HMENU hMenu_5 = *(arg1 + 0x18)

if (hMenu_5 != 0)
    int32_t eax_16 = *(data_bac4d0 + 0x14c44)
    int32_t eax_17 = neg.d(eax_16)
    CheckMenuItem(hMenu_5, 0x4b2, sbb.d(eax_17, eax_17, eax_16 != 0) & 8)

HMENU hMenu_6 = *(arg1 + 0x18)

if (hMenu_6 != 0)
    int32_t eax_21 = *(data_bac4d0 + 0x1546c)
    int32_t eax_22 = neg.d(eax_21)
    CheckMenuItem(hMenu_6, 0x4b3, sbb.d(eax_22, eax_22, eax_21 != 0) & 8)

HMENU hMenu_7 = *(arg1 + 0x18)

if (hMenu_7 != 0)
    int32_t eax_26 = *(data_bac4d0 + 0x15a00)
    int32_t eax_27 = neg.d(eax_26)
    CheckMenuItem(hMenu_7, 0x4b4, sbb.d(eax_27, eax_27, eax_26 != 0) & 8)

HMENU hMenu_8 = *(arg1 + 0x18)

if (hMenu_8 != 0)
    int32_t eax_31 = *(data_bac4d0 + 0x16a30)
    int32_t eax_32 = neg.d(eax_31)
    CheckMenuItem(hMenu_8, 0x4b5, sbb.d(eax_32, eax_32, eax_31 != 0) & 8)

HMENU hMenu_9 = *(arg1 + 0x18)

if (hMenu_9 != 0)
    int32_t eax_36 = *(data_bac4d0 + 0x176e0)
    int32_t eax_37 = neg.d(eax_36)
    CheckMenuItem(hMenu_9, 0x4b6, sbb.d(eax_37, eax_37, eax_36 != 0) & 8)

HMENU hMenu_10 = *(arg1 + 0x18)

if (hMenu_10 != 0)
    int32_t eax_41 = *(data_bac4d0 + 0x17b1c)
    int32_t eax_42 = neg.d(eax_41)
    CheckMenuItem(hMenu_10, 0x4b7, sbb.d(eax_42, eax_42, eax_41 != 0) & 8)

HMENU hMenu_11 = *(arg1 + 0x18)

if (hMenu_11 != 0)
    int32_t eax_46 = *(data_bac4d0 + 0x18384)
    int32_t eax_47 = neg.d(eax_46)
    CheckMenuItem(hMenu_11, 0x4b8, sbb.d(eax_47, eax_47, eax_46 != 0) & 8)

HMENU hMenu_12 = *(arg1 + 0x18)

if (hMenu_12 != 0)
    int32_t eax_51 = *(data_bac4d0 + 0x187c0)
    int32_t eax_52 = neg.d(eax_51)
    CheckMenuItem(hMenu_12, 0x4b9, sbb.d(eax_52, eax_52, eax_51 != 0) & 8)

HMENU hMenu_13 = *(arg1 + 0x18)

if (hMenu_13 != 0)
    int32_t eax_56 = *(data_bac4d0 + 0x18ca8)
    int32_t eax_57 = neg.d(eax_56)
    CheckMenuItem(hMenu_13, 0x4ba, sbb.d(eax_57, eax_57, eax_56 != 0) & 8)

HMENU hMenu_14 = *(arg1 + 0x18)

if (hMenu_14 != 0)
    int32_t eax_61 = *(data_bac4d0 + 0x193b4)
    int32_t eax_62 = neg.d(eax_61)
    CheckMenuItem(hMenu_14, 0x4bb, sbb.d(eax_62, eax_62, eax_61 != 0) & 8)

HMENU hMenu_15 = *(arg1 + 0x18)

if (hMenu_15 != 0)
    int32_t eax_66 = *(data_bac4d0 + 0x19b50)
    int32_t eax_67 = neg.d(eax_66)
    CheckMenuItem(hMenu_15, 0x4bc, sbb.d(eax_67, eax_67, eax_66 != 0) & 8)

HMENU hMenu_16 = *(arg1 + 0x18)

if (hMenu_16 != 0)
    int32_t eax_71 = *(data_bac4d0 + 0x1a1cc)
    int32_t eax_72 = neg.d(eax_71)
    CheckMenuItem(hMenu_16, 0x4bd, sbb.d(eax_72, eax_72, eax_71 != 0) & 8)

HMENU hMenu_17 = *(arg1 + 0x18)

if (hMenu_17 != 0)
    int32_t eax_76 = *(data_bac4d0 + 0x1bda8)
    int32_t eax_77 = neg.d(eax_76)
    CheckMenuItem(hMenu_17, 0x4be, sbb.d(eax_77, eax_77, eax_76 != 0) & 8)

HMENU hMenu_18 = *(arg1 + 0x18)

if (hMenu_18 != 0)
    int32_t eax_81 = *(data_bac4d0 + 0x1c660)
    int32_t eax_82 = neg.d(eax_81)
    CheckMenuItem(hMenu_18, 0x4bf, sbb.d(eax_82, eax_82, eax_81 != 0) & 8)

HMENU hMenu_19 = *(arg1 + 8)

if (hMenu_19 != 0)
    int32_t eax_86 = *(data_bac4d0 + 0x1dac8)
    int32_t eax_87 = neg.d(eax_86)
    CheckMenuItem(hMenu_19, 0x3f1, sbb.d(eax_87, eax_87, eax_86 != 0) & 8)

HMENU hMenu_1 = *(arg1 + 0x30)

if (hMenu_1 != 0)
    int32_t i_5 = GetMenuItemCount(hMenu_1)
    
    if (i_5 s> 0)
        int32_t i_1
        
        do
            RemoveMenu(*(arg1 + 0x30), 0, MF_BYPOSITION)
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)

uint32_t result = sub_69fb30(arg1 + 0x30, 0x1388)
HMENU hMenu_20 = *(arg1 + 0x28)

if (hMenu_20 != 0)
    int32_t eax_92 = *(data_bac4d0 + 0x928c)
    int32_t eax_93 = neg.d(eax_92)
    result = CheckMenuItem(hMenu_20, 0x579, sbb.d(eax_93, eax_93, eax_92 != 0) & 8)

HMENU hMenu_21 = *(arg1 + 0x28)

if (hMenu_21 != 0)
    int32_t eax_97 = *(data_bac4d0 + 0x1cb30)
    int32_t eax_98 = neg.d(eax_97)
    result = CheckMenuItem(hMenu_21, 0x57a, sbb.d(eax_98, eax_98, eax_97 != 0) & 8)

HMENU hMenu_22 = *(arg1 + 0x28)

if (hMenu_22 != 0)
    int32_t eax_102 = *(data_bac4d0 + 0x1d2fc)
    int32_t eax_103 = neg.d(eax_102)
    result = CheckMenuItem(hMenu_22, 0x57b, sbb.d(eax_103, eax_103, eax_102 != 0) & 8)

HMENU hMenu_23 = *(arg1 + 0x40)

if (hMenu_23 != 0)
    int32_t eax_107 = *(data_bac4d0 + 0x1f92c)
    int32_t eax_108 = neg.d(eax_107)
    result = CheckMenuItem(hMenu_23, 0xbc1, sbb.d(eax_108, eax_108, eax_107 != 0) & 8)

HMENU hMenu_24 = *(arg1 + 0x40)

if (hMenu_24 != 0)
    int32_t eax_112 = *(data_bac4d0 + 0x1dec4)
    int32_t eax_113 = neg.d(eax_112)
    result = CheckMenuItem(hMenu_24, 0xbb9, sbb.d(eax_113, eax_113, eax_112 != 0) & 8)

HMENU hMenu_25 = *(arg1 + 0x40)

if (hMenu_25 != 0)
    int32_t eax_117 = *(data_bac4d0 + 0x1e48c)
    int32_t eax_118 = neg.d(eax_117)
    result = CheckMenuItem(hMenu_25, 0xbbb, sbb.d(eax_118, eax_118, eax_117 != 0) & 8)

HMENU hMenu_26 = *(arg1 + 0x40)

if (hMenu_26 != 0)
    int32_t eax_122 = *(data_bac4d0 + 0x33e80)
    int32_t eax_123 = neg.d(eax_122)
    result = CheckMenuItem(hMenu_26, 0xbbd, sbb.d(eax_123, eax_123, eax_122 != 0) & 8)

HMENU hMenu_27 = *(arg1 + 0x40)

if (hMenu_27 != 0)
    int32_t eax_127 = *(data_bac4d0 + 0x1e818)
    int32_t eax_128 = neg.d(eax_127)
    result = CheckMenuItem(hMenu_27, 0xbbe, sbb.d(eax_128, eax_128, eax_127 != 0) & 8)

HMENU hMenu_28 = *(arg1 + 0x40)

if (hMenu_28 != 0)
    int32_t eax_132 = *(data_bac4d0 + 0x1ec64)
    int32_t eax_133 = neg.d(eax_132)
    result = CheckMenuItem(hMenu_28, 0xbbf, sbb.d(eax_133, eax_133, eax_132 != 0) & 8)

HMENU hMenu_29 = *(arg1 + 0x40)

if (hMenu_29 != 0)
    int32_t eax_137 = *(data_bac4d0 + 0x217a8)
    int32_t eax_138 = neg.d(eax_137)
    result = CheckMenuItem(hMenu_29, 0xbc3, sbb.d(eax_138, eax_138, eax_137 != 0) & 8)

HMENU hMenu_30 = *(arg1 + 0x40)

if (hMenu_30 != 0)
    int32_t eax_142 = *(data_bac4d0 + 0x224d4)
    int32_t eax_143 = neg.d(eax_142)
    result = CheckMenuItem(hMenu_30, 0xbc5, sbb.d(eax_143, eax_143, eax_142 != 0) & 8)

HMENU hMenu_31 = *(arg1 + 0x40)

if (hMenu_31 != 0)
    int32_t eax_147 = *(data_bac4d0 + 0x22c88)
    int32_t eax_148 = neg.d(eax_147)
    result = CheckMenuItem(hMenu_31, 0xbc6, sbb.d(eax_148, eax_148, eax_147 != 0) & 8)

HMENU hMenu_32 = *(arg1 + 0x40)

if (hMenu_32 != 0)
    int32_t eax_152 = *(data_bac4d0 + 0x21bbc)
    int32_t eax_153 = neg.d(eax_152)
    result = CheckMenuItem(hMenu_32, 0xbc4, sbb.d(eax_153, eax_153, eax_152 != 0) & 8)

HMENU hMenu_33 = *(arg1 + 0x40)

if (hMenu_33 != 0)
    int32_t eax_157 = *(data_bac4d0 + 0x230a8)
    int32_t eax_158 = neg.d(eax_157)
    result = CheckMenuItem(hMenu_33, 0xbc7, sbb.d(eax_158, eax_158, eax_157 != 0) & 8)

HMENU hMenu_34 = *(arg1 + 0x40)

if (hMenu_34 != 0)
    int32_t eax_162 = *(data_bac4d0 + 0x2ef9c)
    int32_t eax_163 = neg.d(eax_162)
    result = CheckMenuItem(hMenu_34, 0xbca, sbb.d(eax_163, eax_163, eax_162 != 0) & 8)

HMENU hMenu_35 = *(arg1 + 0x40)

if (hMenu_35 != 0)
    int32_t eax_167 = *(data_bac4d0 + 0x2f3bc)
    int32_t eax_168 = neg.d(eax_167)
    result = CheckMenuItem(hMenu_35, 0xbcb, sbb.d(eax_168, eax_168, eax_167 != 0) & 8)

HMENU hMenu_36 = *(arg1 + 0x40)

if (hMenu_36 != 0)
    int32_t eax_172 = *(data_bac4d0 + 0x2f7dc)
    int32_t eax_173 = neg.d(eax_172)
    result = CheckMenuItem(hMenu_36, 0xbcc, sbb.d(eax_173, eax_173, eax_172 != 0) & 8)

HMENU hMenu_37 = *(arg1 + 0x40)

if (hMenu_37 != 0)
    int32_t eax_177 = *(data_bac4d0 + 0x2ffb0)
    int32_t eax_178 = neg.d(eax_177)
    result = CheckMenuItem(hMenu_37, 0xbcd, sbb.d(eax_178, eax_178, eax_177 != 0) & 8)

HMENU hMenu_38 = *(arg1 + 0x40)

if (hMenu_38 != 0)
    int32_t eax_182 = *(data_bac4d0 + 0x303c4)
    int32_t eax_183 = neg.d(eax_182)
    result = CheckMenuItem(hMenu_38, 0xbce, sbb.d(eax_183, eax_183, eax_182 != 0) & 8)

HMENU hMenu_39 = *(arg1 + 0x40)

if (hMenu_39 != 0)
    int32_t eax_187 = *(data_bac4d0 + 0x307f0)
    int32_t eax_188 = neg.d(eax_187)
    result = CheckMenuItem(hMenu_39, 0xbcf, sbb.d(eax_188, eax_188, eax_187 != 0) & 8)

HMENU hMenu_40 = *(arg1 + 0x40)

if (hMenu_40 != 0)
    int32_t eax_192 = *(data_bac4d0 + 0x30c04)
    int32_t eax_193 = neg.d(eax_192)
    result = CheckMenuItem(hMenu_40, 0xbd0, sbb.d(eax_193, eax_193, eax_192 != 0) & 8)

HMENU hMenu_41 = *(arg1 + 0x40)

if (hMenu_41 != 0)
    int32_t eax_197 = *(data_bac4d0 + 0x328a8)
    int32_t eax_198 = neg.d(eax_197)
    result = CheckMenuItem(hMenu_41, 0xbd2, sbb.d(eax_198, eax_198, eax_197 != 0) & 8)

HMENU hMenu_42 = *(arg1 + 0x40)

if (hMenu_42 != 0)
    int32_t eax_202 = *(data_bac4d0 + 0x3307c)
    int32_t eax_203 = neg.d(eax_202)
    result = CheckMenuItem(hMenu_42, 0xbd3, sbb.d(eax_203, eax_203, eax_202 != 0) & 8)

HMENU hMenu_43 = *(arg1 + 0x40)

if (hMenu_43 != 0)
    int32_t eax_207 = *(data_bac4d0 + 0x3349c)
    int32_t eax_208 = neg.d(eax_207)
    result = CheckMenuItem(hMenu_43, 0xbd4, sbb.d(eax_208, eax_208, eax_207 != 0) & 8)

HMENU hMenu_44 = *(arg1 + 0x40)

if (hMenu_44 != 0)
    int32_t eax_212 = *(data_bac4d0 + 0x338bc)
    int32_t eax_213 = neg.d(eax_212)
    result = CheckMenuItem(hMenu_44, 0xbd5, sbb.d(eax_213, eax_213, eax_212 != 0) & 8)

HMENU hMenu_45 = *(arg1 + 0x48)

if (hMenu_45 != 0)
    int32_t eax_217 = *(data_bac4d0 + 0x1f0e4)
    int32_t eax_218 = neg.d(eax_217)
    result = CheckMenuItem(hMenu_45, 0xc1c, sbb.d(eax_218, eax_218, eax_217 != 0) & 8)

HMENU hMenu_46 = *(arg1 + 0x48)

if (hMenu_46 != 0)
    int32_t eax_222 = *(data_bac4d0 + 0x1f508)
    int32_t eax_223 = neg.d(eax_222)
    result = CheckMenuItem(hMenu_46, 0xc1d, sbb.d(eax_223, eax_223, eax_222 != 0) & 8)

HMENU hMenu_47 = *(arg1 + 0x50)

if (hMenu_47 != 0)
    int32_t eax_227 = *(data_bac4d0 + 0x1fd94)
    int32_t eax_228 = neg.d(eax_227)
    result = CheckMenuItem(hMenu_47, 0xc81, sbb.d(eax_228, eax_228, eax_227 != 0) & 8)

HMENU hMenu_48 = *(arg1 + 0x50)

if (hMenu_48 != 0)
    int32_t eax_232 = *(data_bac4d0 + 0x20274)
    int32_t eax_233 = neg.d(eax_232)
    result = CheckMenuItem(hMenu_48, 0xc82, sbb.d(eax_233, eax_233, eax_232 != 0) & 8)

HMENU hMenu_49 = *(arg1 + 0x50)

if (hMenu_49 != 0)
    int32_t eax_237 = *(data_bac4d0 + 0x20b48)
    int32_t eax_238 = neg.d(eax_237)
    result = CheckMenuItem(hMenu_49, 0xc83, sbb.d(eax_238, eax_238, eax_237 != 0) & 8)

HMENU hMenu_50 = *(arg1 + 0x50)

if (hMenu_50 != 0)
    int32_t eax_242 = *(data_bac4d0 + 0x20f68)
    int32_t eax_243 = neg.d(eax_242)
    result = CheckMenuItem(hMenu_50, 0xc84, sbb.d(eax_243, eax_243, eax_242 != 0) & 8)

int32_t ecx_4 = 0
int32_t i_2 = 0
int32_t var_8_1 = 0

do
    HMENU hMenu_51 = *(arg1 + 0x58)
    
    if (hMenu_51 != 0)
        int32_t eax_247 = *(data_bac4d0 + i_2 + 0x2674c)
        int32_t eax_248 = neg.d(eax_247)
        result = CheckMenuItem(hMenu_51, ecx_4 + 0xce4, sbb.d(eax_248, eax_248, eax_247 != 0) & 8)
        ecx_4 = var_8_1
    
    ecx_4 += 1
    i_2 += 0x430
    var_8_1 = ecx_4
while (i_2 s< 0x3670)

int32_t ecx_5 = 0
int32_t i_3 = 0
int32_t var_8_2 = 0

do
    HMENU hMenu_52 = *(arg1 + 0x60)
    
    if (hMenu_52 != 0)
        int32_t eax_253 = *(i_3 + data_bac4d0 + 0x29dbc)
        int32_t eax_254 = neg.d(eax_253)
        result = CheckMenuItem(hMenu_52, ecx_5 + 0xcf8, sbb.d(eax_254, eax_254, eax_253 != 0) & 8)
        ecx_5 = var_8_2
    
    ecx_5 += 1
    i_3 += 0x418
    var_8_2 = ecx_5
while (i_3 s< 0x51e0)

int32_t ecx_6 = 0
int32_t i_4 = 0
int32_t var_8_3 = 0

do
    HMENU hMenu_53 = *(arg1 + 0x68)
    
    if (hMenu_53 != 0)
        int32_t eax_259 = *(i_4 + data_bac4d0 + 0x31018)
        int32_t eax_260 = neg.d(eax_259)
        result = CheckMenuItem(hMenu_53, ecx_6 + 0xd16, sbb.d(eax_260, eax_260, eax_259 != 0) & 8)
        ecx_6 = var_8_3
    
    ecx_6 += 1
    i_4 += 0x418
    var_8_3 = ecx_6
while (i_4 s< 0x1890)

return result
