// 函数: sub_4b8b4f
// 地址: 0x4b8b4f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t i = 0
int32_t result = 0
*(arg1 + 0x2b4) = sub_745f3f(*(arg1 + 0xc) << 2)
int32_t eax_5 = sub_745f3f(*(arg1 + 8) << 2)
bool cond:0 = *(arg1 + 0x2b4) == 0
*(arg1 + 0x2b8) = eax_5

if (cond:0 || eax_5 == 0)
    return 0x8007000e

if (*(arg1 + 0xc) u> 0)
    do
        void* eax_6 = sub_49ec23(0x74)
        void* const eax_7
        
        if (eax_6 == 0)
            eax_7 = nullptr
        else
            eax_7 = sub_49e789(eax_6)
        
        *(*(arg1 + 0x2b4) + (i << 2)) = eax_7
        int32_t* ecx_3 = *(*(arg1 + 0x2b4) + (i << 2))
        
        if (ecx_3 == 0)
            return 0x8007000e
        
        result = sub_49eecd(ecx_3, *(*(arg1 + 0x18) + (i << 2)))
        
        if (result s< 0)
            return result
        
        i += 1
    while (i u< *(arg1 + 0xc))

int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_11 = sub_49f181(0x80)
        int32_t eax_12
        
        if (eax_11 == 0)
            eax_12 = 0
        else
            eax_12 = sub_52e900(eax_11)
        
        *(*(arg1 + 0x2b8) + (i_1 << 2)) = eax_12
        int32_t* ecx_6 = *(*(arg1 + 0x2b8) + (i_1 << 2))
        
        if (ecx_6 == 0)
            return 0x8007000e
        
        result = sub_49f070(ecx_6, *(*(arg1 + 0x14) + (i_1 << 2)))
        
        if (result s< 0)
            return result
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))

*(arg1 + 0x2c0) = *(arg1 + 0xc)
*(arg1 + 0x2bc) = *(arg1 + 8)
return result
