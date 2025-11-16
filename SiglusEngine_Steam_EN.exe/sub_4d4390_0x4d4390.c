// 函数: sub_4d4390
// 地址: 0x4d4390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg4

if (esi != 2)
    data_20c02b0 = zx.o(0)
else
    __builtin_memset(&data_20c02c0, 0, 0x18)

data_20c02a4 = esi
void logfont
_memset(&logfont, 0, 0x3c)
char var_4d = 0x80
int16_t var_49 = 0
EnumFontFamiliesExA(arg3, &logfont, sub_4d4290, 0, 0)

if (esi == 2)
    int32_t i = 0
    int32_t var_68_1 = 0
    
    if (data_20c02c8 s> 0)
        int32_t edi_1 = 0
        void var_28
        int32_t eax_4
        
        do
            int32_t var_8c_1 = *(edi_1 + data_20c02c4 + 4)
            eax_4 = var_68_1
            
            if (sub_4d1550(sub_4c84d0(&var_28, "@%s"), &var_28) != 0xffffffff)
                eax_4 += 1
                var_68_1 = eax_4
            
            i += 1
            edi_1 += 0xc
        while (i s< data_20c02c8)
        
        if (eax_4 != 0)
            int32_t eax_6 = eax_4 * 0xc
            sub_4d6960(eax_6, &arg2[1], arg2, eax_6, "FONTLIST")
            int32_t* edi_2 = arg2[1]
            int32_t i_2 = 0
            
            if (data_20c02c8 s> 0)
                int32_t esi_2 = 0
                int32_t var_70_1 = 0
                int32_t i_1
                
                do
                    int32_t var_8c_2 = *(esi_2 + data_20c02c4 + 4)
                    
                    if (sub_4d1550(sub_4c84d0(&var_28, "@%s"), &var_28) != 0xffffffff)
                        char* ecx_3 = *(esi_2 + data_20c02c4 + 4)
                        char* var_78_1 = ecx_3
                        
                        if (ecx_3 != 0)
                            int32_t esi_3 = 0
                            char* eax_10 = ecx_3
                            
                            if (*ecx_3 != 0)
                                do
                                    ecx_3.b = *eax_10
                                    
                                    if (ecx_3.b u< 0x80)
                                        esi_3 += 1
                                        eax_10 = &eax_10[1]
                                    else if (ecx_3.b u< 0xa0)
                                        if (ecx_3.b u>= 0xfe)
                                            esi_3 += 1
                                            eax_10 = &eax_10[1]
                                        else
                                            esi_3 += 2
                                            eax_10 = &eax_10[2]
                                    else if (ecx_3.b u<= 0xdf || ecx_3.b u>= 0xfe)
                                        esi_3 += 1
                                        eax_10 = &eax_10[1]
                                    else
                                        esi_3 += 2
                                        eax_10 = &eax_10[2]
                                while (*eax_10 != 0)
                            
                            sub_4d1c30(
                                sub_4d6960(eax_10, &edi_2[1], edi_2, esi_3 + 1, "FontListName"), 
                                var_78_1, edi_2[1], esi_3 + 1)
                            esi_2 = var_70_1
                        
                        edi_2[2].b = 0x80
                        edi_2 = &edi_2[3]
                    
                    esi_2 += 0xc
                    i_1 = i_2 + 1
                    var_70_1 = esi_2
                    i_2 = i_1
                while (i_1 s< data_20c02c8)
            
            arg2[3] = var_68_1
    
    sub_4d1410(&data_20c02c0)
    BOOL eax_14 = sub_4d1410(&data_20c02cc)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_14

int32_t eax_15 = data_20c02b0:0xc

if (eax_15 != 0)
    int32_t eax_17 = eax_15 * 0xc
    sub_4d6960(eax_17, &arg2[1], arg2, eax_17, "FONTLIST")
    int32_t eax_18 = data_20c02b0:0xc
    int32_t edx_6 = 0
    int32_t* edi_3 = arg2[1]
    int32_t* var_68_2 = edi_3
    int32_t var_70_2 = 0
    
    if (eax_18 s> 0)
        char* ecx_11 = data_20c02b0:4 + 8
        char* var_6c_1 = ecx_11
        char* ecx_12 = ecx_11
        
        do
            char* eax_20 = *(ecx_12 - 4)
            
            if (eax_20 != 0)
                uint32_t eax_19 = sub_4cfc80(eax_20)
                sub_4d1c30(sub_4d6960(eax_19, &edi_3[1], var_68_2, eax_19, "FontListName"), eax_20, 
                    edi_3[1], eax_19)
                ecx_12 = var_6c_1
                edi_3 = var_68_2
                edx_6 = var_70_2
            
            eax_20.b = *ecx_12
            edx_6 += 1
            edi_3[2].b = eax_20.b
            ecx_12 = &ecx_12[0xc]
            eax_18 = data_20c02b0:0xc
            edi_3 = &edi_3[3]
            var_6c_1 = ecx_12
            var_68_2 = edi_3
            var_70_2 = edx_6
        while (edx_6 s< eax_18)
    
    esi = arg4
    arg2[3] = eax_18

