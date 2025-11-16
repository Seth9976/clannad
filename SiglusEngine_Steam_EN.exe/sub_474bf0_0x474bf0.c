// 函数: sub_474bf0
// 地址: 0x474bf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1 * 0x7a0
void* edx = arg1 * 0x650
int32_t ebx = 0
data_1cd641c = arg1
void* edi = eax + &data_98bf04
data_1cd640c = 0
data_1cd6418 = 0xffffffff
data_1cd6408 = edi
void* esi = edx + &data_72d6b0
data_1cd63fc = &data_12b9268
data_1cd6404 = esi
data_1cd6400 = 0x1b15290
data_1cd63f4 = &(&data_8c4ca4)[arg1 * 0x22]
int32_t* ecx = data_7031bc
data_1cd6414 = 0
data_1cd63f8 = &(&data_703010)[arg1 * 8]

if (ecx s> 0)
    void* var_c_1 = edx + 0x72d74c
    void* var_8_1 = eax + 0x98bf38
    
    do
        bool cond:1_1 = *(edi + 8) == 0xffffffff
        data_1cd6410 = data_131310c
        
        if (not(cond:1_1))
            sub_4651f0()
            esi = data_1cd6404
            edi = data_1cd6408
            ecx = data_7031bc
        
        void* edx_1 = *(esi + 0xc)
        void* eax_10 = edx_1 - 1
        
        if (eax_10 u> 8)
            *(edi + 0x2cc) = 0
        else
            switch (eax_10)
                case nullptr, 8
                    int32_t ecx_1 = *(edi + 4)
                    
                    if (ecx_1 != 0xffffffff)
                        eax_10 = sub_4742d0(esi + 0x248, edx_1, edx_1, ecx_1, *(esi + 0x84), 
                            esi + 0x248, esi + 0x14c, edi + 0x280)
                    else
                        *edi
                        eax_10 = sub_4744c0(esi + 0x248, esi + 0x14c, edi + 0x280)
                    
                    esi = data_1cd6404
                    
                    if (*(esi + 0x98) != 0)
                        void* ecx_3 = data_1cd6408
                        int32_t eax_14
                        eax_14.b = data_13132a4 != 0
                        *(ecx_3 + 0x28c) = eax_14 + 0x64
                        *(ecx_3 + 0x2b2) = data_1313294.b
                        *(ecx_3 + 0x2b3) = data_1313298.b
                        *(ecx_3 + 0x2b4) = data_131329c.b
                        eax_10 = zx.d(data_13132a0.b)
                        *(ecx_3 + 0x2b5) = eax_10.b
                case 1
                    void* var_20_5 = edi + 0x280
                    int32_t* var_24_4 = ecx
                    eax_10 = sub_474680(edi + 0x280, *edi, ecx, esi + 0x248)
                    esi = data_1cd6404
                case 2
                    eax_10 = sub_473470()
                    esi = data_1cd6404
                    void* edx_3 = data_1cd6408
                    
                    if (*(esi + 0x98) != 0)
                        eax_10 = sub_473e90(edx_3 + 0x280)
                    
                    if (*(edx_3 + 0x2b0) == 0 && *(edx_3 + 0x2b1) == 0 && *(edx_3 + 0x2b5) == 0
                            && *(edx_3 + 0x2b8) == 0 && *(edx_3 + 0x2bc) == 0
                            && *(edx_3 + 0x2c0) == 0 && *(edx_3 + 0x2c4) == 0)
                        *(edx_3 + 0x2cc) = 0
                case 3
                    if (ebx s>= 0 && ebx s< ecx)
                        sub_467760(var_8_1 + 0x24c, var_8_1, var_c_1, var_8_1 + 0x24c)
                    
                    sub_473470()
                    eax_10 = data_1cd6408
                    
                    if (*(eax_10 + 0x48) != 0)
                        esi = data_1cd6404
                    else
                        esi = data_1cd6404
                        *(eax_10 + 0x2cc) = 0
                case 4
                    int32_t eax_21
                    int32_t edx_5
                    eax_21, edx_5 = sub_473470()
                    void* ecx_6 = data_1cd6408
                    
                    if (*(ecx_6 + 0x90) == 0)
                        edx_5 =
                            sub_4b8e80(eax_21, data_1cd6404 + 0xd4, ecx_6 + 0x88, data_1cd6410, 1)
                        ecx_6 = data_1cd6408
                    
                    eax_10 = sub_4ba510(ecx_6 + 0x280, edx_5, ecx_6 + 0x88, ecx_6 + 0x280)
                    
                    if (arg1 != 1)
                        esi = data_1cd6404
                    else
                        eax_10 = sub_4ba7a0(ebx)
                        esi = data_1cd6404
                case 5
                    sub_473470()
                    edi = data_1cd6408
                    esi = data_1cd6404
                    eax_10 = sub_4a59e0(edi + 0x64, *(esi + 0xc0), *(esi + 0xbc), *(esi + 0xc4), 
                        *(esi + 0xc8), *(esi + 0xcc), edi + 0x64, edi + 0x54, 0x10)
                    
                    if (eax_10 == 0)
                        *(edi + 0x2cc) = 0
                case 6
                    eax_10 = sub_4747f0(edi + 0x280, esi + 0x248, edi + 0x234, edi + 0x280)
                    esi = data_1cd6404
                case 7
                    sub_473470()
                    void* eax_19 = data_1cd6408
                    
                    if (*(eax_19 + 0x27c) == 0)
                        *(eax_19 + 0x2cc) = 0
                    
                    eax_10 = sub_4749d0()
                    esi = data_1cd6404
        
        if (*(esi + 0x258) != 0)
            *(esi + 0x258) = 0
            sub_463970(eax_10, arg1, ebx, 0)
        
        sub_473ed0()
        ebx += 1
        void* edi_1 = data_1cd6408
        esi = data_1cd6404 + 0xca0
        data_1cd63fc += 0x24
        edi = edi_1 + 0xf40
        data_1cd6400 += 1
        data_1cd6414 += 1
        var_8_1 += 0xf40
        var_c_1 += 0xca0
        ecx = data_7031bc
        data_1cd6404 = esi
        data_1cd6408 = edi
    while (ebx s< ecx)

return sub_46e540()
