// 函数: sub_484e48
// 地址: 0x484e48
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:2_1

if (arg3 != 0)
    int32_t* esi_1 = arg3
    int32_t edi
    int32_t var_10_1 = edi
    int32_t i = 4
    int128_t* const edi_1 = &data_aac190
    cond:2_1 = true
    
    while (i != 0)
        int32_t temp3_1 = *esi_1
        int32_t temp4_1 = *edi_1
        cond:2_1 = temp3_1 == temp4_1
        esi_1 = &esi_1[1]
        edi_1 += 4
        i -= 1
        
        if (temp3_1 != temp4_1)
            break

int32_t* esi_2

if (arg3 == 0 || cond:2_1)
    esi_2 = nullptr
else
    esi_2 = arg3

int32_t eax = *(arg1 + 0x40)

if (eax == 0)
    sub_482812(arg1)
    sub_4827e1(arg1)
    int32_t var_10_6 = 0xa
    sub_460651(arg1)
    sub_460fd3(arg1, arg2)
    
    if (esi_2 != 0)
        sub_461015(arg1, arg3)
    
    int32_t var_10_9 = 0xb
    sub_460651(arg1)
else if (eax == 1)
    sub_460f5b(arg1, *(arg1 + 0x58))
    
    if (esi_2 == 0)
        char* var_10_5 = arg2
        sub_4605e0(arg1, "{ %s }")
    else
        if (arg2 == 0)
            sub_460594(arg1, "{ ")
        else
            char* var_10_3 = arg2
            sub_4605e0(arg1, "{ %s ")
        
        sub_46105c(arg1, arg3)
        sub_460594(arg1, " }")

return 0
