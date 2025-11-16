// 函数: sub_9aa3e0
// 地址: 0x9aa3e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg4
int32_t* edx = *(ecx + 0x510)
int32_t ebx = *(ecx + 0x504)
int32_t* var_8 = edx
void* eax_2 = *(*(*(arg2 + 0x40) + 4) + 0x1c)
int32_t eax_3 = *(eax_2 + 0xb20)
int32_t* eax_4 = arg5

if (eax_4 == 0)
    sub_742d70(arg3, 0, 1)
    int32_t eax_93
    int32_t edx_19
    edx_19:eax_93 = sx.q(*(arg2 + 0x24))
    _memset(arg6, 0, (eax_93 - edx_19) s>> 1 << 2)
    return 0

if (ebx s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t ecx_1 = eax_4[edi_1]
        int32_t esi_2 = ecx_1 & 0x7fff
        
        switch (edx[0xd0] - 1)
            case 0
                esi_2 s>>= 2
            case 1
                esi_2 s>>= 3
            case 2
                esi_2 s/= 0xc
                edx = var_8
            case 3
                esi_2 s>>= 4
        
        eax_4 = arg5
        eax_4[edi_1] = (ecx_1 & 0x8000) | esi_2
        edi_1 += 1
    while (edi_1 s< ebx)
    
    ecx = arg4

int32_t esi_12 = *eax_4
int32_t edi_2 = eax_4[1]
int32_t var_17c = esi_12

if (ebx s> 2)
    int32_t* esi_5 = arg5
    void* ecx_4 = ecx + 0x30c
    void* var_14_1 = ecx_4
    void* var_28_1 = &esi_5[2]
    void* var_c_1 = &edx[0xd3]
    void* eax_10 = &var_17c - esi_5
    int32_t i_9 = ebx - 2
    int32_t i
    
    do
        int32_t eax_11 = *(ecx_4 + 0xfc)
        int32_t ecx_5 = *ecx_4
        int32_t ebx_2 = edx[eax_11 + 0xd1]
        void* eax_12 = &esi_5[eax_11]
        void* edx_3 = &esi_5[ecx_5]
        int32_t eax_14 = *eax_12 & 0x7fff
        int32_t edi_5 = (esi_5[ecx_5] & 0x7fff) - eax_14
        int32_t eax_16
        int32_t edx_4
        edx_4:eax_16 = sx.q(edi_5)
        int32_t temp0_1 = divs.dp.d(sx.q(((eax_16 ^ edx_4) - edx_4) * (*var_c_1 - ebx_2)), 
            var_8[ecx_5 + 0xd1] - ebx_2)
        int32_t edx_8
        
        if (edi_5 s>= 0)
            edx_8 = temp0_1 + eax_14
        else
            edx_8 = eax_14 - temp0_1
        
        int32_t* ebx_3 = var_28_1
        int32_t ecx_8 = *ebx_3
        
        if ((ecx_8 & 0x8000) != 0 || edx_8 == ecx_8)
            *ebx_3 = edx_8 | 0x8000
            *(eax_10 + ebx_3) = 0
        else
            int32_t esi_10 = edx_8
            int32_t eax_26 = *(arg4 + 0x50c) - edx_8
            
            if (eax_26 s< edx_8)
                esi_10 = eax_26
            
            int32_t ecx_9 = ecx_8 - edx_8
            int32_t ecx_10
            
            if (ecx_8 - edx_8 s>= 0)
                if (ecx_9 s< esi_10)
                    ecx_10 = ecx_9 * 2
                else
                    ecx_10 = ecx_9 + esi_10
            else if (ecx_9 s>= neg.d(esi_10))
                ecx_10 = 0xffffffff - ecx_9 * 2
            else
                ecx_10 = esi_10 - ecx_9 - 1
            
            *(eax_10 + ebx_3) = ecx_10
            *eax_12 = eax_14
            *edx_3 &= 0x7fff
        
        var_c_1 += 4
        ecx_4 = var_14_1 + 4
        i = i_9
        i_9 -= 1
        edx = var_8
        esi_5 = arg5
        var_14_1 = ecx_4
        var_28_1 = &ebx_3[1]
    while (i != 1)
    esi_12 = var_17c

sub_742d70(arg3, 1, 1)
void* ebx_5 = arg4
int32_t edx_10 = 0
int32_t ecx_12 = *(ebx_5 + 0x50c)
*(ebx_5 + 0x51c) += 1
uint32_t i_2 = ecx_12 - 1
uint32_t i_1 = i_2

if (ecx_12 != 1)
    do
        edx_10 += 1
        i_1 u>>= 1
    while (i_1 != 0)

*(ebx_5 + 0x518) += edx_10 * 2
int32_t eax_35 = 0

for (; i_2 != 0; i_2 u>>= 1)
    eax_35 += 1

sub_742d70(arg3, esi_12, eax_35)
int32_t eax_36 = *(ebx_5 + 0x50c)
int32_t ecx_13 = 0
uint32_t i_3 = eax_36 - 1

if (eax_36 != 1)
    do
        ecx_13 += 1
        i_3 u>>= 1
    while (i_3 != 0)

sub_742d70(arg3, edi_2, ecx_13)
int32_t* esi_14 = var_8
int32_t i_8 = 0
int32_t var_c_2 = 2

if (*esi_14 s> 0)
    void* ecx_14 = &esi_14[1]
    void* var_20_2 = ecx_14
    int32_t i_4
    
    do
        int32_t eax_37 = *ecx_14
        int32_t ebx_6 = 0
        int128_t var_78
        __builtin_memset(&var_78, 0, 0x20)
        int32_t edi_7 = esi_14[eax_37 + 0x20]
        int32_t eax_38 = esi_14[eax_37 + 0x30]
        int32_t edx_11 = 1 << eax_38.b
        int32_t var_10_2 = edi_7
        int32_t var_1c_2 = edx_11
        int32_t var_14_2 = 0
        
        if (eax_38 == 0)
            ebx_5 = arg4
        else
            int32_t ecx_16 = 0
            int128_t var_58
            __builtin_memset(&var_58, 0, 0x20)
            
            if (edx_11 s> 0)
                void* esi_18 = &var_8[(eax_37 + 0xa) * 8]
                
                do
                    int32_t eax_39 = *esi_18
                    
                    if (eax_39 s>= 0)
                        *(&var_58 + (ecx_16 << 2)) = *(*(eax_2 + (eax_39 << 2) + 0x720) + 4)
                    else
                        *(&var_58 + (ecx_16 << 2)) = 1
                    
                    ecx_16 += 1
                    esi_18 += 4
                while (ecx_16 s< edx_11)
                
                edi_7 = var_10_2
            
            int32_t esi_19 = 0
            int32_t* eax_46
            
            if (edi_7 s<= 0)
                eax_46 = var_8
            else
                void* edi_9 = &(&var_17c)[var_c_2]
                int32_t ecx_17 = 0
                
                do
                    int32_t eax_43 = 0
                    
                    if (edx_11 s> 0)
                        do
                            if (*edi_9 s< *(&var_58 + (eax_43 << 2)))
                                *(&var_78 + (esi_19 << 2)) = eax_43
                                break
                            
                            eax_43 += 1
                        while (eax_43 s< edx_11)
                        
                        ecx_17 = var_14_2
                    
                    int32_t eax_44 = *(&var_78 + (esi_19 << 2))
                    edi_9 += 4
                    esi_19 += 1
                    ebx_6 |= eax_44 << ecx_17.b
                    eax_46 = var_8
                    ecx_17 += eax_46[eax_37 + 0x30]
                    edx_11 = var_1c_2
                    var_14_2 = ecx_17
                while (esi_19 s< var_10_2)
            
            void* esi_20 = eax_3 + eax_46[eax_37 + 0x40] * 0x38
            void* eax_49
            
            if (ebx_6 s>= 0)
                eax_49 = *(esi_20 + 0xc)
            
            if (ebx_6 s< 0 || ebx_6 s>= *(eax_49 + 4))
                ebx_5 = arg4
                esi_14 = var_8
                *(ebx_5 + 0x514) = *(ebx_5 + 0x514)
            else
                sub_742d70(arg3, *(*(esi_20 + 0x14) + (ebx_6 << 2)), sx.d(*(*(eax_49 + 8) + ebx_6)))
                esi_14 = var_8
                ebx_5 = arg4
                *(ebx_5 + 0x514) += sx.d(*(*(*(esi_20 + 0xc) + 8) + ebx_6))
        
        int32_t eax_69 = var_10_2
        int32_t edi_10 = 0
        
        if (eax_69 s> 0)
            void* ecx_22 = (eax_37 << 3) + 0x50
            void* var_1c_3 = ecx_22
            void* edx_13 = &(&var_17c)[var_c_2]
            void* var_24_1 = edx_13
            
            do
                int32_t ecx_23 = esi_14[*(&var_78 + (edi_10 << 2)) + ecx_22]
                
                if (ecx_23 s>= 0)
                    int32_t esi_21 = *edx_13
                    int32_t eax_61 = ecx_23 * 7
                    void* ebx_7 = eax_3 + (eax_61 << 3)
                    
                    if (esi_21 s>= *(eax_3 + (eax_61 << 3) + 4))
                        ebx_5 = arg4
                    else
                        void* eax_62
                        
                        if (esi_21 s>= 0)
                            eax_62 = *(ebx_7 + 0xc)
                        
                        if (esi_21 s< 0 || esi_21 s>= *(eax_62 + 4))
                            ebx_5 = arg4
                            *(ebx_5 + 0x518) = *(ebx_5 + 0x518)
                        else
                            sub_742d70(arg3, *(*(ebx_7 + 0x14) + (esi_21 << 2)), 
                                sx.d(*(*(eax_62 + 8) + esi_21)))
                            ebx_5 = arg4
                            edx_13 = var_24_1
                            *(ebx_5 + 0x518) += sx.d(*(*(*(ebx_7 + 0xc) + 8) + esi_21))
                    
                    esi_14 = var_8
                
                eax_69 = var_10_2
                edi_10 += 1
                ecx_22 = var_1c_3
                edx_13 += 4
                var_24_1 = edx_13
            while (edi_10 s< eax_69)
        
        var_c_2 += eax_69
        i_4 = i_8 + 1
        ecx_14 = var_20_2 + 4
        i_8 = i_4
        var_20_2 = ecx_14
    while (i_4 s< *esi_14)

int32_t i_6 = 0
int32_t i_10 = 0
int32_t ecx_27 = esi_14[0xd0] * *arg5
int32_t var_c_3 = ecx_27
int32_t eax_75
int32_t edx_15
edx_15:eax_75 = sx.q(*(eax_2 + (*(arg2 + 0x1c) << 2)))
int32_t i_5 = 1
int32_t i_7 = 1

if (*(ebx_5 + 0x504) s> 1)
    void* ebx_8 = ebx_5 + 0x108
    
    do
        int32_t eax_79 = arg5[*ebx_8]
        int32_t ecx_31 = eax_79 & 0x7fff
        
        if (ecx_31 != eax_79)
            ecx_27 = var_c_3
        else
            int32_t esi_23 = esi_14[0xd0] * ecx_31
            i_6 = var_8[*ebx_8 + 0xd1]
            sub_9a9290(var_8, i_10, (eax_75 - edx_15) s>> 1, i_6, var_c_3, esi_23, arg6)
            i_5 = i_7
            ecx_27 = esi_23
            esi_14 = var_8
            i_10 = i_6
            var_c_3 = ecx_27
        
        i_5 += 1
        ebx_8 += 4
        i_7 = i_5
    while (i_5 s< *(arg4 + 0x504))

int32_t eax_83
int32_t edx_17
edx_17:eax_83 = sx.q(*(arg2 + 0x24))

if (i_6 s< (eax_83 - edx_17) s>> 1)
    int32_t eax_88
    int32_t edx_18
    
    do
        *(arg6 + (i_6 << 2)) = ecx_27
        i_6 += 1
        edx_18:eax_88 = sx.q(*(arg2 + 0x24))
    while (i_6 s< (eax_88 - edx_18) s>> 1)

return 1