BOOL eax_21 = sub_4d4070(&data_20c02b0)

if (esi == 0x62 || esi == 0x63)
    data_20c02b0 = zx.o(0)
    _memset(&logfont, 0, 0x3c)
    char var_4d_1 = 0
    int16_t var_49_1 = 0
    EnumFontFamiliesExA(arg3, &logfont, sub_4d4290, 0, 0)
    int32_t eax_22 = data_20c02b0:0xc
    
    if (eax_22 != 0)
        int32_t ecx_17 = arg2[3]
        void** esi_7 = &arg2[1]
        void** var_6c_2 = esi_7
        
        if (ecx_17 s> 0)
            void* eax_27 = (eax_22 + ecx_17) * 0xc
            sub_4d6ae0(eax_27, esi_7, arg2, eax_27)
        else
            int32_t eax_24 = eax_22 * 0xc
            sub_4d6960(eax_24, esi_7, arg2, eax_24, "FONTLIST")
            arg2[3] = 0
        
        int32_t edi_5 = 0
        int32_t var_70_3 = 0
        int32_t var_78_3 = 0
        
        if (data_20c02b0:0xc s> 0)
            void* edx_10 = *esi_7 + ((arg2[3] * 3 + 1) << 2)
            int32_t* ecx_23 = data_20c02b0:4 + 4
            void* var_80_1 = edx_10
            int32_t* var_68_3 = ecx_23
            bool cond:2_1
            
            do
                int32_t eax_31 = arg2[3]
                
                if (eax_31 s<= 0)
                label_4d477c:
                    *edx_10 = 0
                    *(edx_10 - 4) = 0
                    char* edi_8 = *ecx_23
                    
                    if (edi_8 != 0)
                        int32_t esi_9 = 0
                        char* eax_34 = edi_8
                        
                        if (*edi_8 != 0)
                            do
                                ecx_23.b = *eax_34
                                
                                if (ecx_23.b u< 0x80)
                                    esi_9 += 1
                                    eax_34 = &eax_34[1]
                                else if (ecx_23.b u< 0xa0)
                                    if (ecx_23.b u>= 0xfe)
                                        esi_9 += 1
                                        eax_34 = &eax_34[1]
                                    else
                                        esi_9 += 2
                                        eax_34 = &eax_34[2]
                                else if (ecx_23.b u<= 0xdf || ecx_23.b u>= 0xfe)
                                    esi_9 += 1
                                    eax_34 = &eax_34[1]
                                else
                                    esi_9 += 2
                                    eax_34 = &eax_34[2]
                            while (*eax_34 != 0)
                        
                        sub_4d1c30(
                            sub_4d6960(eax_34, edx_10, edx_10 - 4, esi_9 + 1, "FontListName"), 
                            edi_8, *var_80_1, esi_9 + 1)
                        edx_10 = var_80_1
                        ecx_23 = var_68_3
                    
                    BOOL eax_35
                    eax_35.b = ecx_23[1].b
                    *(edx_10 + 4) = eax_35.b
                    edx_10 += 0xc
                    edi_5 = var_70_3 + 1
                    var_80_1 = edx_10
                    var_70_3 = edi_5
                else
                    int32_t esi_8 = 0
                    
                    if (eax_31 s<= 0)
                        goto label_4d477c
                    
                    void* edi_7 = *esi_7 + 4
                    
                    do
                        if (sub_4d0f10(*ecx_23, *edi_7) == 0)
                            break
                        
                        ecx_23 = var_68_3
                        esi_8 += 1
                        edi_7 += 0xc
                    while (esi_8 s< eax_31)
                    
                    edx_10 = var_80_1
                    ecx_23 = var_68_3
                    
                    if (esi_8 == eax_31)
                        goto label_4d477c
                    
                    edi_5 = var_70_3
                
                ecx_23 = &ecx_23[3]
                var_68_3 = ecx_23
                cond:2_1 = var_78_3 + 1 s< data_20c02b0:0xc
                var_78_3 += 1
                esi_7 = var_6c_2
            while (cond:2_1)
        
        arg2[3] += edi_5
        void* eax_38 = arg2[3] * 0xc
        sub_4d6ae0(eax_38, esi_7, arg2, eax_38)
    
    eax_21 = sub_4d4070(&data_20c02b0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_21
