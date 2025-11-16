// 函数: sub_427903
// 地址: 0x427903
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg2 += *(arg1 + 0x40)
arg3 += *(arg1 + 0x4c)
int32_t edi
int32_t var_2c = edi

if (*(arg1 + 0xf8) == 0)
    int32_t eax_5 = sub_745f3f((*(arg1 + 0xe0) * *(arg1 + 0xe4)) << 3)
    *(arg1 + 0xf8) = eax_5
    
    if (eax_5 != 0)
        int32_t ecx_3 = (*(arg1 + 0xe0) * *(arg1 + 0xe4)) << 3
        __builtin_memset(__builtin_memset(eax_5, 0, ecx_3 u>> 2 << 2), 0, ecx_3 & 3)
        goto label_427990
    
    return 

label_427990:
int32_t* esi_1 = *(arg1 + 0xf8)
    + (((arg3 - *(arg1 + 0xd4)) * *(arg1 + 0xe0) + ((arg2 - *(arg1 + 0xc8)) u>> 2)) << 3)
int32_t* var_8_1 = esi_1

if (esi_1[1] != 0)
    goto label_4279e4

int32_t edi_4 = *(arg1 + 0xdc) << 4
int32_t eax_12 = sub_745f3f(edi_4 << 4)
int32_t eax_13

if (eax_12 == 0)
    eax_13 = 0
else
    sub_61cdd0(eax_12, 0x10, edi_4, sub_52e900)
    eax_13 = eax_12

esi_1[1] = eax_13

if (eax_13 == 0)
    return 

*esi_1 = 0
*(arg1 + 0xf4) += 1
label_4279e4:

if (*esi_1 == 0)
    int32_t eax_14 = *(arg1 + 0x40)
    int32_t edx_3 = arg2 & 0xfffffffc
    int32_t var_14_2 = edx_3
    int32_t eax_15
    
    if (edx_3 u>= eax_14 || eax_14 u<= *(arg1 + 0x98))
        eax_15 = *(arg1 + 0x48)
    
    if ((edx_3 u>= eax_14 || eax_14 u<= *(arg1 + 0x98))
            && (edx_3 + 4 u<= eax_15 || eax_15 u>= *(arg1 + 0xa0)))
        int32_t eax_17 = *(arg1 + 0xc4)
        int32_t ecx_19 = *(arg1 + 0x3c)
        
        if (eax_17 u< ecx_19 && ecx_19 u> *(arg1 + 0x94))
            (*(arg1 + 0x8c))(esi_1[1], 
                (eax_17 u>> 2) * *(arg1 + 0x88) + (arg2 u>> 2) * *(arg1 + 0x60)
                    + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20))
            edx_3 = var_14_2
        
        int32_t eax_23 = *(arg1 + 0xcc)
        int32_t ecx_22 = *(arg1 + 0x44)
        
        if (eax_23 u> ecx_22 && ecx_22 u< *(arg1 + 0x9c))
            (*(arg1 + 0x8c))(esi_1[1], 
                ((eax_23 - 4) u>> 2) * *(arg1 + 0x88) + (arg2 u>> 2) * *(arg1 + 0x60)
                    + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20))
            edx_3 = var_14_2
    else
        int32_t i_3 = *(arg1 + 0xc4)
        int32_t edi_10 = (arg2 u>> 2) * *(arg1 + 0x60) + (i_3 u>> 2) * *(arg1 + 0x88)
            + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
        int32_t var_c_1 = esi_1[1]
        int32_t i = i_3
        
        if (i_3 u< *(arg1 + 0xcc))
            do
                (*(arg1 + 0x8c))(var_c_1, edi_10)
                i += 4
                edi_10 += *(arg1 + 0x88)
                var_c_1 += 0x100
            while (i u< *(arg1 + 0xcc))
            
            edx_3 = var_14_2
    
    for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
        int32_t eax_30 = i_1 + edx_3
        
        if (eax_30 u< *(arg1 + 0x40) || eax_30 u>= *(arg1 + 0x48))
            *esi_1 |= 1 << i_1.b

if (*(arg1 + 0x54) != 0)
    void* eax_32
    int80_t st0_1
    st0_1, eax_32 = sub_41da34(arg1, arg4)
    arg4 = eax_32

int16_t x87control

if (*(arg1 + 0x10) != 0)
    arg4 = sub_41ef58(arg1, x87control, arg4)
