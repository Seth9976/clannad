// 函数: sub_608ed0
// 地址: 0x608ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = *(arg1 + 0xa4)
int32_t edi = arg4
int32_t i_13 = (*(ebx + 0xa34) - *(ebx + 0xa30)) s/ 0x15fc
int32_t i_6 = i_13

if (i_13 s> 0)
    int32_t eax_3 = 0
    int32_t var_8_1 = 0
    int32_t i
    
    do
        void* esi_2 = *(ebx + 0x144) + eax_3
        void* eax_5 = *(ebx + 0xa30) + var_8_1
        
        if (*(eax_5 + 0xa0) != 0)
            int32_t ecx_2 = *(eax_5 + 0x38c)
            int32_t eax_6 = *(eax_5 + 0x390)
            
            if (arg2 s>= ecx_2)
                if (arg2 != ecx_2)
                    if (*(esi_2 + 0x1ac) != 0)
                        goto label_608fa9
                    
                    goto label_608f82
                
                if ((arg3 s> eax_6 || (ecx_2 s>= edi && (ecx_2 != edi || eax_6 s> arg5)))
                        && *(esi_2 + 0x1ac) == 0)
                    goto label_608f82
                
                goto label_608fa9
            
            if (ecx_2 s< edi || (ecx_2 == edi && eax_6 s<= arg5) || *(esi_2 + 0x1ac) != 0)
            label_608fa9:
                sub_5e9ed0(*(ebx + 0x131c) + var_8_1, eax_5, 1)
                int32_t edx_10
                
                if (*(eax_5 + 0x1b0) != 0 && *(esi_2 + 0x1ac) == 0)
                    int32_t ecx_7 = *(esi_2 + 0x1438) - *(esi_2 + 0x1434)
                    int32_t eax_13
                    int32_t edx_8
                    edx_8:eax_13 = muls.dp.d(0xba506bb7, ecx_7)
                    edx_10 = (edx_8 + ecx_7) s>> 0xc
                
                if (*(eax_5 + 0x1b0) == 0 || *(esi_2 + 0x1ac) != 0
                        || (edx_10 u>> 0x1f) + edx_10 s> 0 || *(esi_2 + 0x1b4) == 1)
                    sub_5e9ed0(eax_5, esi_2, 1)
                    sub_5e4fc0(esi_2)
                    sub_5e5260(esi_2, 1)
                    sub_5f1730(esi_2 + 0x1390)
                    *(esi_2 + 0x1b0) = 0
                    *(esi_2 + 0x1b4) = 0
                    sub_5e5060(esi_2, 0)
                    sub_5e5540(esi_2, 0)
                
                edi = arg4
            else
            label_608f82:
                
                if ((*(esi_2 + 0x1438) - *(esi_2 + 0x1434)) s/ 0x15fc s> 0)
                    goto label_608fa9
        
        eax_3 = var_8_1 + 0x15fc
        i = i_6
        i_6 -= 1
        var_8_1 = eax_3
    while (i != 1)

int32_t eax_18
int32_t edx_11
edx_11:eax_18 = muls.dp.d(0x4fba3d0b, *(ebx + 0xd28) - *(ebx + 0xd24))
int32_t edx_12 = edx_11 s>> 0xb
int32_t i_14 = (edx_12 u>> 0x1f) + edx_12
int32_t i_7 = i_14

if (i_14 s> 0)
    int32_t esi_3 = 0
    int32_t i_1
    
    do
        void* edx_14 = *(ebx + 0xd24) + esi_3
        int32_t ecx_16 = *(edx_14 + 0x124)
        int32_t eax_22
        
        if (arg2 s< ecx_16)
            eax_22 = *(edx_14 + 0x128)
        label_6090aa:
            
            if (ecx_16 s< edi)
            label_6090be:
                sub_5d66d0(*(ebx + 0x1610) + esi_3, edx_14)
                sub_5d66d0(*(ebx + 0xd24) + esi_3, *(ebx + 0x438) + esi_3)
                sub_5d5f50(*(ebx + 0x438) + esi_3, 1)
                edi = arg4
            else if (ecx_16 == edi && eax_22 s<= arg5)
                goto label_6090be
        else if (arg2 == ecx_16)
            eax_22 = *(edx_14 + 0x128)
            
            if (arg3 s<= eax_22)
                goto label_6090aa
        esi_3 += 0x19b0
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)

int32_t i_10 = (*(ebx + 0xbf0) - *(ebx + 0xbec)) s/ 0x1d4
int32_t i_12 = i_10

if (i_10 s> 0)
    int32_t edx_18 = 0
    int32_t i_2
    
    do
        void* eax_27 = *(ebx + 0xbec) + edx_18
        int32_t ecx_25 = *(eax_27 + 0x124)
        int32_t eax_28 = *(eax_27 + 0x128)
        int32_t eax_30
        
        if (arg2 s< ecx_25)
            eax_30 = eax_28
        label_60915a:
            
            if (ecx_25 s< edi)
            label_609187:
                __builtin_memcpy(*(ebx + 0x14d8) + 0x124 + edx_18, eax_27 + 0x124, 0xa0)
                __builtin_memcpy(*(ebx + 0xbec) + 0x124 + edx_18, *(ebx + 0x300) + 0x124 + edx_18, 
                    0xa0)
                void* eax_32 = *(ebx + 0x300) + edx_18
                *(eax_32 + 0x124) = 0
                *(eax_32 + 0x128) = 0
                __builtin_memcpy(eax_32 + 0x144, eax_32 + 0xa4, 0x80)
                i_10 = i_12
                *(eax_32 + 0x12c) = 0
                *(eax_32 + 0x130) = 0xffffffff
                *(eax_32 + 0x134) = 0xfffffffe
                *(eax_32 + 0x138) = 0
                *(eax_32 + 0x13c) = 0
                *(eax_32 + 0x140) = 0
                *(eax_32 + 0x1cc) = 0xffffffff
                *(eax_32 + 0x1d0) = 0xffffffff
                *(eax_32 + 0x1c4) = 0xffffffff
                *(eax_32 + 0x1c8) = 0xffffffff
                edi = arg4
            else if (ecx_25 == edi && eax_30 s<= arg5)
                goto label_609187
        else if (arg2 == ecx_25)
            eax_30 = eax_28
            
            if (arg3 s<= eax_30)
                goto label_60915a
        edx_18 += 0x1d4
        i_2 = i_10
        i_10 -= 1
        i_12 = i_10
    while (i_2 != 1)

