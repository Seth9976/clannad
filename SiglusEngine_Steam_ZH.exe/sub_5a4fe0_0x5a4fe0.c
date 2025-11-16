// 函数: sub_5a4fe0
// 地址: 0x5a4fe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4

if (arg3 != arg2)
    int32_t* ecx = arg3
    
    do
        *result = *ecx
        int32_t edx_1 = ecx[1]
        ecx = &ecx[2]
        result[1] = edx_1
        result = &result[2]
    while (ecx != arg2)

return result
