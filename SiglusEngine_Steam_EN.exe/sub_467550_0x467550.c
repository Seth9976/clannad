// 函数: sub_467550
// 地址: 0x467550
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
char* edi = arg2
char* esi = arg3

if (esi s> edi)
    arg1 = esi
    esi = edi
    edi = arg1

if (esi s< 0 || edi s>= data_7031bc)
    return 

void* i_1 = edi - esi + 1
void* ebx_2 = (arg4 + (esi << 1)) * 0x650 + &data_72d6b0

if (i_1 s<= 0)
    return 

arg1 = arg7
int32_t ecx = arg6
int32_t edx = arg5
void* i

do
    if (*(ebx_2 + 0xc) == 8)
        sub_4792d0(arg1, arg4, esi, edx, ecx, arg1)
        arg1 = arg7
        ecx = arg6
        edx = arg5
    
    sub_466e60(arg1, edx, ebx_2, edx, ecx, arg1)
    arg1 = arg7
    ecx = arg6
    ebx_2 += 0xca0
    edx = arg5
    esi = &esi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
