// 函数: sub_625b30
// 地址: 0x625b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* ebx = arg5
int32_t* result = arg6
int32_t* edi = arg2
int32_t var_8_1 = arg3
int32_t edx = arg4

if (arg3 == edi)
label_625b7c:
    
    if (edx != ebx)
        do
            int32_t eax_3 = *(ebx - 8)
            ebx -= 8
            result -= 8
            *result = eax_3
            result[1] = *(ebx + 4)
        while (ebx != edx)
else if (edx != ebx)
    while (true)
        edi -= 8
        ebx -= 8
        result -= 8
        
        if (arg7(ebx, edi) == 0)
            edi = &edi[2]
            edx = arg4
            *result = *ebx
            result[1] = *(ebx + 4)
            
            if (edx == ebx)
                arg3 = var_8_1
                break
        else
            ebx += 8
            arg3 = var_8_1
            *result = *edi
            result[1] = edi[1]
            
            if (arg3 == edi)
                edx = arg4
                break
    
    goto label_625b7c

if (arg3 != edi)
    do
        int32_t eax_5 = edi[-2]
        edi -= 8
        result -= 8
        *result = eax_5
        result[1] = edi[1]
    while (edi != arg3)

return result
