// 函数: sub_6e6120
// 地址: 0x6e6120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0xc9ec)
int32_t eax_1 = (&data_adc13c)[*(arg1 + 0x30)]
int32_t eax_2 = *(arg1 + 0xc9f0)

if (eax_2 s< 1)
    edx = sub_6ec810(arg1 + 0xc9e4, 1)
    eax_2 = *(arg1 + 0xc9f0)

int16_t var_c = 0
*(arg1 + 0xc9ec) = edx * 2
int16_t var_34 = 0
*(arg1 + 0xc9f0) = eax_2 - 1
int32_t eax_4 = 0xadbfe8
int32_t edx_1 = *(arg1 + 0xf0)

if ((edx & 0x80000000) == 0)
    eax_4 = 0xadbee0

int32_t var_30 = edx_1
void* ecx_3 = *(arg1 + 0x30)
void* edi = nullptr
void* var_44 = nullptr
uint32_t eax_7 = zx.d(*(ecx_3 + 0xadc14c))
int32_t eax_8 = *(arg1 + 0xd0)
int32_t eax_9 = *(arg1 + 0xd8)
int32_t eax_10 = *(arg1 + 0xec)
int32_t result = *(arg1 + 0xfc)
int32_t result_1 = result

if (result != 0)
    int32_t result_3 = result_1
    int32_t esi_1 = 0
    result = 0
    int32_t var_8_1 = 0
    int32_t result_2 = 0
    
    do
        int32_t edi_1 = sx.d(*(edi + edx_1))
        
        if (edi_1 != 0xffffffff)
            void* edx_2 = nullptr
            int32_t ebx_1 = 0
            int32_t var_94[0xd]
            int32_t ecx_8
            
            do
                uint32_t esi_2 = zx.d(*(edx_2 + ecx_3 * 0xc + &data_adc2e0))
                ecx_8 = eax_8
                
                if ((*(ecx_8 +
                        (*(eax_10 + (((esi_2 & 3) + (((esi_2 s>> 2) + var_8_1) << 2)) << 2)) << 2)) & 1)
                        != 0)
                    var_94[ebx_1] = esi_2
                    ebx_1 += 1
                
                edx_2 += 1
            while (edx_2 s< eax_7)
            
            int32_t edi_3 = edi_1
            int32_t var_10_1 = ebx_1
            
            if (ebx_1 s<= 0)
                esi_1 = var_8_1
            else
                int16_t var_24
                
                if (edi_3 - 2 u> 5)
                    esi_1 = var_8_1
                    var_24 = 0
                else
                    switch (edi_3)
                        case 2
                            var_34 = var_c
                            char ebx_4 = sub_6ec760(arg1 + 0xc9e4, eax_4) - 0x20
                            esi_1 = var_8_1
                            ebx_1 = var_10_1
                            int16_t eax_47 =
                                ((sub_6ec760(arg1 + 0xc9e4, eax_4) - 0x20) << 8).w | zx.w(ebx_4)
                            var_24 = eax_47
                            var_c = eax_47
                        case 3
                            esi_1 = var_8_1
                            var_24 = var_c
                        case 4
                            esi_1 = var_8_1
                            int16_t eax_52 = var_34
                            var_24 = eax_52
                            var_34 = var_c
                            var_c = eax_52
                        case 5
                            esi_1 = var_8_1
                            var_24 = 0
                        case 6
                            char ebx_5 = sub_6ec760(arg1 + 0xc9e4, eax_4) - 0x20
                            esi_1 = var_8_1
                            ebx_1 = var_10_1
                            var_24 =
                                ((sub_6ec760(arg1 + 0xc9e4, eax_4) - 0x20) << 8).w | zx.w(ebx_5)
                        case 7
                            int32_t edi_4 = 0
                            var_94[ebx_1] = 0xffffffff
                            int16_t var_50[0x4]
                            
                            for (int32_t i = 0; i s< 4; i += 1)
                                int16_t eax_27
                                
                                if (var_94[edi_4] != i)
                                    eax_27 = 0
                                else
                                    int32_t edi_6 = *(eax_10 + ((result_2 + i) << 2))
                                    *(ecx_8 + (edi_6 << 2)) ^=
                                        (edi_1 << 8 ^ *(ecx_8 + (edi_6 << 2))) & 0x700
                                    char ebx_2 = sub_6ec760(arg1 + 0xc9e4, eax_4) - 0x20
                                    eax_27 = ((sub_6ec760(arg1 + 0xc9e4, eax_4) - 0x20) << 8).w
                                        | zx.w(ebx_2)
                                    *(eax_9 + (edi_6 << 1)) = eax_27
                                    edi_4 += 1
                                    ecx_8 = eax_8
                                
                                var_50[i] = eax_27
                            
                            if (edi_4 s> 0)
                                var_34 = var_c
                                int32_t __saved_ebx
                                var_c = var_50[(&__saved_ebx)[edi_4]]
                            
                            ebx_1 = var_10_1
                            
                            if (edi_4 s>= ebx_1)
                                esi_1 = var_8_1
                            else
                                int16_t var_60[0x4]
                                eax_1(&var_60, &var_50)
                                esi_1 = var_8_1
                                
                                do
                                    int32_t eax_34 = var_94[edi_4]
                                    int32_t edx_7 = eax_34 & 3
                                    edi_4 += 1
                                    int32_t ecx_15 =
                                        *(eax_10 + ((edx_7 + (((eax_34 s>> 2) + esi_1) << 2)) << 2))
                                    *(eax_8 + (ecx_15 << 2)) =
                                        (*(eax_8 + (ecx_15 << 2)) & 0xfffff8ff) | (edi_1 & 7) << 8
                                    int32_t eax_41
                                    eax_41.w = var_60[edx_7]
                                    ebx_1 = var_10_1
                                    *(eax_9 + (ecx_15 << 1)) = eax_41.w
                                while (edi_4 s< ebx_1)
                            
                            edi_3 = edi_1
                
                if (edi_3 != 7)
                    int32_t edx_13 = 0
                    
                    if (ebx_1 s> 0)
                        do
                            int32_t ecx_25 = var_94[edx_13]
                            edx_13 += 1
                            int32_t ecx_28 =
                                *(eax_10 + (((ecx_25 & 3) + (((ecx_25 s>> 2) + esi_1) << 2)) << 2))
                            *(eax_8 + (ecx_28 << 2)) =
                                (*(eax_8 + (ecx_28 << 2)) & 0xfffff8ff) | (edi_3 & 7) << 8
                            *(eax_9 + (ecx_28 << 1)) = var_24
                        while (edx_13 s< var_10_1)
            
            edx_1 = var_30
            result_3 = result_1
            result = result_2
        
        result += 0xc
        edi = var_44 + 1
        result_2 = result
        esi_1 += 3
        var_44 = edi
        var_8_1 = esi_1
    while (edi u< result_3)

return result
