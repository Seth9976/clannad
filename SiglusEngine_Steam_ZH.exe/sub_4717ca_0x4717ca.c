// 函数: sub_4717ca
// 地址: 0x4717ca
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edi
int32_t var_18 = edi
int32_t var_c_1 = 1

if (arg4 u> 0)
    int32_t* edx_1 = arg3
    int32_t i_1 = arg4
    int32_t i
    
    do
        void* eax_3 = *(*(arg1[2] + 0x14) + (*edx_1 << 2))
        
        if (*(eax_3 + 0x34) != 0xffffffff)
            while (*(eax_3 + 8) == 0xffffffff)
                void* ecx_2 = *(*(arg1[2] + 0x14) + (*(eax_3 + 0x34) << 2))
                
                if (*(ecx_2 + 0x60) == 0)
                    *(ecx_2 + 0x60) = *(eax_3 + 0x60)
                    *(ecx_2 + 0x64) = *(eax_3 + 0x64)
                
                *edx_1 = *(eax_3 + 0x34)
                eax_3 = ecx_2
                
                if (*(ecx_2 + 0x34) == 0xffffffff)
                    break
        
        if ((*(*(*(arg1[2] + 0x10) + (*(eax_3 + 4) << 2)) + 5) & 1) == 0
                || *(eax_3 + 8) != 0xffffffff)
            var_c_1 = 0
        
        edx_1 = &edx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t ebx_7 = 0

if (arg2 != 0 && var_c_1 != 0)
    if (arg4 u> 0)
        do
            void* ecx_5 = arg1[2]
            void* esi_1 = *(*(ecx_5 + 0x14) + (arg3[ebx_7] << 2))
            void* var_1c_1 = ecx_5
            void* var_20_1 = ecx_5
            var_20_1.q = fconvert.d(fconvert.t(*(esi_1 + 0x20)))
            int32_t eax_7 = sub_49f544(ecx_5, *(ecx_5 + 0x78), 0, 0, var_20_1)
            arg3[ebx_7] = eax_7
            
            if (eax_7 == 0xffffffff)
                return 0x8007000e
            
            void* eax_8 = *(*(arg1[2] + 0x14) + (eax_7 << 2))
            *(eax_8 + 0x60) = *(esi_1 + 0x60)
            ebx_7 += 1
            *(eax_8 + 0x64) = *(esi_1 + 0x64)
        while (ebx_7 u< arg4)
    
    int32_t result = sub_4716f6(arg1, arg2, arg3, *(arg1[2] + 0x78), 1, 1, nullptr, nullptr)
    
    if (result s< 0)
        return result

return 0
