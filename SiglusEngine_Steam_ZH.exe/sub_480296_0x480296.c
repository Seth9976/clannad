// 函数: sub_480296
// 地址: 0x480296
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int16_t* edx = *(arg2 + 8)
void* esi = arg3
int32_t edi
int32_t var_58 = edi
bool cond:0 = *edx != 0
int32_t** ebx = arg1
int32_t** var_28 = ebx
void* var_24 = esi
int32_t var_20 = 0
CHAR* var_1c = nullptr
void* const var_30 = nullptr
int32_t var_40 = 0
int32_t var_4c = 1
int32_t var_44 = 0
int32_t var_3c = 0
int16_t* var_38 = edx
int16_t* var_48 = edx
int16_t* var_34 = edx
void*** result

if (cond:0)
    while (true)
        void* eax
        eax.b = *edx
        
        if (eax.b != 0 && eax.b != 0x5f)
            edx += 1
            var_34 = edx
            continue
        
        void* eax_4 = edx - var_48
        
        if (eax_4 u> 0xf)
            break
        
        char var_18[0x10]
        int32_t esi_2
        int32_t edi_1
        edi_1, esi_2 = __builtin_memcpy(&var_18, var_48, eax_4 u>> 2 << 2)
        bool cond:2_1 = *edx == 0
        __builtin_memcpy(edi_1, esi_2, eax_4 & 3)
        *(&var_18 + eax_4) = 0
        
        if (not(cond:2_1))
            edx += 1
            var_34 = edx
        
        int32_t edi_2 = 0
        var_48 = edx
        
        if (var_4c != 0)
            char* esi_3 = &var_18
            
            if (var_18[0] == 0)
                var_1c = 0xffffffff
            else
                do
                    if (_isalpha(sx.d(*esi_3)) == 0)
                        break
                    
                    esi_3 = &esi_3[1]
                while (*esi_3 != 0)
                
                if (*esi_3 == 0)
                    var_1c = 0xffffffff
                else
                    char var_5c_3 = esi_3.b
                    var_1c = sub_75efed()
            
            if (*esi_3 != 0)
                *esi_3 = 0
                esi_3 = &esi_3[1]
            
            eax_4.b = *esi_3
            
            if (eax_4.b != 0)
                do
                    if (_isdigit(sx.d(eax_4.b)) == 0)
                        break
                    
                    esi_3 = &esi_3[1]
                    eax_4.b = *esi_3
                while (eax_4.b != 0)
                
                if (*esi_3 != 0)
                    goto label_480673
            
            int32_t edx_1 = 0
            
            while (true)
                char* esi_4 = *(edx_1 + &data_ac64b8)
                char (* eax_7)[0x10] = &var_18
                int32_t eax_10
                
                while (true)
                    char ebx_2 = *eax_7
                    char temp7_1 = *esi_4
                    bool c_1 = ebx_2 u< temp7_1
                    
                    if (ebx_2 == temp7_1)
                        if (ebx_2 == 0)
                            eax_10 = 0
                            break
                        
                        ebx_2 = (*eax_7)[1]
                        char temp10_1 = esi_4[1]
                        c_1 = ebx_2 u< temp10_1
                        
                        if (ebx_2 == temp10_1)
                            eax_7 = &(*eax_7)[2]
                            esi_4 = &esi_4[2]
                            
                            if (ebx_2 != 0)
                                continue
                            
                            eax_10 = 0
                            break
                    
                    bool c_2 = unimplemented  {sbb eax, eax}
                    eax_10 = sbb.d(sbb.d(eax_7, eax_7, c_1), 0xffffffff, c_2)
                    break
                
                if (eax_10 == 0)
                    break
                
                edx_1 += 0x48
                edi_2 += 1
                
                if (edx_1 u>= 0x5e8)
                    break
            
            ebx = var_28
            
            if (edi_2 == 0x15)
                esi = var_24
                break
            
            int32_t ecx_5 = ebx[0xe]
            int32_t eax_13 = *(((ecx_5 + edi_2 * 0x12) << 2) + &data_ac64c0)
            
            if (eax_13 == 0xffffffff)
                esi = var_24
                break
            
            esi = var_24
            CHAR* edx_2
            
            if (eax_13 s>= 0)
                if (esi != 0)
                    break
                
                edx_2 = var_1c
            else
                edx_2 = var_1c
                
                if (edx_2 == 0xffffffff)
                    if (esi == 0)
                        break
                    
                    edx_2 = *(esi + 0x18)
                    var_1c = edx_2
                else if (esi != 0)
                    edx_2 = &edx_2[*(esi + 0x18)]
                    var_1c = edx_2
                
                eax_13 = neg.d(eax_13)
            
            if (edx_2 == 0xffffffff)
                if (eax_13 != 0)
                    break
                
                edx_2 = nullptr
                var_1c = nullptr
            else if ((esi == 0 || *(esi + 0x28) == 0) && edx_2 u>= eax_13)
                break
            
            int32_t eax_15 = edi_2 * 0x48
            int32_t edi_3 = *(eax_15 + 0xac64bc)
            var_40 = *(eax_15 + 0xac64fc)
            var_20 = edi_3
            
            switch (edi_3)
                case 2
                    void* edx_3 = edx_2 & 0x1fff
                    
                    if (edx_3 u< 0x800)
                        var_20 = 2
                    else if (edx_3 u< 0x1000)
                        var_20 = 0xb
                    else if (edx_3 u< 0x1800)
                        var_20 = 0xc
                    else if (edx_3 u< 0x2000)
                        var_20 = 0xd
                    
                    var_1c = edx_3 & 0x7ff
                case 0xfffffff9
                    var_20 = 0x11
                    var_1c = 1
                case 0xfffffffa
                    var_20 = 0x11
                    var_1c = nullptr
                case 0xfffffffb
                    var_20 = 4
                    var_1c = 1
                case 0xfffffffc
                    var_20 = 4
                    var_1c = 2
                case 0xfffffffd
                    var_20 = 4
                    var_1c = nullptr
            
            var_4c = 0
            
            if (ecx_5 s>= 6 && ecx_5 s<= 9)
                var_44 = 1
            
            if (ecx_5 s>= 4 && ecx_5 s<= 5)
                var_3c = 1
            else if (ecx_5 s>= 0xd && ecx_5 s<= 0xe)
                var_3c = 1
            
            edx = var_34
        else if (var_44 == 0)
        label_480647:
            
            if (var_3c == 0)
            label_480673:
                ebx = var_28
                esi = var_24
                break
            
            void* const edi_11 = &data_ac0014
            char (* esi_13)[0x10] = &var_18
            int32_t i = 4
            bool cond:9_1 = false
            
            while (i != 0)
                char temp3_1 = *esi_13
                char temp4_1 = *edi_11
                cond:9_1 = temp3_1 != temp4_1
                esi_13 = &(*esi_13)[1]
                edi_11 += 1
                i -= 1
                
                if (temp3_1 != temp4_1)
                    break
            
            if (cond:9_1)
                goto label_480673
            
            var_3c = 0
            var_30 = 0xb000000
            ebx = var_28
            esi = var_24
        else
            char const* const edi_4 = "bias"
            char (* esi_6)[0x10] = &var_18
            int32_t i_1 = 5
            bool cond:6_1 = false
            
            while (i_1 != 0)
                char temp1_1 = *esi_6
                char const temp2_1 = *edi_4
                cond:6_1 = temp1_1 != temp2_1
                esi_6 = &(*esi_6)[1]
                edi_4 = &edi_4[1]
                i_1 -= 1
                
                if (temp1_1 != temp2_1)
                    break
            
            if (cond:6_1)
                void* const edi_5 = &data_ac7530
                char (* esi_7)[0x10] = &var_18
                int32_t i_2 = 4
                bool cond:11_1 = false
                
                while (i_2 != 0)
                    char temp5_1 = *esi_7
                    char temp6_1 = *edi_5
                    cond:11_1 = temp5_1 != temp6_1
                    esi_7 = &(*esi_7)[1]
                    edi_5 += 1
                    i_2 -= 1
                    
                    if (temp5_1 != temp6_1)
                        break
                
                if (not(cond:11_1))
                    eax = &data_4000000
                    goto label_48063e
                
                void* const edi_6 = &data_ac6e10
                char (* esi_8)[0x10] = &var_18
                int32_t i_3 = 3
                bool cond:13_1 = false
                
                while (i_3 != 0)
                    char temp11_1 = *esi_8
                    char temp12_1 = *edi_6
                    cond:13_1 = temp11_1 != temp12_1
                    esi_8 = &(*esi_8)[1]
                    edi_6 += 1
                    i_3 -= 1
                    
                    if (temp11_1 != temp12_1)
                        break
                
                if (not(cond:13_1))
                    eax = 0x7000000
                    goto label_48063e
                
                void* const edi_7 = &data_ac752c
                char (* esi_9)[0x10] = &var_18
                int32_t i_4 = 3
                bool cond:16_1 = false
                
                while (i_4 != 0)
                    char temp13_1 = *esi_9
                    char temp14_1 = *edi_7
                    cond:16_1 = temp13_1 != temp14_1
                    esi_9 = &(*esi_9)[1]
                    edi_7 += 1
                    i_4 -= 1
                    
                    if (temp13_1 != temp14_1)
                        break
                
                bool cond:18_1
                
                if (cond:16_1)
                    void* const edi_8 = &data_ac7528
                    char (* esi_10)[0x10] = &var_18
                    int32_t i_5 = 3
                    cond:18_1 = true
                    
                    while (i_5 != 0)
                        char temp15_1 = *esi_10
                        char temp16_1 = *edi_8
                        cond:18_1 = temp15_1 == temp16_1
                        esi_10 = &(*esi_10)[1]
                        edi_8 += 1
                        i_5 -= 1
                        
                        if (temp15_1 != temp16_1)
                            break
                
                if (not(cond:16_1) || cond:18_1)
                    eax = 0x9000000
                    goto label_48063e
                
                void* const edi_9 = &data_ac7524
                char (* esi_11)[0x10] = &var_18
                int32_t i_6 = 3
                bool cond:21_1 = true
                
                while (i_6 != 0)
                    char temp17_1 = *esi_11
                    char temp18_1 = *edi_9
                    cond:21_1 = temp17_1 == temp18_1
                    esi_11 = &(*esi_11)[1]
                    edi_9 += 1
                    i_6 -= 1
                    
                    if (temp17_1 != temp18_1)
                        break
                
                bool cond:23_1
                
                if (not(cond:21_1))
                    void* const edi_10 = &data_ac7520
                    char (* esi_12)[0x10] = &var_18
                    int32_t i_7 = 3
                    cond:23_1 = false
                    
                    while (i_7 != 0)
                        char temp19_1 = *esi_12
                        char temp20_1 = *edi_10
                        cond:23_1 = temp19_1 != temp20_1
                        esi_12 = &(*esi_12)[1]
                        edi_10 += 1
                        i_7 -= 1
                        
                        if (temp19_1 != temp20_1)
                            break
                
                if (not(cond:21_1) && cond:23_1)
                    goto label_480647
                
                eax = 0xa000000
                goto label_48063e
            
            eax = &data_2000000
        label_48063e:
            var_44 = 0
            var_30 = eax
            ebx = var_28
            esi = var_24
        
        if (*edx == 0)
            goto label_4802e6
    
    void* ecx_6 = ebx[0x1e]
    
    if (ecx_6 == 0)
        if (esi == 0)
            int16_t* var_5c_8 = var_38
            sub_42aba3(*ebx, arg2, 0x7d5, "invalid register '%s'")
        else
            void* eax_19 = *(esi + 0x28)
            
            if (eax_19 == 0)
                int32_t var_5c_6 = *(esi + 0x18)
                int16_t* var_60_3 = var_38
                sub_42aba3(*ebx, arg2, 0x7d5, "invalid register '%s[%u]'")
            else if (*(eax_19 + 0x10) != 0xffffffff)
                int16_t* var_5c_7 = var_38
                sub_42aba3(*ebx, arg2, 0x7d5, "invalid register '%s[...]'")
        
        goto label_480784
    
    if (sub_47fe25(ecx_6, *ebx, ebx[0x1f], arg2, var_38, esi.b, &var_20, &var_30, &var_1c) s< 0)
        goto label_480784
    
    void*** eax_18 = sub_42cfa1(0x2c)
    
    if (eax_18 == 0)
        result = nullptr
    else
        result = sub_4c6f48(eax_18, var_20, var_30, var_1c, var_40, 0)
    
    if (result == 0)
        result = nullptr
    else if (esi != 0)
        result[0xa] = *(esi + 0x28)
        *(esi + 0x28) = 0
