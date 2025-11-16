// 函数: sub_4be780
// 地址: 0x4be780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg6
int32_t* ebx = arg3
int32_t* esi = arg5
int32_t edi = arg4

if (ebx s> esi)
    ebx = esi
    esi = arg3

if (edi s> eax)
    edi = eax
    eax = arg4

data_208c48c = esi
data_208c490 = eax
data_208046c = ebx
data_208c488 = edi
data_208c498 = eax - edi + 1
data_208c494 = esi - ebx + 1
sub_4de6e0(arg2)
int32_t* result = data_1cd450c

if (result != 0)
    result = (*(*result + 0x2c))(result, &arg3)
    
    if (result s>= 0)
        result = arg3
        
        if (result != 1 && result != 0xa)
            data_139270c = 0x1869f
            data_1bfffc0 = 2
            data_1392708 = 1

return result
