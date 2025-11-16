// 函数: sub_5c0240
// 地址: 0x5c0240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
int32_t result = arg2
void* var_c_1 = arg1

if (result s< arg3)
    int32_t edi_1 = result * 0x2cc
    int32_t i_1 = arg3 - result
    int32_t i
    
    do
        void* esi_2 = *(arg1 + 0xa4) + edi_1
        sub_5bf800(esi_2)
        void** eax = esi_2 + 0x12c
        *(esi_2 + 0x120) = 0xffffffff
        *(esi_2 + 0x124) = 0xffffffff
        bool cond:1_1 = eax[5] u< 8
        eax[4] = 0
        
        if (not(cond:1_1))
            eax = *eax
        
        *eax = nullptr
        void* eax_1 = esi_2 + 0x144
        bool cond:0_1 = *(eax_1 + 0x14) u< 8
        *(eax_1 + 0x10) = 0
        
        if (not(cond:0_1))
            eax_1 = *eax_1
        
        *eax_1 = 0
        result = sub_5c0790(esi_2 + 0x15c)
        arg1 = var_c_1
        edi_1 += 0x2cc
        __builtin_memset(esi_2 + 0x2b4, 0, 0x15)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
