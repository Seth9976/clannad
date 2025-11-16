// 函数: sub_429000
// 地址: 0x429000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_2
int32_t eax_1 = __security_cookie ^ &i_2
__builtin_memcpy(&data_13262d0, &data_12edc4c, 0x1f40)
__builtin_memcpy(&data_1328210, &data_12efb8c, 0x1f40)
int32_t i = 0
i_2 = 0
void* result

do
    char* edi_1 = *((i << 2) + &data_12f3a0c)
    result = (i << 2) + &data_1390760
    *result = 0
    void* ebx_1 = (i << 2) + &data_1353040
    *ebx_1 = 0
    char* var_838_1
    char* var_834_1
    char (* eax_5)[0x400]
    
    if (i s>= 0 && i s< data_63ece0)
        *ebx_1 = 0
        
        if (edi_1 != 0 && *edi_1 != 0)
            char* eax_2 = edi_1
            int32_t esi_1 = 0
            
            do
                i.b = *eax_2
                
                if (i.b u< 0x80)
                    esi_1 += 1
                    eax_2 = &eax_2[1]
                else if (i.b u< 0xa0)
                    if (i.b u>= 0xfe)
                        esi_1 += 1
                        eax_2 = &eax_2[1]
                    else
                        esi_1 += 2
                        eax_2 = &eax_2[2]
                else if (i.b u<= 0xdf || i.b u>= 0xfe)
                    esi_1 += 1
                    eax_2 = &eax_2[1]
                else
                    esi_1 += 2
                    eax_2 = &eax_2[2]
            while (*eax_2 != 0)
            
            int32_t i_3 = i_2
            result = sub_4d6960(i_3, ebx_1, (i_3 << 2) + &data_1390760, esi_1 + 1, "AVG_M")
            sub_4d1c30(result, edi_1, *ebx_1, esi_1 + 1)
            
            if (data_702fc0 == 0)
                i = i_2
            else
                enum MESSAGEBOX_STYLE uType = data_63ece0
                
                if (uType s<= MB_OK)
                    i = i_2
                else
                    int32_t edi_2 = 0
                    int32_t esi_3 = 0
                    enum MESSAGEBOX_STYLE j
                    
                    do
                        if (*(esi_3 + &data_1390760) == 0)
                            edi_2 += 1
                        else
                            char* ecx_2 = *(esi_3 + &data_1353040)
                            int32_t edx_3 = 0
                            
                            if (ecx_2 != 0)
                                result.b = *ecx_2
                                
                                while (result.b != 0)
                                    if (result.b u< 0x80)
                                        edx_3 += 1
                                        ecx_2 = &ecx_2[1]
                                    else if (result.b u< 0xa0)
                                        if (result.b u>= 0xfe)
                                            edx_3 += 1
                                            ecx_2 = &ecx_2[1]
                                        else
                                            edx_3 += 2
                                            ecx_2 = &ecx_2[2]
                                    else if (result.b u<= 0xdf || result.b u>= 0xfe)
                                        edx_3 += 1
                                        ecx_2 = &ecx_2[1]
                                    else
                                        edx_3 += 2
                                        ecx_2 = &ecx_2[2]
                                    
                                    result.b = *ecx_2
                                
                                edi_2 += edx_3 + 1
                        
                        esi_3 += 4
                        j = uType
                        uType -= 1
                    while (j != MB_OKCANCEL)
                    
                    if (edi_2 s< 0x2710)
                        i = i_2
                    else
                        int32_t esi_4 = data_1af173c
                        
                        if (esi_4 s>= 8)
                            i = i_2
                            data_1af173c += 1
                        else
                            int32_t var_824_1 = 0x2710
                            char text[0x400]
                            sub_4c84d0(&text, 0x61b9e4)
                            
                            if (esi_4 s< 4)
                                MessageBoxA(data_7027bc, &text, 0x61ba34, uType)
                            
                            int32_t var_824_3 = 0x2710
                            sub_4c84d0(&data_7027c0, &data_61bad4)
                            int32_t var_824_4 = edi_2
                            result = sub_4c84d0(&text, &data_61bb04)
                            
                            if (data_702fc0 != 0)
                                sub_55ef70(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                                sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                                eax_5 = &text
                                var_834_1 = &text
                                var_838_1 = &data_7027c0
                                goto label_4292df
                            
                            i = i_2
                            data_1af173c += 1
    else if (data_702fc0 != 0)
        int32_t esi_5 = data_1af173c
        
        if (esi_5 s>= 8)
            data_1af173c += 1
        else
            int32_t i_1 = i
            char text_1[0x404]
            result = sub_4c84d0(&text_1, "M[%$d] ")
            
            if (esi_5 s< 4)
                result = MessageBoxA(data_7027bc, &text_1, 0x61b914, MB_OK)
            
            if (data_702fc0 == 0)
                i = i_2
                data_1af173c += 1
            else
                sub_55ef70(&text_1, data_72d6ac, data_719b6c, &data_61b950, &text_1)
                sub_55f1e0(&text_1, data_72d6ac, data_719b6c, &data_61b950, &text_1)
                eax_5 = &text_1
                var_834_1 = &text_1
                var_838_1 = &data_61b950
            label_4292df:
                sub_55f390(eax_5, data_72d6ac, data_719b6c, var_838_1, var_834_1)
                result = sub_4a1e40(3)
                i = i_2
                data_1af173c += 1
    i += 1
    i_2 = i
while (i s< 0x7d0)

sub_5f02dd(eax_1 ^ &i_2)
return result
