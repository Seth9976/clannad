// 函数: sub_5976a0
// 地址: 0x5976a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
void* result = arg4
void* edi = arg3

if (edi != arg2)
    int32_t ebx_2 = edi - result
    
    do
        sub_5970d0(result, edi)
        *(result + 0xc) = *(ebx_2 + result + 0xc)
        int32_t eax_2 = *(edi + 0x10)
        edi += 0x14
        *(result + 0x10) = eax_2
        result += 0x14
    while (edi != arg2)

return result
