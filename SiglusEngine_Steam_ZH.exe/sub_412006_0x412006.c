// 函数: sub_412006
// 地址: 0x412006
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t edi
int32_t var_24 = edi
void* var_14 = arg1
int32_t result = 0
int32_t i = 0

if (*(arg1 + 0x260) u> 0)
    uint32_t edi_1 = arg2
    int32_t var_c_1 = 0
    
    do
        void* eax_2 = *(arg1 + 0x25c) + var_c_1
        int32_t esi_1 = *(eax_2 + 4)
        int32_t result_1 = sub_410c82(edi_1, esi_1.w, (*(eax_2 + 8)).w, 0)
        result = result_1
        
        if (result_1 s< 0)
            return result
        
        while (true)
            uint32_t eax_8 = sub_40c2c0(edi_1)
            arg2 = eax_8
            
            if (eax_8.w == 0xffff)
                break
            
            int16_t var_28_1 = arg2.w
            
            while (true)
                sub_410d80(edi_1, var_28_1)
                int16_t eax_6 = sub_410f5b(edi_1, arg2.w)
                uint32_t ecx_7 = zx.d(arg2.w)
                int32_t eax_7 = ebx + esi_1
                ebx += 1
                *(arg3 + (ecx_7 << 2)) = eax_7
                
                if (eax_6 == 3)
                    break
                
                uint32_t eax_5 = zx.d(*(*(edi_1 + 4) + ((ecx_7 * 3 + zx.d(eax_6)) << 1)))
                arg2 = eax_5
                var_28_1 = eax_5.w
        
        i += 1
        var_c_1 += 0x14
        ebx = 0
        arg1 = var_14
    while (i u< *(var_14 + 0x260))

int32_t i_1 = 0

if (*(arg1 + 0x264) u> 0)
    do
        *(arg4 + (i_1 << 2)) = 0xffff
        i_1 += 1
    while (i_1 u< *(arg1 + 0x264))

int32_t i_2 = 0

if (*(arg1 + 0x264) u> 0)
    do
        int32_t edx_2
        edx_2.w = *(arg3 + (i_2 << 2))
        
        if (edx_2.w != 0xffff)
            *(arg4 + (zx.d(edx_2.w) << 2)) = i_2
        
        i_2 += 1
    while (i_2 u< *(arg1 + 0x264))

return result
