// 函数: sub_614520
// 地址: 0x614520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t* result = arg4
void* edi = arg2

if (arg3 != edi)
    void* ebx_2 = edi - result
    
    do
        int32_t eax_1 = *(edi - 0x10)
        result -= 0x10
        edi -= 0x10
        *result = eax_1
        sub_6143d0(&result[1], ebx_2 + 4 + result)
    while (edi != arg3)

return result
