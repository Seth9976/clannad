// 函数: sub_4032b0
// 地址: 0x4032b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 != 0)
    void var_14
    sub_410ac0(&var_14, *arg3, arg3[1])
    int32_t eax_2 = sub_410bd0(&var_14, 8)
    int32_t var_1c = 0
    int16_t var_18_1 = 0
    sub_4033b0(&var_14, &var_1c, 6)
    int32_t i = 3
    char* edi_1 = "vorbis"
    int32_t* esi_1 = &var_1c
    bool cond:2_1 = true
    
    while (i != 0)
        int16_t temp0_1 = *esi_1
        int16_t temp1_1 = *edi_1
        cond:2_1 = temp0_1 == temp1_1
        esi_1 += 2
        edi_1 = &edi_1[2]
        i -= 1
        
        if (temp0_1 != temp1_1)
            break
    
    if (not(cond:2_1))
        return 0xffffff7c
    
    if (eax_2 == 1)
        if (arg3[2] != 0 && arg1[2] == 0)
            return sub_4033e0(arg1, &var_14)
    else if (eax_2 == 3)
        if (arg1[2] != 0)
            return sub_4034c0(arg2, &var_14)
    else if (eax_2 == 5 && arg1[2] != 0 && arg2[3] != 0)
        return sub_4035a0(arg1, &var_14)

return 0xffffff7b
