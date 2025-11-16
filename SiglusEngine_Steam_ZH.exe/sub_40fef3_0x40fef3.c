// 函数: sub_40fef3
// 地址: 0x40fef3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_60 = edi
void* eax = arg5 * 3
uint32_t temp0 = divu.dp.d(0:arg4, 3)
int32_t result = 0
int32_t var_2c = 0
uint32_t edi_2 = temp0 << 2
int32_t* eax_3 = sub_745f3f(edi_2)
int32_t eax_7 = sub_745f3f(eax * 0x14)

if (eax_3 == 0 || eax_7 == 0)
    result = 0x8007000e
else
    __builtin_memset(__builtin_memset(eax_3, 0, edi_2 u>> 2 << 2), 0, edi_2 & 3)
    void* edx_3
    
    if (arg7 != 0)
        edx_3 = arg6
    else
        int32_t var_50
        int32_t var_50_1 = var_50 & arg7
        int32_t var_48
        int32_t var_48_1 = var_48 & arg7
        arg7 = 1
        void var_54
        edx_3 = &var_54
        int32_t* var_4c_1 = arg5
        int32_t var_44_1 = arg4
    
    void* var_14_1 = edx_3
    int32_t var_40
    int32_t var_3c
    
    if (arg7 u> 0)
        void* ecx_5 = edx_3 + 4
        void* var_c_1 = ecx_5
        int32_t i_3 = arg7
        int32_t i
        
        do
            int32_t eax_10 = *ecx_5
            void* edi_6 = *(ecx_5 + 4) + eax_10
            arg6 = edi_6
            arg4 = eax_10
            
            if (eax_10 u< edi_6)
                int32_t* esi_1 = arg2 + eax_10 * 0xc + 8
                
                do
                    int32_t ecx_7 = esi_1[-2]
                    
                    if (ecx_7 != arg10)
                        int32_t eax_13
                        int32_t ecx_10
                        
                        if (arg8 == 0)
                            eax_13 = *esi_1
                            var_40 = ecx_7
                            ecx_10 = esi_1[-1]
                        else
                            int32_t edx_4 = *esi_1
                            var_40 = *(arg8 + (ecx_7 << 2))
                            ecx_10 = *(arg8 + (esi_1[-1] << 2))
                            eax_13 = *(arg8 + (edx_4 << 2))
                        
                        bool cond:7_1 = var_40 == ecx_10
                        var_3c = ecx_10
                        int32_t var_38_1 = eax_13
                        
                        if (not(cond:7_1) && var_40 != eax_13 && ecx_10 != eax_13)
                            int32_t var_18_1 = 3
                            int32_t var_24_1 = 2
                            sub_40af29(var_40, (&var_40)[modu.dp.d(0:1, 3)], 
                                (&var_40)[modu.dp.d(0:2, 3)], arg4, eax_3, eax_7, temp0, &var_2c)
                            int32_t var_18_2 = var_18_1 - 1
                            int32_t __saved_ebp
                            int32_t entry_ebx
                            return sub_41004e(var_24_1, &__saved_ebp, esi_1, &var_3c, arg1, 
                                entry_ebx) __tailcall
                    
                    arg4 += 1
                    esi_1 = &esi_1[3]
                while (arg4 u< edi_6)
                
                edx_3 = var_14_1
                ecx_5 = var_c_1
            
            ecx_5 += 0x14
            i = i_3
            i_3 -= 1
            var_c_1 = ecx_5
        while (i != 1)
    
    int32_t ecx_14 = arg5 * 0xc
    __builtin_memset(__builtin_memset(arg9, 0xffffffff, ecx_14 u>> 2 << 2), 0xff, ecx_14 & 3)
    
    if (arg7 u> 0)
        void* edx_10 = edx_3 + 4
        void* var_20_1 = edx_10
        int32_t i_2 = arg7
        int32_t i_1
        
        do
            int32_t eax_19 = *edx_10
            void* esi_4 = *(edx_10 + 4) + eax_19
            int32_t edi_11 = eax_19
            arg6 = esi_4
            arg4 = edi_11
            
            if (edi_11 u< esi_4)
                int32_t eax_21 = edi_11 * 0xc
                void* ebx_2 = &var_40 - eax_21 - arg9
                arg5 = arg9 + eax_21
                int32_t* ecx_20 = eax_21 + arg2 + 8
                int32_t* var_c_2 = ecx_20
                void* var_18_3 = ebx_2
                
                do
                    int32_t edx_12 = ecx_20[-2]
                    
                    if (edx_12 != arg10)
                        int32_t eax_25
                        int32_t edx_15
                        
                        if (arg8 == 0)
                            eax_25 = *ecx_20
                            var_40 = edx_12
                            edx_15 = ecx_20[-1]
                        else
                            int32_t esi_5 = *ecx_20
                            var_40 = *(arg8 + (edx_12 << 2))
                            edx_15 = *(arg8 + (ecx_20[-1] << 2))
                            eax_25 = *(arg8 + (esi_5 << 2))
                            esi_4 = arg6
                        
                        bool cond:8_1 = var_40 == edx_15
                        var_3c = edx_15
                        int32_t var_38_2 = eax_25
                        
                        if (cond:8_1 || var_40 == eax_25 || edx_15 == eax_25)
                            *arg5 = 0xffffffff
                            arg5[1] = 0xffffffff
                            *(arg9 - arg2 + ecx_20) = 0xffffffff
                        else
                            int32_t* esi_6 = arg5
                            int32_t edi_12 = 1
                            
                            do
                                if (*esi_6 == 0xffffffff)
                                    int32_t ebx_3 = *(esi_6 + ebx_2)
                                    int32_t eax_27 = (&var_40)[modu.dp.d(0:edi_12, 3)]
                                    int32_t eax_30 = sub_40db19(eax_27, ebx_3, 
                                        (&var_40)[modu.dp.d(0:(edi_12 + 1), 3)], eax_3, temp0, 
                                        0xffffffff, arg3, arg11)
                                    *esi_6 = eax_30
                                    
                                    if (eax_30 != 0xffffffff)
                                        sub_40af74(ebx_3, eax_27, arg4, eax_3, temp0)
                                        int32_t ecx_21 = 0
                                        
                                        if (edi_12 - 1 u<= 0)
                                        label_4101b0:
                                            int32_t eax_32 = *esi_6
                                            arg7 = 0
                                            int32_t* ecx_23 = arg2 + eax_32 * 0xc
                                            
                                            do
                                                int32_t edx_22 = *ecx_23
                                                
                                                if (arg8 != 0)
                                                    edx_22 = *(arg8 + (edx_22 << 2))
                                                
                                                if (edx_22 == eax_27)
                                                    break
                                                
                                                arg7 += 1
                                                ecx_23 = &ecx_23[1]
                                            while (arg7 u< 3)
                                            
                                            *(arg9 + ((eax_32 * 3 + arg7) << 2)) = arg4
                                        else
                                            while (*esi_6 != arg5[ecx_21])
                                                ecx_21 += 1
                                                
                                                if (ecx_21 u>= edi_12 - 1)
                                                    goto label_4101b0
                                            
                                            *esi_6 = 0xffffffff
                                    
                                    ecx_20 = var_c_2
                                
                                ebx_2 = var_18_3
                                edi_12 += 1
                                esi_6 = &esi_6[1]
                            while (edi_12 - 1 u< 3)
                            
                            edi_11 = arg4
                            esi_4 = arg6
                    
                    arg5 = &arg5[3]
                    edi_11 += 1
                    ebx_2 -= 0xc
                    ecx_20 = &ecx_20[3]
                    arg4 = edi_11
                    var_18_3 = ebx_2
                    var_c_2 = ecx_20
                while (edi_11 u< esi_4)
                
                edx_10 = var_20_1
            
            edx_10 += 0x14
            i_1 = i_2
            i_2 -= 1
            var_20_1 = edx_10
        while (i_1 != 1)
    
    if (var_2c s> eax)
        result = 0x80004005

j__free(eax_3)
j__free(eax_7)
return result
