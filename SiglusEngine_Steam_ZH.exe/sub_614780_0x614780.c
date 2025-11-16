// 函数: sub_614780
// 地址: 0x614780
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t* result = arg4
int32_t* edi = arg3

if (edi != arg2)
    void* ebx_2 = edi - result
    
    do
        *result = *edi
        sub_6143d0(&result[1], ebx_2 + 4 + result)
        edi = &edi[4]
        result = &result[4]
    while (edi != arg2)

return result
