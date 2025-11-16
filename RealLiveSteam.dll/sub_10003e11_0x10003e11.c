// 函数: sub_10003e11
// 地址: 0x10003e11
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

uint32_t* esi = arg2
int32_t ebx = 0
uint32_t result = (arg3 - esi + 3) u>> 2
int32_t edi_2 = not.d(sbb.d(arg1, arg1, arg3 u< esi)) & result

if (edi_2 u> 0)
    do
        result = *esi
        
        if (result != 0)
            result = result(arg1)
        
        esi = &esi[1]
        ebx += 1
    while (ebx u< edi_2)

return result
