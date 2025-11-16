// 函数: __updatetlocinfoEx_nolock
// 地址: 0x74e304
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0 || arg1 == 0)
    return nullptr

void* esi_1 = *arg1

if (esi_1 != arg2)
    *arg1 = arg2
    sub_74dff5(arg2)
    
    if (esi_1 != 0)
        sub_74e1e4(esi_1)
        
        if (*esi_1 == 0 && esi_1 != 0xb4cb30)
            sub_74e08a(esi_1)

return arg2
