// 函数: sub_42c4dd
// 地址: 0x42c4dd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
uint32_t* var_10 = nullptr
int32_t edi
int32_t var_28 = edi
sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
bool cond:1_1

if (*(arg1 + 0x278) == 1)
    void* esi = arg1 + 0x280
    wchar32 const* const edi_2 = &(*U")(;:")[1]
    int32_t i = 2
    cond:1_1 = false
    
    while (i != 0)
        char temp0_1 = *esi
        char temp1_1 = *edi_2
        cond:1_1 = temp0_1 != temp1_1
        esi += 1
        edi_2 += 1
        i -= 1
        
        if (temp0_1 != temp1_1)
            break

int32_t result

if (*(arg1 + 0x278) != 1 || cond:1_1)
label_42c80c:
    int32_t eax_25 = *(arg1 + 0x278)
    
    if (eax_25 != 0xc && eax_25 != 0xd)
        sub_42a6ee(*(arg1 + 0x26c))
else
    sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
    int32_t var_8_1 = 0
    
    while (true)
        int32_t eax_2 = *(arg1 + 0x278)
        
        if (eax_2 == 1)
            wchar32 const* const edi_3 = U")(;:"
            void* esi_1 = arg1 + 0x280
            int32_t i_1 = 2
            bool cond:3_1 = true
            
            while (i_1 != 0)
                char temp2_1 = *esi_1
                char temp3_1 = *edi_3
                cond:3_1 = temp2_1 == temp3_1
                esi_1 += 1
                edi_3 += 1
                i_1 -= 1
                
                if (temp2_1 != temp3_1)
                    break
            
            if (cond:3_1)
                sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
                int32_t edi_22 = *(arg1 + 0x278)
                
                if (edi_22 != 0xc && edi_22 != 0xd)
                    goto label_42c80c
                
                int32_t var_18_3 = 0
                
                if (var_8_1 u> 0)
                    uint32_t* edi_23 = var_10
                    int32_t* eax_28 = var_c - edi_23
                    int32_t* var_1c_2 = eax_28
                    
                    while (true)
                        result = sub_42ab39(arg1 + 0x18, *edi_23, *(eax_28 + edi_23))
                        
                        if (result s< 0)
                            goto label_42c82c
                        
                        var_18_3 += 1
                        edi_23 = &edi_23[1]
                        
                        if (var_18_3 u>= var_8_1)
                            break
                        
                        eax_28 = var_1c_2
                
                break
        
        int32_t var_14_1
        
        if (eax_2 != 9)
            if (eax_2 != 2 && eax_2 != 3 && eax_2 != 4)
                goto label_42c80c
            
            int32_t eax_4 = *(arg1 + 0x280)
            
            if (eax_4 u< 1)
                goto label_42c80c
            
            if (eax_4 u> 4)
                goto label_42c80c
            
            var_14_1 = eax_4
        else
            char* eax_3 = *(arg1 + 0x280)
            char const* const edi_4 = "once"
            char* esi_2 = eax_3
            int32_t i_2 = 5
            bool cond:5_1 = false
            
            while (i_2 != 0)
                char temp4_1 = *esi_2
                char const temp5_1 = *edi_4
                cond:5_1 = temp4_1 != temp5_1
                esi_2 = &esi_2[1]
                edi_4 = &edi_4[1]
                i_2 -= 1
                
                if (temp4_1 != temp5_1)
                    break
            
            if (cond:5_1)
                char const* const edi_5 = "error"
                char* esi_3 = eax_3
                int32_t i_3 = 6
                bool cond:7_1 = false
                
                while (i_3 != 0)
                    char temp6_1 = *esi_3
                    char const temp7_1 = *edi_5
                    cond:7_1 = temp6_1 != temp7_1
                    esi_3 = &esi_3[1]
                    edi_5 = &edi_5[1]
                    i_3 -= 1
                    
                    if (temp6_1 != temp7_1)
                        break
                
                if (cond:7_1)
                    char const* const edi_6 = "disable"
                    char* esi_4 = eax_3
                    int32_t i_4 = 8
                    bool cond:9_1 = false
                    
                    while (i_4 != 0)
                        char temp10_1 = *esi_4
                        char const temp11_1 = *edi_6
                        cond:9_1 = temp10_1 != temp11_1
                        esi_4 = &esi_4[1]
                        edi_6 = &edi_6[1]
                        i_4 -= 1
                        
                        if (temp10_1 != temp11_1)
                            break
                    
                    if (cond:9_1)
                        char* esi_5 = eax_3
                        void* const edi_7 = "default"
                        int32_t i_5 = 8
                        bool cond:11_1 = false
                        
                        while (i_5 != 0)
                            char temp12_1 = *esi_5
                            char temp13_1 = *edi_7
                            cond:11_1 = temp12_1 != temp13_1
                            esi_5 = &esi_5[1]
                            edi_7 += 1
                            i_5 -= 1
                            
                            if (temp12_1 != temp13_1)
                                break
                        
                        if (cond:11_1)
                            goto label_42c80c
                        
                        var_14_1 = 0xff
                    else
                        var_14_1 = 0
                else
                    var_14_1 = 0xf
            else
                var_14_1 = 0x10
        
        sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
        
        if (*(arg1 + 0x278) != 1)
            goto label_42c80c
        
        wchar32 const* const edi_9 = &(*U")(;:")[3]
        void* esi_6 = arg1 + 0x280
        int32_t i_6 = 2
        bool cond:13_1 = false
        
        while (i_6 != 0)
            char temp8_1 = *esi_6
            char temp9_1 = *edi_9
            cond:13_1 = temp8_1 != temp9_1
            esi_6 += 1
            edi_9 += 1
            i_6 -= 1
            
            if (temp8_1 != temp9_1)
                break
        
        if (cond:13_1)
            goto label_42c80c
        
        sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
        
        while (true)
            int32_t eax_6 = *(arg1 + 0x278)
            
            if (eax_6 != 2 && eax_6 != 3 && eax_6 != 4)
                goto label_42c80c
            
            int32_t eax_7 = *(arg1 + 0x280)
            int32_t esi_7 = var_8_1
            
            if (esi_7 == ((not.d(esi_7) + 1) & esi_7))
                int32_t eax_12
                
                if (esi_7 == 0)
                    eax_12 = 1
                else
                    eax_12 = esi_7 * 2
                
                int32_t eax_14 = sub_745f3f(eax_12 << 2)
                uint32_t* eax_19
                
                if (eax_14 != 0)
                    int32_t ecx_6 = esi_7 << 2
                    int32_t esi_9
                    int32_t edi_11
                    edi_11, esi_9 = __builtin_memcpy(eax_14, var_c, ecx_6 u>> 2 << 2)
                    __builtin_memcpy(edi_11, esi_9, ecx_6 & 3)
                    j__free(var_c)
                    var_c = eax_14
                    int32_t eax_17
                    
                    if (var_8_1 == 0)
                        eax_17 = 1
                    else
                        eax_17 = var_8_1 * 2
                    
                    eax_19 = sub_745f3f(eax_17 << 2)
                
                if (eax_14 == 0 || eax_19 == 0)
                    result = 0x8007000e
                    goto label_42c82c
                
                int32_t ecx_13 = var_8_1 << 2
                int32_t esi_12
                int32_t edi_13
                edi_13, esi_12 = __builtin_memcpy(eax_19, var_10, ecx_13 u>> 2 << 2)
                __builtin_memcpy(edi_13, esi_12, ecx_13 & 3)
                j__free(var_10)
                esi_7 = var_8_1
                var_10 = eax_19
            
            var_10[esi_7] = eax_7
            *(var_c + (esi_7 << 2)) = var_14_1
            var_8_1 = esi_7 + 1
            sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
            
            if (*(arg1 + 0x278) == 1)
                wchar32 const* const edi_15 = &(*U")(;:")[2]
                void* esi_14 = arg1 + 0x280
                int32_t i_7 = 2
                bool cond:15_1 = true
                
                while (i_7 != 0)
                    char temp14_1 = *esi_14
                    char temp15_1 = *edi_15
                    cond:15_1 = temp14_1 == temp15_1
                    esi_14 += 1
                    edi_15 += 1
                    i_7 -= 1
                    
                    if (temp14_1 != temp15_1)
                        break
                
                if (not(cond:15_1))
                    void* esi_15 = arg1 + 0x280
                    wchar32 const* const edi_16 = U")(;:"
                    int32_t i_8 = 2
                    bool cond:21_1 = false
                    
                    while (i_8 != 0)
                        char temp18_1 = *esi_15
                        char temp19_1 = *edi_16
                        cond:21_1 = temp18_1 != temp19_1
                        esi_15 += 1
                        edi_16 += 1
                        i_8 -= 1
                        
                        if (temp18_1 != temp19_1)
                            break
                    
                    if (cond:21_1)
                        continue
                
                wchar32 const* const edi_17 = &(*U")(;:")[2]
                void* esi_16 = arg1 + 0x280
                int32_t i_9 = 2
                bool cond:19_1 = false
                
                while (i_9 != 0)
                    char temp16_1 = *esi_16
                    char temp17_1 = *edi_17
                    cond:19_1 = temp16_1 != temp17_1
                    esi_16 += 1
                    edi_17 += 1
                    i_9 -= 1
                    
                    if (temp16_1 != temp17_1)
                        break
                
                if (cond:19_1)
                    break
                
                sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
                
                if (*(arg1 + 0x278) != 1)
                    break
                
                wchar32 const* const edi_19 = U")(;:"
                void* esi_17 = arg1 + 0x280
                int32_t i_10 = 2
                bool cond:24_1 = false
                
                while (i_10 != 0)
                    char temp20_1 = *esi_17
                    char temp21_1 = *edi_19
                    cond:24_1 = temp20_1 != temp21_1
                    esi_17 += 1
                    edi_19 += 1
                    i_10 -= 1
                    
                    if (temp20_1 != temp21_1)
                        break
                
                if (cond:24_1)
                    break
                
                goto label_42c80c

result = 0
label_42c82c:
j__free(var_c)
j__free(var_10)
j__free(0)
*(arg1 + 0x40) = 1
return result