else
label_4802e6:
    int32_t eax_1 = ebx[0x1e]
    
    if (eax_1 == 0)
    label_4807ab:
        void*** eax_21 = sub_42cfa1(0x2c)
        
        if (eax_21 == 0)
            result = nullptr
        else
            result = sub_4c6f48(eax_21, var_20, var_30, var_1c, var_40, 0)
        
        if (result == 0)
            result = nullptr
        else if (esi != 0)
            result[0xa] = *(esi + 0x28)
            *(esi + 0x28) = 0
    else
        int32_t eax_2 = var_20
        char* var_5c_1
        
        if (*(eax_1 + 0xb0) == 0)
            if (eax_2 == 3 || eax_2 == 5 || eax_2 == 6 || eax_2 == 8 || eax_2 == 9 || eax_2 == 4
                    || eax_2 == 0xf || eax_2 == 0x12 || eax_2 == 0x13)
                goto label_4807ab
            
            var_5c_1 = "temporary and constant registers are not allowed in assembly fragments"
            goto label_48077a
        
        if (eax_2 == 3 || eax_2 == 0xf || eax_2 == 0x12 || eax_2 == 0x13)
            goto label_4807ab
        
        var_5c_1 =
            "temporary, constant, and output registers are not allowed in vs_3_0 assembly fragments"
    label_48077a:
        sub_42aba3(*ebx, arg2, 0x7d5, var_5c_1)
    label_480784:
        ebx[0x13] = 1
        void*** eax_20 = sub_42cfa1(0x2c)
        
        if (eax_20 == 0)
            result = nullptr
        else
            result = sub_4c6f48(eax_20, 0xffffffff, 0, 0, 0, 0)

sub_745f2b(__security_cookie_1)
return result
