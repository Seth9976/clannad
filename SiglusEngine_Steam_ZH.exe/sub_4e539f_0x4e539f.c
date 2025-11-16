// 函数: sub_4e539f
// 地址: 0x4e539f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t i_4 = 0
void* ecx = *(arg1 + 4)
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
__builtin_memset(arg1 + 0x1c, 0, 0x1c)
*(arg1 + 0x3c) = 0
int32_t edi
int32_t var_18 = edi
*(arg1 + 0x38) = *(ecx + 0xc)
sub_4a39e3(ecx)
int32_t eax_3 = sub_745f3f(*(arg1 + 0x38) << 2)
*(arg1 + 8) = eax_3
int32_t edi_16

if (eax_3 == 0)
    edi_16 = 0x8007000e
else
    int32_t eax_6 = sub_745f3f(*(arg1 + 0x38) << 2)
    *(arg1 + 0x1c) = eax_6
    
    if (eax_6 == 0)
        edi_16 = 0x8007000e
    else
        int32_t ecx_4 = *(arg1 + 0x38) << 2
        __builtin_memset(__builtin_memset(*(arg1 + 8), 0, ecx_4 u>> 2 << 2), 0, ecx_4 & 3)
        int32_t ecx_9 = *(arg1 + 0x38) << 2
        __builtin_memset(__builtin_memset(*(arg1 + 0x1c), 0, ecx_9 u>> 2 << 2), 0, ecx_9 & 3)
        int32_t i = 0
        
        if (*(arg1 + 0x38) u> 0)
            do
                void* edi_5 = *(*(*(arg1 + 4) + 0x18) + (i << 2))
                
                if ((*(edi_5 + 2) & 0xfff0) != 0)
                    int32_t j = 0
                    
                    if (*(edi_5 + 0xc) u> 0)
                        do
                            sub_4e4c29(arg1, i, *(*(edi_5 + 0x10) + (j << 2)))
                            j += 1
                        while (j u< *(edi_5 + 0xc))
                    
                    int32_t j_1 = 0
                    
                    if (*(edi_5 + 4) u> 0)
                        do
                            sub_4e4bb4(arg1, i, *(*(edi_5 + 8) + (j_1 << 2)))
                            j_1 += 1
                        while (j_1 u< *(edi_5 + 4))
                
                i += 1
            while (i u< *(arg1 + 0x38))
        
        int32_t eax_16 = sub_745f3f(*(arg1 + 0x38) << 2)
        *(arg1 + 0xc) = eax_16
        
        if (eax_16 == 0)
            edi_16 = 0x8007000e
        else
            int32_t eax_19 = sub_745f3f(*(arg1 + 0x38) << 2)
            *(arg1 + 0x20) = eax_19
            
            if (eax_19 == 0)
                edi_16 = 0x8007000e
            else
                int32_t ecx_20 = 0
                int32_t edi_6 = 0
                int32_t i_1 = 0
                
                if (*(arg1 + 0x38) u> 0)
                    do
                        int32_t eax_21 = i_1 << 2
                        *(eax_21 + *(arg1 + 0xc)) = ecx_20
                        ecx_20 += *(eax_21 + *(arg1 + 8))
                        *(eax_21 + *(arg1 + 0x20)) = edi_6
                        edi_6 += *(eax_21 + *(arg1 + 0x1c))
                        i_1 += 1
                    while (i_1 u< *(arg1 + 0x38))
                    
                    i_4 = 0
                
                int32_t ecx_21 = ecx_20 << 2
                int32_t eax_22 = sub_745f3f(ecx_21)
                *(arg1 + 0x10) = eax_22
                
                if (eax_22 == 0)
                    edi_16 = 0x8007000e
                else
                    int32_t eax_23 = sub_745f3f(ecx_21)
                    *(arg1 + 0x14) = eax_23
                    
                    if (eax_23 == 0)
                        edi_16 = 0x8007000e
                    else
                        int32_t eax_24 = sub_745f3f(ecx_21)
                        *(arg1 + 0x18) = eax_24
                        
                        if (eax_24 == 0)
                            edi_16 = 0x8007000e
                        else
                            int32_t eax_27 = sub_745f3f(edi_6 << 2)
                            *(arg1 + 0x24) = eax_27
                            
                            if (eax_27 == 0)
                                edi_16 = 0x8007000e
                            else
                                int32_t ecx_27 = *(arg1 + 0x38) << 2
                                __builtin_memset(
                                    __builtin_memset(*(arg1 + 8), 0, ecx_27 u>> 2 << 2), 0, 
                                    ecx_27 & 3)
                                int32_t ecx_32 = *(arg1 + 0x38) << 2
                                __builtin_memset(
                                    __builtin_memset(*(arg1 + 0x1c), 0, ecx_32 u>> 2 << 2), 0, 
                                    ecx_32 & 3)
                                int32_t i_2 = 0
                                
                                if (*(arg1 + 0x38) u> 0)
                                    do
                                        void* edi_11 = *(*(*(arg1 + 4) + 0x18) + (i_2 << 2))
                                        
                                        if ((*(edi_11 + 2) & 0xfff0) != 0)
                                            int32_t j_2 = 0
                                            
                                            if (*(edi_11 + 4) u> 0)
                                                do
                                                    sub_4e4bb4(arg1, i_2, 
                                                        *(*(edi_11 + 8) + (j_2 << 2)))
                                                    j_2 += 1
                                                while (j_2 u< *(edi_11 + 4))
                                            
                                            int32_t j_3 = 0
                                            
                                            if (*(edi_11 + 0xc) u> 0)
                                                do
                                                    sub_4e4c29(arg1, i_2, 
                                                        *(*(edi_11 + 0x10) + (j_3 << 2)))
                                                    j_3 += 1
                                                while (j_3 u< *(edi_11 + 0xc))
                                        
                                        i_2 += 1
                                    while (i_2 u< *(arg1 + 0x38))
                                
                                int32_t i_3 = 0
                                
                                if (*(arg1 + 0x38) u> 0)
                                    do
                                        int32_t edi_13 = i_3 << 2
                                        sub_4e4d3d(
                                            *(arg1 + 0x10) + (*(edi_13 + *(arg1 + 0xc)) << 2), 
                                            *(arg1 + 8) + edi_13)
                                        sub_4e4d3d(
                                            *(arg1 + 0x24) + (*(edi_13 + *(arg1 + 0x20)) << 2), 
                                            *(arg1 + 0x1c) + edi_13)
                                        i_3 += 1
                                    while (i_3 u< *(arg1 + 0x38))
                                
                                int32_t eax_48 = sub_745f3f(*(arg1 + 0x38) << 2)
                                *(arg1 + 0x3c) = eax_48
                                
                                if (eax_48 == 0)
                                    edi_16 = 0x8007000e
                                else
                                    int32_t eax_51 = sub_745f3f(*(arg1 + 0x38) << 2)
                                    *(arg1 + 0x40) = eax_51
                                    
                                    if (eax_51 == 0)
                                        edi_16 = 0x8007000e
                                    else
                                        int32_t eax_54 = sub_745f3f(*(arg1 + 0x38) << 2)
                                        *(arg1 + 0x44) = eax_54
                                        
                                        if (eax_54 == 0)
                                            edi_16 = 0x8007000e
                                        else
                                            int32_t eax_57 = sub_745f3f(*(arg1 + 0x38) << 2)
                                            *(arg1 + 0x34) = eax_57
                                            
                                            if (eax_57 == 0)
                                                edi_16 = 0x8007000e
                                            else
                                                if (*(arg1 + 0x38) u> 0)
                                                    do
                                                        int32_t edi_15 = i_4 << 2
                                                        int32_t* ecx_49 =
                                                            *(edi_15 + *(*(arg1 + 4) + 0x18))
                                                        *(edi_15 + *(arg1 + 0x3c)) = i_4
                                                        *(edi_15 + *(arg1 + 0x44)) = ecx_49
                                                        ecx_49[9] = 0xffffffff
                                                        int32_t eax_62
                                                        
                                                        if ((*(ecx_49 + 2) & 0xfff0) != 0)
                                                            eax_62 = sub_49ea13(ecx_49)
                                                        
                                                        if ((*(ecx_49 + 2) & 0xfff0) == 0
                                                                || eax_62 != 0)
                                                            eax_62 = 1
                                                        
                                                        i_4 += 1
                                                        *(edi_15 + *(arg1 + 0x34)) = eax_62
                                                    while (i_4 u< *(arg1 + 0x38))
                                                
                                                int32_t eax_64 = *(arg1 + 0x38) << 2
                                                edi_16 = 0
                                                *(arg1 + 0x48) = 0
                                                int32_t eax_65 = sub_745f3f(eax_64)
                                                *(arg1 + 0x28) = eax_65
                                                
                                                if (eax_65 == 0)
                                                    edi_16 = 0x8007000e
                                                else
                                                    int32_t eax_68 = sub_745f3f(*(arg1 + 0x38) << 2)
                                                    *(arg1 + 0x2c) = eax_68
                                                    
                                                    if (eax_68 == 0)
                                                        edi_16 = 0x8007000e
                                                    else
                                                        int32_t eax_71 =
                                                            sub_745f3f(*(arg1 + 0x38) << 2)
                                                        *(arg1 + 0x30) = eax_71
                                                        
                                                        if (eax_71 == 0)
                                                            edi_16 = 0x8007000e
                                                        else if (arg2 != 0)
                                                            int32_t i_5
                                                            
                                                            do
                                                                i_5 = sub_4e5332(arg1)
                                                                
                                                                if (i_5 s< 0)
                                                                    return i_5
                                                            while (i_5 != 1)
                                                            int32_t i_6 = 0
                                                            
                                                            if (*(arg1 + 0x38) u> 0)
                                                                do
                                                                    *(*(*(arg1 + 4) + 0x18) + (i_6 << 2)) =
                                                                        *(*(arg1 + 0x44) +
                                                                        (*(*(arg1 + 0x3c) + (i_6 << 2)) << 2))
                                                                    i_6 += 1
                                                                while (i_6 u< *(arg1 + 0x38))

j__free(*(arg1 + 8))
j__free(*(arg1 + 0xc))
j__free(*(arg1 + 0x10))
j__free(*(arg1 + 0x14))
j__free(*(arg1 + 0x18))
j__free(*(arg1 + 0x1c))
j__free(*(arg1 + 0x20))
j__free(*(arg1 + 0x24))
j__free(*(arg1 + 0x28))
j__free(*(arg1 + 0x2c))
j__free(*(arg1 + 0x30))
j__free(*(arg1 + 0x34))
j__free(*(arg1 + 0x3c))
j__free(*(arg1 + 0x40))
j__free(*(arg1 + 0x44))
return edi_16
