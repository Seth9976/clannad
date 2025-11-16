// 函数: sub_4c0a0b
// 地址: 0x4c0a0b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
*(arg1 + 0x220) = 0xffffffff
*(arg1 + 0x224) = 0xffffffff
int32_t edi
int32_t var_18 = edi
int32_t i = 0
int32_t result = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* eax_2 = *(arg1 + 0x18) + (i << 2)
        *(arg1 + 0xfc) = i
        *(arg1 + 0x100) = *eax_2
        *(arg1 + 0xfc) = i
        int32_t* eax_3 = *eax_2
        *(arg1 + 0x100) = eax_3
        int32_t eax_5 = *eax_3 & 0xfff00000
        
        if ((eax_5 == 0x20300000 || eax_5 == 0x20200000) && *(arg1 + 0x220) == 0xffffffff)
            int32_t eax_6
            int32_t ecx_2
            eax_6, ecx_2 = sub_49f4eb(arg1, 0xabfed8, 0x311, 1, 4)
            int32_t var_1c_1 = ecx_2
            int32_t var_20_1 = ecx_2
            var_20_1.q = fconvert.d(float.t(0))
            int32_t eax_7
            int32_t ecx_4
            eax_7, ecx_4 = sub_49f544(arg1, eax_6, 0, 0, var_20_1)
            int32_t var_1c_2 = ecx_4
            int32_t var_20_2 = ecx_4
            var_20_2.q = fconvert.d(float.t(1))
            *(arg1 + 0x220) = eax_7
            *(arg1 + 0x224) = sub_49f544(arg1, eax_6, 0, 1, var_20_2)
        
        i += 1
    while (i u< *(arg1 + 0xc))

sub_4c8264(arg1)

if ((*(arg1 + 0xcc) & 4) == 0)
    int32_t i_1 = 0
    
    if (*(arg1 + 0xc) u> 0)
        do
            int32_t eax_9 = *(arg1 + 0x18)
            *(arg1 + 0xfc) = i_1
            int32_t* eax_10 = *(eax_9 + (i_1 << 2))
            *(arg1 + 0x100) = eax_10
            int32_t eax_11 = *eax_10
            int32_t ecx_8 = eax_11 & 0xfff00000
            
            if (ecx_8 == 0x10300000 || ecx_8 == 0x10500000 || ecx_8 == 0x10600000
                || ecx_8 == 0x10700000)
            label_4c0b3c:
                result = sub_4cbb85(arg1)
            label_4c0b3f:
                
                if (result s< 0)
                    return result
            else
                if (ecx_8 == 0x50000000)
                    if ((eax_11 & 0xfffff) u<= 2)
                        goto label_4c0b3f
                    
                    goto label_4c0b3c
                
                result = 1
            
            i_1 += 1
        while (i_1 u< *(arg1 + 0xc))

sub_4c8264(arg1)
int32_t i_2 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_15 = *(*(arg1 + 0x14) + (i_2 << 2))
        
        if (*(eax_15 + 0x54) == 0xffffffff
                && (*(*(*(arg1 + 0x10) + (*(eax_15 + 4) << 2)) + 5) & 1) != 0
                && *(arg1 + 0x224) != i_2 && *(arg1 + 0x220) != i_2)
            *(eax_15 + 4) = *(arg1 + 0x74)
        
        i_2 += 1
    while (i_2 u< *(arg1 + 8))

return 0
