// 函数: sub_5269c0
// 地址: 0x5269c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg6 s>= 0x40)
    return 

int32_t i_3 = *(arg3 + 8)
void* edi_1 = arg6 * 0x2d0 + &data_8fcadc
void* eax_1 = arg6 * 0x3920
void* var_48_1 = edi_1
void* eax_3 = arg6 * 0x1d4
int32_t edx_1 = 0
int32_t* eax_4 = nullptr
int32_t* var_28_1 = nullptr

if (i_3 s> 0)
    int32_t* esi_2 = *(arg3 + 4) + 0x14
    int32_t i
    
    do
        int32_t ecx = *esi_2
        
        if (ecx == 0 || ecx == 1)
            eax_4 = var_28_1
            
            if (esi_2[5] s> edx_1)
                edx_1 = esi_2[5]
        
        if (ecx == 0 || ecx == 1 || ecx == 3)
            eax_4 += 1
            var_28_1 = eax_4
        
        esi_2 = &esi_2[0xb]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t ebx_2
void* esi_4

if (arg2 != 0)
    ebx_2 = arg6
    
    if (*(edi_1 + 0x40) != 0)
        sub_57fdd0(eax_4, 1, ebx_2, 0)
    
    sub_576070(ebx_2)
    esi_4 = eax_1 + &data_f89afc
else
    int32_t edx_3 = (edx_1 + 1) s>> 1
    
    if (arg4 != 0)
        edx_3 += 1
    
    int32_t* ecx_1 = var_28_1
    
    if (edx_3 s< *(eax_3 + 0x1090afc))
        edx_3 = *(eax_3 + 0x1090afc)
    
    if (ecx_1 s< *(eax_3 + 0x1090b00))
        ecx_1 = *(eax_3 + 0x1090b00)
    
    ebx_2 = arg6
    void* eax_5
    eax_5.b = arg4 != 0
    uint32_t eax_6 = zx.d(eax_5.b)
    sub_575f00(eax_6, edx_3, ebx_2, ecx_1, 1, eax_6.b)
    sub_57f7d0(ebx_2)
    int32_t eax_7 = *(eax_3 + 0x1090ae8)
    int32_t edx_4 = *(eax_3 + 0x1090af0)
    *(edi_1 + 4) = *(eax_3 + &data_1090aec)
    *edi_1 = eax_7
    *(edi_1 + 8) = edx_4
    int32_t var_7c_2 = 0
    esi_4 = eax_1 + &data_f89afc
    sub_57fdd0(sub_577970(sub_57f830(ebx_2), edi_1, ebx_2, esi_4, eax_3 + &data_1090ae4), 1, ebx_2, 
        1)

int32_t eax_11 = *(eax_3 + 0x1090bdc)

