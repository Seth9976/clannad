// 函数: sub_4dfac0
// 地址: 0x4dfac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t* edi_1 = arg1
void* i = edi_1[0x71]
int32_t ebx = 0
int32_t var_c = 0
long double (__stdcall* var_8)(int32_t arg1, float arg2, int16_t* arg3, int32_t arg4, 
    int32_t arg5) = nullptr
void* i_1 = nullptr

if (edi_1[9] s> 0)
    int32_t* esi_1 = edi_1[0x37] + 0x24
    int32_t* var_18_1 = esi_1
    int32_t* var_10_1 = i + 0x2c
    
    do
        void* eax_4
        
        switch (*esi_1 - 1)
            case 0
                ebx = 0
                var_8 = sub_4e7900
                var_c = 0
            case 1
                ebx = 0
                var_8 = sub_4e7450
                var_c = 0
            case 3
                ebx = 0
                var_8 = sub_4e7140
                var_c = 0
            case 7
                int32_t eax_3 = edi_1[0x12]
                
                if (eax_3 u> 6)
                    eax_4 = *edi_1
                    *(eax_4 + 0x14) = 0x30
                    (*eax_4)(edi_1)
                else
                    switch (eax_3)
                        case 0
                            ebx = 0
                            var_8 = sub_4e6020
                            var_c = 0
                        case 1, 4, 6
                            ebx = 1
                            var_8 = sub_4e5be0
                            var_c = 1
                        case 2
                            ebx = 2
                            var_8 = sub_4e5810
                            var_c = 2
                        case 3
                            ebx = 0
                            var_8 = sub_4e69a0
                            var_c = 0
                        case 5
                            ebx = 0
                            var_8 = sub_4e7100
                            var_c = 0
            default
                eax_4 = *edi_1
                *(eax_4 + 0x14) = 7
                *(eax_4 + 0x18) = *esi_1
                (*eax_4)(edi_1)
        
        var_10_1[-0xa] = var_8
        
        if (esi_1[3] != 0 && *var_10_1 != ebx)
            int16_t* edi_2 = esi_1[0xa]
            
            if (edi_2 != 0)
                *var_10_1 = ebx
                
                if (ebx == 0)
                    int16_t* ecx_13 = esi_1[0xb]
                    int16_t* edi_28 = edi_2 - ecx_13
                    int32_t j_3 = 0x40
                    int32_t j
                    
                    do
                        long double (__stdcall* edx_1)(int32_t arg1, float arg2, int16_t* arg3, 
                            int32_t arg4, int32_t arg5)
                        edx_1.w = *(edi_28 + ecx_13)
                        *ecx_13 = edx_1.w
                        ecx_13 = &ecx_13[1]
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                else if (ebx == 1)
                    void* eax_19 = esi_1[0xb]
                    void* edx_2 = &edi_2[3]
                    void* ecx_12 = eax_19 + 2
                    void* const j_1 = &data_acde60
                    int32_t eax_20 = neg.d(eax_19)
                    
                    do
                        *(ecx_12 - 2) = ((zx.d(*(edx_2 - 6)) * sx.d(*j_1) + 0x800) s>> 0xc).w
                        *ecx_12 = ((sx.d(*(eax_20 + ecx_12 + &data_acde60))
                            * zx.d(*(edi_2 - eax_19 + ecx_12)) + 0x800) s>> 0xc).w
                        *(ecx_12 + 2) = ((sx.d(*(eax_20 + ecx_12 + 0xacde62)) * zx.d(*(edx_2 - 2))
                            + 0x800) s>> 0xc).w
                        *(ecx_12 + 4) =
                            ((sx.d(*(eax_20 + ecx_12 + 0xacde64)) * zx.d(*edx_2) + 0x800) s>> 0xc).w
                        j_1 += 8
                        ecx_12 += 8
                        edx_2 += 8
                    while (j_1 s< &data_acdee0)
                    
                    esi_1 = var_18_1
                    ebx = var_c
                else if (ebx == 2)
                    void* ecx_4 = esi_1[0xb]
                    void* const j_2 = &data_acdee0
                    int16_t* eax_11 = edi_2
                    
                    do
                        *ecx_4 = fconvert.s(float.t(zx.d(*eax_11)) * fconvert.t(*j_2))
                        long double x87_r7_5 = float.t(zx.d(eax_11[1])) * fconvert.t(*j_2)
                            * fconvert.t(1.3870398450000001)
                        j_2 += 8
                        *(ecx_4 + 4) = fconvert.s(x87_r7_5)
                        uint32_t edi_5 = zx.d(eax_11[2])
                        eax_11 = &eax_11[8]
                        ecx_4 += 0x20
                        *(ecx_4 - 0x18) = fconvert.s(float.t(edi_5) * fconvert.t(*(j_2 - 8))
                            * fconvert.t(1.3065629649999999))
                        *(ecx_4 - 0x14) = fconvert.s(float.t(zx.d(eax_11[-5]))
                            * fconvert.t(*(j_2 - 8)) * fconvert.t(1.1758756020000001))
                        *(ecx_4 - 0x10) =
                            fconvert.s(float.t(zx.d(eax_11[-4])) * fconvert.t(*(j_2 - 8)))
                        *(ecx_4 - 0xc) = fconvert.s(float.t(zx.d(eax_11[-3]))
                            * fconvert.t(*(j_2 - 8)) * fconvert.t(0.785694958))
                        *(ecx_4 - 8) = fconvert.s(float.t(zx.d(eax_11[-2])) * fconvert.t(*(j_2 - 8))
                            * fconvert.t(0.54119609999999996))
                        *(ecx_4 - 4) = fconvert.s(float.t(zx.d(eax_11[-1])) * fconvert.t(*(j_2 - 8))
                            * fconvert.t(0.275899379))
                    while (j_2 s< &data_acdf20)
                else
                    void* eax_10 = *arg1
                    *(eax_10 + 0x14) = 0x30
                    (*eax_10)(arg1)
            
            edi_1 = arg1
        
        i = i_1 + 1
        var_10_1 = &var_10_1[1]
        esi_1 = &esi_1[0x15]
        i_1 = i
        var_18_1 = esi_1
    while (i s< edi_1[9])

return i
