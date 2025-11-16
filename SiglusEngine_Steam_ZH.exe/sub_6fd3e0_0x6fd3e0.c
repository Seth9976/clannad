// 函数: sub_6fd3e0
// 地址: 0x6fd3e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce45b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_90 = ebx
int32_t* eax_3 = *ebx
void var_c0
(*(*eax_3 + 0xc))(eax_3, &var_c0)
int32_t edi = 0
int32_t var_bc

if (var_bc s> 0)
    while (true)
        int32_t* eax_4 = *ebx
        int32_t eax_5 = (*(*eax_4 + 0x20))(eax_4, 0, edi)
        int32_t* ecx_1 = *ebx
        char* var_58
        (*(*ecx_1 + 0x10))(ecx_1, eax_5, &var_58)
        int32_t var_50
        int32_t var_4c
        
        if (var_50 != 4)
            if (var_50 == 1 && var_4c == 3)
                void* eax_10 = var_58
                void* const edx_5 = &data_b07f38
                void* ecx_13 = eax_10
                int32_t ecx_15
                
                while (true)
                    ebx.b = *ecx_13
                    char temp1_1 = *edx_5
                    bool c_5 = ebx.b u< temp1_1
                    
                    if (ebx.b == temp1_1)
                        if (ebx.b == 0)
                            ecx_15 = 0
                            break
                        
                        ebx.b = *(ecx_13 + 1)
                        char temp3_1 = *(edx_5 + 1)
                        c_5 = ebx.b u< temp3_1
                        
                        if (ebx.b == temp3_1)
                            ecx_13 += 2
                            edx_5 += 2
                            
                            if (ebx.b != 0)
                                continue
                            
                            ecx_15 = 0
                            break
                    
                    ecx_15 = sbb.d(ecx_13, ecx_13, c_5) | 1
                    break
                
                if (ecx_15 != 0)
                    void* const edx_6 = &data_b07f50
                    void* ecx_16 = eax_10
                    int32_t ecx_18
                    
                    while (true)
                        ebx.b = *ecx_16
                        char temp5_1 = *edx_6
                        bool c_6 = ebx.b u< temp5_1
                        
                        if (ebx.b == temp5_1)
                            if (ebx.b == 0)
                                ecx_18 = 0
                                break
                            
                            ebx.b = *(ecx_16 + 1)
                            char temp7_1 = *(edx_6 + 1)
                            c_6 = ebx.b u< temp7_1
                            
                            if (ebx.b == temp7_1)
                                ecx_16 += 2
                                edx_6 += 2
                                
                                if (ebx.b != 0)
                                    continue
                                
                                ecx_18 = 0
                                break
                        
                        ecx_18 = sbb.d(ecx_16, ecx_16, c_6) | 1
                        break
                    
                    if (ecx_18 != 0)
                        void* const edx_7 = &data_b07f4c
                        void* ecx_19 = eax_10
                        int32_t ecx_21
                        
                        while (true)
                            ebx.b = *ecx_19
                            char temp9_1 = *edx_7
                            bool c_7 = ebx.b u< temp9_1
                            
                            if (ebx.b == temp9_1)
                                if (ebx.b == 0)
                                    ecx_21 = 0
                                    break
                                
                                ebx.b = *(ecx_19 + 1)
                                char temp11_1 = *(edx_7 + 1)
                                c_7 = ebx.b u< temp11_1
                                
                                if (ebx.b == temp11_1)
                                    ecx_19 += 2
                                    edx_7 += 2
                                    
                                    if (ebx.b != 0)
                                        continue
                                    
                                    ecx_21 = 0
                                    break
                            
                            ecx_21 = sbb.d(ecx_19, ecx_19, c_7) | 1
                            break
                        
                        if (ecx_21 != 0)
                            void* const ecx_22 = &data_b07f60
                            int32_t eax_12
                            
                            while (true)
                                edx_7.b = *eax_10
                                char temp13_1 = *ecx_22
                                bool c_8 = edx_7.b u< temp13_1
                                
                                if (edx_7.b == temp13_1)
                                    if (edx_7.b == 0)
                                        eax_12 = 0
                                        break
                                    
                                    edx_7.b = *(eax_10 + 1)
                                    char temp15_1 = *(ecx_22 + 1)
                                    c_8 = edx_7.b u< temp15_1
                                    
                                    if (edx_7.b == temp15_1)
                                        eax_10 += 2
                                        ecx_22 += 2
                                        
                                        if (edx_7.b != 0)
                                            continue
                                        
                                        eax_12 = 0
                                        break
                                
                                eax_12 = sbb.d(eax_10, eax_10, c_8) | 1
                                break
                            
                            ebx = var_90
                            
                            if (eax_12 == 0)
                                ebx[0x613] = eax_5
                        else
                            ebx = var_90
                            ebx[0x612] = eax_5
                    else
                        ebx = var_90
                        ebx[0x611] = eax_5
                else
                    ebx = var_90
                    ebx[0x610] = eax_5
        else if (var_4c == 5)
            char* eax_7 = var_58
            char const* const edx_2 = "Tex00"
            char* ecx_3 = eax_7
            int32_t ecx_5
            
            while (true)
                ebx.b = *ecx_3
                char const temp0_1 = *edx_2
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        ecx_5 = 0
                        break
                    
                    ebx.b = ecx_3[1]
                    char temp2_1 = edx_2[1]
                    c_1 = ebx.b u< temp2_1
                    
                    if (ebx.b == temp2_1)
                        ecx_3 = &ecx_3[2]
                        edx_2 = &edx_2[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        ecx_5 = 0
                        break
                
                ecx_5 = sbb.d(ecx_3, ecx_3, c_1) | 1
                break
            
            if (ecx_5 != 0)
                char const* const edx_3 = "Tex01"
                char* ecx_6 = eax_7
                int32_t ecx_8
                
                while (true)
                    ebx.b = *ecx_6
                    char const temp4_1 = *edx_3
                    bool c_2 = ebx.b u< temp4_1
                    
                    if (ebx.b == temp4_1)
                        if (ebx.b == 0)
                            ecx_8 = 0
                            break
                        
                        ebx.b = ecx_6[1]
                        char temp6_1 = edx_3[1]
                        c_2 = ebx.b u< temp6_1
                        
                        if (ebx.b == temp6_1)
                            ecx_6 = &ecx_6[2]
                            edx_3 = &edx_3[2]
                            
                            if (ebx.b != 0)
                                continue
                            
                            ecx_8 = 0
                            break
                    
                    ecx_8 = sbb.d(ecx_6, ecx_6, c_2) | 1
                    break
                
                if (ecx_8 != 0)
                    char const* const edx_4 = "Tex02"
                    char* ecx_9 = eax_7
                    int32_t ecx_11
                    
                    while (true)
                        ebx.b = *ecx_9
                        char const temp8_1 = *edx_4
                        bool c_3 = ebx.b u< temp8_1
                        
                        if (ebx.b == temp8_1)
                            if (ebx.b == 0)
                                ecx_11 = 0
                                break
                            
                            ebx.b = ecx_9[1]
                            char temp10_1 = edx_4[1]
                            c_3 = ebx.b u< temp10_1
                            
                            if (ebx.b == temp10_1)
                                ecx_9 = &ecx_9[2]
                                edx_4 = &edx_4[2]
                                
                                if (ebx.b != 0)
                                    continue
                                
                                ecx_11 = 0
                                break
                        
                        ecx_11 = sbb.d(ecx_9, ecx_9, c_3) | 1
                        break
                    
                    if (ecx_11 != 0)
                        char const* const ecx_12 = "Tex03"
                        int32_t eax_9
                        
                        while (true)
                            edx_4.b = *eax_7
                            char const temp12_1 = *ecx_12
                            bool c_4 = edx_4.b u< temp12_1
                            
                            if (edx_4.b == temp12_1)
                                if (edx_4.b == 0)
                                    eax_9 = 0
                                    break
                                
                                edx_4.b = eax_7[1]
                                char temp14_1 = ecx_12[1]
                                c_4 = edx_4.b u< temp14_1
                                
                                if (edx_4.b == temp14_1)
                                    eax_7 = &eax_7[2]
                                    ecx_12 = &ecx_12[2]
                                    
                                    if (edx_4.b != 0)
                                        continue
                                    
                                    eax_9 = 0
                                    break
                            
                            eax_9 = sbb.d(eax_7, eax_7, c_4) | 1
                            break
                        
                        ebx = var_90
                        
                        if (eax_9 == 0)
                            ebx[0x60f] = eax_5
                    else
                        ebx = var_90
                        ebx[0x60e] = eax_5
                else
                    ebx = var_90
                    ebx[0x60d] = eax_5
            else
                ebx = var_90
                ebx[0x60c] = eax_5
        edi += 1
        
        if (edi s>= var_bc)
            break

int32_t ecx_23 = 0
label_6fd6a0:
int32_t eax_13 = 0
int32_t var_8c_1 = 0
label_6fd6a8:
int32_t edx_8 = 0
label_6fd6d0:
int32_t ebx_3 = 0
label_6fd6e0:
int32_t var_a8_1
__builtin_memset(&var_a8_1, 0, 0x18)
label_6fd6f0:
int32_t edi_1 = 0
label_6fd6f2:
int32_t esi_2 = 0

while (true)
    int32_t var_a4_1
    int32_t var_a0_1
    int32_t* var_9c_1
    int32_t var_98_1
    int32_t var_94_1
    int32_t result
    
    if (edi_1 == 0)
    label_6fd708:
        
        if (ecx_23 != 0)
        label_6fd71e:
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            int32_t var_8_1 = 0
            sub_532910(&var_2c, u"tec_v", 5)
            
            if (var_8c_1 != 0)
                sub_532910(&var_2c, u"_d3_light", 9)
            else if (var_98_1 != 0)
                sub_532910(&var_2c, u"_d3_fog", 7)
            else if (var_94_1 != 0)
                sub_532910(&var_2c, &data_b082e0, 3)
            
            sub_532910(&var_2c, 0xb082d8, 2)
            void* const var_dc_3
            
            if (var_8c_1 != 0)
                var_dc_3 = &data_b082f0
            else if (var_98_1 == 0)
                var_dc_3 = &data_b08304
            else
                var_dc_3 = &data_b082e8
            
            sub_532910(&var_2c, var_dc_3, 3)
            
            if (var_9c_1 != 0)
                sub_532910(&var_2c, u"_tex", 4)
            
            if (var_a4_1 != 0)
                sub_532910(&var_2c, u"_diffuse", 8)
            
            if (ebx_3 != 0)
                sub_532910(&var_2c, u"_mrbd", 5)
            
            if (var_a0_1 != 0)
                sub_532910(&var_2c, u"_rgb", 4)
            
            if (var_a8_1 != 0)
                sub_532910(&var_2c, u"_tonecurve", 0xa)
            
            if (edi_1 != 0)
                sub_532910(&var_2c, u"_mask", 5)
            
            if (esi_2 == 1)
                sub_532910(&var_2c, u"_mul", 4)
            else if (esi_2 == 2)
                sub_532910(&var_2c, u"_screen", 7)
            
            int32_t* eax_15 = *var_90
            int32_t var_44
            char* edx_9 = sub_6af1a0(&var_44)
            var_8_1.b = 1
            
            if (*(edx_9 + 0x14) u>= 0x10)
                edx_9 = *edx_9
            
            int32_t ecx_42 = edi_1 + ((var_a8_1 + ((var_a0_1 + ((ebx_3 + ((var_a4_1
                + ((var_9c_1 + ((var_98_1 + ((var_8c_1 + (var_94_1 << 1)) << 1)) << 1)) << 1)) << 1))
                << 1)) << 1)) << 1)
            void* eax_27 = &var_90[1 + ecx_42 * 3 + esi_2]
            var_8_1.b = 0
            *eax_27 = (*(*eax_15 + 0x34))(eax_15, edx_9)
            int32_t var_30
            
            if (var_30 u>= 0x10)
                j__free(var_44)
            
            if (*eax_27 == 0)
                int32_t var_5c_1 = 7
                int32_t var_60_1 = 0
                int16_t var_70 = 0
                sub_52e720(&var_70, u"GetTechniqueByName", 0x12)
                var_8_1.b = 2
                int16_t* eax_57 = sub_548cb0(&var_2c, 0xb083b0, &var_44, &var_2c)
                var_8_1.b = 3
                var_8_1.b = 4
                int16_t var_88
                sub_6b9da0(sub_532b80(eax_57, eax_57, &var_88, &data_af1b40), &var_70)
                int32_t var_74
                
                if (var_74 u>= 8)
                    j__free(var_88.d)
                
                int32_t var_74_1 = 7
                int32_t var_78_1 = 0
                var_88 = 0
                
                if (var_30 u>= 8)
                    j__free(var_44)
                
                int32_t var_30_1 = 7
                int32_t var_34_1 = 0
                var_44.w = 0
                
                if (var_5c_1 u>= 8)
                    j__free(var_70.d)
                
                if (var_18_1 u>= 8)
                    j__free(var_2c.d)
                
                result.b = 0
            label_6fdbb6:
                fsbase->NtTib.ExceptionList = ExceptionList
                sub_745f2b(eax_2 ^ &__saved_ebp)
                return result
            
            int32_t var_8_2 = 0xffffffff
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
            
            ecx_23 = var_94_1
            eax_13 = var_8c_1
            edx_8 = var_98_1
        else if (eax_13 == 0 && edx_8 == 0)
            goto label_6fd71e
    else if (eax_13 == 0 && edx_8 == 0)
        goto label_6fd708
    
    esi_2 += 1
    
    if (esi_2 s>= 3)
        edi_1 += 1
        
        if (edi_1 s< 2)
            goto label_6fd6f2
        
        int32_t eax_32 = var_a8_1 + 1
        var_a8_1 = eax_32
        eax_13 = var_8c_1
        
        if (eax_32 s< 2)
            goto label_6fd6f0
        
        int32_t eax_34 = var_a0_1 + 1
        var_a0_1 = eax_34
        eax_13 = var_8c_1
        
        if (eax_34 s< 2)
            goto label_6fd6e0
        
        ebx_3 += 1
        
        if (ebx_3 s< 2)
            goto label_6fd6e0
        
        int32_t ecx_48 = var_a4_1 + 1
        var_a4_1 = ecx_48
        ecx_23 = var_94_1
        
        if (ecx_48 s< 2)
            goto label_6fd6d0
        
        int32_t* ebx_1 = var_9c_1 + 1
        var_9c_1 = ebx_1
        
        if (ebx_1 s< 2)
            goto label_6fd6d0
        
        edx_8 += 1
        var_98_1 = edx_8
        
        if (edx_8 s< 2)
            goto label_6fd6d0
        
        eax_13 += 1
        var_8c_1 = eax_13
        
        if (eax_13 s< 2)
            goto label_6fd6a8
        
        ecx_23 += 1
        var_94_1 = ecx_23
        
        if (ecx_23 s< 2)
            break
        
        int32_t* eax_35 = *var_90
        var_90[0x601] = (*(*eax_35 + 0x34))(eax_35, "tec_tex2_mask")
        int32_t* eax_37 = *var_90
        var_90[0x602] = (*(*eax_37 + 0x34))(eax_37, "tec_tex1_shimi")
        int32_t* eax_39 = *var_90
        var_90[0x603] = (*(*eax_39 + 0x34))(eax_39, "tec_tex1_shimi_inv")
        int32_t* eax_41 = *var_90
        var_90[0x604] = (*(*eax_41 + 0x34))(eax_41, "tec_tex2_raster_h")
        int32_t* eax_43 = *var_90
        var_90[0x605] = (*(*eax_43 + 0x34))(eax_43, "tec_tex2_raster_v")
        int32_t* eax_45 = *var_90
        var_90[0x606] = (*(*eax_45 + 0x34))(eax_45, "tec_tex1_raster_h")
        int32_t* eax_47 = *var_90
        var_90[0x607] = (*(*eax_47 + 0x34))(eax_47, "tec_tex1_raster_v")
        int32_t* eax_49 = *var_90
        var_90[0x608] = (*(*eax_49 + 0x34))(eax_49, "tec_tex2_explosion_blur")
        int32_t* eax_51 = *var_90
        var_90[0x609] = (*(*eax_51 + 0x34))(eax_51, "tec_tex1_explosion_blur")
        int32_t* eax_53 = *var_90
        var_90[0x60a] = (*(*eax_53 + 0x34))(eax_53, "tec_tex2_mosaic")
        int32_t* eax_55 = *var_90
        var_90[0x60b] = (*(*eax_55 + 0x34))(eax_55, "tec_tex1_mosaic")
        result.b = 1
        goto label_6fdbb6

goto label_6fd6a0
