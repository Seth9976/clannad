// 函数: sub_4121d5
// 地址: 0x4121d5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
int32_t result = 0
int32_t i = 0

if (*(arg1 + 0x260) u> 0)
    int32_t var_c_1 = 0
    
    do
        void* eax_2 = *(arg1 + 0x25c) + var_c_1
        int32_t edi_1 = *(eax_2 + 4)
        int32_t var_8_1 = 0
        int32_t result_1 = sub_410dfd(arg2, edi_1, *(eax_2 + 8), 0)
        result = result_1
        
        if (result_1 s< 0)
            return result
        
        while (true)
            int32_t esi_1 = sub_40c2e9(arg2)
            
            if (esi_1 == 0xffffffff)
                break
            
            void* ecx_3 = arg2
            
            while (true)
                sub_410eeb(ecx_3, esi_1)
                int32_t eax_5 = sub_411068(arg2, esi_1)
                int32_t ecx_6 = var_8_1 + edi_1
                var_8_1 += 1
                *(arg3 + (esi_1 << 2)) = ecx_6
                
                if (eax_5 == 3)
                    break
                
                ecx_3 = arg2
                esi_1 = *(*(ecx_3 + 4) + ((esi_1 * 3 + eax_5) << 2))
        
        i += 1
        var_c_1 += 0x14
    while (i u< *(arg1 + 0x260))

int32_t i_1 = 0

if (*(arg1 + 0x264) u> 0)
    do
        *(arg4 + (i_1 << 2)) = 0xffffffff
        i_1 += 1
    while (i_1 u< *(arg1 + 0x264))

int32_t i_2 = 0

if (*(arg1 + 0x264) u> 0)
    do
        int32_t ecx_9 = *(arg3 + (i_2 << 2))
        
        if (ecx_9 != 0xffffffff)
            *(arg4 + (ecx_9 << 2)) = i_2
        
        i_2 += 1
    while (i_2 u< *(arg1 + 0x264))

return result
