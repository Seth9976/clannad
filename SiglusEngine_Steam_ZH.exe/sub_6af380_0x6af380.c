// 函数: sub_6af380
// 地址: 0x6af380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int16_t* result = *arg3

if (result == arg4 || *result - 0x30 u> 9)
    result.b = 0
    return result

int32_t edx = 0

do
    uint32_t edi_3 = zx.d(*result)
    
    if (edi_3.w - 0x30 u> 9)
        break
    
    result = &result[1]
    edx = edi_3 + ((edx * 5 - 0x18) << 1)
while (result != arg4)

if (arg2 != 0)
    *arg2 = edx

*arg3 = result
result.b = 1
return result
