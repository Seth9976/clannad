// 函数: sub_4a4fa0
// 地址: 0x4a4fa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result_1 = arg4
sub_4d1ba0(arg1, arg2 * result_1, arg3, 0xff)
int32_t eax = arg6
int32_t ecx

if (arg2 s> eax)
    ecx = 0
    arg6 = eax
    arg4 = arg2 - eax
else
    arg6 = arg2
    ecx = eax - arg2
    arg4 = 0

int32_t result = arg7

if (result_1 s<= result)
    result = result_1

int32_t i = result
void* esi_2 = arg5
int32_t edi = arg3

do
    int32_t j = arg6
    
    do
        result.b = *(esi_2 + 3)
        *edi = result.b
        esi_2 += 4
        edi += 1
        j -= 1
    while (j != 0)
    
    esi_2 += ecx << 2
    edi += arg4
    i -= 1
while (i != 0)

return result
