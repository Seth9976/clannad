// 函数: sub_5f0460
// 地址: 0x5f0460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x380) != 0xffffffff || *(arg1 + 0x3bc) != 0xffffffff || *(arg1 + 0x3e8) != 0xffffffff
        || *(arg1 + 0x414) != 0xffffffff || *(arg1 + 0x440) != 0xffffffff
        || *(arg1 + 0x46c) != 0xffffffff || *(arg1 + 0x498) != 0xffffffff
        || *(arg1 + 0x4c4) != 0xffffffff || *(arg1 + 0x4f0) != 0xffffffff
        || *(arg1 + 0x51c) != 0xffffffff || *(arg1 + 0x548) != 0xffffffff
        || *(arg1 + 0x574) != 0xffffffff || *(arg1 + 0x5a0) != 0xffffffff
        || *(arg1 + 0x5cc) != 0xffffffff || *(arg1 + 0x5f8) != 0xffffffff
        || *(arg1 + 0x624) != 0xffffffff || *(arg1 + 0x654) != 0xffffffff
        || *(arg1 + 0x680) != 0xffffffff || *(arg1 + 0x6ac) != 0xffffffff
        || *(arg1 + 0x6d8) != 0xffffffff || *(arg1 + 0x708) != 0xffffffff
        || *(arg1 + 0x734) != 0xffffffff || *(arg1 + 0x760) != 0xffffffff
        || *(arg1 + 0x78c) != 0xffffffff || *(arg1 + 0x7b8) != 0xffffffff
        || *(arg1 + 0x7e4) != 0xffffffff || *(arg1 + 0x810) != 0xffffffff
        || *(arg1 + 0x83c) != 0xffffffff || *(arg1 + 0x868) != 0xffffffff
        || *(arg1 + 0x894) != 0xffffffff || *(arg1 + 0x8c0) != 0xffffffff
        || *(arg1 + 0x8ec) != 0xffffffff || *(arg1 + 0x918) != 0xffffffff
        || *(arg1 + 0x944) != 0xffffffff || *(arg1 + 0x970) != 0xffffffff
        || *(arg1 + 0x99c) != 0xffffffff)
    int32_t eax
    eax.b = 1
    return eax

int32_t eax_1 = sub_588000(arg1 + 0x9d0)
int32_t eax_2 = sub_588000(arg1 + 0xa8c)
int32_t eax_3 = sub_588000(arg1 + 0xb48)
int32_t eax_4 = sub_588000(arg1 + 0xc04)
int32_t edx = 0
int32_t eax_5

if (eax_1 s> 0)
    int32_t* ecx_5 = *(arg1 + 0xa70) + 0x20
    
    do
        if (*ecx_5 != 0xffffffff)
        label_5f06c8:
            eax_5.b = 1
            return eax_5
        
        edx += 1
        ecx_5 = &ecx_5[0xb]
    while (edx s< eax_1)

int32_t ecx_6 = 0

if (eax_2 s> 0)
    eax_5 = *(arg1 + 0xb2c) + 0x20
    
    do
        if (*eax_5 != 0xffffffff)
            goto label_5f06c8
        
        ecx_6 += 1
        eax_5 += 0x2c
    while (ecx_6 s< eax_2)

int32_t ecx_7 = 0

if (eax_3 s> 0)
    eax_5 = *(arg1 + 0xbe8) + 0x20
    
    do
        if (*eax_5 != 0xffffffff)
            goto label_5f06c8
        
        ecx_7 += 1
        eax_5 += 0x2c
    while (ecx_7 s< eax_3)

if (eax_4 s> 0)
    eax_5 = *(arg1 + 0xca4) + 0x20
    int32_t ecx_8 = 0
    
    do
        if (*eax_5 != 0xffffffff)
            goto label_5f06c8
        
        ecx_8 += 1
        eax_5 += 0x2c
    while (ecx_8 s< eax_4)

eax_5.b = 0
return eax_5