sub_5ae2e0(ebx + 0x16a4, ebx + 0xdb8)
sub_5ae2e0(ebx + 0xdb8, ebx + 0x4cc)
sub_5ada90(ebx + 0x4cc)
int32_t eax_33
int32_t edx_19
edx_19:eax_33 = muls.dp.d(0x6bca1af3, *(ebx + 0x1058) - *(ebx + 0x1054))
int32_t edx_20 = edx_19 s>> 8
int32_t i_15 = (edx_20 u>> 0x1f) + edx_20
int32_t i_8 = i_15

if (i_15 s> 0)
    int32_t ecx_31 = 0
    int32_t var_8_2 = 0
    int32_t i_3
    
    do
        void* eax_37 = *(ebx + 0x1054) + ecx_31
        void* edx_22 = *(ebx + 0x768) + ecx_31
        int32_t ecx_32 = var_8_2
        int32_t esi_13 = *(eax_37 + 0x250)
        
        if (arg2 s< esi_13)
        label_6092e6:
            
            if (esi_13 s< arg4)
            label_6092f8:
                __builtin_memcpy(*(ebx + 0x1940) + ecx_31 + 0xa4, eax_37 + 0xa4, 0x1bc)
                
                if (*(eax_37 + 0x258) == 0 || *(edx_22 + 0x25c) == 1)
                    __builtin_memcpy(eax_37 + 0xa4, edx_22 + 0xa4, 0x1bc)
                    sub_60ad20(edx_22)
                
                ecx_32 = var_8_2
            else if (esi_13 == arg4 && *(eax_37 + 0x254) s<= arg5)
                goto label_6092f8
        else if (arg2 == esi_13)
            ecx_32 = var_8_2
            
            if (arg3 s<= *(eax_37 + 0x254))
                goto label_6092e6
        
        ecx_31 = ecx_32 + 0x260
        i_3 = i_8
        i_8 -= 1
        var_8_2 = ecx_31
    while (i_3 != 1)

int32_t eax_38
int32_t edx_23
edx_23:eax_38 = muls.dp.d(0x51eb851f, *(ebx + 0x1110) - *(ebx + 0x110c))
int32_t edx_24 = edx_23 s>> 8
int32_t i_16 = (edx_24 u>> 0x1f) + edx_24
int32_t i_9 = i_16

if (i_16 s> 0)
    int32_t ecx_37 = 0
    int32_t var_c_2 = 0
    int32_t i_4
    
    do
        void* edx_26 = *(ebx + 0x110c) + ecx_37
        void* eax_42 = *(ebx + 0x820) + ecx_37
        void* var_10_1 = eax_42
        __builtin_memcpy(*(ebx + 0x19f8) + 0xa0 + ecx_37, edx_26 + 0xa0, 0x280)
        
        if (*(edx_26 + 0x318) == 0 || *(eax_42 + 0x31c) == 1)
            __builtin_memcpy(edx_26 + 0xa0, eax_42 + 0xa0, 0x280)
            sub_5fa960(eax_42)
        
        ecx_37 = var_c_2 + 0x320
        i_4 = i_9
        i_9 -= 1
        var_c_2 = ecx_37
    while (i_4 != 1)

int32_t ecx_41 = *(ebx + 0x11c8) - *(ebx + 0x11c4)
int32_t result
int32_t edx_27
edx_27:result = muls.dp.d(0x8d3dcb09, ecx_41)
int32_t i_11 = ecx_41 s/ 0xe8

if (i_11 s> 0)
    int32_t edx_30 = 0
    int32_t i_5
    
    do
        int32_t eax_43 = *(ebx + 0x1ab0)
        void* ecx_43 = *(ebx + 0x11c4) + edx_30
        *(edx_30 + eax_43 + 0xa0) = *(ecx_43 + 0xa0)
        *(edx_30 + eax_43 + 0xb0) = *(ecx_43 + 0xb0)
        *(edx_30 + eax_43 + 0xc0) = *(ecx_43 + 0xc0)
        *(edx_30 + eax_43 + 0xd0) = *(ecx_43 + 0xd0)
        result = *(ebx + 0x11c4)
        void* ecx_45 = *(ebx + 0x8d8) + edx_30
        *(edx_30 + result + 0xa0) = *(ecx_45 + 0xa0)
        *(edx_30 + result + 0xb0) = *(ecx_45 + 0xb0)
        *(edx_30 + result + 0xc0) = *(ecx_45 + 0xc0)
        *(edx_30 + result + 0xd0) = *(ecx_45 + 0xd0)
        sub_5fb9f0(*(ebx + 0x8d8) + edx_30)
        edx_30 += 0xe8
        i_5 = i_11
        i_11 -= 1
    while (i_5 != 1)

return result
