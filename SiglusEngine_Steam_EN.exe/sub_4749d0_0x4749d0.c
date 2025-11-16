// 函数: sub_4749d0
// 地址: 0x4749d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = data_1cd6408
int32_t result = *(ebx + 0x27c)

if (result != 0)
    enum MESSAGEBOX_RESULT ebx_1 = *(ebx + 0x274)
    
    if (ebx_1 s> 0)
        data_1cd640c = result
        data_1cd6418 = 0
        
        if (ebx_1 s> 0)
            enum MESSAGEBOX_RESULT edi_1 = 0
            
            do
                sub_477840()
                int32_t* esi_1 = data_1cd640c
                int32_t ecx_1 = esi_1[0x64]
                enum MESSAGEBOX_RESULT eax = ecx_1 - 1
                bool cond:1_1
                
                if (eax u> IDCLOSE)
                    esi_1[0x2e] = 0
                else
                    switch (eax)
                        case 0, IDCLOSE
                            int32_t edx_1 = *&esi_1[1]
                            
                            if (edx_1 != 0xffffffff)
                                eax = sub_4742d0(&esi_1[0xf3], edx_1, ecx_1, edx_1, *&esi_1[0x82], 
                                    &esi_1[0xf3], &esi_1[0xb4], &esi_1[0x1b])
                            else
                                *esi_1
                                eax = sub_4744c0(&esi_1[0xf3], &esi_1[0xb4], &esi_1[0x1b])
                            
                            esi_1 = data_1cd640c
                            
                            if (*&esi_1[0x87] != 0)
                                eax = sub_473e90(&esi_1[0x1b])
                        case IDOK, IDRETRY, IDYES, IDNO
                            *&esi_1[0x2e] = 0
                        case IDCANCEL
                            eax = sub_473470()
                            esi_1 = data_1cd640c
                            
                            if (*&esi_1[0x87] != 0)
                                eax = sub_473e90(&esi_1[0x1b])
                            
                            if (*&esi_1[0x27] == 0 && *(esi_1 + 0x9d) == 0 && *(esi_1 + 0xa1) == 0
                                    && *&esi_1[0x29] == 0 && *&esi_1[0x2a] == 0
                                    && *&esi_1[0x2b] == 0)
                                cond:1_1 = *&esi_1[0x2c] != 0
                                goto label_474b42
                        case IDABORT
                            sub_467760(&esi_1[0x1b], &esi_1[6], &esi_1[0x88], &esi_1[0x1b])
                            eax = sub_473470()
                            esi_1 = data_1cd640c
                            cond:1_1 = *&esi_1[0xb] != 0
                        label_474b42:
                            
                            if (not(cond:1_1))
                                *&esi_1[0x2e] = 0
                        case IDIGNORE
                            sub_473470()
                            esi_1 = data_1cd640c
                            eax = sub_4a59e0(&esi_1[0x12], *&esi_1[0x91], *&esi_1[0x90], 
                                *&esi_1[0x92], *&esi_1[0x93], *&esi_1[0x94], &esi_1[0x12], 
                                &esi_1[0xe], 0x10)
                            cond:1_1 = eax != 0
                            goto label_474b42
                
                if (esi_1[0xf7] != 0)
                    int32_t edx_5 = data_1cd641c
                    int32_t ecx_6 = data_1cd6414
                    esi_1[0xf7] = 0
                    sub_476c40(eax, edx_5, ecx_6, edi_1, 0)
                
                result = sub_4740e0()
                data_1cd640c += 0x7d8
                edi_1 += 1
                data_1cd6418 += 1
            while (edi_1 s< ebx_1)
        
        data_1cd640c = 0
        data_1cd6418 = 0xffffffff
        return result

return sub_463970(result, data_1cd641c, data_1cd6414, 0)
