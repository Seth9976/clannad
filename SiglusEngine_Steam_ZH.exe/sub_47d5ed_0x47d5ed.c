// 函数: sub_47d5ed
// 地址: 0x47d5ed
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1

if (*(arg3 + 4) != 0xd)
    return 0

int32_t edi_1 = *(arg3 + 0x18) * *(arg3 + 0x14)
int32_t* eax_4 = sub_745f3f(edi_1 << 2)
int32_t result

if (eax_4 != 0)
    sub_46cc96(eax_4, edi_1)
    result = 0
    int32_t result_1 = sub_47bd3b(arg3, eax_4, 0)
    result = result_1
    
    if (result_1 s>= 0)
        int32_t result_2 =
            sub_46ea58(arg1, arg3, (edi_1 & 0xfffff) | 0x10000000, eax_4, eax_4, nullptr, 0, arg2.b)
        result = result_2
        
        if (result_2 s>= 0)
            int32_t var_8_1 = 0
            
            if (edi_1 u> 0)
                do
                    int32_t ecx_4 = eax_4[var_8_1]
                    void* eax_9 = arg1[2]
                    void* const ecx_5
                    
                    if (ecx_4 u>= *(eax_9 + 8))
                        ecx_5 = nullptr
                    else
                        ecx_5 = *(*(eax_9 + 0x14) + (ecx_4 << 2))
                    
                    if (ecx_5 != 0)
                        *(ecx_5 + 4) = *(eax_9 + 0x84)
                    
                    var_8_1 += 1
                while (var_8_1 u< edi_1)
            
            result =
                sub_4716f6(arg1, *(arg3 + 0x10), eax_4, *(arg1[2] + 0x84), 1, 1, nullptr, nullptr)
else
    result = 0x8007000e

j__free(eax_4)

if (arg1[0x13] == 0)
    return result

return 0x80004005
