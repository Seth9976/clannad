// 函数: sub_4142d4
// 地址: 0x4142d4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t eax = *(ebx + 0x274)
int32_t edi
int32_t var_bc = edi
void* var_3c = ebx
int32_t var_40_1

if (eax != 0)
    var_40_1 = eax

if (eax == 0 || (arg3 & 0x40) != 0)
    var_40_1 = 0xc

int32_t eax_3

if ((&data_4000000 & arg2) == 0 || eax != 0 || (arg2 & &__dos_header) != 0)
    eax_3 = arg2
else
    eax_3 = (arg2 & 0xfbffffff) | 0x8000000

int32_t var_80 = 0
int32_t var_68 = 0
int32_t var_54 = 0
int32_t temp3_1

if (arg6 != 0)
    temp3_1 = eax_3 & 0x8000000

int32_t result

if (arg6 != 0 && (temp3_1 == 0 || (&data_4000000 & eax_3) == 0))
    int32_t i_3 = *(ebx + 0x260)
    int32_t var_24_1 = 0
    
    if (i_3 u> 0)
        int32_t* eax_5 = *(ebx + 0x25c) + 8
        int32_t i
        
        do
            int32_t edx_1 = *eax_5
            
            if (var_24_1 u< edx_1)
                var_24_1 = edx_1
            
            eax_5 = &eax_5[5]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t edi_2 = *(ebx + 0x264)
    int32_t eax_8 = sub_745f3f(edi_2 * 0xc)
    int32_t var_c_1
    
    if (eax_8 == 0)
        var_c_1 = 0
    else
        sub_61cdd0(eax_8, 0xc, edi_2, sub_52e900)
        var_c_1 = eax_8
    
    int32_t i_2 = 0
    
    if (var_c_1 != 0)
        int32_t i_1 = 0
        
        if (*(ebx + 0x260) u> 0)
            int32_t var_1c_1 = 0
            
            do
                void* eax_10 = *(ebx + 0x25c) + var_1c_1
                int32_t edi_3 = *(eax_10 + 4)
                int32_t eax_12 = *(eax_10 + 8) + edi_3
                
                if (edi_3 u< eax_12)
                    int32_t var_10_1 = edi_3 * 3
                    int32_t* var_14_1 = &arg5[edi_3]
                    int32_t var_28_1 = var_c_1 + edi_3 * 0xc
                    int32_t j_1 = eax_12 - edi_3
                    int32_t j
                    
                    do
                        int32_t* eax_17 = arg6 + *var_14_1 * 0xc
                        int32_t* ecx_8 = eax_17
                        int32_t* edx_4 = var_28_1 - eax_17
                        int32_t var_8_1 = 1
                        int32_t* var_18_1 = ecx_8
                        int32_t* var_48_1 = edx_4
                        int32_t k_1 = 3
                        int32_t k
                        
                        do
                            int32_t eax_18 = *ecx_8
                            
                            if (eax_18 == 0xffffffff)
                                *(edx_4 + ecx_8) = 0xffffffff
                            else
                                int32_t esi_1 = *(arg4 + (eax_18 << 2))
                                uint32_t temp1_1
                                
                                if (esi_1 u>= edi_3 && esi_1 u< eax_12)
                                    temp1_1 = modu.dp.d(0:var_8_1, 3)
                                
                                if (esi_1 u< edi_3 || esi_1 u>= eax_12
                                        || *var_18_1 == eax_17[temp1_1]
                                        || *var_18_1 == eax_17[modu.dp.d(0:(var_8_1 + 1), 3)])
                                    esi_1 = 0xffffffff
                                else
                                    int32_t eax_31 = sub_40d636(arg6 + arg5[esi_1] * 0xc, *var_14_1)
                                    int32_t ecx_13 = *(ebx + 0x24c)
                                    
                                    if (*(ecx_13 + ((var_10_1 + var_8_1) << 2) - 4) != *(ecx_13
                                            + ((modu.dp.d(0:(eax_31 + 1), 3) + esi_1 * 3) << 2))
                                            || *(ecx_13 + ((var_10_1 + temp1_1) << 2))
                                            != *(ecx_13 + ((esi_1 * 3 + eax_31) << 2)))
                                        esi_1 = 0xffffffff
                                    
                                    ebx = var_3c
                                
                                edx_4 = var_48_1
                                ecx_8 = var_18_1
                                *(edx_4 + ecx_8) = esi_1
                            
                            var_8_1 += 1
                            ecx_8 = &ecx_8[1]
                            k = k_1
                            k_1 -= 1
                            var_18_1 = ecx_8
                        while (k != 1)
                        var_28_1 += 0xc
                        var_14_1 = &var_14_1[1]
                        var_10_1 += 3
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                i_1 += 1
                var_1c_1 += 0x14
            while (i_1 u< *(ebx + 0x260))
            
            i_2 = 0
        
        if (*(ebx + 0x264) u> 0)
            int32_t* ecx_14 = arg5
            int32_t* edx_16 = arg4 - ecx_14
            
            do
                *(edx_16 + ecx_14) = i_2
                *ecx_14 = i_2
                i_2 += 1
                ecx_14 = &ecx_14[1]
            while (i_2 u< *(ebx + 0x264))
        
        void var_b0
        __builtin_memcpy(&var_80, sub_40c283(&var_b0, ebx, var_c_1, var_24_1), 0x30)
        sub_40c2a7(&var_b0)
        int32_t result_1
        
        if (temp3_1 == 0)
            int32_t eax_41
            
            if ((arg3 & 0x40) == 0)
                eax_41 = *(ebx + 0x278)
            else
                eax_41 = 7
            
            result_1 = sub_4122c6(ebx, &var_80, arg4, arg5, var_40_1, eax_41)
        else
            result_1 = sub_4121d5(ebx, &var_80, arg4, arg5)
        
        result = result_1
    else
        result = 0x8007000e
    
    j__free(var_c_1)
else
    result = 0x8876086c

sub_40c2a7(&var_80)
return result
