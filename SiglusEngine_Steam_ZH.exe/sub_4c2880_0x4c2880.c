// 函数: sub_4c2880
// 地址: 0x4c2880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx_1 = *arg2 & 0xfffff

if (ebx_1 == 0)
    return 1

uint32_t temp0_1 = divu.dp.d(0:(arg2[1]), ebx_1)
int32_t var_10_1 = 0
int32_t edi
int32_t var_34_1 = edi
int32_t result

if (temp0_1 u<= 0)
label_4c293b:
    result = 0
else
    int32_t esi_3 = *(arg1 + 0x6c) << 0x1e s>> 0x1f
    int32_t var_c_1 = 0
    
    while (true)
        int32_t var_28 = 0xffffffff
        void var_24
        void* edi_1 = &var_24
        *edi_1 = 0xffffffff
        void* edi_2 = edi_1 + 4
        *edi_2 = 0xffffffff
        int32_t ecx = 0
        *(edi_2 + 4) = 0xffffffff
        
        if (ebx_1 u> 0)
            int32_t edx_3 = *(arg1 + 0x14)
            int32_t* eax_6 = arg2[2] + var_c_1
            
            do
                (&var_28)[ecx] = *(*(edx_3 + (*eax_6 << 2)) + 0x10)
                ecx += 1
                eax_6 = &eax_6[1]
            while (ecx u< ebx_1)
        
        if (esi_3 != 0)
            int32_t i = 0
            void* var_8_1 = &data_b598e0
            
            do
                if (sub_4c16e2(&var_28, var_8_1) != 0)
                    break
                
                var_8_1 += 0x10
                i += 1
            while (i u< 8)
            
            if (i == 8)
                result = 1
                break
        
        var_10_1 += 1
        var_c_1 += ebx_1 << 2
        
        if (var_10_1 u>= temp0_1)
            goto label_4c293b

return result
