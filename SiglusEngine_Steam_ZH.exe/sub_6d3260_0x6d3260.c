// 函数: sub_6d3260
// 地址: 0x6d3260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg4 + 0x18c)
int32_t ecx = *(arg4 + 0x180)
int32_t i_11 = *arg3
uint32_t edi = *(arg4 + 0x188)
int32_t* eax_1
eax_1.b = *(arg3 + 9)
int32_t i_13 = i_11

if (eax_1.b u<= 8 && edi != 0)
label_6d32b5:
    void* edx_2 = arg2
    
    switch (zx.d(arg3[2].b))
        case 0
            uint32_t edi_5 = edi
            
            if (eax_1.b == 2)
                void* var_8_2 = edx_2
                
                if (i_11 != 0)
                    int32_t i_10 = ((i_11 - 1) u>> 2) + 1
                    void* eax_53 = var_8_2
                    int32_t i
                    
                    do
                        uint32_t edi_6 = zx.d(*eax_53)
                        int32_t eax_55 = edi_6 & 0xc0
                        int32_t esi_2 = edi_6 & 0xc
                        int32_t eax_57 = edi_6 & 0x30
                        int32_t edi_7 = edi_6 & 3
                        i_11.b = ((esi_2 << 2 | esi_2) << 2 | esi_2 s>> 2 | esi_2)[edi]
                        i_11.b &= 0xcf
                        edi_5 = edi
                        i_11.b |= (((edi_7 << 2 | edi_7) << 2 | edi_7) << 2 | edi_7)[edi_5] u>> 2
                        i_11.b u>>= 2
                        i_11.b |=
                            ((eax_57 s>> 2 | eax_57) s>> 2 | eax_57 << 2 | eax_57)[edi_5] & 0xc3
                        i_11.b u>>= 2
                        i_11.b |=
                            (((eax_55 s>> 2 | eax_55) s>> 2 | eax_55) s>> 2 | eax_55)[edi_5] & 0xc0
                        *var_8_2 = i_11.b
                        eax_53 = var_8_2 + 1
                        var_8_2 = eax_53
                        i = i_10
                        i_10 -= 1
                    while (i != 1)
                    edx_2 = arg2
                    i_11 = i_13
            
            eax_1.b = *(arg3 + 9)
            
            if (eax_1.b != 4)
                if (eax_1.b != 8)
                    if (eax_1.b == 0x10 && i_11 != 0)
                        uint32_t ecx_36 = zx.d(ecx.b)
                        arg4 = ecx_36
                        int32_t i_1
                        
                        do
                            uint32_t eax_86 = zx.d(*(edx_2 + 1))
                            edx_2 += 2
                            uint32_t ecx_38 = zx.d(
                                *(*(esi + (eax_86 u>> ecx_36.b << 2)) + (zx.d(*(edx_2 - 2)) << 1)))
                            *(edx_2 - 1) = ecx_38.b
                            ecx_36 = arg4
                            eax_1 = ecx_38 u>> 8
                            *(edx_2 - 2) = eax_1.b
                            i_1 = i_11
                            i_11 -= 1
                        while (i_1 != 1)
                else if (i_11 != 0)
                    uint32_t eax_85
                    int32_t i_2
                    
                    do
                        eax_85 = zx.d(*edx_2)
                        edx_2 += 1
                        eax_85.b = *(eax_85 + edi_5)
                        *(edx_2 - 1) = eax_85.b
                        i_2 = i_11
                        i_11 -= 1
                    while (i_2 != 1)
                    return eax_85
            else if (i_11 != 0)
                int32_t i_12 = ((i_11 - 1) u>> 1) + 1
                char* eax_84
                int32_t i_3
                
                do
                    uint32_t esi_4 = zx.d(*edx_2)
                    edx_2 += 1
                    int32_t esi_5 = esi_4 & 0xf
                    int32_t ecx_35 = esi_4 & 0xf0
                    ecx_35.b = (ecx_35 s>> 4 | ecx_35)[edi_5]
                    ecx_35.b &= 0xf0
                    eax_84.b = (esi_5 << 4 | esi_5)[edi_5]
                    eax_84.b u>>= 4
                    ecx_35.b |= eax_84.b
                    *(edx_2 - 1) = ecx_35.b
                    i_3 = i_12
                    i_12 -= 1
                while (i_3 != 1)
                return eax_84
        case 2
            if (eax_1.b != 8)
                if (i_11 != 0)
                    uint32_t ecx_1 = zx.d(ecx.b)
                    arg4 = ecx_1
                    uint8_t eax_22
                    int32_t i_4
                    
                    do
                        uint32_t eax_8 = zx.d(*(edx_2 + 1))
                        edx_2 += 6
                        uint32_t ecx_3 =
                            zx.d(*(*(esi + (eax_8 u>> ecx_1.b << 2)) + (zx.d(*(edx_2 - 6)) << 1)))
                        *(edx_2 - 5) = ecx_3.b
                        *(edx_2 - 6) = (ecx_3 u>> 8).b
                        uint32_t ecx_6 = zx.d(*(*(esi + (zx.d(*(edx_2 - 3)) u>> arg4.b << 2))
                            + (zx.d(*(edx_2 - 4)) << 1)))
                        *(edx_2 - 3) = ecx_6.b
                        *(edx_2 - 4) = (ecx_6 u>> 8).b
                        uint32_t ecx_9 = zx.d(*(*(esi + (zx.d(*(edx_2 - 1)) u>> arg4.b << 2))
                            + (zx.d(*(edx_2 - 2)) << 1)))
                        *(edx_2 - 1) = ecx_9.b
                        ecx_1 = arg4
                        eax_22 = (ecx_9 u>> 8).b
                        *(edx_2 - 2) = eax_22
                        i_4 = i_11
                        i_11 -= 1
                    while (i_4 != 1)
                    return eax_22
            else if (i_11 != 0)
                char eax_7
                int32_t i_5
                
                do
                    uint32_t eax_2 = zx.d(*edx_2)
                    edx_2 += 3
                    *(edx_2 - 3) = *(eax_2 + edi)
                    *(edx_2 - 2) = *(zx.d(*(edx_2 - 2)) + edi)
                    eax_7 = *(zx.d(*(edx_2 - 1)) + edi)
                    *(edx_2 - 1) = eax_7
                    i_5 = i_11
                    i_11 -= 1
                while (i_5 != 1)
                return eax_7
        case 4
            if (eax_1.b != 8)
                if (i_11 != 0)
                    uint32_t ecx_19 = zx.d(ecx.b)
                    arg4 = ecx_19
                    uint8_t eax_49
                    int32_t i_6
                    
                    do
                        uint32_t eax_45 = zx.d(*(edx_2 + 1))
                        edx_2 += 4
                        uint32_t ecx_21 =
                            zx.d(*(*(esi + (eax_45 u>> ecx_19.b << 2)) + (zx.d(*(edx_2 - 4)) << 1)))
                        *(edx_2 - 3) = ecx_21.b
                        ecx_19 = arg4
                        eax_49 = (ecx_21 u>> 8).b
                        *(edx_2 - 4) = eax_49
                        i_6 = i_11
                        i_11 -= 1
                    while (i_6 != 1)
                    return eax_49
            else if (i_11 != 0)
                uint32_t eax_44
                int32_t i_7
                
                do
                    eax_44 = zx.d(*edx_2)
                    edx_2 += 2
                    eax_44.b = *(eax_44 + edi)
                    *(edx_2 - 2) = eax_44.b
                    i_7 = i_11
                    i_11 -= 1
                while (i_7 != 1)
                return eax_44
        case 6
            if (eax_1.b != 8)
                if (i_11 != 0)
                    uint32_t ecx_10 = zx.d(ecx.b)
                    arg4 = ecx_10
                    uint8_t eax_43
                    int32_t i_8
                    
                    do
                        uint32_t eax_29 = zx.d(*(edx_2 + 1))
                        edx_2 += 8
                        uint32_t ecx_12 =
                            zx.d(*(*(esi + (eax_29 u>> ecx_10.b << 2)) + (zx.d(*(edx_2 - 8)) << 1)))
                        *(edx_2 - 7) = ecx_12.b
                        *(edx_2 - 8) = (ecx_12 u>> 8).b
                        uint32_t ecx_15 = zx.d(*(*(esi + (zx.d(*(edx_2 - 5)) u>> arg4.b << 2))
                            + (zx.d(*(edx_2 - 6)) << 1)))
                        *(edx_2 - 5) = ecx_15.b
                        *(edx_2 - 6) = (ecx_15 u>> 8).b
                        uint32_t ecx_18 = zx.d(*(*(esi + (zx.d(*(edx_2 - 3)) u>> arg4.b << 2))
                            + (zx.d(*(edx_2 - 4)) << 1)))
                        *(edx_2 - 3) = ecx_18.b
                        ecx_10 = arg4
                        eax_43 = (ecx_18 u>> 8).b
                        *(edx_2 - 4) = eax_43
                        i_8 = i_11
                        i_11 -= 1
                    while (i_8 != 1)
                    return eax_43
            else if (i_11 != 0)
                char eax_28
                int32_t i_9
                
                do
                    uint32_t eax_23 = zx.d(*edx_2)
                    edx_2 += 4
                    *(edx_2 - 4) = *(eax_23 + edi)
                    *(edx_2 - 3) = *(zx.d(*(edx_2 - 3)) + edi)
                    eax_28 = *(zx.d(*(edx_2 - 2)) + edi)
                    *(edx_2 - 2) = eax_28
                    i_9 = i_11
                    i_11 -= 1
                while (i_9 != 1)
                return eax_28
else if (eax_1.b == 0x10 && esi != 0)
    goto label_6d32b5

return eax_1
