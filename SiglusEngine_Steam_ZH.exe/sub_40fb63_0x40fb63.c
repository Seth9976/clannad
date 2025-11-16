// 函数: sub_40fb63
// 地址: 0x40fb63
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_5c = edi
uint32_t temp0 = divu.dp.d(0:arg3, 3)
int32_t* ebx = arg4
int32_t result = 0
int32_t var_2c = 0
void* esi = ebx * 3
void* var_24 = esi
uint32_t edi_2 = temp0 << 2
int32_t* eax_2 = sub_745f3f(edi_2)
int32_t eax_5 = sub_745f3f(esi * 0x14)

if (eax_2 == 0 || eax_5 == 0)
    result = 0x8007000e
else
    __builtin_memset(__builtin_memset(eax_2, 0, edi_2 u>> 2 << 2), 0, edi_2 & 3)
    void* edx_3
    
    if (arg6 != 0)
        edx_3 = arg5
    else
        int32_t var_4c
        int32_t var_4c_1 = var_4c & arg6
        int32_t var_44
        int32_t var_44_1 = var_44 & arg6
        arg6 = 1
        void var_50
        edx_3 = &var_50
        int32_t* var_48_1 = ebx
        int32_t var_40_1 = arg3
    
    void* var_14_1 = edx_3
    uint32_t var_3c
    
    if (arg6 u> 0)
        void* ecx_5 = edx_3 + 4
        void* var_10_1 = ecx_5
        int32_t i_3 = arg6
        int32_t i
        
        do
            int32_t eax_9 = *ecx_5
            int32_t edi_6 = *(ecx_5 + 4) + eax_9
            int32_t var_18_1 = edi_6
            arg3 = eax_9
            
            if (eax_9 u< edi_6)
                int16_t* esi_1 = arg1 + eax_9 * 6 + 4
                
                do
                    uint32_t ecx_7 = zx.d(esi_1[-2])
                    
                    if (ecx_7 != arg9)
                        uint32_t eax_12
                        uint32_t ecx_10
                        
                        if (arg7 == 0)
                            eax_12 = zx.d(*esi_1)
                            var_3c = ecx_7
                            ecx_10 = zx.d(esi_1[-1])
                        else
                            uint32_t edx_4 = zx.d(*esi_1)
                            var_3c = *(arg7 + (ecx_7 << 2))
                            ecx_10 = *(arg7 + (zx.d(esi_1[-1]) << 2))
                            eax_12 = *(arg7 + (edx_4 << 2))
                        
                        uint32_t var_38_1 = ecx_10
                        uint32_t var_34_1 = eax_12
                        
                        if (var_3c != ecx_10 && var_3c != eax_12 && ecx_10 != eax_12)
                            int32_t ecx_11 = 1
                            int32_t* edi_7 = &var_3c
                            arg5 = 3
                            int16_t* j
                            
                            do
                                sub_40af29(*edi_7, (&var_3c)[modu.dp.d(0:ecx_11, 3)], 
                                    (&var_3c)[modu.dp.d(0:(ecx_11 + 1), 3)], arg3, eax_2, eax_5, 
                                    temp0, &var_2c)
                                ecx_11 += 1
                                edi_7 = &edi_7[1]
                                j = arg5
                                arg5 -= 1
                            while (j != 1)
                            edi_6 = var_18_1
                            ebx = arg4
                    
                    arg3 += 1
                    esi_1 = &esi_1[3]
                while (arg3 u< edi_6)
                
                esi = var_24
                ecx_5 = var_10_1
                edx_3 = var_14_1
            
            ecx_5 += 0x14
            i = i_3
            i_3 -= 1
            var_10_1 = ecx_5
        while (i != 1)
    
    int32_t ecx_13 = ebx * 0xc
    __builtin_memset(__builtin_memset(arg8, 0xffffffff, ecx_13 u>> 2 << 2), 0xff, ecx_13 & 3)
    
    if (arg6 u> 0)
        void* ecx_17 = edx_3 + 4
        void* var_20_1 = ecx_17
        int32_t i_2 = arg6
        int32_t i_1
        
        do
            int32_t edx_9 = *ecx_17
            int32_t eax_18 = *(ecx_17 + 4) + edx_9
            arg3 = edx_9
            
            if (edx_9 u< eax_18)
                int32_t eax_20 = edx_9 * 0xc
                int32_t* ebx_2 = eax_20 + arg8
                int16_t* ecx_20 = arg1 + edx_9 * 6 + 4
                arg4 = ebx_2
                arg5 = ecx_20
                void* var_14_2 = &var_3c - eax_20 - arg8
                
                do
                    uint32_t edi_13 = zx.d(ecx_20[-2])
                    
                    if (edi_13 != arg9)
                        uint32_t eax_22
                        uint32_t edi_16
                        
                        if (arg7 == 0)
                            eax_22 = zx.d(*ecx_20)
                            var_3c = edi_13
                            edi_16 = zx.d(ecx_20[-1])
                        else
                            uint32_t ebx_3 = zx.d(*ecx_20)
                            var_3c = *(arg7 + (edi_13 << 2))
                            edi_16 = *(arg7 + (zx.d(ecx_20[-1]) << 2))
                            eax_22 = *(arg7 + (ebx_3 << 2))
                        
                        uint32_t var_38_2 = edi_16
                        uint32_t var_34_2 = eax_22
                        
                        if (var_3c == edi_16 || var_3c == eax_22 || edi_16 == eax_22)
                            ebx_2 = arg4
                            *ebx_2 = 0xffffffff
                            ebx_2[1] = 0xffffffff
                            ebx_2[2] = 0xffffffff
                        else
                            int32_t* esi_2 = arg4
                            int32_t edi_17 = 1
                            
                            do
                                if (*esi_2 == 0xffffffff)
                                    int32_t ebx_4 = *(var_14_2 + esi_2)
                                    int32_t eax_25 = (&var_3c)[modu.dp.d(0:edi_17, 3)]
                                    int32_t eax_28 = sub_40db19(eax_25, ebx_4, 
                                        (&var_3c)[modu.dp.d(0:(edi_17 + 1), 3)], eax_2, temp0, 
                                        0xffffffff, arg2, arg10)
                                    *esi_2 = eax_28
                                    
                                    if (eax_28 != 0xffffffff)
                                        sub_40af74(ebx_4, eax_25, arg3, eax_2, temp0)
                                        int32_t ecx_21 = 0
                                        
                                        if (edi_17 - 1 u<= 0)
                                        label_40fe25:
                                            int32_t eax_30 = *esi_2
                                            arg6 = 0
                                            int16_t* ecx_23 = arg1 + eax_30 * 6
                                            
                                            do
                                                uint32_t edx_16 = zx.d(*ecx_23)
                                                
                                                if (arg7 != 0)
                                                    edx_16 = *(arg7 + (edx_16 << 2))
                                                
                                                if (edx_16 == eax_25)
                                                    break
                                                
                                                arg6 += 1
                                                ecx_23 = &ecx_23[1]
                                            while (arg6 u< 3)
                                            
                                            *(arg8 + ((eax_30 * 3 + arg6) << 2)) = arg3
                                        else
                                            while (*esi_2 != arg4[ecx_21])
                                                ecx_21 += 1
                                                
                                                if (ecx_21 u>= edi_17 - 1)
                                                    goto label_40fe25
                                            
                                            *esi_2 = 0xffffffff
                                    
                                    edx_9 = arg3
                                    ecx_20 = arg5
                                
                                edi_17 += 1
                                esi_2 = &esi_2[1]
                            while (edi_17 - 1 u< 3)
                            
                            esi = var_24
                            ebx_2 = arg4
                    
                    var_14_2 -= 0xc
                    edx_9 += 1
                    ecx_20 = &ecx_20[3]
                    ebx_2 = &ebx_2[3]
                    arg3 = edx_9
                    arg5 = ecx_20
                    arg4 = ebx_2
                while (edx_9 u< eax_18)
                
                ecx_17 = var_20_1
            
            ecx_17 += 0x14
            i_1 = i_2
            i_2 -= 1
            var_20_1 = ecx_17
        while (i_1 != 1)
    
    if (var_2c s> esi)
        result = 0x80004005

j__free(eax_2)
j__free(eax_5)
return result