if (eax_11 != 0 || *(eax_3 + 0x1090be0) != eax_11)
    int32_t eax_14
    void* ebx_3
    int32_t esi_5
    
    if (eax_11 u> 3)
        esi_5 = arg6
        eax_14 = arg6
        ebx_3 = eax_1 + &data_f89afc
    else
        switch (eax_11)
            case 0
                esi_5 = 0xffffffff
                eax_14 = arg6
                ebx_3 = eax_1 + &data_f89afc
            case 1
                ebx_3 = eax_1 + &data_f89afc
                esi_5 = 0
                int32_t eax_12 = data_70300c
                int32_t ecx_10 = *(ebx_3 + 0x29c)
                
                if (eax_12 s<= ecx_10)
                    eax_14 = (ecx_10 - eax_12) s>> 1
                else
                    eax_14 = (eax_12 - ecx_10) s>> 1
            case 2
                eax_14 = *(eax_3 + 0x1090be4)
                esi_5 = 0
                ebx_3 = eax_1 + &data_f89afc
            case 3
                eax_14 = *(eax_3 + 0x1090be4)
                esi_5 = 1
                ebx_3 = eax_1 + &data_f89afc
    
    int32_t ecx_13 = *(eax_3 + 0x1090be0)
    int32_t ecx_16
    int32_t edx_7
    
    if (ecx_13 u> 3)
        edx_7 = arg6
        ecx_16 = arg6
    else
        switch (ecx_13)
            case 0
                edx_7 = 0xffffffff
                ecx_16 = arg6
            case 1
                int32_t ebx_4 = *(ebx_3 + 0x2a0)
                edx_7 = 0
                int32_t ecx_14 = data_7030dc
                
                if (ecx_14 s<= ebx_4)
                    ecx_16 = (ebx_4 - ecx_14) s>> 1
                else
                    ecx_16 = (ecx_14 - ebx_4) s>> 1
            case 2
                edx_7 = 0
                ecx_16 = *(eax_3 + 0x1090be8)
            case 3
                edx_7 = 1
                ecx_16 = *(eax_3 + 0x1090be8)
    
    if (esi_5 == 0 || esi_5 == 1)
        *(edi_1 + 0x27c) = esi_5
        *(edi_1 + 0x274) = eax_14
    
    if (edx_7 == 0 || edx_7 == 1)
        *(edi_1 + 0x280) = edx_7
        *(edi_1 + 0x278) = ecx_16
    
    ebx_2 = arg6
    sub_57da00(eax_14, esi_5, ebx_2, edx_7, eax_14, ecx_16)
    esi_4 = eax_1 + &data_f89afc
    int32_t var_7c_4 = 0
    sub_577970(eax_3 + &data_1090ae4, edi_1, ebx_2, esi_4, eax_3 + &data_1090ae4)

bool cond:5_1 = *(esi_4 + 0x380c) != 0
*(esi_4 + 0x37e4) = 1

if (not(cond:5_1))
    data_13701d8 = 0
    data_137010c = 1

*(esi_4 + 0x380c) = 1
*(esi_4 + 0x380c) = 1
sub_57e2b0(ebx_2, 0x3f)
void* eax_16 = arg3
int32_t ecx_21 = *(eax_16 + 8)
int32_t ecx_22 = *(edi_1 + 0xc)
int32_t var_28_2

if (arg2 != 1)
    var_28_2 = 0
else
    var_28_2 = *(edi_1 + 0x30)

int32_t ecx_24 = *(edi_1 + 0x34)
int32_t edx_10 = 1
int32_t var_c_1 = 1
int32_t var_38_1 = 0
int32_t var_20_1
int32_t var_18_1
int32_t var_10_1

if (arg2 != 1)
    var_18_1 = arg6
    var_10_1 = arg6
    var_20_1 = arg6
else
    int32_t esi_6 = *edi_1
    int32_t ebx_10 = *(eax_1 + &data_f89b10)
    int32_t eax_20 = *(eax_1 + 0xf8d2f0) + 1 + esi_6 + ecx_24
    var_18_1 = eax_20
    int32_t i_2
    int32_t esi_8
    
    if (ebx_10 s> eax_20 && ecx_21 s>= 2)
        i_2 = ecx_21 - 1
        esi_8 = esi_6 + 1 + ecx_24
        var_18_1 = esi_8
    
    if (ebx_10 s<= eax_20 || ecx_21 s< 2 || i_2 s<= 0)
        edx_10 = 1
        eax_16 = arg3
        var_10_1 = arg6
        var_20_1 = arg6
    else
        int32_t* ecx_25 = *(arg3 + 4) + 0x14
        int32_t eax_27
        int32_t i_1
        
        do
            int32_t eax_24 = *ecx_25
            
            if (eax_24 == 0 || eax_24 == 1 || eax_24 == 3)
                int32_t eax_26 = var_18_1 + *(eax_1 + 0xf8d2f0)
                var_18_1 = eax_26
                eax_27 = var_c_1
                
                if (ebx_10 s<= eax_26)
                    eax_27 += 1
                    var_18_1 = esi_8
                    var_c_1 = eax_27
            else
                eax_27 = var_c_1
            
            ecx_25 = &ecx_25[0xb]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        edi_1 = var_48_1
        
        if (eax_27 s< 2)
            eax_16 = arg3
            edx_10 = var_c_1
            var_10_1 = arg6
            var_20_1 = arg6
        else
            var_10_1 = var_28_2 - 4
            edx_10 = var_c_1
            int32_t ebx_11 = divs.dp.d(sx.q(*(eax_1 + 0xf89b0c) - (var_28_2 - 4)), var_c_1)
            eax_16 = arg3
            
            if (ebx_11 s< *edi_1)
                ebx_11 = *edi_1
            
            var_20_1 = ebx_11

