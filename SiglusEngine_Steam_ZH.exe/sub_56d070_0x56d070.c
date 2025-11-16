// 函数: sub_56d070
// 地址: 0x56d070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg4

if (arg3 != arg2)
    int128_t* ecx = arg3
    
    do
        *result = *ecx
        int32_t edx = ecx[1].d
        ecx += 0x14
        result[1].d = edx
        result += 0x14
    while (ecx != arg2)

return result
