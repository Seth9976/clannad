// 函数: sub_6e8b20
// 地址: 0x6e8b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi_2 = (arg4 << 4) + arg2
void* edx = (arg4 << 5) + arg3
int32_t eax_2 = *(edx + 0x70)
int32_t eax_5 = (eax_2 * arg5 + *(edx + 0x78)) << 2
int32_t* edi_1 = *(arg3 + 0xd34c) + eax_5
int32_t* var_10 = *(arg3 + 0xd0) + eax_5
int32_t eax_6 = 4

if (arg4 != 0)
    eax_6 = 7

int32_t eax_7
eax_7.b = *(arg3 + 0xd144) s>= eax_6
int32_t eax_8 = 0x780

if (arg4 != 0)
    eax_8 = 0xf00

int32_t eax_9 = arg5 << 3
int32_t ecx_1 = esi_2[2]
int32_t var_20 = eax_9
arg5 = ecx_1 * eax_9 + esi_2[3]
int32_t edx_6 = arg6 << 3
int32_t result = *esi_2
int32_t esi_3 = esi_2[1]
int32_t esi_4 = var_20
int32_t* edx_7 = var_10
int32_t result_1 = result

if (esi_4 s< edx_6)
    void* ecx_4 = 8 - arg5
    int32_t var_24_1 = esi_4 + 8
    void* ebx_3 = arg3
    void* var_1c_1 = ecx_4
    
    do
        arg6 = 0
        
        if (result s> 0)
            int32_t ecx_5
            ecx_5.b = var_24_1 s>= esi_3
            char* esi_5 = arg5
            int32_t eax_14
            eax_14.b = esi_4 s<= 0
            int32_t eax_32
            
            do
                int32_t edx_8 = *edi_1
                uint32_t ecx_8 = zx.d(*((*edx_7 u>> 2 & 0x3f) + ebx_3 + 0x393))
                int32_t ebx_4
                ebx_4.b = var_1c_1 + esi_5 s>= result_1
                int32_t eax_21
                eax_21.b = arg6 s<= 0
                void* ebx_7 = ((ebx_4 | (((ecx_5 * 2) | eax_14) * 2)) * 2) | eax_21
                
                if (eax_7 != 0 && edx_8 s> eax_8)
                    void* edx_10 = arg3 + 0xd248 + (ecx_8 << 2)
                    sub_6e80f0(arg3 + (ecx_8 << 2) + 0xd148, ecx_1, esi_5, ebx_7, 
                        *(arg3 + (ecx_8 << 2) + 0xd148), *(arg3 + 0xd248 + (ecx_8 << 2)), 1)
                    
                    if (arg4 != 0 || ((ebx_7.b & 1) == 0 && edi_1[-1] s> 0xf00)
                            || ((ebx_7.b & 2) == 0 && edi_1[1] s> 0xf00)
                            || ((ebx_7.b & 4) == 0 && *(edi_1 - (eax_2 << 2)) s> 0xf00))
                        sub_6e80f0(arg3 + (ecx_8 << 2) + 0xd148, ecx_1, esi_5, ebx_7, 
                            *(arg3 + (ecx_8 << 2) + 0xd148), *edx_10, 1)
                        sub_6e80f0(arg3 + (ecx_8 << 2) + 0xd148, ecx_1, esi_5, ebx_7, 
                            *(arg3 + (ecx_8 << 2) + 0xd148), *edx_10, 1)
                    else if ((ebx_7.b & 8) == 0 && edi_1[eax_2] s> 0xf00)
                        sub_6e80f0(arg3 + (ecx_8 << 2) + 0xd148, ecx_1, esi_5, ebx_7, 
                            *(arg3 + (ecx_8 << 2) + 0xd148), *edx_10, 1)
                        sub_6e80f0(arg3 + (ecx_8 << 2) + 0xd148, ecx_1, esi_5, ebx_7, 
                            *(arg3 + (ecx_8 << 2) + 0xd148), *edx_10, 1)
                else if (edx_8 s> 0x600)
                    sub_6e80f0(arg3, ecx_1, esi_5, ebx_7, *(arg3 + (ecx_8 << 2) + 0xd148), 
                        *(arg3 + (ecx_8 << 2) + 0xd248), 1)
                else if (edx_8 s> 0x180)
                    sub_6e80f0(arg3, ecx_1, esi_5, ebx_7, *(arg3 + (ecx_8 << 2) + 0xd148), 
                        *(arg3 + (ecx_8 << 2) + 0xd248), 0)
                
                edi_1 = &edi_1[1]
                eax_32 = arg6 + 8
                ebx_3 = arg3
                edx_7 = &var_10[1]
                esi_5 = &esi_5[8]
                var_10 = edx_7
                arg6 = eax_32
            while (eax_32 s< result_1)
            result = result_1
            ecx_4 = var_1c_1
            esi_4 = var_20
        
        esi_4 += 8
        arg5 = &arg5[ecx_1 << 3]
        ecx_4 += neg.d(ecx_1) << 3
        var_24_1 += 8
        edx_7 = var_10
        var_1c_1 = ecx_4
        var_20 = esi_4
    while (esi_4 s< edx_6)

return result