int32_t ecx_33 = *(eax_3 + 0x1090bf8)
int32_t var_3c_1 = ecx_33

if (ecx_33 == 0 || arg5 == 0)
    var_3c_1 = 0

void* esi_9 = *(eax_16 + 4)
void* var_14_1 = esi_9

if (edx_10 s>= 2)
    var_18_1 = *(edi_1 + 0x34) + 1 + *edi_1

int32_t ebx_15 = 0
int32_t var_24_1 = 0

if (ecx_21 s> 0)
    int32_t eax_34 = var_28_2 - var_10_1
    int32_t ecx_38 = var_10_1
    
    do
        int32_t eax_35 = *(esi_9 + 0x14)
        
        if (eax_35 == 0 || eax_35 == 1 || eax_35 == 3)
            *(edi_1 + 0x30) = var_28_2
            *esi_9 = var_28_2 - 4
            *(esi_9 + 8) = *(eax_1 + 0xf89b0c)
            
            if (arg2 == 0)
                int32_t esi_10 = *(eax_1 + 0xf89d90)
                int32_t ecx_40 = *(eax_1 + 0xf89b14) + var_28_2 - 4
                
                if (ecx_40 s< esi_10)
                    esi_9 = var_14_1
                else
                    esi_9 = var_14_1
                    int32_t eax_43 = *(eax_1 + 0xf89d98) + (esi_10 << 1) - ecx_40 - 1
                    
                    if (eax_43 s>= ecx_40)
                        *(esi_9 + 8) = eax_43 - ecx_40 + var_28_2 - 4
                
                ecx_38 = var_10_1
            
            if (var_c_1 s>= 2)
                *(edi_1 + 0x30) = eax_34 + ecx_38
                *esi_9 = ecx_38
                *(esi_9 + 8) = var_20_1 + ecx_38
            
            int32_t ecx_41 = *(edi_1 + 0x34)
            void* edx_14 = eax_1 + &data_f89afc
            *(esi_9 + 4) = ecx_41
            *(esi_9 + 0xc) = *edi_1 - 1 + ecx_41
            
            if (arg4 != 0)
                *(edi_1 + 0x30) += *(edx_14 + 0x37f0)
            
            int32_t eax_54 = *(esi_9 + 0x14)
            
            if (eax_54 == 0 || eax_54 == 1)
                char* ecx_42 = *(esi_9 + 0x24)
                
                if (ecx_42 != 0)
                    ebx_15 = var_24_1
                    
                    if (*(eax_3 + 0x1090bec) != 0 && var_c_1 s< 2)
                        int32_t eax_55
                        eax_55, ecx_42, edx_14 =
                            sub_4a5880(eax_54, *edi_1, ecx_42, *(edx_14 + 0x37f0))
                        
                        if (eax_55 s<= 0)
                            esi_9 = var_14_1
                        else
                            void* ebx_17 = *(edi_1 + 0x30)
                            edx_14 = *(eax_1 + 0xf89b14) - *(eax_1 + 0xf89d90)
                            ecx_42 = *(eax_1 + 0xf89d98) - (ebx_17 + edx_14) * 2
                            
                            if (eax_55 s>= ecx_42)
                                ebx_15 = var_24_1
                                esi_9 = var_14_1
                            else
                                esi_9 = var_14_1
                                ecx_42 = ((ecx_42 - eax_55) s>> 1) - edx_14 + ebx_17 + edx_14
                                ebx_15 = var_24_1
                                
                                if (ecx_42 s>= ebx_17)
                                    *(edi_1 + 0x30) = ecx_42
                    
                    char* esi_12 = *(esi_9 + 0x24)
                    *(edi_1 + 0xc) = *(var_14_1 + 0x10)
                    int32_t* eax_60
                    eax_60.b = *esi_12
                    
                    if (eax_60.b != 0)
                        do
                            int32_t var_44
                            uint32_t var_40
                            
                            if (eax_60.b u< 0x80)
                            label_526f8f:
                                esi_12 = &esi_12[1]
                                uint32_t edx_19 = zx.d(eax_60.b)
                                var_40 = edx_19
                                eax_60, edx_14 =
                                    sub_57f4b0(eax_60, edx_19, arg6, 1, 0, ebx_15, var_3c_1, 1, 1)
                                var_44 = 0
                            else
                                if (eax_60.b u< 0xa0)
                                    if (eax_60.b u>= 0xfe)
                                        goto label_526f8f
                                else if (eax_60.b u<= 0xdf || eax_60.b u>= 0xfe)
                                    goto label_526f8f
                                
                                uint32_t var_68
                                uint32_t var_64
                                uint32_t var_60
                                int32_t var_54
                                uint32_t var_50
                                uint32_t* eax_62 = sub_4eba80(&var_40, edx_14, esi_12, &var_40, 
                                    &var_68, &var_64, &var_60, &var_54, &var_50, &var_44)
                                
                                if (var_44 != 0)
                                    eax_60, edx_14 = sub_57f650(eax_62, var_54, arg6, var_50, 0, 
                                        ebx_15, var_3c_1, 1, 1)
                                    esi_12 = &esi_12[8]
                                else
                                    eax_60, edx_14 = sub_57f4b0(eax_62, var_40, arg6, 0, 0, ebx_15, 
                                        var_3c_1, 1, 1)
                                    esi_12 = &esi_12[2]
                            eax_60.b = *esi_12
                        while (eax_60.b != 0)
                        
                        edi_1 = var_48_1
                    
                    esi_9 = var_14_1
                    
                    if (data_702fc0 != 0)
                        sub_41bcf0(*(esi_9 + 0x24))
            
            *(edi_1 + 0x30) = *(edi_1 + 0x38)
            *(edi_1 + 0x34) += *(eax_1 + 0xf8d2f0)
            
            if (*(eax_3 + 0x1090c00) != 0 && *(edi_1 + 0x44) == 1 && *(edi_1 + 0x4c) != 0)
                if (*(edi_1 + 0x48) != 0)
                    *(edi_1 + 0x44) = 0
                else
                    *(edi_1 + 0x48) = 1
            
            if (data_702fc0 != 0)
                int32_t eax_66 = data_1333e48
                
                if (eax_66 s< 0x18ffd)
                    *(eax_66 + &data_1333e4c:3) = 0xa0d
                    data_1333e48 = eax_66 + 1
                    
                    if (eax_66 + 1 u>= 0x19000)
                        ___report_rangecheckfailure()
                        noreturn
                    
                    *(eax_66 + 0x1333e51) = 0
                    eax_66 += 2
                    data_1333e48 = eax_66
                
                sub_460e20(eax_66, 0, eax_1 + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 0xffffffff, 0)
            
            edx_10 = var_c_1
            
            if (edx_10 s< 2)
                ecx_38 = var_10_1
            else
                int32_t ecx_55 = var_38_1
                
                if (ecx_55 s< *(edi_1 + 0x34))
                    ecx_55 = *(edi_1 + 0x34)
                
                int32_t edx_21 = var_18_1 + *(eax_1 + 0xf8d2f0)
                var_18_1 = edx_21
                edx_10 = var_c_1
                var_38_1 = ecx_55
                
                if (*(eax_1 + &data_f89b10) s> edx_21)
                    ecx_38 = var_10_1
                else
                    int32_t eax_69 = *edi_1
                    *(edi_1 + 0x34) = ecx_24
                    ecx_38 = var_10_1 + var_20_1
                    var_18_1 = eax_69 + ecx_24 + 1
                    var_10_1 = ecx_38
        
        ebx_15 += 1
        esi_9 += 0x2c
        var_14_1 = esi_9
        var_24_1 = ebx_15
    while (ebx_15 s< ecx_21)

if (edx_10 s>= 2 && var_38_1 s> 0)
    *(edi_1 + 0x34) = var_38_1

*(edi_1 + 0xc) = ecx_22
