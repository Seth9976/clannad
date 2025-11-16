// 函数: sub_47de83
// 地址: 0x47de83
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_3c = edi
char* esi = arg1

if (*arg1 != 0)
    do
        if (_isalpha(sx.d(*esi)) == 0)
            break
        
        esi = &esi[1]
    while (*esi != 0)

char var_21

if (*esi == 0)
    var_21 = 0
else
    char* var_40_2 = esi
    var_21 = sub_75efed().b

int32_t result

if (var_21 u<= 0xf)
    void* ebx_2 = esi - arg1
    
    if (esi == arg1 || ebx_2 u> 0x14)
        result = 0x80004005
    else
        char* eax
        eax.b = *esi
        
        if (eax.b == 0)
        label_47df29:
            char* esi_1 = arg1
            char var_20[0x18]
            
            if (*arg1 != 0)
                do
                    if (_isalpha(sx.d(*esi_1)) == 0)
                        break
                    
                    *(&var_20 - arg1 + esi_1) = _toupper(sx.d(*esi_1))
                    esi_1 = &esi_1[1]
                while (*esi_1 != 0)
            
            char const* const edi_3 = "POSITION"
            char (* esi_2)[0x18] = &var_20
            int32_t i = 9
            bool cond:6_1 = false
            *(&var_20 + ebx_2) = 0
            
            while (i != 0)
                char temp2_1 = *esi_2
                char const temp3_1 = *edi_3
                cond:6_1 = temp2_1 != temp3_1
                esi_2 = &(*esi_2)[1]
                edi_3 = &edi_3[1]
                i -= 1
                
                if (temp2_1 != temp3_1)
                    break
            
            char eax_8
            
            if (cond:6_1)
                char const* const edi_4 = "BLENDWEIGHT"
                char (* esi_3)[0x18] = &var_20
                int32_t i_1 = 0xc
                bool cond:8_1 = false
                
                while (i_1 != 0)
                    char temp4_1 = *esi_3
                    char const temp5_1 = *edi_4
                    cond:8_1 = temp4_1 != temp5_1
                    esi_3 = &(*esi_3)[1]
                    edi_4 = &edi_4[1]
                    i_1 -= 1
                    
                    if (temp4_1 != temp5_1)
                        break
                
                if (not(cond:8_1))
                    eax_8 = 1
                    goto label_47e0c8
                
                char const* const edi_5 = "BLENDINDICES"
                char (* esi_4)[0x18] = &var_20
                int32_t i_2 = 0xd
                bool cond:11_1 = false
                
                while (i_2 != 0)
                    char temp6_1 = *esi_4
                    char const temp7_1 = *edi_5
                    cond:11_1 = temp6_1 != temp7_1
                    esi_4 = &(*esi_4)[1]
                    edi_5 = &edi_5[1]
                    i_2 -= 1
                    
                    if (temp6_1 != temp7_1)
                        break
                
                if (not(cond:11_1))
                    eax_8 = 2
                    goto label_47e0c8
                
                char const* const edi_6 = "NORMAL"
                char (* esi_5)[0x18] = &var_20
                int32_t i_3 = 7
                bool cond:14_1 = false
                
                while (i_3 != 0)
                    char temp8_1 = *esi_5
                    char const temp9_1 = *edi_6
                    cond:14_1 = temp8_1 != temp9_1
                    esi_5 = &(*esi_5)[1]
                    edi_6 = &edi_6[1]
                    i_3 -= 1
                    
                    if (temp8_1 != temp9_1)
                        break
                
                if (not(cond:14_1))
                    eax_8 = 3
                    goto label_47e0c8
                
                eax_8 = 6
                char const* const edi_7 = "PSIZE"
                char (* esi_6)[0x18] = &var_20
                int32_t i_4 = 6
                bool cond:16_1 = false
                
                while (i_4 != 0)
                    char temp10_1 = *esi_6
                    char const temp11_1 = *edi_7
                    cond:16_1 = temp10_1 != temp11_1
                    esi_6 = &(*esi_6)[1]
                    edi_7 = &edi_7[1]
                    i_4 -= 1
                    
                    if (temp10_1 != temp11_1)
                        break
                
                if (not(cond:16_1))
                    eax_8 = 4
                    goto label_47e0c8
                
                char const* const edi_8 = "TEXCOORD"
                char (* esi_7)[0x18] = &var_20
                int32_t i_5 = 9
                bool cond:18_1 = false
                
                while (i_5 != 0)
                    char temp12_1 = *esi_7
                    char const temp13_1 = *edi_8
                    cond:18_1 = temp12_1 != temp13_1
                    esi_7 = &(*esi_7)[1]
                    edi_8 = &edi_8[1]
                    i_5 -= 1
                    
                    if (temp12_1 != temp13_1)
                        break
                
                if (not(cond:18_1))
                    eax_8 = 5
                    goto label_47e0c8
                
                char const* const edi_9 = "TANGENT"
                char (* esi_8)[0x18] = &var_20
                int32_t i_6 = 8
                bool cond:20_1 = true
                
                while (i_6 != 0)
                    char temp14_1 = *esi_8
                    char const temp15_1 = *edi_9
                    cond:20_1 = temp14_1 == temp15_1
                    esi_8 = &(*esi_8)[1]
                    edi_9 = &edi_9[1]
                    i_6 -= 1
                    
                    if (temp14_1 != temp15_1)
                        break
                
                if (cond:20_1)
                    goto label_47e0c8
                
                char const* const edi_10 = "BINORMAL"
                char (* esi_9)[0x18] = &var_20
                int32_t i_7 = 9
                bool cond:22_1 = false
                
                while (i_7 != 0)
                    char temp16_1 = *esi_9
                    char const temp17_1 = *edi_10
                    cond:22_1 = temp16_1 != temp17_1
                    esi_9 = &(*esi_9)[1]
                    edi_10 = &edi_10[1]
                    i_7 -= 1
                    
                    if (temp16_1 != temp17_1)
                        break
                
                if (not(cond:22_1))
                    eax_8 = 7
                    goto label_47e0c8
                
                eax_8 = 0xb
                char const* const edi_11 = "TESSFACTOR"
                char (* esi_10)[0x18] = &var_20
                int32_t i_8 = 0xb
                bool cond:24_1 = false
                
                while (i_8 != 0)
                    char temp18_1 = *esi_10
                    char const temp19_1 = *edi_11
                    cond:24_1 = temp18_1 != temp19_1
                    esi_10 = &(*esi_10)[1]
                    edi_11 = &edi_11[1]
                    i_8 -= 1
                    
                    if (temp18_1 != temp19_1)
                        break
                
                if (not(cond:24_1))
                    eax_8 = 8
                    goto label_47e0c8
                
                char const* const edi_12 = "POSITIONT"
                char (* esi_11)[0x18] = &var_20
                int32_t i_9 = 0xa
                bool cond:26_1 = false
                
                while (i_9 != 0)
                    char temp20_1 = *esi_11
                    char const temp21_1 = *edi_12
                    cond:26_1 = temp20_1 != temp21_1
                    esi_11 = &(*esi_11)[1]
                    edi_12 = &edi_12[1]
                    i_9 -= 1
                    
                    if (temp20_1 != temp21_1)
                        break
                
                if (not(cond:26_1))
                    eax_8 = 9
                    goto label_47e0c8
                
                char const* const edi_13 = "COLOR"
                char (* esi_12)[0x18] = &var_20
                int32_t i_10 = 6
                bool cond:28_1 = true
                
                while (i_10 != 0)
                    char temp22_1 = *esi_12
                    char const temp23_1 = *edi_13
                    cond:28_1 = temp22_1 == temp23_1
                    esi_12 = &(*esi_12)[1]
                    edi_13 = &edi_13[1]
                    i_10 -= 1
                    
                    if (temp22_1 != temp23_1)
                        break
                
                if (cond:28_1)
                    eax_8 = 0xa
                    goto label_47e0c8
                
                void* const edi_14 = &data_ac6d08
                char (* esi_13)[0x18] = &var_20
                int32_t i_11 = 4
                bool cond:30_1 = true
                
                while (i_11 != 0)
                    char temp24_1 = *esi_13
                    char temp25_1 = *edi_14
                    cond:30_1 = temp24_1 == temp25_1
                    esi_13 = &(*esi_13)[1]
                    edi_14 += 1
                    i_11 -= 1
                    
                    if (temp24_1 != temp25_1)
                        break
                
                if (cond:30_1)
                    goto label_47e0c8
                
                char const* const edi_15 = "DEPTH"
                char (* esi_14)[0x18] = &var_20
                int32_t i_12 = 6
                bool cond:32_1 = false
                
                while (i_12 != 0)
                    char temp26_1 = *esi_14
                    char const temp27_1 = *edi_15
                    cond:32_1 = temp26_1 != temp27_1
                    esi_14 = &(*esi_14)[1]
                    edi_15 = &edi_15[1]
                    i_12 -= 1
                    
                    if (temp26_1 != temp27_1)
                        break
                
                if (not(cond:32_1))
                    eax_8 = 0xc
                    goto label_47e0c8
                
                char const* const edi_16 = "SAMPLE"
                char (* esi_15)[0x18] = &var_20
                int32_t i_13 = 7
                bool cond:34_1 = false
                
                while (i_13 != 0)
                    char temp28_1 = *esi_15
                    char const temp29_1 = *edi_16
                    cond:34_1 = temp28_1 != temp29_1
                    esi_15 = &(*esi_15)[1]
                    edi_16 = &edi_16[1]
                    i_13 -= 1
                    
                    if (temp28_1 != temp29_1)
                        break
                
                if (not(cond:34_1))
                    eax_8 = 0xd
                    goto label_47e0c8
                
                char const* const edi_17 = "DIFFUSE"
                char (* esi_16)[0x18] = &var_20
                int32_t i_14 = 8
                bool cond:36_1 = false
                
                while (i_14 != 0)
                    char temp30_1 = *esi_16
                    char const temp31_1 = *edi_17
                    cond:36_1 = temp30_1 != temp31_1
                    esi_16 = &(*esi_16)[1]
                    edi_17 = &edi_17[1]
                    i_14 -= 1
                    
                    if (temp30_1 != temp31_1)
                        break
                
                if (not(cond:36_1))
                    var_21 = 0
                    eax_8 = 0xa
                    goto label_47e0c8
                
                char const* const edi_18 = "SPECULAR"
                char (* esi_17)[0x18] = &var_20
                int32_t i_15 = 9
                bool cond:38_1 = false
                
                while (i_15 != 0)
                    char temp32_1 = *esi_17
                    char const temp33_1 = *edi_18
                    cond:38_1 = temp32_1 != temp33_1
                    esi_17 = &(*esi_17)[1]
                    edi_18 = &edi_18[1]
                    i_15 -= 1
                    
                    if (temp32_1 != temp33_1)
                        break
                
                if (not(cond:38_1))
                    var_21 = 1
                    eax_8 = 0xa
                    goto label_47e0c8
                
                result = 0x80004005
            else
                eax_8 = 0
            label_47e0c8:
                *arg2 = eax_8
                char* ecx_7
                ecx_7.b = var_21
                *arg3 = ecx_7.b
                result = 0
        else
            do
                if (_isdigit(sx.d(eax.b)) == 0)
                    break
                
                esi = &esi[1]
                eax.b = *esi
            while (eax.b != 0)
            
            if (*esi == 0)
                goto label_47df29
            
            result = 0x80004005
else
    *arg2 = 0
    *arg3 = 0xff
    result = 0x80004005

sub_745f2b(__security_cookie_1)
return result