int32_t ecx_31 = *(arg1 + 0x3c) - *(arg1 + 0xc4)
int32_t eax_35 = *(arg1 + 0x68) + ecx_31
int32_t edx_6 = (arg2 - *(arg1 + 0xc8)) & 3

while (ecx_31 u< eax_35)
    int32_t* edi_19 = ((((ecx_31 & 0xfffffffc) | edx_6) << 2 | (ecx_31 & 3)) << 4) + esi_1[1]
    void* esi_2 = arg4
    arg4 += 0x10
    *edi_19 = *esi_2
    void* edi_20 = &edi_19[1]
    void* esi_3 = esi_2 + 4
    *edi_20 = *esi_3
    void* edi_21 = edi_20 + 4
    void* esi_4 = esi_3 + 4
    *edi_21 = *esi_4
    ecx_31 += 1
    *(edi_21 + 4) = *(esi_4 + 4)
    esi_1 = var_8_1

*esi_1 |= 1 << (arg2.b & 3)

if (*esi_1 != 0xf)
    return 

int32_t i_4 = *(arg1 + 0xc4)
int32_t edi_29 = (arg2 u>> 2) * *(arg1 + 0x60) + (i_4 u>> 2) * *(arg1 + 0x88)
    + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
arg3 = edi_29
arg4 = esi_1[1]
int32_t i_2 = i_4

if (i_4 u< *(arg1 + 0xcc))
    int32_t var_24 = 0
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t eax_40 = arg2 & 0xfffffffc
    int32_t var_18_1 = 1
    
    do
        int32_t k_2 = *(arg1 + 0x9c) - i_2
        int32_t j = *(arg1 + 0xa0) - eax_40
        
        if (k_2 u< 4)
            arg2 = 0
            
            if (j u> 0)
                while (arg2 u< 4)
                    int32_t k = k_2
                    
                    do
                        int32_t edi_31 = arg2 << 2
                        void* esi_10 = (((&var_24)[k] | edi_31) << 4) + arg4
                        void* edi_34 = ((edi_31 | k) << 4) + arg4
                        k += 1
                        *edi_34 = *esi_10
                        void* edi_35 = edi_34 + 4
                        void* esi_11 = esi_10 + 4
                        *edi_35 = *esi_11
                        void* edi_36 = edi_35 + 4
                        void* esi_12 = esi_11 + 4
                        *edi_36 = *esi_12
                        *(edi_36 + 4) = *(esi_12 + 4)
                    while (k u< 4)
                    
                    arg2 += 1
                    esi_1 = var_8_1
                    edi_29 = arg3
                    
                    if (arg2 u>= j)
                        break
        
        if (j u< 4)
            do
                int32_t k_1 = 0
                int32_t edx_8 = (&var_24)[j] << 2
                
                do
                    int32_t* edi_43 = ((j << 2 | k_1) << 4) + arg4
                    void* esi_18 = ((edx_8 | k_1) << 4) + arg4
                    k_1 += 1
                    *edi_43 = *esi_18
                    int32_t* edi_44 = &edi_43[1]
                    void* esi_19 = esi_18 + 4
                    *edi_44 = *esi_19
                    int32_t* edi_45 = &edi_44[1]
                    void* esi_20 = esi_19 + 4
                    *edi_45 = *esi_20
                    edi_45[1] = *(esi_20 + 4)
                while (k_1 u< 4)
                
                j += 1
            while (j u< 4)
            
            edi_29 = arg3
            esi_1 = var_8_1
        
        int32_t eax_42 = 0
        
        if (*(arg1 + 0xfc) != 0 || *(arg1 + 0x5c) != 0)
            eax_42 = 1
        
        (*(arg1 + 0x90))(edi_29, arg4, eax_42)
        i_2 += 4
        edi_29 += *(arg1 + 0x88)
        arg4 += 0x100
        arg3 = edi_29
    while (i_2 u< *(arg1 + 0xcc))

if (&esi_1[2] u>= *(arg1 + 0xf8) + ((*(arg1 + 0xe4) * *(arg1 + 0xe0)) << 3) || esi_1[2] != 0
        || esi_1[3] != 0)
    j__free(esi_1[1])
    *(arg1 + 0xf4) -= 1
else
    esi_1[3] = esi_1[1]
    esi_1[1] = 0

esi_1[1] = 0
