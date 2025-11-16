// 函数: sub_660950
// 地址: 0x660950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s< 0 || *(data_bac510 + 0x10b8c) s<= arg1)
    void* result
    result.b = 0
    return result

void* eax = data_bac498

if (*(eax + 0x11) != 0 && *(eax + 0x10) != 0)
    void* ecx = data_bac504
    
    if (*(ecx + 0x98) != *(ecx + 0x9c))
        return 1

return 0
