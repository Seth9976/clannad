// 函数: sub_5d26f0
// 地址: 0x5d26f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x118)
int32_t ecx = *(arg1 + 0x108)

if (result s>= ecx)
    if (*(arg1 + 0x128) != 0)
        *(arg1 + 0x11c) = mods.dp.d(sx.q(*(arg1 + 0x11c) + 1), ecx)
    label_5d273c:
        int32_t ecx_1 = *(arg1 + 0x124) * 0x2e60
        int32_t var_e_1 = 0
        *(arg1 + 0x128) = 0
        void* ecx_2 = ecx_1 + *(arg1 + 0x10c)
        int32_t var_a_1 = 0
        *(ecx_2 + 0x2e50) = 0.q
        *(ecx_2 + 0x2e58) = 0
        *(ecx_2 + 0x2e5c) = 0
        *(*(arg1 + 0x124) * 0x2e60 + *(arg1 + 0x10c) + 0x2e5e) = 0
        (*(arg1 + 0x124) * 0x2e60)[*(arg1 + 0x10c)] = 0
        void** eax_9 = *(arg1 + 0x10c) + 0x1c + *(arg1 + 0x124) * 0x2e60
        bool cond:1_1 = eax_9[5] u< 8
        eax_9[4] = 0
        
        if (not(cond:1_1))
            eax_9 = *eax_9
        
        *eax_9 = nullptr
        void** eax_12 = *(arg1 + 0x10c) + 0x34 + *(arg1 + 0x124) * 0x2e60
        bool cond:0_1 = eax_12[5] u< 8
        eax_12[4] = 0
        
        if (not(cond:0_1))
            eax_12 = *eax_12
        
        *eax_12 = nullptr
        void** eax_15 = *(arg1 + 0x10c) + 4 + *(arg1 + 0x124) * 0x2e60
        bool cond:2_1 = eax_15[5] u< 8
        eax_15[4] = 0
        
        if (not(cond:2_1))
            eax_15 = *eax_15
        
        *eax_15 = nullptr
        void** eax_18 = *(arg1 + 0x10c) + 0x2e30 + *(arg1 + 0x124) * 0x2e60
        bool cond:3_1 = eax_18[5] u< 8
        eax_18[4] = 0
        
        if (not(cond:3_1))
            eax_18 = *eax_18
        
        *eax_18 = nullptr
        *(*(arg1 + 0x124) * 0x2e60 + *(arg1 + 0x10c) + 0x2e48) = 0xffffffff
        *(*(arg1 + 0x124) * 0x2e60 + *(arg1 + 0x10c) + 0x2e4c) = 0xffffffff
        void* ecx_12 = *(arg1 + 0x124) * 0x2e60 + *(arg1 + 0x10c)
        *(ecx_12 + 0x2e18) = *(ecx_12 + 0x2e14)
        void* ecx_14 = *(arg1 + 0x124) * 0x2e60 + *(arg1 + 0x10c)
        *(ecx_14 + 0x2e24) = *(ecx_14 + 0x2e20)
        result = *(arg1 + 0x10c)
        *(*(arg1 + 0x124) * 0x2e60 + result + 0x2e2c) = 0
else if (*(arg1 + 0x128) != 0)
    *(arg1 + 0x118) = result + 1
    goto label_5d273c

return result
