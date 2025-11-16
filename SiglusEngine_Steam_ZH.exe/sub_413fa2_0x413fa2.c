// 函数: sub_413fa2
// 地址: 0x413fa2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t eax_2 = *(arg1 + 0x274)
int32_t edi
int32_t var_b4 = edi
int32_t var_64_1

if (eax_2 != 0)
    var_64_1 = eax_2

if (eax_2 == 0 || (arg3 & 0x40) != 0)
    var_64_1 = 0xc

int32_t eax_5

if ((&data_4000000 & arg2) == 0 || eax_2 != 0 || (arg2 & &__dos_header) != 0)
    eax_5 = arg2
else
    eax_5 = (arg2 & 0xfbffffff) | 0x8000000

uint32_t var_2c[0x4]
var_2c[0] = 0
int32_t var_1c = 0
int32_t var_c = 0
int32_t temp3_1

if (arg6 != 0)
    temp3_1 = eax_5 & 0x8000000

int32_t result

if (arg6 != 0 && (temp3_1 == 0 || (&data_4000000 & eax_5) == 0))
    int32_t i_3 = *(arg1 + 0x260)
    int32_t var_50_1 = 0
    
    if (i_3 u> 0)
        int32_t* eax_7 = *(arg1 + 0x25c) + 8
        int32_t i
        
        do
            int32_t edx_1 = *eax_7
            
            if (var_50_1 u< edx_1)
                var_50_1 = edx_1
            
            eax_7 = &eax_7[5]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t edi_2 = *(arg1 + 0x264)
    int32_t eax_10 = sub_745f3f(edi_2 * 6)
    int32_t var_34_1
    
    if (eax_10 == 0)
        var_34_1 = 0
    else
        sub_61cdd0(eax_10, 6, edi_2, sub_52e900)
        var_34_1 = eax_10
    
    int32_t i_2 = 0
    
    if (var_34_1 != 0)
        int32_t i_1 = 0
        
        if (*(arg1 + 0x260) u> 0)
            int32_t var_58_1 = 0
            
            do
                void* eax_12 = *(arg1 + 0x25c) + var_58_1
                int32_t edi_3 = *(eax_12 + 4)
                int32_t edx_3 = *(eax_12 + 8) + edi_3
                int32_t var_84_1 = edx_3
                
                if (edi_3 u< edx_3)
                    int32_t var_44_1 = edi_3 * 3
                    int32_t* var_48_1 = &arg5[edi_3]
                    int16_t* ecx_3 = var_34_1 + edi_3 * 6
                    int32_t j_1 = edx_3 - edi_3
                    int32_t j
                    
                    do
                        int32_t* eax_22 = arg6 + *var_48_1 * 0xc
                        int32_t* var_74_1 = eax_22
                        int32_t var_38_1 = 1
                        int16_t* var_78_1 = ecx_3
                        int32_t* var_3c_1 = eax_22
                        int32_t k_1 = 3
                        int32_t k
                        
                        do
                            if (*eax_22 == 0xffffffff)
                                *ecx_3 = 0xffff
                            else
                                uint32_t eax_24 = zx.d(*(arg4 + (zx.d(*eax_22) << 2)))
                                uint32_t esi_2 = zx.d(eax_24.w)
                                int16_t var_54_1 = eax_24.w
                                
                                if (esi_2 u< edi_3 || esi_2 u>= edx_3)
                                    var_54_1 = -1
                                else
                                    uint32_t temp1_1 = modu.dp.d(0:var_38_1, 3)
                                    
                                    if (*var_3c_1 == var_74_1[temp1_1] || *var_3c_1
                                            == var_74_1[modu.dp.d(0:(var_38_1 + 1), 3)])
                                        var_54_1 = -1
                                    else
                                        int32_t eax_35 =
                                            sub_40d636(arg6 + arg5[esi_2] * 0xc, *var_48_1)
                                        uint32_t ecx_8 = esi_2 * 3
                                        int32_t ecx_9 = *(arg1 + 0x24c)
                                        eax_24.w = *(ecx_9 + ((var_44_1 + var_38_1) << 1) - 2)
                                        
                                        if (eax_24.w != *(ecx_9
                                                + ((modu.dp.d(0:(eax_35 + 1), 3) + ecx_8) << 1)))
                                            var_54_1 = -1
                                        else
                                            int32_t edx_13
                                            edx_13.w = *(ecx_9 + ((var_44_1 + temp1_1) << 1))
                                            
                                            if (edx_13.w != *(ecx_9 + ((ecx_8 + eax_35) << 1)))
                                                var_54_1 = -1
                                
                                eax_24.w = var_54_1
                                ecx_3 = var_78_1
                                edx_3 = var_84_1
                                *ecx_3 = eax_24.w
                            
                            eax_22 = &var_3c_1[1]
                            var_38_1 += 1
                            ecx_3 = &ecx_3[1]
                            k = k_1
                            k_1 -= 1
                            var_3c_1 = eax_22
                            var_78_1 = ecx_3
                        while (k != 1)
                        var_48_1 = &var_48_1[1]
                        var_44_1 += 3
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                i_1 += 1
                var_58_1 += 0x14
            while (i_1 u< *(arg1 + 0x260))
            
            i_2 = 0
        
        if (*(arg1 + 0x264) u> 0)
            int32_t* ecx_11 = arg5
            int32_t* edx_15 = arg4 - ecx_11
            
            do
                *(edx_15 + ecx_11) = i_2
                *ecx_11 = i_2
                i_2 += 1
                ecx_11 = &ecx_11[1]
            while (i_2 u< *(arg1 + 0x264))
        
        void var_a8
        __builtin_memcpy(&var_2c, sub_40c244(&var_a8, arg1, var_34_1, var_50_1.w), 0x24)
        sub_40c26a(&var_a8)
        int32_t result_1
        
        if (temp3_1 == 0)
            int32_t eax_42
            
            if ((arg3 & 0x40) == 0)
                eax_42 = *(arg1 + 0x278)
            else
                eax_42 = 7
            
            result_1 = sub_412113(arg1, &var_2c, arg4, arg5, var_64_1, eax_42)
        else
            result_1 = sub_412006(arg1, &var_2c, arg4, arg5)
        
        result = result_1
    else
        result = 0x8007000e
    
    j__free(var_34_1)
else
    result = 0x8876086c

sub_40c26a(&var_2c)
sub_745f2b(__security_cookie_1)
return result
