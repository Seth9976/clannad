// 函数: sub_46f2d5
// 地址: 0x46f2d5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
char* edi_1 = nullptr
int32_t var_10 = 0
int32_t var_14 = 0

if (arg2 != 0)
    if (arg5 == 0 && arg9 != 0)
        arg7 = arg9
        arg8 = &var_14
        arg5 = 1
    
    if (arg6 == 0)
        void* esi_1 = arg10
        
        if (esi_1 != 0 && arg1[0x21] == 0)
            while (true)
                void* eax_3 = *(esi_1 + 8)
                arg9 = nullptr
                char* var_c_1 = nullptr
                
                if (*(eax_3 + 4) == 0x11)
                    void* eax_4 = *(eax_3 + 0x10)
                    char* ebx_1 = *(*(eax_3 + 0x14) + 0x18)
                    void var_20
                    
                    if (eax_4 == 0)
                        var_c_1 = ebx_1
                    else if (sub_46b27d(*(eax_4 + 0x18), 0, &var_20) s>= 0)
                        int32_t eax_7 = arg1[4]
                        int32_t var_1c
                        
                        if (eax_7 == var_1c)
                            arg9 = ebx_1
                        else if ((eax_7 & 0xffff0000) == var_1c)
                            edi_1 = ebx_1
                
                void* eax_9 = *(esi_1 + 0xc)
                int32_t* ebx_2 = nullptr
                
                if (arg9 != 0)
                label_46f3d4:
                    void* ecx_3 = arg1[2]
                    int32_t* eax_12
                    
                    if (arg4 u>= *(ecx_3 + 4))
                        eax_12 = nullptr
                    else
                        eax_12 = *(*(ecx_3 + 0x10) + (arg4 << 2))
                    
                    if (eax_12 == 0)
                        return 0x80004005
                    
                    int32_t* eax_13 = sub_49f5fb(ecx_3, eax_12)
                    void* ecx_4 = arg1[2]
                    arg4 = eax_13
                    
                    if (eax_13 u< *(ecx_4 + 4))
                        ebx_2 = *(*(ecx_4 + 0x10) + (eax_13 << 2))
                    
                    if (ebx_2 == 0)
                        return 0x8007000e
                    
                    int32_t eax_14 = ebx_2[1]
                    
                    if ((eax_14:1.b & 8) != 0)
                        char* eax_19 = *ebx_2
                        
                        do
                            ecx_4.b = *eax_19
                            eax_19 = &eax_19[1]
                        while (ecx_4.b != 0)
                        
                        void* eax_20 = eax_19 - &eax_19[1]
                        char* eax_21 = arg9
                        
                        do
                            ecx_4.b = *eax_21
                            eax_21 = &eax_21[1]
                        while (ecx_4.b != 0)
                        
                        int32_t* eax_22 = eax_21 - &eax_21[1]
                        void* eax_25 = sub_46b465(*arg1, eax_22 + eax_20 + 3, 4)
                        
                        if (eax_25 == 0)
                            return 0x8007000e
                        
                        int32_t esi_5
                        int32_t edi_5
                        edi_5, esi_5 = __builtin_memcpy(eax_25, *ebx_2, eax_20 u>> 2 << 2)
                        __builtin_memcpy(edi_5, esi_5, eax_20 & 3)
                        void* edx_6 = eax_25 + eax_20
                        *edx_6 = 0x3b
                        *(edx_6 + 1) = 0x20
                        int32_t esi_7
                        int32_t edi_7
                        edi_7, esi_7 = __builtin_memcpy(edx_6 + 2, arg9, eax_22 u>> 2 << 2)
                        __builtin_memcpy(edi_7, esi_7, eax_22 & 3)
                        *(eax_22 + eax_25 + eax_20 + 2) = 0
                        *ebx_2 = eax_25
                    else
                        int32_t eax_15 = eax_14 | 0x840
                        *ebx_2 = arg9
                        ebx_2[1] = eax_15
                        
                        if ((eax_15.b & 0x10) != 0 && eax_15.b s>= 0)
                            if ((0x200 & eax_15) != 0 && (*(arg1[2] + 0x70) & 0x200) != 0)
                                ebx_2[1] = eax_15 | 0x400
                            
                            int32_t eax_17 = ebx_2[1]
                            
                            if ((0x200 & eax_17) == 0 && (*(arg1[2] + 0x71) & 4) != 0)
                                ebx_2[1] = eax_17 | 0x100400
                    
                    arg6 = 1
                else
                    arg9 = edi_1 == 0 ? var_c_1 : edi_1
                    
                    if (arg9 != 0)
                        goto label_46f3d4
                
                edi_1 = nullptr
                
                if (eax_9 == 0)
                    break
                
                esi_1 = eax_9
    
    int32_t* var_30_1 = &var_10
    int32_t* var_34_1 = arg8
    int32_t result = sub_46e6b0(arg1, arg2, arg3, arg4, arg5, arg6, arg7)
    
    if (result s< 0)
        return result

if (arg11 != 0)
    *arg11 = var_10

return 0
