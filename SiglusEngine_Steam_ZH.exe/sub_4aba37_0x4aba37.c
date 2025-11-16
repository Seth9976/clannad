// 函数: sub_4aba37
// 地址: 0x4aba37
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
void* var_28 = ebx
sub_4a39e3(arg1)
int32_t* esi = arg2

if (esi == 0)
    return 0x80004005

int32_t edi
int32_t var_34_1 = edi
__builtin_memset(esi, 0, 0x64)
esi[0xb] = arg4
*esi = arg3
int32_t i = 0
esi[0x18] ^= (*(ebx + 0x6c) << 1 s>> 0x1f ^ esi[0x18]) & 1

if (*(ebx + 8) u> 0)
    do
        void* eax_7 = *(*(ebx + 0x14) + (i << 2))
        
        if (arg3 == *(eax_7 + 4) && *(eax_7 + 0x38) == 0xffffffff)
            int32_t ecx = *(eax_7 + 0xc)
            
            if (ecx u>= esi[0xa])
                esi[0xa] = ecx + 1
            
            *(eax_7 + 0x74) = esi[0x12]
            esi[0x12] += 1
        
        i += 1
    while (i u< *(ebx + 8))

int32_t eax_10 = sub_745f3f(esi[0xa] << 2)
esi[4] = eax_10
int32_t result

if (eax_10 == 0)
labelid_4:
    result = 0x8007000e
