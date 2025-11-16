// 函数: sub_4a5610
// 地址: 0x4a5610
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
char* edi = arg2

if (esi == 0)
    return 0

arg2.b = *esi
int32_t ebx = 0

while (arg2.b != 0)
    uint32_t var_8
    
    if (arg2.b u< 0x80)
    label_4a56b0:
        
        if (arg2.b != 0x23)
        label_4a5723:
            
            if (edi != 0)
                *edi = arg2.b
                edi = &edi[1]
            
            ebx += 1
            esi = &esi[1]
        else
            arg1.b = esi[1]
            char* eax_6 = &esi[1]
            
            if (arg1.b == arg2.b || arg1.b == 0x64 || arg1.b == 0x44)
                esi = &eax_6[1]
            else
                void var_c
                
                if (arg1.b == 0x63 || arg1.b == 0x43 || arg1.b == 0x73 || arg1.b == 0x53)
                label_4a5707:
                    eax_6 = &eax_6[1]
                    var_8 = eax_6
                    arg1, arg2 = sub_4d11d0(eax_6, &var_8, eax_6, &var_c)
                    esi = var_8
                else
                    if (arg1.b != 0x78 && arg1.b != 0x58 && arg1.b != 0x79 && arg1.b != 0x59)
                        goto label_4a5723
                    
                    arg1.b = eax_6[1]
                    eax_6 = &eax_6[1]
                    var_8 = eax_6
                    
                    if (arg1.b == 0x72 || arg1.b == 0x52)
                        goto label_4a5707
                    
                    arg1, arg2 = sub_4d11d0(eax_6, &var_8, eax_6, &var_c)
                    esi = var_8
    else
        if (arg2.b u< 0xa0)
            if (arg2.b u>= 0xfe)
                goto label_4a56b0
            
            goto label_4a5667
        
        if (arg2.b u<= 0xdf || arg2.b u>= 0xfe)
            goto label_4a56b0
        
    label_4a5667:
        uint32_t var_24
        uint32_t var_20
        uint32_t var_1c
        uint32_t var_18
        void var_14
        int32_t var_10
        uint32_t* eax_3
        eax_3, arg1, arg2 = sub_4eba80(&var_24, arg2, esi, &var_24, &var_20, &var_1c, &var_18, 
            &var_14, &var_8, &var_10)
        
        if (var_10 != 0)
            if (edi != 0)
                sub_4d1c30(eax_3, esi, edi, 8)
                edi = &edi[8]
            
            ebx += 8
            esi = &esi[8]
        else
            if (edi != 0)
                *edi = *esi
                edi[1] = esi[1]
                edi = &edi[2]
            
            ebx += 2
            esi = &esi[2]
    arg2.b = *esi

if (edi != 0)
    *edi = 0

return ebx + 1
