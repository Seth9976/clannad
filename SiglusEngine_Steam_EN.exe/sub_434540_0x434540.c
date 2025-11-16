// 函数: sub_434540
// 地址: 0x434540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg4

do
    arg1 = *esi
    esi = &esi[1]
while (arg1 != 0)

void* esi_1 = esi - &esi[1]
int32_t result

if (esi_1 s> 0)
    result = sub_4d0fe0(arg1, arg4, arg3, esi_1)
    
    if (result == 0)
        goto label_434572
else
    result = 0
label_434572:
    
    if (arg2 != 0)
        *arg2 = esi_1 + arg3

return result