else
    int32_t eax_13 = sub_745f3f(esi[0xa] << 4)
    esi[5] = eax_13
    
    if (eax_13 == 0)
    labelid_4:
        result = 0x8007000e
    else
        int32_t eax_16 = sub_745f3f(esi[0xa] << 4)
        esi[6] = eax_16
        
        if (eax_16 == 0)
        labelid_4:
            result = 0x8007000e
        else
            int32_t eax_19 = sub_745f3f(esi[0xa] << 2)
            esi[2] = eax_19
            
            if (eax_19 == 0)
            labelid_4:
                result = 0x8007000e
            else
                int32_t eax_22 = sub_745f3f(esi[0xa] << 2)
                esi[3] = eax_22
                
                if (eax_22 == 0)
                labelid_4:
                    result = 0x8007000e
                else
                    int32_t eax_25 = sub_745f3f(esi[0xb] << 4)
                    esi[7] = eax_25
                    
                    if (eax_25 == 0)
                    labelid_4:
                        result = 0x8007000e
                    else
                        int32_t eax_28 = sub_745f3f(esi[0xb] << 2)
                        esi[8] = eax_28
                        
                        if (eax_28 == 0)
                        labelid_4:
                            result = 0x8007000e
                        else
                            int32_t eax_31 = sub_745f3f(esi[0xa] << 4)
                            esi[0xc] = eax_31
                            
                            if (eax_31 == 0)
                            labelid_4:
                                result = 0x8007000e
                            else
                                int32_t eax_34 = sub_745f3f(esi[0xa] << 4)
                                esi[0xd] = eax_34
                                
                                if (eax_34 == 0)
                                labelid_4:
                                    result = 0x8007000e
                                else
                                    int32_t eax_37 = sub_745f3f(esi[0xa] << 2)
                                    esi[0xf] = eax_37
                                    
                                    if (eax_37 == 0)
                                    labelid_4:
                                        result = 0x8007000e
                                    else
                                        int32_t eax_40 = sub_745f3f(esi[0xa] << 2)
                                        esi[0x10] = eax_40
                                        
                                        if (eax_40 == 0)
                                        labelid_4:
                                            result = 0x8007000e
                                        else
                                            int32_t eax_43 = sub_745f3f(esi[0x12] << 2)
                                            esi[0x13] = eax_43
                                            
                                            if (eax_43 == 0)
                                            labelid_4:
                                                result = 0x8007000e
                                            else
                                                int32_t eax_46 = sub_745f3f(esi[0x12] << 2)
                                                esi[0x14] = eax_46
                                                
                                                if (eax_46 == 0)
                                                label_4ac0f6:
                                                    result = 0x8007000e
                                                else
                                                    for (int32_t i_1 = 0; i_1 u< 2; i_1 += 1)
                                                        int32_t ecx_17 = esi[0xa] << 4
                                                        __builtin_memset(
                                                            __builtin_memset(esi[0xc], 0, 
                                                                ecx_17 u>> 2 << 2), 
                                                            0, ecx_17 & 3)
                                                        int32_t var_20_1 = 0
                                                        int32_t j = 0
                                                        
                                                        if (*(ebx + 0xc) u> 0)
                                                            do
                                                                int32_t* ecx_22 =
                                                                    *(*(ebx + 0x18) + (j << 2))
                                                                
                                                                if (sub_49e8a9(ecx_22) != 0 && arg3 == *
                                                                        (*(*(ebx + 0x14) + (*ecx_22[4] << 2))
                                                                        + 4))
                                                                    int32_t* ecx_26 = *ecx_22 & 0xfffff
                                                                    uint32_t k_4 =
                                                                        divu.dp.d(0:(ecx_22[1]), ecx_26)
                                                                    
                                                                    if (k_4 u> 0)
                                                                        int32_t var_1c_1 = 0
                                                                        uint32_t k_2 = k_4
                                                                        uint32_t k
                                                                        
                                                                        do
                                                                            int32_t* edi_5 = ecx_22[2] + var_1c_1
                                                                            int32_t eax_57 = *edi_5
                                                                            int32_t* var_8_1 = edi_5
                                                                            int32_t ecx_29
                                                                            
                                                                            if (eax_57 != 0xffffffff)
                                                                                ecx_29 = *(
                                                                                    *(*(ebx + 0x14) + (eax_57 << 2)) + 0x38)
                                                                            
                                                                            if (eax_57 == 0xffffffff
                                                                                    || ecx_29 == 0xffffffff)
                                                                                ecx_29 = eax_57
                                                                            
                                                                            int32_t eax_58 = *(ebx + 0x14)
                                                                            
                                                                            if ((*(*(*(ebx + 0x10) +
                                                                                    (*(*(eax_58 + (ecx_29 << 2)) + 4) << 2))
                                                                                    + 6) & 2) != 0)
                                                                                int32_t ecx_34
                                                                                
                                                                                if (eax_57 != 0xffffffff)
                                                                                    ecx_34 =
                                                                                        *(*(eax_58 + (eax_57 << 2)) + 0x38)
                                                                                
                                                                                if (eax_57 == 0xffffffff
                                                                                        || ecx_34 == 0xffffffff)
                                                                                    ecx_34 = eax_57
                                                                                
                                                                                edi_5 = *(*(*(ebx + 0x18) + (
                                                                                    *(*(eax_58 + (ecx_34 << 2)) + 0x48)
                                                                                    << 2)) + 8)
                                                                                var_8_1 = edi_5
                                                                            
                                                                            int32_t ecx_38 = *edi_5
                                                                            
                                                                            if (ecx_38 != 0xffffffff)
                                                                                int32_t edx_9 =
                                                                                    *(*(eax_58 + (ecx_38 << 2)) + 0x38)
                                                                                
                                                                                if (edx_9 != 0xffffffff)
                                                                                    ecx_38 = edx_9
                                                                            
                                                                            if (arg3
                                                                                    == *(*(eax_58 + (ecx_38 << 2)) + 4))
                                                                                int32_t var_18_1 = 0
                                                                                arg4 = 0
                                                                                
                                                                                if (ecx_26 u> 0)
                                                                                    do
                                                                                        int32_t ecx_41 = edi_5[arg4]
                                                                                        
                                                                                        if (ecx_41 != 0xffffffff)
                                                                                            int32_t edx_12 =
                                                                                                *(*(eax_58 + (ecx_41 << 2)) + 0x38)
                                                                                            
                                                                                            if (edx_12 != 0xffffffff)
                                                                                                ecx_41 = edx_12
                                                                                        
                                                                                        int32_t edx_13 = 1 <<
                                                                                            (*(*(eax_58 + (ecx_41 << 2)) + 0x10)).b
                                                                                        
                                                                                        if ((var_18_1 & edx_13) != 0)
                                                                                            break
                                                                                        
                                                                                        var_18_1 |= edx_13
                                                                                        arg4 += 1
                                                                                    while (arg4 u< ecx_26)
                                                                                
                                                                                if (ecx_26 u<= 0 || arg4 u>= ecx_26)
                                                                                    arg4 = 0
                                                                                    
                                                                                    if (ecx_26 u> 0)
                                                                                        do
                                                                                            int32_t eax_60 = *(ebx + 0x14)
                                                                                            int32_t* ecx_46 = arg4 << 2
                                                                                            int32_t edi_6 = *(ecx_46 + edi_5)
                                                                                            void* edx_17 =
                                                                                                *(eax_60 + (*(ecx_46 + ecx_22[4]) << 2))
                                                                                            
                                                                                            if (edi_6 != 0xffffffff)
                                                                                                int32_t ecx_48 =
                                                                                                    *(*(eax_60 + (edi_6 << 2)) + 0x38)
                                                                                                
                                                                                                if (ecx_48 != 0xffffffff)
                                                                                                    edi_6 = ecx_48
                                                                                            
                                                                                            void* eax_61 = *(eax_60 + (edi_6 << 2))
                                                                                            int32_t ecx_50 = *(edx_17 + 0x10)
                                                                                                + (*(edx_17 + 0xc) << 2)
                                                                                            int32_t eax_63 = *(eax_61 + 0x10)
                                                                                                + (*(eax_61 + 0xc) << 2)
                                                                                            
                                                                                            if (ecx_50 != eax_63
                                                                                                    && *(edx_17 + 0x3c) == 0)
                                                                                                if (i_1 == 1)
                                                                                                    ebx = var_28
                                                                                                    *(esi[0xe] + ((
                                                                                                        *(esi[0xc] + (ecx_50 << 2))
                                                                                                        + *(esi[0xd] + (ecx_50 << 2)))
                                                                                                        << 2)) = eax_63
                                                                                                    *(esi[0xe] + ((
                                                                                                        *(esi[0xc] + (eax_63 << 2))
                                                                                                        + *(esi[0xd] + (eax_63 << 2)))
                                                                                                        << 2)) = ecx_50
                                                                                                
                                                                                                int32_t* ecx_51 =
                                                                                                    esi[0xc] + (ecx_50 << 2)
                                                                                                *ecx_51 += 1
                                                                                                int32_t* eax_64 =
                                                                                                    esi[0xc] + (eax_63 << 2)
                                                                                                *eax_64 += 1
                                                                                                var_20_1 += 2
                                                                                            
                                                                                            arg4 += 1
                                                                                            edi_5 = var_8_1
                                                                                        while (arg4 u< ecx_26)
                                                                            
                                                                            var_1c_1 += ecx_26 << 2
                                                                            k = k_2
                                                                            k_2 -= 1
                                                                        while (k != 1)
                                                                
                                                                j += 1
                                                            while (j u< *(ebx + 0xc))
                                                        
                                                        if (i_1 == 0)
                                                            int32_t eax_69 = 0
                                                            int32_t j_1 = 0
                                                            
                                                            if (esi[0xa] << 2 != 0)
                                                                do
                                                                    *(esi[0xd] + (j_1 << 2)) = eax_69
                                                                    eax_69 += *(esi[0xc] + (j_1 << 2))
                                                                    j_1 += 1
                                                                while (j_1 u< esi[0xa] << 2)
                                                            
                                                            int32_t eax_72 =
                                                                sub_745f3f(var_20_1 << 2)
                                                            esi[0xe] = eax_72
                                                            
                                                            if (eax_72 == 0)
                                                                goto label_4ac0f6_2
                                                    
                                                    for (arg2 = nullptr; arg2 u< 2; arg2 += 1)
                                                        int32_t ecx_55 = esi[0xa] << 2
                                                        __builtin_memset(
                                                            __builtin_memset(esi[0xf], 0, 
                                                                ecx_55 u>> 2 << 2), 
                                                            0, ecx_55 & 3)
                                                        int32_t var_1c_2 = 0
                                                        arg4 = 0
                                                        
                                                        if (*(ebx + 0xc) u> 0)
                                                            do
                                                                int32_t* ecx_60 =
                                                                    *(*(ebx + 0x18) + (arg4 << 2))
                                                                
                                                                if (sub_49e8e1(ecx_60) != 0
                                                                        || (*(ebx + 0x6f) & 0x80) != 0)
                                                                    void* edi_15 =
                                                                        *(*(ebx + 0x14) + (*ecx_60[4] << 2))
                                                                    
                                                                    if (arg3 == *(edi_15 + 4))
                                                                        int32_t ecx_63 = *ecx_60 & 0xfffff
                                                                        uint32_t k_5 =
                                                                            divu.dp.d(0:(ecx_60[1]), ecx_63)
                                                                        int32_t edx_33 = *(edi_15 + 0xc)
                                                                        int32_t var_28_1 = edx_33
                                                                        
                                                                        if (k_5 u> 0)
                                                                            int32_t* edi_16 = nullptr
                                                                            int32_t* var_24_1 = nullptr
                                                                            uint32_t k_3 = k_5
                                                                            uint32_t k_1
                                                                            
                                                                            do
                                                                                int32_t eax_84 = *(edi_16 + ecx_60[2])
                                                                                
                                                                                if (eax_84 != 0xffffffff)
                                                                                    int32_t ecx_67 = *(
                                                                                        *(*(ebx + 0x14) + (eax_84 << 2)) + 0x38)
                                                                                    
                                                                                    if (ecx_67 != 0xffffffff)
                                                                                        eax_84 = ecx_67
                                                                                
                                                                                void* eax_85 =
                                                                                    *(*(ebx + 0x14) + (eax_84 << 2))
                                                                                
                                                                                if (arg3 == *(eax_85 + 4)
                                                                                        && edx_33 != *(eax_85 + 0xc))
                                                                                    if (arg2 == 1)
                                                                                        int32_t ecx_71 = edx_33 << 2
                                                                                        *(esi[0x11] + ((*(ecx_71 + esi[0x10])
                                                                                            + *(esi[0xf] + ecx_71)) << 2)) =
                                                                                            *(eax_85 + 0xc)
                                                                                        int32_t ecx_74 = *(eax_85 + 0xc) << 2
                                                                                        edx_33 = var_28_1
                                                                                        *(esi[0x11] + ((*(ecx_74 + esi[0x10])
                                                                                            + *(esi[0xf] + ecx_74)) << 2)) = edx_33
                                                                                    
                                                                                    int32_t* ecx_77 =
                                                                                        esi[0xf] + (edx_33 << 2)
                                                                                    *ecx_77 += 1
                                                                                    int32_t* eax_87 =
                                                                                        esi[0xf] + (*(eax_85 + 0xc) << 2)
                                                                                    *eax_87 += 1
                                                                                    var_1c_2 += 2
                                                                                
                                                                                edi_16 = &var_24_1[ecx_63]
                                                                                k_1 = k_3
                                                                                k_3 -= 1
                                                                                var_24_1 = edi_16
                                                                            while (k_1 != 1)
                                                                
                                                                arg4 += 1
                                                            while (arg4 u< *(ebx + 0xc))
                                                        
                                                        int32_t j_2 = 0
                                                        
                                                        if (arg2 == 0)
                                                            int32_t eax_89 = 0
                                                            
                                                            if (esi[0xa] u> 0)
                                                                do
                                                                    *(esi[0x10] + (j_2 << 2)) = eax_89
                                                                    eax_89 += *(esi[0xf] + (j_2 << 2))
                                                                    j_2 += 1
                                                                while (j_2 u< esi[0xa])
                                                            
                                                            int32_t eax_92 =
                                                                sub_745f3f(var_1c_2 << 2)
                                                            esi[0x11] = eax_92
                                                            
                                                            if (eax_92 == 0)
                                                                goto label_4ac0f6_2
                                                    
                                                    arg3 = 0
                                                    int32_t ecx_81 = esi[0x12] << 2
                                                    __builtin_memset(
                                                        __builtin_memset(esi[0x13], 0, 
                                                            ecx_81 u>> 2 << 2), 
                                                        0, ecx_81 & 3)
                                                    
                                                    if (*(ebx + 0xc) u> 0)
                                                        do
                                                            int32_t* edi_24 =
                                                                *(*(ebx + 0x18) + (arg3 << 2))
                                                            
                                                            if ((*(edi_24 + 2) & 0xfff0) != 0)
                                                                arg2 = nullptr
                                                                
                                                                if (edi_24[3] u> 0)
                                                                    do
                                                                        sub_4a36b0(ebx, esi, 
                                                                            *(edi_24[4] + (arg2 << 2)), arg3)
                                                                        arg2 += 1
                                                                    while (arg2 u< edi_24[3])
                                                                
                                                                arg2 = nullptr
                                                                
                                                                if (edi_24[1] u> 0)
                                                                    do
                                                                        sub_4a352d(ebx, esi, 
                                                                            *(edi_24[2] + (arg2 << 2)), arg3)
                                                                        arg2 += 1
                                                                    while (arg2 u< edi_24[1])
                                                                
                                                                if (sub_49e81b(edi_24) != 0)
                                                                    arg2 = nullptr
                                                                    
                                                                    if (edi_24[3] u> 0)
                                                                        do
                                                                            sub_4a352d(ebx, esi, 
                                                                                *(edi_24[4] + (arg2 << 2)), arg3)
                                                                            arg2 += 1
                                                                        while (arg2 u< edi_24[3])
                                                            
                                                            arg3 += 1
                                                        while (arg3 u< *(ebx + 0xc))
                                                    
                                                    int32_t i_2 = 0
                                                    int32_t edi_25 = 0
                                                    
                                                    if (esi[0x12] u> 0)
                                                        do
                                                            *(esi[0x14] + (i_2 << 2)) = edi_25
                                                            edi_25 += *(esi[0x13] + (i_2 << 2))
                                                            i_2 += 1
                                                        while (i_2 u< esi[0x12])
                                                    
                                                    int32_t eax_104 = sub_745f3f(edi_25 << 2)
                                                    esi[0x15] = eax_104
                                                    
                                                    if (eax_104 == 0)
                                                    label_4ac0f6_1:
                                                        result = 0x8007000e
                                                    else
                                                        int32_t eax_107 = sub_745f3f(edi_25 * 0xc)
                                                        esi[0x16] = eax_107
                                                        
                                                        if (eax_107 == 0)
                                                        label_4ac0f6_2:
                                                            result = 0x8007000e
                                                        else
                                                            result = 0

return result
