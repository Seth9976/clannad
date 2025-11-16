// 函数: sub_44550b
// 地址: 0x44550b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_1 = *arg2
int32_t result = 0
int32_t edx = *eax_1
int32_t i_7 = eax_1[4]
int32_t ecx = eax_1[1]
int32_t edi
int32_t var_1c = edi
int32_t i_5 = i_7

if (i_7 u< 1)
    i_7 = 1
    i_5 = 1

if (ecx s>= 0)
    if (ecx s<= 3)
        if (edx == 1 || edx == 2 || edx == 3)
            int32_t eax_93 = (eax_1[6] * eax_1[5] * i_7) << 2
            int32_t esi_9
            int32_t edi_9
            edi_9, esi_9 = __builtin_memcpy(*arg3, *arg4, eax_93 u>> 2 << 2)
            __builtin_memcpy(edi_9, esi_9, eax_93 & 3)
            *arg3 += eax_93
            *arg4 += eax_93
            *arg2 += 0x1c
            return result
    else if (ecx == 4)
        bool cond:9_1
        
        if (edx s> 0xf)
            if (edx == 0x10)
                if (i_7 != 0)
                    int32_t i
                    
                    do
                        int32_t eax_66
                        
                        if (arg6 != 0)
                            eax_66 = *(*(arg6 + 8) + (**arg4 << 2))
                        else
                            eax_66 = **arg4
                        
                        void* edi_6 = *(arg7 + 0x18) + eax_66 * 0x18
                        int32_t eax_72
                        
                        if (arg5 != 0)
                            eax_72 = *(*(arg5 + 8) + (**arg3 << 2))
                        else
                            eax_72 = **arg3
                        
                        void* esi_7 = *(arg1 + 0x18) + eax_72 * 0x18
                        
                        if (*(edi_6 + 8) != 0)
                            int32_t* eax_75 = *(edi_6 + 8)
                            (*(*eax_75 + 4))(eax_75)
                        
                        int32_t* eax_76 = *(esi_7 + 8)
                        
                        if (eax_76 != 0)
                            (*(*eax_76 + 8))(eax_76)
                            *(esi_7 + 8) = 0
                        
                        *(esi_7 + 8) = *(edi_6 + 8)
                        *(esi_7 + 0xc) = *(edi_6 + 0xc)
                        
                        if (*(arg1 + 0xc) == *(arg7 + 0xc) || *(edi_6 + 8) == 0)
                            if (*(edi_6 + 4) != 0)
                                int32_t* eax_81 = *(edi_6 + 4)
                                (*(*eax_81 + 4))(eax_81)
                            
                            int32_t* eax_82 = *(esi_7 + 4)
                            
                            if (eax_82 != 0)
                                (*(*eax_82 + 8))(eax_82)
                                *(esi_7 + 4) = 0
                            
                            *(esi_7 + 4) = *(edi_6 + 4)
                            *(esi_7 + 0x14) ^=
                                (*(edi_6 + 0x14) << 0x1e s>> 0x1e ^ *(esi_7 + 0x14)) & 2
                        else
                            int32_t* eax_80 = *(esi_7 + 4)
                            
                            if (eax_80 != 0)
                                (*(*eax_80 + 8))(eax_80)
                                *(esi_7 + 4) = 0
                            
                            if (arg5 != 0)
                                return 0x80004005
                            
                            sub_44354c(arg1, esi_7)
                        
                        *arg3 += 4
                        *arg4 += 4
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                
                *arg2 += 0x14
                return result
            
            if (edx s> 0x10)
                cond:9_1 = edx s<= 0x12
            label_445831:
                
                if (cond:9_1)
                    *arg2 += 0x14
                    return result
        else
            if (edx == 0xf)
                if (i_7 != 0)
                    int32_t i_1
                    
                    do
                        int32_t eax_37
                        
                        if (arg6 != 0)
                            eax_37 = *(*(arg6 + 8) + (**arg4 << 2))
                        else
                            eax_37 = **arg4
                        
                        void* edi_4 = *(arg7 + 0x18) + eax_37 * 0x18
                        int32_t eax_43
                        
                        if (arg5 != 0)
                            eax_43 = *(*(arg5 + 8) + (**arg3 << 2))
                        else
                            eax_43 = **arg3
                        
                        void* esi_6 = *(arg1 + 0x18) + eax_43 * 0x18
                        
                        if (*(edi_4 + 8) != 0)
                            int32_t* eax_46 = *(edi_4 + 8)
                            (*(*eax_46 + 4))(eax_46)
                        
                        int32_t* eax_47 = *(esi_6 + 8)
                        
                        if (eax_47 != 0)
                            (*(*eax_47 + 8))(eax_47)
                            *(esi_6 + 8) = 0
                        
                        *(esi_6 + 8) = *(edi_4 + 8)
                        *(esi_6 + 0xc) = *(edi_4 + 0xc)
                        
                        if (*(arg1 + 0xc) == *(arg7 + 0xc) || *(edi_4 + 8) == 0)
                            if (*(edi_4 + 4) != 0)
                                int32_t* eax_52 = *(edi_4 + 4)
                                (*(*eax_52 + 4))(eax_52)
                            
                            int32_t* eax_53 = *(esi_6 + 4)
                            
                            if (eax_53 != 0)
                                (*(*eax_53 + 8))(eax_53)
                                *(esi_6 + 4) = 0
                            
                            *(esi_6 + 4) = *(edi_4 + 4)
                            *(esi_6 + 0x14) ^=
                                (*(edi_4 + 0x14) << 0x1e s>> 0x1e ^ *(esi_6 + 0x14)) & 2
                        else
                            int32_t* eax_51 = *(esi_6 + 4)
                            
                            if (eax_51 != 0)
                                (*(*eax_51 + 8))(eax_51)
                                *(esi_6 + 4) = 0
                            
                            if (arg5 != 0)
                                return 0x80004005
                            
                            sub_4435aa(arg1, esi_6)
                        
                        *arg3 += 4
                        *arg4 += 4
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                
                *arg2 += 0x14
                return result
            
            if (edx == 4)
                if (i_7 != 0)
                    int32_t i_6 = i_7
                    int32_t i_2
                    
                    do
                        int32_t eax_21
                        
                        if (arg6 != 0)
                            eax_21 = *(*(arg6 + 8) + (**arg4 << 2))
                        else
                            eax_21 = **arg4
                        
                        void* edi_3 = *(arg7 + 0x18) + eax_21 * 0x18
                        int32_t eax_27
                        
                        if (arg5 != 0)
                            eax_27 = *(*(arg5 + 8) + (**arg3 << 2))
                        else
                            eax_27 = **arg3
                        
                        void* esi_5 = *(arg1 + 0x18) + eax_27 * 0x18
                        
                        if (*(edi_3 + 4) != 0)
                            int32_t* eax_30 = *(edi_3 + 4)
                            (*(*eax_30 + 4))(eax_30)
                        
                        int32_t* eax_31 = *(esi_5 + 4)
                        
                        if (eax_31 != 0)
                            (*(*eax_31 + 8))(eax_31)
                            *(esi_5 + 4) = 0
                        
                        *(esi_5 + 4) = *(edi_3 + 4)
                        *arg3 += 4
                        *arg4 += 4
                        i_2 = i_6
                        i_6 -= 1
                    while (i_2 != 1)
                
                *arg2 += 0x14
                return result
            
            if (edx s> 4)
                if (edx s> 9)
                    cond:9_1 = edx s<= 0xe
                    goto label_445831
                
                if (i_7 != 0)
                    int32_t* ecx_2 = arg3
                    int32_t i_3
                    
                    do
                        int32_t eax_6
                        
                        if (arg6 != 0)
                            eax_6 = *(*(arg6 + 8) + (**arg4 << 2))
                        else
                            eax_6 = **arg4
                        
                        void* edi_2 = *(arg7 + 0x18) + eax_6 * 0x18
                        int32_t eax_11
                        
                        if (arg5 != 0)
                            eax_11 = *(*(arg5 + 8) + (**ecx_2 << 2))
                        else
                            eax_11 = **ecx_2
                        
                        void* esi_4 = *(arg1 + 0x18) + eax_11 * 0x18
                        
                        if (*(arg1 + 0xc) != *(arg7 + 0xc))
                            int32_t* eax_18 = *(esi_4 + 4)
                            
                            if (eax_18 != 0)
                                (*(*eax_18 + 8))(eax_18)
                                *(esi_4 + 4) = 0
                            
                            if (arg5 != 0)
                                return 0x80004005
                        else
                            if (*(edi_2 + 4) != 0)
                                int32_t* eax_15 = *(edi_2 + 4)
                                (*(*eax_15 + 4))(eax_15)
                            
                            int32_t* eax_16 = *(esi_4 + 4)
                            
                            if (eax_16 != 0)
                                (*(*eax_16 + 8))(eax_16)
                                *(esi_4 + 4) = 0
                            
                            *(esi_4 + 4) = *(edi_2 + 4)
                        
                        ecx_2 = arg3
                        *ecx_2 += 4
                        *arg4 += 4
                        i_3 = i_5
                        i_5 -= 1
                    while (i_3 != 1)
                
                *arg2 += 0x14
                return result
    else if (ecx == 5)
        int32_t edi_1 = eax_1[5]
        *arg2 = &eax_1[6]
        
        if (i_7 != 0)
            int32_t i_4
            
            do
                int32_t ebx = 0
                *arg2 = &eax_1[6]
                
                if (edi_1 u> 0)
                    do
                        int32_t result_1 = sub_44550b(arg2, arg3, arg4, arg5, arg6, arg7)
                        result = result_1
                        
                        if (result_1 s< 0)
                            return result
                        
                        ebx += 1
                    while (ebx u< edi_1)
                
                i_4 = i_5
                i_5 -= 1
            while (i_4 != 1)
        
        return result

return 0x80004005
