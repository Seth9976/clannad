// 函数: sub_67c000
// 地址: 0x67c000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3

if (edi == arg2)
    return arg4

int32_t* esi = arg4

do
    if (esi != 0)
        sub_748840(esi, edi, 0x122c)
    
    edi = &edi[0x48b]
    esi = &esi[0x48b]
while (edi != arg2)

return esi
