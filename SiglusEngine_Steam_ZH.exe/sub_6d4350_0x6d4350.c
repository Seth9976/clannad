// 函数: sub_6d4350
// 地址: 0x6d4350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
char* result = arg2 - 1
int32_t edx = 0
int32_t var_8 = 1
int32_t var_c = 0
*result = 0

if (result u<= arg3)
    return result

uint32_t edi = arg5
int32_t ecx = 1

while (edi != 0 || ebx s< ecx)
    if (arg4 - 1 u> 4)
        edi = 0
    else
        switch (arg4)
            case 1
                goto label_6d43f6
            case 2
                var_8 = 2
            label_6d43f6:
                result -= 1
                uint32_t edx_5 = edi u/ 0xa
                void* eax_9
                eax_9.b = *("0123456789ABCDEF" - edx_5 * 0xa + edi)
                edi = edx_5
                edx = var_c
                *result = eax_9.b
            case 3
                goto label_6d441d
            case 4
                var_8 = 2
            label_6d441d:
                result -= 1
                int32_t eax_11 = edi & 0xf
                edi u>>= 4
                eax_11.b = (*"0123456789ABCDEF")[eax_11]
                *result = eax_11.b
            case 5
                var_8 = 5
                uint32_t ecx_1
                uint32_t edx_2
                
                if (edx == 0)
                    edx_2 = edi u/ 0xa
                    ecx_1 = edx_2 * 5
                
                if (edx != 0 || edi != ecx_1 * 2)
                    var_c = 1
                    result -= 1
                    edx_2 = edi u/ 0xa
                    void* eax_7
                    eax_7.b = *("0123456789ABCDEF" - edx_2 * 0xa + edi)
                    *result = eax_7.b
                
                edi = edx_2
                edx = var_c
    
    ebx += 1
    
    if (result u<= arg3)
        break
    
    ecx = var_8

return result
