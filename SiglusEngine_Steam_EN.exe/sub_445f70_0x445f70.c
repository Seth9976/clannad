// 函数: sub_445f70
// 地址: 0x445f70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_2
int32_t eax_1 = __security_cookie ^ &i_2
__builtin_memcpy(&data_704898, &data_12dc648, 0x1f40)
__builtin_memcpy(&data_7067d8, &data_12de588, 0x1f40)
__builtin_memcpy(&data_708718, &data_12e04c8, 0x1f40)
__builtin_memcpy(&data_70a658, &data_12e2408, 0x1f40)
__builtin_memcpy(&data_70c598, &data_12e4348, 0x1f40)
__builtin_memcpy(&data_70e4d8, &data_12e6288, 0x1f40)
int32_t i = 0
i_2 = 0

do
    char* edi_1 = *((i << 2) + &data_12f788c)
    *((i << 2) + &data_187a5d0) = 0
    void* ebx_1 = (i << 2) + &data_1354f80
    *ebx_1 = 0
    char* var_838_1
    char* var_834_1
    char (* eax_7)[0x400]
    
    if (i s>= 0 && i s< data_63ecf8)
        *ebx_1 = 0
        
        if (edi_1 != 0 && *edi_1 != 0)
            char* eax_3 = edi_1
            int32_t esi_1 = 0
            
            do
                i.b = *eax_3
                
                if (i.b u< 0x80)
                    esi_1 += 1
                    eax_3 = &eax_3[1]
                else if (i.b u< 0xa0)
                    if (i.b u>= 0xfe)
                        esi_1 += 1
                        eax_3 = &eax_3[1]
                    else
                        esi_1 += 2
                        eax_3 = &eax_3[2]
                else if (i.b u<= 0xdf || i.b u>= 0xfe)
                    esi_1 += 1
                    eax_3 = &eax_3[1]
                else
                    esi_1 += 2
                    eax_3 = &eax_3[2]
            while (*eax_3 != 0)
            
            int32_t i_3 = i_2
            sub_4d1c30(sub_4d6960(i_3, ebx_1, (i_3 << 2) + &data_187a5d0, esi_1 + 1, "AVG_S"), 
                edi_1, *ebx_1, esi_1 + 1)
            
            if (data_702fc0 == 0)
                i = i_2
            else
                enum MESSAGEBOX_STYLE uType = data_63ecf8
                
                if (uType s<= MB_OK)
                    i = i_2
                else
                    int32_t esi_3 = 0
                    int32_t edi_2 = 0
                    enum MESSAGEBOX_STYLE j
                    
                    do
                        if (*(edi_2 + &data_187a5d0) == 0)
                            esi_3 += 1
                        else
                            char* ecx_2 = *(edi_2 + &data_1354f80)
                            int32_t edx_3 = 0
                            
                            if (ecx_2 != 0)
                                BOOL eax_4
                                eax_4.b = *ecx_2
                                
                                while (eax_4.b != 0)
                                    if (eax_4.b u< 0x80)
                                        edx_3 += 1
                                        ecx_2 = &ecx_2[1]
                                    else if (eax_4.b u< 0xa0)
                                        if (eax_4.b u>= 0xfe)
                                            edx_3 += 1
                                            ecx_2 = &ecx_2[1]
                                        else
                                            edx_3 += 2
                                            ecx_2 = &ecx_2[2]
                                    else if (eax_4.b u<= 0xdf || eax_4.b u>= 0xfe)
                                        edx_3 += 1
                                        ecx_2 = &ecx_2[1]
                                    else
                                        edx_3 += 2
                                        ecx_2 = &ecx_2[2]
                                    
                                    eax_4.b = *ecx_2
                                
                                esi_3 += edx_3 + 1
                        
                        edi_2 += 4
                        j = uType
                        uType -= 1
                    while (j != MB_OKCANCEL)
                    
                    if (esi_3 s< 0x2710)
                        i = i_2
                    else
                        int32_t edi_3 = data_1af173c
                        
                        if (edi_3 s>= 8)
                            i = i_2
                            data_1af173c += 1
                        else
                            int32_t var_824_1 = 0x2710
                            char text[0x400]
                            sub_4c84d0(&text, 0x61ba0c)
                            
                            if (edi_3 s< 4)
                                MessageBoxA(data_7027bc, &text, 0x61ba34, uType)
                            
                            int32_t var_824_3 = 0x2710
                            sub_4c84d0(&data_7027c0, &data_61bb38)
                            int32_t var_824_4 = esi_3
                            sub_4c84d0(&text, &data_61bb04)
                            
                            if (data_702fc0 != 0)
                                sub_55ef70(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                                sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                                eax_7 = &text
                                var_834_1 = &text
                                var_838_1 = &data_7027c0
                                goto label_44628f
                            
                            i = i_2
                            data_1af173c += 1
    else if (data_702fc0 != 0)
        int32_t edi_4 = data_1af173c
        
        if (edi_4 s>= 8)
            data_1af173c += 1
        else
            int32_t i_1 = i
            char text_1[0x404]
            sub_4c84d0(&text_1, "S[%$d] ")
            
            if (edi_4 s< 4)
                MessageBoxA(data_7027bc, &text_1, 0x61b914, MB_OK)
            
            if (data_702fc0 == 0)
                i = i_2
                data_1af173c += 1
            else
                sub_55ef70(&text_1, data_72d6ac, data_719b6c, &data_61b950, &text_1)
                sub_55f1e0(&text_1, data_72d6ac, data_719b6c, &data_61b950, &text_1)
                eax_7 = &text_1
                var_834_1 = &text_1
                var_838_1 = &data_61b950
            label_44628f:
                sub_55f390(eax_7, data_72d6ac, data_719b6c, var_838_1, var_834_1)
                sub_4a1e40(3)
                i = i_2
                data_1af173c += 1
    i += 1
    i_2 = i
while (i s< 0x7d0)

int32_t result = sub_4627a0()
data_715e98 = 0
sub_5f02dd(eax_1 ^ &i_2)
return result
