// 函数: sub_466873
// 地址: 0x466873
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
char* result = nullptr
int32_t i = 0
int32_t ebx
int32_t var_10 = ebx

do
    uint32_t edx_2 = zx.d(*(arg2 + i + 0x10c))
    i += 1
    
    if (edx_2 s< 0x29 || edx_2 s> 0x7a || (edx_2 s> 0x5a && edx_2 s< 0x61))
        result[arg1] = 0x5b
        ebx.b = *((edx_2 s>> 4 & 0xf) + 0xac4098)
        result[1 + arg1] = ebx.b
        void* edx_3
        edx_3.b = *((edx_2 & 0xf) + 0xac4098)
        result[2 + arg1] = edx_3.b
        result = &result[3]
        result[arg1] = 0x5d
    else
        result[arg1] = edx_2.b
    
    result = &result[1]
while (i s< 4)

if (arg3 != 0)
    result[arg1] = 0x3a
    result[1 + arg1] = 0x20
    result = &result[arg1 + 2]
    __builtin_memcpy(result, arg3, 0x40)
    result[0x3f] = 0
else
    result[arg1] = 0

return result
