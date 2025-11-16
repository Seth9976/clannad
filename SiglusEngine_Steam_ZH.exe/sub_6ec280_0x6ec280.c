// 函数: sub_6ec280
// 地址: 0x6ec280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3
int32_t var_1c = arg2
int32_t ecx = 7
int32_t var_20 = esi
int32_t edi = 2
int32_t result_2 = 1

if (arg4 s> 0)
    ecx = 2

int32_t eax_1 = arg4 + 1
int32_t ecx_1 = 1
int32_t result
int32_t result_3

do
    int32_t result_1 = result
    
    if (ecx_1 != 0)
        result_1 = result_2
    
    int32_t var_28_1 = edi
    result = result_1
    result_3 = result_2 + 1
    eax_1 += 1
    result_2 = result_3
    int32_t ebx_1 = 0
    int32_t var_10_1 = eax_1
    edi = 0
    int32_t var_18_1 = 0
    arg4 = 0
    int32_t var_14_1 = 0
    
    if (arg2 s> 0)
        do
            uint32_t ecx_3 = zx.d(*(esi + (ebx_1 << 1) + 1))
            int32_t edx = esi + (ebx_1 << 1)
            int32_t var_24_1 = edx
            
            if (ecx_3 s< eax_1)
                ebx_1 += 1
            else if (ecx_3 != eax_1)
                int32_t i = 0
                int32_t edi_1 = 0
                
                do
                    int32_t ecx_5 = zx.d(*(edx + (edi_1 << 1) + 1)) - var_10_1
                    
                    if (ecx_5 s>= 0x20)
                        i += 1
                        int32_t eax_4 = sub_6ec230(edx + (edi_1 << 1), var_10_1 + 0x1f)
                        edx = var_24_1
                        edi_1 += eax_4
                    else
                        i += 0x80000000 u>> ecx_5.b
                        edi_1 += 1
                while (i u< 0x80000000)
                
                eax_1 = var_10_1
                ebx_1 = arg4 + edi_1
                edi = var_14_1
                esi = var_20
            else
                var_18_1 = 1
                ebx_1 += 1
            
            edi += 1
            arg4 = ebx_1
            var_14_1 = edi
        while (ebx_1 s< var_1c)
        
        result_3 = result_2
    
    if (edi s<= var_28_1)
        break
    
    ecx_1 = var_18_1
    arg2 = var_1c
    esi = var_20
while (edi * ecx s>= 1 << result_3.b)
return result
